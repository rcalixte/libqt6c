#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKSSLINFODIALOG_H
#define SRC_EXTRAS_KIO_QT6C_LIBKSSLINFODIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksslinfodialog.html)

/// k_sslinfodialog_new constructs a new KSslInfoDialog object.
///
/// @param parent QWidget*
///
KSslInfoDialog* k_sslinfodialog_new(void* parent);

/// [Upstream resources](https://api.kde.org/ksslinfodialog.html)

/// k_sslinfodialog_new2 constructs a new KSslInfoDialog object.
///
KSslInfoDialog* k_sslinfodialog_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSslInfoDialog*
///
const QMetaObject* k_sslinfodialog_meta_object(void* self);

/// @param self KSslInfoDialog*
/// @param param1 const char*
///
void* k_sslinfodialog_metacast(void* self, const char* param1);

/// @param self KSslInfoDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sslinfodialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSslInfoDialog*
/// @param callback int32_t func(KSslInfoDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_sslinfodialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSslInfoDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sslinfodialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_sslinfodialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksslinfodialog.html#setMainPartEncrypted)
///
/// @param self KSslInfoDialog*
/// @param mainPartEncrypted bool
///
void k_sslinfodialog_set_main_part_encrypted(void* self, bool mainPartEncrypted);

/// [Upstream resources](https://api.kde.org/ksslinfodialog.html#setAuxiliaryPartsEncrypted)
///
/// @param self KSslInfoDialog*
/// @param auxiliaryPartsEncrypted bool
///
void k_sslinfodialog_set_auxiliary_parts_encrypted(void* self, bool auxiliaryPartsEncrypted);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_sslinfodialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_sslinfodialog_tr3(const char* s, const char* c, int n);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_result(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KSslInfoDialog*
/// @param sizeGripEnabled bool
///
void k_sslinfodialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KSslInfoDialog*
/// @param modal bool
///
void k_sslinfodialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KSslInfoDialog*
/// @param r int
///
void k_sslinfodialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KSslInfoDialog*
/// @param result int
///
void k_sslinfodialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, int result)
///
void k_sslinfodialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self)
///
void k_sslinfodialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self)
///
void k_sslinfodialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KSslInfoDialog*
///
uintptr_t k_sslinfodialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KSslInfoDialog*
///
uintptr_t k_sslinfodialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KSslInfoDialog*
///
uintptr_t k_sslinfodialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KSslInfoDialog*
///
QStyle* k_sslinfodialog_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KSslInfoDialog*
/// @param style QStyle*
///
void k_sslinfodialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KSslInfoDialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_sslinfodialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KSslInfoDialog*
/// @param windowModality enum Qt__WindowModality
///
void k_sslinfodialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
///
bool k_sslinfodialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KSslInfoDialog*
/// @param enabled bool
///
void k_sslinfodialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KSslInfoDialog*
/// @param disabled bool
///
void k_sslinfodialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KSslInfoDialog*
/// @param windowModified bool
///
void k_sslinfodialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KSslInfoDialog*
///
QRect* k_sslinfodialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KSslInfoDialog*
///
const QRect* k_sslinfodialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KSslInfoDialog*
///
QRect* k_sslinfodialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KSslInfoDialog*
///
QPoint* k_sslinfodialog_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KSslInfoDialog*
///
QRect* k_sslinfodialog_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KSslInfoDialog*
///
QRect* k_sslinfodialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KSslInfoDialog*
///
QRegion* k_sslinfodialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSslInfoDialog*
/// @param minimumSize QSize*
///
void k_sslinfodialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSslInfoDialog*
/// @param minw int
/// @param minh int
///
void k_sslinfodialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSslInfoDialog*
/// @param maximumSize QSize*
///
void k_sslinfodialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSslInfoDialog*
/// @param maxw int
/// @param maxh int
///
void k_sslinfodialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KSslInfoDialog*
/// @param minw int
///
void k_sslinfodialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KSslInfoDialog*
/// @param minh int
///
void k_sslinfodialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KSslInfoDialog*
/// @param maxw int
///
void k_sslinfodialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KSslInfoDialog*
/// @param maxh int
///
void k_sslinfodialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSslInfoDialog*
/// @param sizeIncrement QSize*
///
void k_sslinfodialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSslInfoDialog*
/// @param w int
/// @param h int
///
void k_sslinfodialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSslInfoDialog*
/// @param baseSize QSize*
///
void k_sslinfodialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSslInfoDialog*
/// @param basew int
/// @param baseh int
///
void k_sslinfodialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSslInfoDialog*
/// @param fixedSize QSize*
///
void k_sslinfodialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSslInfoDialog*
/// @param w int
/// @param h int
///
void k_sslinfodialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KSslInfoDialog*
/// @param w int
///
void k_sslinfodialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KSslInfoDialog*
/// @param h int
///
void k_sslinfodialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KSslInfoDialog*
/// @param param1 QPointF*
///
QPointF* k_sslinfodialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KSslInfoDialog*
/// @param param1 QPoint*
///
QPoint* k_sslinfodialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KSslInfoDialog*
/// @param param1 QPointF*
///
QPointF* k_sslinfodialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KSslInfoDialog*
/// @param param1 QPoint*
///
QPoint* k_sslinfodialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KSslInfoDialog*
/// @param param1 QPointF*
///
QPointF* k_sslinfodialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KSslInfoDialog*
/// @param param1 QPoint*
///
QPoint* k_sslinfodialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KSslInfoDialog*
/// @param param1 QPointF*
///
QPointF* k_sslinfodialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KSslInfoDialog*
/// @param param1 QPoint*
///
QPoint* k_sslinfodialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_sslinfodialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_sslinfodialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_sslinfodialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_sslinfodialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KSslInfoDialog*
///
const QPalette* k_sslinfodialog_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KSslInfoDialog*
/// @param palette QPalette*
///
void k_sslinfodialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KSslInfoDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_sslinfodialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KSslInfoDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_sslinfodialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KSslInfoDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_sslinfodialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KSslInfoDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_sslinfodialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KSslInfoDialog*
///
const QFont* k_sslinfodialog_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KSslInfoDialog*
/// @param font QFont*
///
void k_sslinfodialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KSslInfoDialog*
///
QFontMetrics* k_sslinfodialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KSslInfoDialog*
///
QFontInfo* k_sslinfodialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KSslInfoDialog*
///
QCursor* k_sslinfodialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KSslInfoDialog*
/// @param cursor QCursor*
///
void k_sslinfodialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KSslInfoDialog*
/// @param enable bool
///
void k_sslinfodialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KSslInfoDialog*
/// @param enable bool
///
void k_sslinfodialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSslInfoDialog*
/// @param mask QBitmap*
///
void k_sslinfodialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSslInfoDialog*
/// @param mask QRegion*
///
void k_sslinfodialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KSslInfoDialog*
///
QRegion* k_sslinfodialog_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param target QPaintDevice*
///
void k_sslinfodialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param painter QPainter*
///
void k_sslinfodialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSslInfoDialog*
///
QPixmap* k_sslinfodialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KSslInfoDialog*
///
QGraphicsEffect* k_sslinfodialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KSslInfoDialog*
/// @param effect QGraphicsEffect*
///
void k_sslinfodialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSslInfoDialog*
/// @param type enum Qt__GestureType
///
void k_sslinfodialog_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KSslInfoDialog*
/// @param type enum Qt__GestureType
///
void k_sslinfodialog_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KSslInfoDialog*
/// @param windowTitle const char*
///
void k_sslinfodialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KSslInfoDialog*
/// @param styleSheet const char*
///
void k_sslinfodialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KSslInfoDialog*
/// @param icon QIcon*
///
void k_sslinfodialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KSslInfoDialog*
///
QIcon* k_sslinfodialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KSslInfoDialog*
/// @param windowIconText const char*
///
void k_sslinfodialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KSslInfoDialog*
/// @param windowRole const char*
///
void k_sslinfodialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KSslInfoDialog*
/// @param filePath const char*
///
void k_sslinfodialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KSslInfoDialog*
/// @param level double
///
void k_sslinfodialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KSslInfoDialog*
///
double k_sslinfodialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KSslInfoDialog*
/// @param toolTip const char*
///
void k_sslinfodialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KSslInfoDialog*
/// @param msec int
///
void k_sslinfodialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KSslInfoDialog*
/// @param statusTip const char*
///
void k_sslinfodialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KSslInfoDialog*
/// @param whatsThis const char*
///
void k_sslinfodialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KSslInfoDialog*
/// @param name const char*
///
void k_sslinfodialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KSslInfoDialog*
/// @param description const char*
///
void k_sslinfodialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KSslInfoDialog*
/// @param direction enum Qt__LayoutDirection
///
void k_sslinfodialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KSslInfoDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_sslinfodialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KSslInfoDialog*
/// @param locale QLocale*
///
void k_sslinfodialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KSslInfoDialog*
///
QLocale* k_sslinfodialog_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSslInfoDialog*
/// @param reason enum Qt__FocusReason
///
void k_sslinfodialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KSslInfoDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_sslinfodialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KSslInfoDialog*
/// @param policy enum Qt__FocusPolicy
///
void k_sslinfodialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_sslinfodialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KSslInfoDialog*
/// @param focusProxy QWidget*
///
void k_sslinfodialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KSslInfoDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_sslinfodialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KSslInfoDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_sslinfodialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSslInfoDialog*
/// @param param1 QCursor*
///
void k_sslinfodialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSslInfoDialog*
/// @param key QKeySequence*
///
int32_t k_sslinfodialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KSslInfoDialog*
/// @param id int
///
void k_sslinfodialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSslInfoDialog*
/// @param id int
///
void k_sslinfodialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSslInfoDialog*
/// @param id int
///
void k_sslinfodialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_sslinfodialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_sslinfodialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KSslInfoDialog*
/// @param enable bool
///
void k_sslinfodialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KSslInfoDialog*
///
QGraphicsProxyWidget* k_sslinfodialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSslInfoDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sslinfodialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSslInfoDialog*
/// @param param1 QRect*
///
void k_sslinfodialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSslInfoDialog*
/// @param param1 QRegion*
///
void k_sslinfodialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSslInfoDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sslinfodialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSslInfoDialog*
/// @param param1 QRect*
///
void k_sslinfodialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSslInfoDialog*
/// @param param1 QRegion*
///
void k_sslinfodialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KSslInfoDialog*
/// @param hidden bool
///
void k_sslinfodialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
///
void k_sslinfodialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSslInfoDialog*
/// @param x int
/// @param y int
///
void k_sslinfodialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSslInfoDialog*
/// @param param1 QPoint*
///
void k_sslinfodialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSslInfoDialog*
/// @param w int
/// @param h int
///
void k_sslinfodialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSslInfoDialog*
/// @param param1 QSize*
///
void k_sslinfodialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSslInfoDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_sslinfodialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSslInfoDialog*
/// @param geometry QRect*
///
void k_sslinfodialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
char* k_sslinfodialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KSslInfoDialog*
/// @param geometry const char*
///
bool k_sslinfodialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
///
bool k_sslinfodialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KSslInfoDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_sslinfodialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KSslInfoDialog*
/// @param state flag of enum Qt__WindowState
///
void k_sslinfodialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KSslInfoDialog*
/// @param state flag of enum Qt__WindowState
///
void k_sslinfodialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KSslInfoDialog*
///
QSizePolicy* k_sslinfodialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSslInfoDialog*
/// @param sizePolicy QSizePolicy*
///
void k_sslinfodialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSslInfoDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_sslinfodialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KSslInfoDialog*
///
QRegion* k_sslinfodialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSslInfoDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_sslinfodialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSslInfoDialog*
/// @param margins QMargins*
///
void k_sslinfodialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KSslInfoDialog*
///
QMargins* k_sslinfodialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KSslInfoDialog*
///
QRect* k_sslinfodialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KSslInfoDialog*
///
QLayout* k_sslinfodialog_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KSslInfoDialog*
/// @param layout QLayout*
///
void k_sslinfodialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSslInfoDialog*
/// @param parent QWidget*
///
void k_sslinfodialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSslInfoDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_sslinfodialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSslInfoDialog*
/// @param dx int
/// @param dy int
///
void k_sslinfodialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSslInfoDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_sslinfodialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KSslInfoDialog*
/// @param on bool
///
void k_sslinfodialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSslInfoDialog*
/// @param action QAction*
///
void k_sslinfodialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KSslInfoDialog*
/// @param actions libqt_list /* of QAction* */
///
void k_sslinfodialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KSslInfoDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void k_sslinfodialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KSslInfoDialog*
/// @param before QAction*
/// @param action QAction*
///
void k_sslinfodialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KSslInfoDialog*
/// @param action QAction*
///
void k_sslinfodialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KSslInfoDialog*
///
libqt_list /* of QAction* */ k_sslinfodialog_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSslInfoDialog*
/// @param text const char*
///
QAction* k_sslinfodialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSslInfoDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_sslinfodialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSslInfoDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_sslinfodialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSslInfoDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_sslinfodialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KSslInfoDialog*
///
QWidget* k_sslinfodialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KSslInfoDialog*
/// @param type flag of enum Qt__WindowType
///
void k_sslinfodialog_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KSslInfoDialog*
///
/// @return flag of enum Qt__WindowType
///
int64_t k_sslinfodialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSslInfoDialog*
/// @param param1 enum Qt__WindowType
///
void k_sslinfodialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KSslInfoDialog*
/// @param type flag of enum Qt__WindowType
///
void k_sslinfodialog_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KSslInfoDialog*
///
/// @return enum Qt__WindowType
///
int64_t k_sslinfodialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_sslinfodialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSslInfoDialog*
/// @param x int
/// @param y int
///
QWidget* k_sslinfodialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSslInfoDialog*
/// @param p QPoint*
///
QWidget* k_sslinfodialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KSslInfoDialog*
/// @param p QPointF*
///
QWidget* k_sslinfodialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSslInfoDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_sslinfodialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KSslInfoDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_sslinfodialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KSslInfoDialog*
/// @param child QWidget*
///
bool k_sslinfodialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KSslInfoDialog*
/// @param enabled bool
///
void k_sslinfodialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KSslInfoDialog*
///
QBackingStore* k_sslinfodialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KSslInfoDialog*
///
QWindow* k_sslinfodialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KSslInfoDialog*
///
QScreen* k_sslinfodialog_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KSslInfoDialog*
/// @param screen QScreen*
///
void k_sslinfodialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_sslinfodialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSslInfoDialog*
/// @param title const char*
///
void k_sslinfodialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, const char* title)
///
void k_sslinfodialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSslInfoDialog*
/// @param icon QIcon*
///
void k_sslinfodialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QIcon* icon)
///
void k_sslinfodialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSslInfoDialog*
/// @param iconText const char*
///
void k_sslinfodialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, const char* iconText)
///
void k_sslinfodialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSslInfoDialog*
/// @param pos QPoint*
///
void k_sslinfodialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QPoint* pos)
///
void k_sslinfodialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KSslInfoDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t k_sslinfodialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KSslInfoDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_sslinfodialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_sslinfodialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_sslinfodialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_sslinfodialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_sslinfodialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_sslinfodialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSslInfoDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_sslinfodialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSslInfoDialog*
/// @param rectangle QRect*
///
QPixmap* k_sslinfodialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSslInfoDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_sslinfodialog_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSslInfoDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_sslinfodialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSslInfoDialog*
/// @param id int
/// @param enable bool
///
void k_sslinfodialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSslInfoDialog*
/// @param id int
/// @param enable bool
///
void k_sslinfodialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSslInfoDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_sslinfodialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSslInfoDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_sslinfodialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_sslinfodialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_sslinfodialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char* k_sslinfodialog_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSslInfoDialog*
/// @param name char*
///
void k_sslinfodialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSslInfoDialog*
/// @param b bool
///
bool k_sslinfodialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSslInfoDialog*
///
QThread* k_sslinfodialog_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSslInfoDialog*
/// @param thread QThread*
///
bool k_sslinfodialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSslInfoDialog*
/// @param interval int
///
int32_t k_sslinfodialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSslInfoDialog*
/// @param id int
///
void k_sslinfodialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSslInfoDialog*
/// @param id enum Qt__TimerId
///
void k_sslinfodialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSslInfoDialog*
///
libqt_list /* of QObject* */ k_sslinfodialog_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSslInfoDialog*
/// @param filterObj QObject*
///
void k_sslinfodialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSslInfoDialog*
/// @param obj QObject*
///
void k_sslinfodialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_sslinfodialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSslInfoDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_sslinfodialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_sslinfodialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_sslinfodialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSslInfoDialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_sslinfodialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSslInfoDialog*
/// @param name const char*
///
QVariant* k_sslinfodialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KSslInfoDialog*
///
const char** k_sslinfodialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSslInfoDialog*
///
QBindingStorage* k_sslinfodialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSslInfoDialog*
///
const QBindingStorage* k_sslinfodialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self)
///
void k_sslinfodialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSslInfoDialog*
///
QObject* k_sslinfodialog_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSslInfoDialog*
/// @param classname const char*
///
bool k_sslinfodialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSslInfoDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_sslinfodialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSslInfoDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_sslinfodialog_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_sslinfodialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSslInfoDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_sslinfodialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSslInfoDialog*
/// @param param1 QObject*
///
void k_sslinfodialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QObject* param1)
///
void k_sslinfodialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KSslInfoDialog*
///
double k_sslinfodialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KSslInfoDialog*
///
double k_sslinfodialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_sslinfodialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_sslinfodialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param visible bool
///
void k_sslinfodialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param visible bool
///
void k_sslinfodialog_qbase_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, bool visible)
///
void k_sslinfodialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback QSize* func()
///
void k_sslinfodialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
QSize* k_sslinfodialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback QSize* func()
///
void k_sslinfodialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func()
///
void k_sslinfodialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback int32_t func()
///
void k_sslinfodialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 int
///
void k_sslinfodialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 int
///
void k_sslinfodialog_qbase_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, int param1)
///
void k_sslinfodialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_qbase_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func()
///
void k_sslinfodialog_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func()
///
void k_sslinfodialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QKeyEvent*
///
void k_sslinfodialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QKeyEvent*
///
void k_sslinfodialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QKeyEvent* param1)
///
void k_sslinfodialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QCloseEvent*
///
void k_sslinfodialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QCloseEvent*
///
void k_sslinfodialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QCloseEvent* param1)
///
void k_sslinfodialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QShowEvent*
///
void k_sslinfodialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QShowEvent*
///
void k_sslinfodialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QShowEvent* param1)
///
void k_sslinfodialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QResizeEvent*
///
void k_sslinfodialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QResizeEvent*
///
void k_sslinfodialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QResizeEvent* param1)
///
void k_sslinfodialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QContextMenuEvent*
///
void k_sslinfodialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QContextMenuEvent*
///
void k_sslinfodialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QContextMenuEvent* param1)
///
void k_sslinfodialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_sslinfodialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_sslinfodialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func(KSslInfoDialog* self, QObject* param1, QEvent* param2)
///
void k_sslinfodialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback int32_t func()
///
void k_sslinfodialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 int
///
int32_t k_sslinfodialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 int
///
int32_t k_sslinfodialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback int32_t func(KSslInfoDialog* self, int param1)
///
void k_sslinfodialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func()
///
void k_sslinfodialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
QPaintEngine* k_sslinfodialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
QPaintEngine* k_sslinfodialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback QPaintEngine* func()
///
void k_sslinfodialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEvent*
///
bool k_sslinfodialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEvent*
///
bool k_sslinfodialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func(KSslInfoDialog* self, QEvent* event)
///
void k_sslinfodialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QMouseEvent* event)
///
void k_sslinfodialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QMouseEvent* event)
///
void k_sslinfodialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QMouseEvent* event)
///
void k_sslinfodialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMouseEvent*
///
void k_sslinfodialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QMouseEvent* event)
///
void k_sslinfodialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QWheelEvent*
///
void k_sslinfodialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QWheelEvent*
///
void k_sslinfodialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QWheelEvent* event)
///
void k_sslinfodialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QKeyEvent*
///
void k_sslinfodialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QKeyEvent*
///
void k_sslinfodialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QKeyEvent* event)
///
void k_sslinfodialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QFocusEvent*
///
void k_sslinfodialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QFocusEvent*
///
void k_sslinfodialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QFocusEvent* event)
///
void k_sslinfodialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QFocusEvent*
///
void k_sslinfodialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QFocusEvent*
///
void k_sslinfodialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QFocusEvent* event)
///
void k_sslinfodialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEnterEvent*
///
void k_sslinfodialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEnterEvent*
///
void k_sslinfodialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QEnterEvent* event)
///
void k_sslinfodialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEvent*
///
void k_sslinfodialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEvent*
///
void k_sslinfodialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QEvent* event)
///
void k_sslinfodialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QPaintEvent*
///
void k_sslinfodialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QPaintEvent*
///
void k_sslinfodialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QPaintEvent* event)
///
void k_sslinfodialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMoveEvent*
///
void k_sslinfodialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QMoveEvent*
///
void k_sslinfodialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QMoveEvent* event)
///
void k_sslinfodialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QTabletEvent*
///
void k_sslinfodialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QTabletEvent*
///
void k_sslinfodialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QTabletEvent* event)
///
void k_sslinfodialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QActionEvent*
///
void k_sslinfodialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QActionEvent*
///
void k_sslinfodialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QActionEvent* event)
///
void k_sslinfodialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDragEnterEvent*
///
void k_sslinfodialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDragEnterEvent*
///
void k_sslinfodialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QDragEnterEvent* event)
///
void k_sslinfodialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDragMoveEvent*
///
void k_sslinfodialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDragMoveEvent*
///
void k_sslinfodialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QDragMoveEvent* event)
///
void k_sslinfodialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDragLeaveEvent*
///
void k_sslinfodialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDragLeaveEvent*
///
void k_sslinfodialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QDragLeaveEvent* event)
///
void k_sslinfodialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDropEvent*
///
void k_sslinfodialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QDropEvent*
///
void k_sslinfodialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QDropEvent* event)
///
void k_sslinfodialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QHideEvent*
///
void k_sslinfodialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QHideEvent*
///
void k_sslinfodialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QHideEvent* event)
///
void k_sslinfodialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_sslinfodialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_sslinfodialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func(KSslInfoDialog* self, const char* eventType, void* message, intptr_t* result)
///
void k_sslinfodialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QEvent*
///
void k_sslinfodialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QEvent*
///
void k_sslinfodialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QEvent* param1)
///
void k_sslinfodialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_sslinfodialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_sslinfodialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback int32_t func(KSslInfoDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_sslinfodialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param painter QPainter*
///
void k_sslinfodialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param painter QPainter*
///
void k_sslinfodialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QPainter* painter)
///
void k_sslinfodialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param offset QPoint*
///
QPaintDevice* k_sslinfodialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param offset QPoint*
///
QPaintDevice* k_sslinfodialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback QPaintDevice* func(KSslInfoDialog* self, QPoint* offset)
///
void k_sslinfodialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
QPainter* k_sslinfodialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
QPainter* k_sslinfodialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback QPainter* func()
///
void k_sslinfodialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QInputMethodEvent*
///
void k_sslinfodialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QInputMethodEvent*
///
void k_sslinfodialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QInputMethodEvent* param1)
///
void k_sslinfodialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_sslinfodialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_sslinfodialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback QVariant* func(KSslInfoDialog* self, enum Qt__InputMethodQuery param1)
///
void k_sslinfodialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param next bool
///
bool k_sslinfodialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param next bool
///
bool k_sslinfodialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func(KSslInfoDialog* self, bool next)
///
void k_sslinfodialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QTimerEvent*
///
void k_sslinfodialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QTimerEvent*
///
void k_sslinfodialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QTimerEvent* event)
///
void k_sslinfodialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QChildEvent*
///
void k_sslinfodialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QChildEvent*
///
void k_sslinfodialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QChildEvent* event)
///
void k_sslinfodialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEvent*
///
void k_sslinfodialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param event QEvent*
///
void k_sslinfodialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QEvent* event)
///
void k_sslinfodialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal QMetaMethod*
///
void k_sslinfodialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal QMetaMethod*
///
void k_sslinfodialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QMetaMethod* signal)
///
void k_sslinfodialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal QMetaMethod*
///
void k_sslinfodialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal QMetaMethod*
///
void k_sslinfodialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QMetaMethod* signal)
///
void k_sslinfodialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
///
void k_sslinfodialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param param1 QWidget*
///
void k_sslinfodialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, QWidget* param1)
///
void k_sslinfodialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func()
///
void k_sslinfodialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func()
///
void k_sslinfodialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback void func()
///
void k_sslinfodialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func()
///
void k_sslinfodialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
bool k_sslinfodialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func()
///
void k_sslinfodialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
QObject* k_sslinfodialog_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
QObject* k_sslinfodialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback QObject* func()
///
void k_sslinfodialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
///
int32_t k_sslinfodialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback int32_t func()
///
void k_sslinfodialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal const char*
///
int32_t k_sslinfodialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal const char*
///
int32_t k_sslinfodialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback int32_t func(KSslInfoDialog* self, const char* signal)
///
void k_sslinfodialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal QMetaMethod*
///
bool k_sslinfodialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param signal QMetaMethod*
///
bool k_sslinfodialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback bool func(KSslInfoDialog* self, QMetaMethod* signal)
///
void k_sslinfodialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_sslinfodialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_sslinfodialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSslInfoDialog*
/// @param callback double func(KSslInfoDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_sslinfodialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSslInfoDialog*
/// @param callback void func(KSslInfoDialog* self, const char* objectName)
///
void k_sslinfodialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ksslinfodialog.html#dtor.KSslInfoDialog)
///
/// Delete this object from C++ memory.
///
/// @param self KSslInfoDialog*
///
void k_sslinfodialog_delete(void* self);

#endif
