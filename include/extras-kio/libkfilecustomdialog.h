#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKFILECUSTOMDIALOG_H
#define SRC_EXTRAS_KIOQT6C_LIBKFILECUSTOMDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfilecustomdialog.html

/// k_filecustomdialog_new constructs a new KFileCustomDialog object.
///
/// @param parent QWidget*
KFileCustomDialog* k_filecustomdialog_new(void* parent);

/// k_filecustomdialog_new2 constructs a new KFileCustomDialog object.
///
KFileCustomDialog* k_filecustomdialog_new2();

/// k_filecustomdialog_new3 constructs a new KFileCustomDialog object.
///
/// @param startDir QUrl*
KFileCustomDialog* k_filecustomdialog_new3(void* startDir);

/// k_filecustomdialog_new4 constructs a new KFileCustomDialog object.
///
/// @param startDir QUrl*
/// @param parent QWidget*
KFileCustomDialog* k_filecustomdialog_new4(void* startDir, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFileCustomDialog*
const QMetaObject* k_filecustomdialog_meta_object(void* self);

/// @param self KFileCustomDialog*
/// @param param1 const char*
void* k_filecustomdialog_metacast(void* self, const char* param1);

/// @param self KFileCustomDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_filecustomdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFileCustomDialog*
/// @param callback int32_t func(KFileCustomDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_filecustomdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFileCustomDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_filecustomdialog_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_filecustomdialog_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#setUrl)
///
/// @param self KFileCustomDialog*
/// @param url QUrl*
void k_filecustomdialog_set_url(void* self, void* url);

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#setCustomWidget)
///
/// @param self KFileCustomDialog*
/// @param widget QWidget*
void k_filecustomdialog_set_custom_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#fileWidget)
///
/// @param self KFileCustomDialog*
KFileWidget* k_filecustomdialog_file_widget(void* self);

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#setOperationMode)
///
/// @param self KFileCustomDialog*
/// @param op enum KFileWidget__OperationMode
void k_filecustomdialog_set_operation_mode(void* self, int32_t op);

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#accept)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_accept(void* self);

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#accept)
///
/// Allows for overriding the related default method
///
/// @param self KFileCustomDialog*
/// @param callback void func()
void k_filecustomdialog_on_accept(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#accept)
///
/// Base class method implementation
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_qbase_accept(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_filecustomdialog_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_filecustomdialog_tr3(const char* s, const char* c, int n);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_result(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self KFileCustomDialog*
/// @param sizeGripEnabled bool
void k_filecustomdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self KFileCustomDialog*
/// @param modal bool
void k_filecustomdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self KFileCustomDialog*
/// @param r int
void k_filecustomdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KFileCustomDialog*
/// @param result int
void k_filecustomdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, int result)
void k_filecustomdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self)
void k_filecustomdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self)
void k_filecustomdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KFileCustomDialog*
uintptr_t k_filecustomdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KFileCustomDialog*
uintptr_t k_filecustomdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KFileCustomDialog*
uintptr_t k_filecustomdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KFileCustomDialog*
QStyle* k_filecustomdialog_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KFileCustomDialog*
/// @param style QStyle*
void k_filecustomdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KFileCustomDialog*
///
/// @return enum Qt__WindowModality
int32_t k_filecustomdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KFileCustomDialog*
/// @param windowModality enum Qt__WindowModality
void k_filecustomdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
bool k_filecustomdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KFileCustomDialog*
/// @param enabled bool
void k_filecustomdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KFileCustomDialog*
/// @param disabled bool
void k_filecustomdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KFileCustomDialog*
/// @param windowModified bool
void k_filecustomdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KFileCustomDialog*
QRect* k_filecustomdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KFileCustomDialog*
const QRect* k_filecustomdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KFileCustomDialog*
QRect* k_filecustomdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KFileCustomDialog*
QPoint* k_filecustomdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KFileCustomDialog*
QRect* k_filecustomdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KFileCustomDialog*
QRect* k_filecustomdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KFileCustomDialog*
QRegion* k_filecustomdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFileCustomDialog*
/// @param minimumSize QSize*
void k_filecustomdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KFileCustomDialog*
/// @param minw int
/// @param minh int
void k_filecustomdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFileCustomDialog*
/// @param maximumSize QSize*
void k_filecustomdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KFileCustomDialog*
/// @param maxw int
/// @param maxh int
void k_filecustomdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KFileCustomDialog*
/// @param minw int
void k_filecustomdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KFileCustomDialog*
/// @param minh int
void k_filecustomdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KFileCustomDialog*
/// @param maxw int
void k_filecustomdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KFileCustomDialog*
/// @param maxh int
void k_filecustomdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFileCustomDialog*
/// @param sizeIncrement QSize*
void k_filecustomdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KFileCustomDialog*
/// @param w int
/// @param h int
void k_filecustomdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFileCustomDialog*
/// @param baseSize QSize*
void k_filecustomdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KFileCustomDialog*
/// @param basew int
/// @param baseh int
void k_filecustomdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFileCustomDialog*
/// @param fixedSize QSize*
void k_filecustomdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KFileCustomDialog*
/// @param w int
/// @param h int
void k_filecustomdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KFileCustomDialog*
/// @param w int
void k_filecustomdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KFileCustomDialog*
/// @param h int
void k_filecustomdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KFileCustomDialog*
/// @param param1 QPointF*
QPointF* k_filecustomdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KFileCustomDialog*
/// @param param1 QPoint*
QPoint* k_filecustomdialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KFileCustomDialog*
/// @param param1 QPointF*
QPointF* k_filecustomdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KFileCustomDialog*
/// @param param1 QPoint*
QPoint* k_filecustomdialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KFileCustomDialog*
/// @param param1 QPointF*
QPointF* k_filecustomdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KFileCustomDialog*
/// @param param1 QPoint*
QPoint* k_filecustomdialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KFileCustomDialog*
/// @param param1 QPointF*
QPointF* k_filecustomdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KFileCustomDialog*
/// @param param1 QPoint*
QPoint* k_filecustomdialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_filecustomdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_filecustomdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_filecustomdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_filecustomdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KFileCustomDialog*
const QPalette* k_filecustomdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KFileCustomDialog*
/// @param palette QPalette*
void k_filecustomdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KFileCustomDialog*
/// @param backgroundRole enum QPalette__ColorRole
void k_filecustomdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KFileCustomDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_filecustomdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KFileCustomDialog*
/// @param foregroundRole enum QPalette__ColorRole
void k_filecustomdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KFileCustomDialog*
///
/// @return enum QPalette__ColorRole
int32_t k_filecustomdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KFileCustomDialog*
const QFont* k_filecustomdialog_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KFileCustomDialog*
/// @param font QFont*
void k_filecustomdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KFileCustomDialog*
QFontMetrics* k_filecustomdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KFileCustomDialog*
QFontInfo* k_filecustomdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KFileCustomDialog*
QCursor* k_filecustomdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KFileCustomDialog*
/// @param cursor QCursor*
void k_filecustomdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KFileCustomDialog*
/// @param enable bool
void k_filecustomdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KFileCustomDialog*
/// @param enable bool
void k_filecustomdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFileCustomDialog*
/// @param mask QBitmap*
void k_filecustomdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KFileCustomDialog*
/// @param mask QRegion*
void k_filecustomdialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KFileCustomDialog*
QRegion* k_filecustomdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param target QPaintDevice*
void k_filecustomdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param painter QPainter*
void k_filecustomdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFileCustomDialog*
QPixmap* k_filecustomdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KFileCustomDialog*
QGraphicsEffect* k_filecustomdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KFileCustomDialog*
/// @param effect QGraphicsEffect*
void k_filecustomdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFileCustomDialog*
/// @param typeVal enum Qt__GestureType
void k_filecustomdialog_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KFileCustomDialog*
/// @param typeVal enum Qt__GestureType
void k_filecustomdialog_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KFileCustomDialog*
/// @param windowTitle const char*
void k_filecustomdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KFileCustomDialog*
/// @param styleSheet const char*
void k_filecustomdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KFileCustomDialog*
/// @param icon QIcon*
void k_filecustomdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KFileCustomDialog*
QIcon* k_filecustomdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KFileCustomDialog*
/// @param windowIconText const char*
void k_filecustomdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KFileCustomDialog*
/// @param windowRole const char*
void k_filecustomdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KFileCustomDialog*
/// @param filePath const char*
void k_filecustomdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KFileCustomDialog*
/// @param level double
void k_filecustomdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KFileCustomDialog*
double k_filecustomdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KFileCustomDialog*
/// @param toolTip const char*
void k_filecustomdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KFileCustomDialog*
/// @param msec int
void k_filecustomdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KFileCustomDialog*
/// @param statusTip const char*
void k_filecustomdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KFileCustomDialog*
/// @param whatsThis const char*
void k_filecustomdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KFileCustomDialog*
/// @param name const char*
void k_filecustomdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KFileCustomDialog*
/// @param description const char*
void k_filecustomdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KFileCustomDialog*
/// @param direction enum Qt__LayoutDirection
void k_filecustomdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KFileCustomDialog*
///
/// @return enum Qt__LayoutDirection
int32_t k_filecustomdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KFileCustomDialog*
/// @param locale QLocale*
void k_filecustomdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KFileCustomDialog*
QLocale* k_filecustomdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KFileCustomDialog*
/// @param reason enum Qt__FocusReason
void k_filecustomdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KFileCustomDialog*
///
/// @return enum Qt__FocusPolicy
int32_t k_filecustomdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KFileCustomDialog*
/// @param policy enum Qt__FocusPolicy
void k_filecustomdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_filecustomdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KFileCustomDialog*
/// @param focusProxy QWidget*
void k_filecustomdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KFileCustomDialog*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_filecustomdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KFileCustomDialog*
/// @param policy enum Qt__ContextMenuPolicy
void k_filecustomdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KFileCustomDialog*
/// @param param1 QCursor*
void k_filecustomdialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFileCustomDialog*
/// @param key QKeySequence*
int32_t k_filecustomdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KFileCustomDialog*
/// @param id int
void k_filecustomdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFileCustomDialog*
/// @param id int
void k_filecustomdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFileCustomDialog*
/// @param id int
void k_filecustomdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_filecustomdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_filecustomdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KFileCustomDialog*
/// @param enable bool
void k_filecustomdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KFileCustomDialog*
QGraphicsProxyWidget* k_filecustomdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileCustomDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_filecustomdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileCustomDialog*
/// @param param1 QRect*
void k_filecustomdialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KFileCustomDialog*
/// @param param1 QRegion*
void k_filecustomdialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileCustomDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_filecustomdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileCustomDialog*
/// @param param1 QRect*
void k_filecustomdialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KFileCustomDialog*
/// @param param1 QRegion*
void k_filecustomdialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KFileCustomDialog*
/// @param hidden bool
void k_filecustomdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
void k_filecustomdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFileCustomDialog*
/// @param x int
/// @param y int
void k_filecustomdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KFileCustomDialog*
/// @param param1 QPoint*
void k_filecustomdialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFileCustomDialog*
/// @param w int
/// @param h int
void k_filecustomdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KFileCustomDialog*
/// @param param1 QSize*
void k_filecustomdialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFileCustomDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_filecustomdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KFileCustomDialog*
/// @param geometry QRect*
void k_filecustomdialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
char* k_filecustomdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KFileCustomDialog*
/// @param geometry const char*
bool k_filecustomdialog_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
bool k_filecustomdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KFileCustomDialog*
///
/// @return flag of enum Qt__WindowState
int32_t k_filecustomdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KFileCustomDialog*
/// @param state flag of enum Qt__WindowState
void k_filecustomdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KFileCustomDialog*
/// @param state flag of enum Qt__WindowState
void k_filecustomdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KFileCustomDialog*
QSizePolicy* k_filecustomdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFileCustomDialog*
/// @param sizePolicy QSizePolicy*
void k_filecustomdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KFileCustomDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_filecustomdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KFileCustomDialog*
QRegion* k_filecustomdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFileCustomDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_filecustomdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KFileCustomDialog*
/// @param margins QMargins*
void k_filecustomdialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KFileCustomDialog*
QMargins* k_filecustomdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KFileCustomDialog*
QRect* k_filecustomdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KFileCustomDialog*
QLayout* k_filecustomdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KFileCustomDialog*
/// @param layout QLayout*
void k_filecustomdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFileCustomDialog*
/// @param parent QWidget*
void k_filecustomdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KFileCustomDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_filecustomdialog_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFileCustomDialog*
/// @param dx int
/// @param dy int
void k_filecustomdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KFileCustomDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_filecustomdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KFileCustomDialog*
/// @param on bool
void k_filecustomdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileCustomDialog*
/// @param action QAction*
void k_filecustomdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KFileCustomDialog*
/// @param actions libqt_list /* of QAction* */
void k_filecustomdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KFileCustomDialog*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_filecustomdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KFileCustomDialog*
/// @param before QAction*
/// @param action QAction*
void k_filecustomdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KFileCustomDialog*
/// @param action QAction*
void k_filecustomdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KFileCustomDialog*
libqt_list /* of QAction* */ k_filecustomdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileCustomDialog*
/// @param text const char*
QAction* k_filecustomdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileCustomDialog*
/// @param icon QIcon*
/// @param text const char*
QAction* k_filecustomdialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileCustomDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_filecustomdialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KFileCustomDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_filecustomdialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KFileCustomDialog*
QWidget* k_filecustomdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KFileCustomDialog*
/// @param typeVal flag of enum Qt__WindowType
void k_filecustomdialog_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KFileCustomDialog*
///
/// @return flag of enum Qt__WindowType
int64_t k_filecustomdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFileCustomDialog*
/// @param param1 enum Qt__WindowType
void k_filecustomdialog_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KFileCustomDialog*
/// @param typeVal flag of enum Qt__WindowType
void k_filecustomdialog_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KFileCustomDialog*
///
/// @return enum Qt__WindowType
int64_t k_filecustomdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_filecustomdialog_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFileCustomDialog*
/// @param x int
/// @param y int
QWidget* k_filecustomdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFileCustomDialog*
/// @param p QPoint*
QWidget* k_filecustomdialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KFileCustomDialog*
/// @param p QPointF*
QWidget* k_filecustomdialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFileCustomDialog*
/// @param param1 enum Qt__WidgetAttribute
void k_filecustomdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KFileCustomDialog*
/// @param param1 enum Qt__WidgetAttribute
bool k_filecustomdialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KFileCustomDialog*
/// @param child QWidget*
bool k_filecustomdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KFileCustomDialog*
/// @param enabled bool
void k_filecustomdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KFileCustomDialog*
QBackingStore* k_filecustomdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KFileCustomDialog*
QWindow* k_filecustomdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KFileCustomDialog*
QScreen* k_filecustomdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KFileCustomDialog*
/// @param screen QScreen*
void k_filecustomdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_filecustomdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFileCustomDialog*
/// @param title const char*
void k_filecustomdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, const char* title)
void k_filecustomdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFileCustomDialog*
/// @param icon QIcon*
void k_filecustomdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QIcon* icon)
void k_filecustomdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFileCustomDialog*
/// @param iconText const char*
void k_filecustomdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, const char* iconText)
void k_filecustomdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFileCustomDialog*
/// @param pos QPoint*
void k_filecustomdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QPoint* pos)
void k_filecustomdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KFileCustomDialog*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_filecustomdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KFileCustomDialog*
/// @param hints flag of enum Qt__InputMethodHint
void k_filecustomdialog_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_filecustomdialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_filecustomdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_filecustomdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_filecustomdialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_filecustomdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KFileCustomDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_filecustomdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KFileCustomDialog*
/// @param rectangle QRect*
QPixmap* k_filecustomdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KFileCustomDialog*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_filecustomdialog_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KFileCustomDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_filecustomdialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KFileCustomDialog*
/// @param id int
/// @param enable bool
void k_filecustomdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KFileCustomDialog*
/// @param id int
/// @param enable bool
void k_filecustomdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KFileCustomDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_filecustomdialog_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KFileCustomDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_filecustomdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_filecustomdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_filecustomdialog_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char* k_filecustomdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFileCustomDialog*
/// @param name char*
void k_filecustomdialog_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFileCustomDialog*
/// @param b bool
bool k_filecustomdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFileCustomDialog*
QThread* k_filecustomdialog_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileCustomDialog*
/// @param thread QThread*
bool k_filecustomdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileCustomDialog*
/// @param interval int
int32_t k_filecustomdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileCustomDialog*
/// @param id int
void k_filecustomdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileCustomDialog*
/// @param id enum Qt__TimerId
void k_filecustomdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFileCustomDialog*
libqt_list /* of QObject* */ k_filecustomdialog_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFileCustomDialog*
/// @param filterObj QObject*
void k_filecustomdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFileCustomDialog*
/// @param obj QObject*
void k_filecustomdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_filecustomdialog_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileCustomDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_filecustomdialog_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_filecustomdialog_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_filecustomdialog_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFileCustomDialog*
/// @param name const char*
/// @param value QVariant*
bool k_filecustomdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFileCustomDialog*
/// @param name const char*
QVariant* k_filecustomdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileCustomDialog*
const char** k_filecustomdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileCustomDialog*
QBindingStorage* k_filecustomdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileCustomDialog*
const QBindingStorage* k_filecustomdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self)
void k_filecustomdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFileCustomDialog*
QObject* k_filecustomdialog_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFileCustomDialog*
/// @param classname const char*
bool k_filecustomdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileCustomDialog*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_filecustomdialog_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileCustomDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_filecustomdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_filecustomdialog_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileCustomDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_filecustomdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileCustomDialog*
/// @param param1 QObject*
void k_filecustomdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QObject* param1)
void k_filecustomdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KFileCustomDialog*
double k_filecustomdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KFileCustomDialog*
double k_filecustomdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_filecustomdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_filecustomdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param visible bool
void k_filecustomdialog_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param visible bool
void k_filecustomdialog_qbase_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, bool visible)
void k_filecustomdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_qbase_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback QSize* func()
void k_filecustomdialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
QSize* k_filecustomdialog_qbase_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback QSize* func()
void k_filecustomdialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_qbase_open(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func()
void k_filecustomdialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_qbase_exec(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback int32_t func()
void k_filecustomdialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 int
void k_filecustomdialog_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 int
void k_filecustomdialog_qbase_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, int param1)
void k_filecustomdialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_qbase_reject(void* self);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func()
void k_filecustomdialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QKeyEvent*
void k_filecustomdialog_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QKeyEvent*
void k_filecustomdialog_qbase_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QKeyEvent* param1)
void k_filecustomdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QCloseEvent*
void k_filecustomdialog_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QCloseEvent*
void k_filecustomdialog_qbase_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QCloseEvent* param1)
void k_filecustomdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QShowEvent*
void k_filecustomdialog_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QShowEvent*
void k_filecustomdialog_qbase_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QShowEvent* param1)
void k_filecustomdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QResizeEvent*
void k_filecustomdialog_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QResizeEvent*
void k_filecustomdialog_qbase_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QResizeEvent* param1)
void k_filecustomdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QContextMenuEvent*
void k_filecustomdialog_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QContextMenuEvent*
void k_filecustomdialog_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QContextMenuEvent* param1)
void k_filecustomdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_filecustomdialog_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_filecustomdialog_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func(KFileCustomDialog* self, QObject* param1, QEvent* param2)
void k_filecustomdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback int32_t func()
void k_filecustomdialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 int
int32_t k_filecustomdialog_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 int
int32_t k_filecustomdialog_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback int32_t func(KFileCustomDialog* self, int param1)
void k_filecustomdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func()
void k_filecustomdialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
QPaintEngine* k_filecustomdialog_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
QPaintEngine* k_filecustomdialog_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback QPaintEngine* func()
void k_filecustomdialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEvent*
bool k_filecustomdialog_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEvent*
bool k_filecustomdialog_qbase_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func(KFileCustomDialog* self, QEvent* event)
void k_filecustomdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QMouseEvent* event)
void k_filecustomdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QMouseEvent* event)
void k_filecustomdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QMouseEvent* event)
void k_filecustomdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMouseEvent*
void k_filecustomdialog_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QMouseEvent* event)
void k_filecustomdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QWheelEvent*
void k_filecustomdialog_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QWheelEvent*
void k_filecustomdialog_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QWheelEvent* event)
void k_filecustomdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QKeyEvent*
void k_filecustomdialog_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QKeyEvent*
void k_filecustomdialog_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QKeyEvent* event)
void k_filecustomdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QFocusEvent*
void k_filecustomdialog_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QFocusEvent*
void k_filecustomdialog_qbase_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QFocusEvent* event)
void k_filecustomdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QFocusEvent*
void k_filecustomdialog_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QFocusEvent*
void k_filecustomdialog_qbase_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QFocusEvent* event)
void k_filecustomdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEnterEvent*
void k_filecustomdialog_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEnterEvent*
void k_filecustomdialog_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QEnterEvent* event)
void k_filecustomdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEvent*
void k_filecustomdialog_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEvent*
void k_filecustomdialog_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QEvent* event)
void k_filecustomdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QPaintEvent*
void k_filecustomdialog_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QPaintEvent*
void k_filecustomdialog_qbase_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QPaintEvent* event)
void k_filecustomdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMoveEvent*
void k_filecustomdialog_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QMoveEvent*
void k_filecustomdialog_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QMoveEvent* event)
void k_filecustomdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QTabletEvent*
void k_filecustomdialog_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QTabletEvent*
void k_filecustomdialog_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QTabletEvent* event)
void k_filecustomdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QActionEvent*
void k_filecustomdialog_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QActionEvent*
void k_filecustomdialog_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QActionEvent* event)
void k_filecustomdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDragEnterEvent*
void k_filecustomdialog_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDragEnterEvent*
void k_filecustomdialog_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QDragEnterEvent* event)
void k_filecustomdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDragMoveEvent*
void k_filecustomdialog_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDragMoveEvent*
void k_filecustomdialog_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QDragMoveEvent* event)
void k_filecustomdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDragLeaveEvent*
void k_filecustomdialog_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDragLeaveEvent*
void k_filecustomdialog_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QDragLeaveEvent* event)
void k_filecustomdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDropEvent*
void k_filecustomdialog_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QDropEvent*
void k_filecustomdialog_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QDropEvent* event)
void k_filecustomdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QHideEvent*
void k_filecustomdialog_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QHideEvent*
void k_filecustomdialog_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QHideEvent* event)
void k_filecustomdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_filecustomdialog_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_filecustomdialog_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func(KFileCustomDialog* self, const char* eventType, void* message, intptr_t* result)
void k_filecustomdialog_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QEvent*
void k_filecustomdialog_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QEvent*
void k_filecustomdialog_qbase_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QEvent* param1)
void k_filecustomdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_filecustomdialog_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_filecustomdialog_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback int32_t func(KFileCustomDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_filecustomdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param painter QPainter*
void k_filecustomdialog_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param painter QPainter*
void k_filecustomdialog_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QPainter* painter)
void k_filecustomdialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param offset QPoint*
QPaintDevice* k_filecustomdialog_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param offset QPoint*
QPaintDevice* k_filecustomdialog_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback QPaintDevice* func(KFileCustomDialog* self, QPoint* offset)
void k_filecustomdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
QPainter* k_filecustomdialog_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
QPainter* k_filecustomdialog_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback QPainter* func()
void k_filecustomdialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QInputMethodEvent*
void k_filecustomdialog_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QInputMethodEvent*
void k_filecustomdialog_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QInputMethodEvent* param1)
void k_filecustomdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_filecustomdialog_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_filecustomdialog_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback QVariant* func(KFileCustomDialog* self, enum Qt__InputMethodQuery param1)
void k_filecustomdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param next bool
bool k_filecustomdialog_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param next bool
bool k_filecustomdialog_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func(KFileCustomDialog* self, bool next)
void k_filecustomdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QTimerEvent*
void k_filecustomdialog_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QTimerEvent*
void k_filecustomdialog_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QTimerEvent* event)
void k_filecustomdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QChildEvent*
void k_filecustomdialog_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QChildEvent*
void k_filecustomdialog_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QChildEvent* event)
void k_filecustomdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEvent*
void k_filecustomdialog_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param event QEvent*
void k_filecustomdialog_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QEvent* event)
void k_filecustomdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal QMetaMethod*
void k_filecustomdialog_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal QMetaMethod*
void k_filecustomdialog_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QMetaMethod* signal)
void k_filecustomdialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal QMetaMethod*
void k_filecustomdialog_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal QMetaMethod*
void k_filecustomdialog_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QMetaMethod* signal)
void k_filecustomdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
void k_filecustomdialog_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param param1 QWidget*
void k_filecustomdialog_qbase_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Qt documentation](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, QWidget* param1)
void k_filecustomdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func()
void k_filecustomdialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func()
void k_filecustomdialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback void func()
void k_filecustomdialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func()
void k_filecustomdialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
bool k_filecustomdialog_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func()
void k_filecustomdialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
QObject* k_filecustomdialog_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
QObject* k_filecustomdialog_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback QObject* func()
void k_filecustomdialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
int32_t k_filecustomdialog_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback int32_t func()
void k_filecustomdialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal const char*
int32_t k_filecustomdialog_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal const char*
int32_t k_filecustomdialog_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback int32_t func(KFileCustomDialog* self, const char* signal)
void k_filecustomdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal QMetaMethod*
bool k_filecustomdialog_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param signal QMetaMethod*
bool k_filecustomdialog_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback bool func(KFileCustomDialog* self, QMetaMethod* signal)
void k_filecustomdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_filecustomdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_filecustomdialog_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileCustomDialog*
/// @param callback double func(KFileCustomDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_filecustomdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFileCustomDialog*
/// @param callback void func(KFileCustomDialog* self, const char* objectName)
void k_filecustomdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kfilecustomdialog.html#dtor.KFileCustomDialog)
///
/// Delete this object from C++ memory.
///
/// @param self KFileCustomDialog*
void k_filecustomdialog_delete(void* self);

#endif
