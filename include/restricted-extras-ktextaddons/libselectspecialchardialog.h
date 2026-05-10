#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBSELECTSPECIALCHARDIALOG_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBSELECTSPECIALCHARDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)

/// k_textaddonswidgets__selectspecialchardialog_new constructs a new TextAddonsWidgets::SelectSpecialCharDialog object.
///
/// @param parent QWidget*
///
TextAddonsWidgets__SelectSpecialCharDialog* k_textaddonswidgets__selectspecialchardialog_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const QMetaObject* k_textaddonswidgets__selectspecialchardialog_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// Allows for overriding the related default method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback const QMetaObject* func()
///
void k_textaddonswidgets__selectspecialchardialog_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_meta_object` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_meta_object k_textaddonswidgets__selectspecialchardialog_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// Base class method implementation
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const QMetaObject* k_textaddonswidgets__selectspecialchardialog_super_meta_object(void* self);

/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 const char*
///
void* k_textaddonswidgets__selectspecialchardialog_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void* func(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_metacast` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_metacast k_textaddonswidgets__selectspecialchardialog_super_metacast

/// Base class method implementation
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 const char*
///
void* k_textaddonswidgets__selectspecialchardialog_super_metacast(void* self, const char* param1);

/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textaddonswidgets__selectspecialchardialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback int32_t func(TextAddonsWidgets__SelectSpecialCharDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textaddonswidgets__selectspecialchardialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_metacall` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_metacall k_textaddonswidgets__selectspecialchardialog_super_metacall

/// Base class method implementation
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textaddonswidgets__selectspecialchardialog_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textaddonswidgets__selectspecialchardialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param c QChar*
///
void k_textaddonswidgets__selectspecialchardialog_set_current_char(void* self, void* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QChar* k_textaddonswidgets__selectspecialchardialog_current_char(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param text const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_ok_button_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param show bool
///
void k_textaddonswidgets__selectspecialchardialog_show_select_button(void* self, bool show);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_auto_insert_char(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QChar*
///
void k_textaddonswidgets__selectspecialchardialog_char_selected(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QChar* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_char_selected(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textaddonswidgets__selectspecialchardialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textaddonswidgets__selectspecialchardialog_tr3(const char* s, const char* c, int n);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_result(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param sizeGripEnabled bool
///
void k_textaddonswidgets__selectspecialchardialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param modal bool
///
void k_textaddonswidgets__selectspecialchardialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param r int
///
void k_textaddonswidgets__selectspecialchardialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param result int
///
void k_textaddonswidgets__selectspecialchardialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, int result)
///
void k_textaddonswidgets__selectspecialchardialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self)
///
void k_textaddonswidgets__selectspecialchardialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self)
///
void k_textaddonswidgets__selectspecialchardialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
uintptr_t k_textaddonswidgets__selectspecialchardialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
uintptr_t k_textaddonswidgets__selectspecialchardialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
uintptr_t k_textaddonswidgets__selectspecialchardialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QStyle* k_textaddonswidgets__selectspecialchardialog_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param style QStyle*
///
void k_textaddonswidgets__selectspecialchardialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_textaddonswidgets__selectspecialchardialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param windowModality enum Qt__WindowModality
///
void k_textaddonswidgets__selectspecialchardialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
///
bool k_textaddonswidgets__selectspecialchardialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param enabled bool
///
void k_textaddonswidgets__selectspecialchardialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param disabled bool
///
void k_textaddonswidgets__selectspecialchardialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param windowModified bool
///
void k_textaddonswidgets__selectspecialchardialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRect* k_textaddonswidgets__selectspecialchardialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const QRect* k_textaddonswidgets__selectspecialchardialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRect* k_textaddonswidgets__selectspecialchardialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QPoint* k_textaddonswidgets__selectspecialchardialog_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRect* k_textaddonswidgets__selectspecialchardialog_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRect* k_textaddonswidgets__selectspecialchardialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRegion* k_textaddonswidgets__selectspecialchardialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param minimumSize QSize*
///
void k_textaddonswidgets__selectspecialchardialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param minw int
/// @param minh int
///
void k_textaddonswidgets__selectspecialchardialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param maximumSize QSize*
///
void k_textaddonswidgets__selectspecialchardialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param maxw int
/// @param maxh int
///
void k_textaddonswidgets__selectspecialchardialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param minw int
///
void k_textaddonswidgets__selectspecialchardialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param minh int
///
void k_textaddonswidgets__selectspecialchardialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param maxw int
///
void k_textaddonswidgets__selectspecialchardialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param maxh int
///
void k_textaddonswidgets__selectspecialchardialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param sizeIncrement QSize*
///
void k_textaddonswidgets__selectspecialchardialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param w int
/// @param h int
///
void k_textaddonswidgets__selectspecialchardialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param baseSize QSize*
///
void k_textaddonswidgets__selectspecialchardialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param basew int
/// @param baseh int
///
void k_textaddonswidgets__selectspecialchardialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param fixedSize QSize*
///
void k_textaddonswidgets__selectspecialchardialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param w int
/// @param h int
///
void k_textaddonswidgets__selectspecialchardialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param w int
///
void k_textaddonswidgets__selectspecialchardialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param h int
///
void k_textaddonswidgets__selectspecialchardialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPointF*
///
QPointF* k_textaddonswidgets__selectspecialchardialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPoint*
///
QPoint* k_textaddonswidgets__selectspecialchardialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPointF*
///
QPointF* k_textaddonswidgets__selectspecialchardialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPoint*
///
QPoint* k_textaddonswidgets__selectspecialchardialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPointF*
///
QPointF* k_textaddonswidgets__selectspecialchardialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPoint*
///
QPoint* k_textaddonswidgets__selectspecialchardialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPointF*
///
QPointF* k_textaddonswidgets__selectspecialchardialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPoint*
///
QPoint* k_textaddonswidgets__selectspecialchardialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textaddonswidgets__selectspecialchardialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textaddonswidgets__selectspecialchardialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textaddonswidgets__selectspecialchardialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textaddonswidgets__selectspecialchardialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const QPalette* k_textaddonswidgets__selectspecialchardialog_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param palette QPalette*
///
void k_textaddonswidgets__selectspecialchardialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textaddonswidgets__selectspecialchardialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textaddonswidgets__selectspecialchardialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textaddonswidgets__selectspecialchardialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textaddonswidgets__selectspecialchardialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const QFont* k_textaddonswidgets__selectspecialchardialog_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param font QFont*
///
void k_textaddonswidgets__selectspecialchardialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QFontMetrics* k_textaddonswidgets__selectspecialchardialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QFontInfo* k_textaddonswidgets__selectspecialchardialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QCursor* k_textaddonswidgets__selectspecialchardialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param cursor QCursor*
///
void k_textaddonswidgets__selectspecialchardialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param enable bool
///
void k_textaddonswidgets__selectspecialchardialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param enable bool
///
void k_textaddonswidgets__selectspecialchardialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param mask QBitmap*
///
void k_textaddonswidgets__selectspecialchardialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param mask QRegion*
///
void k_textaddonswidgets__selectspecialchardialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRegion* k_textaddonswidgets__selectspecialchardialog_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param target QPaintDevice*
///
void k_textaddonswidgets__selectspecialchardialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param painter QPainter*
///
void k_textaddonswidgets__selectspecialchardialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QPixmap* k_textaddonswidgets__selectspecialchardialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QGraphicsEffect* k_textaddonswidgets__selectspecialchardialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param effect QGraphicsEffect*
///
void k_textaddonswidgets__selectspecialchardialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param type enum Qt__GestureType
///
void k_textaddonswidgets__selectspecialchardialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param type enum Qt__GestureType
///
void k_textaddonswidgets__selectspecialchardialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param windowTitle const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param styleSheet const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param icon QIcon*
///
void k_textaddonswidgets__selectspecialchardialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QIcon* k_textaddonswidgets__selectspecialchardialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param windowIconText const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param windowRole const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param filePath const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param level double
///
void k_textaddonswidgets__selectspecialchardialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
double k_textaddonswidgets__selectspecialchardialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param toolTip const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param msec int
///
void k_textaddonswidgets__selectspecialchardialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param statusTip const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param whatsThis const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param name const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param description const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param direction enum Qt__LayoutDirection
///
void k_textaddonswidgets__selectspecialchardialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textaddonswidgets__selectspecialchardialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param locale QLocale*
///
void k_textaddonswidgets__selectspecialchardialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QLocale* k_textaddonswidgets__selectspecialchardialog_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param reason enum Qt__FocusReason
///
void k_textaddonswidgets__selectspecialchardialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textaddonswidgets__selectspecialchardialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param policy enum Qt__FocusPolicy
///
void k_textaddonswidgets__selectspecialchardialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textaddonswidgets__selectspecialchardialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param focusProxy QWidget*
///
void k_textaddonswidgets__selectspecialchardialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textaddonswidgets__selectspecialchardialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textaddonswidgets__selectspecialchardialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QCursor*
///
void k_textaddonswidgets__selectspecialchardialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param key QKeySequence*
///
int32_t k_textaddonswidgets__selectspecialchardialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param id int
///
void k_textaddonswidgets__selectspecialchardialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param id int
///
void k_textaddonswidgets__selectspecialchardialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param id int
///
void k_textaddonswidgets__selectspecialchardialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textaddonswidgets__selectspecialchardialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textaddonswidgets__selectspecialchardialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param enable bool
///
void k_textaddonswidgets__selectspecialchardialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QGraphicsProxyWidget* k_textaddonswidgets__selectspecialchardialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textaddonswidgets__selectspecialchardialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QRect*
///
void k_textaddonswidgets__selectspecialchardialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QRegion*
///
void k_textaddonswidgets__selectspecialchardialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textaddonswidgets__selectspecialchardialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QRect*
///
void k_textaddonswidgets__selectspecialchardialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QRegion*
///
void k_textaddonswidgets__selectspecialchardialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param hidden bool
///
void k_textaddonswidgets__selectspecialchardialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
///
void k_textaddonswidgets__selectspecialchardialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param x int
/// @param y int
///
void k_textaddonswidgets__selectspecialchardialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QPoint*
///
void k_textaddonswidgets__selectspecialchardialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param w int
/// @param h int
///
void k_textaddonswidgets__selectspecialchardialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QSize*
///
void k_textaddonswidgets__selectspecialchardialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textaddonswidgets__selectspecialchardialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param geometry QRect*
///
void k_textaddonswidgets__selectspecialchardialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
char* k_textaddonswidgets__selectspecialchardialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param geometry char*
///
bool k_textaddonswidgets__selectspecialchardialog_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
///
bool k_textaddonswidgets__selectspecialchardialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textaddonswidgets__selectspecialchardialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param state flag of enum Qt__WindowState
///
void k_textaddonswidgets__selectspecialchardialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param state flag of enum Qt__WindowState
///
void k_textaddonswidgets__selectspecialchardialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSizePolicy* k_textaddonswidgets__selectspecialchardialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param sizePolicy QSizePolicy*
///
void k_textaddonswidgets__selectspecialchardialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textaddonswidgets__selectspecialchardialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRegion* k_textaddonswidgets__selectspecialchardialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textaddonswidgets__selectspecialchardialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param margins QMargins*
///
void k_textaddonswidgets__selectspecialchardialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QMargins* k_textaddonswidgets__selectspecialchardialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QRect* k_textaddonswidgets__selectspecialchardialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QLayout* k_textaddonswidgets__selectspecialchardialog_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param layout QLayout*
///
void k_textaddonswidgets__selectspecialchardialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param parent QWidget*
///
void k_textaddonswidgets__selectspecialchardialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textaddonswidgets__selectspecialchardialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param dx int
/// @param dy int
///
void k_textaddonswidgets__selectspecialchardialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textaddonswidgets__selectspecialchardialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param on bool
///
void k_textaddonswidgets__selectspecialchardialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param action QAction*
///
void k_textaddonswidgets__selectspecialchardialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param actions libqt_list of QAction*
///
void k_textaddonswidgets__selectspecialchardialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textaddonswidgets__selectspecialchardialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param before QAction*
/// @param action QAction*
///
void k_textaddonswidgets__selectspecialchardialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param action QAction*
///
void k_textaddonswidgets__selectspecialchardialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return libqt_list of QAction*
///
libqt_list k_textaddonswidgets__selectspecialchardialog_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param text const char*
///
QAction* k_textaddonswidgets__selectspecialchardialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textaddonswidgets__selectspecialchardialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textaddonswidgets__selectspecialchardialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textaddonswidgets__selectspecialchardialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param type flag of enum Qt__WindowType
///
void k_textaddonswidgets__selectspecialchardialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textaddonswidgets__selectspecialchardialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum Qt__WindowType
///
void k_textaddonswidgets__selectspecialchardialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param type flag of enum Qt__WindowType
///
void k_textaddonswidgets__selectspecialchardialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return enum Qt__WindowType
///
int32_t k_textaddonswidgets__selectspecialchardialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_textaddonswidgets__selectspecialchardialog_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param x int
/// @param y int
///
QWidget* k_textaddonswidgets__selectspecialchardialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param p QPoint*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param p QPointF*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textaddonswidgets__selectspecialchardialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textaddonswidgets__selectspecialchardialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param child QWidget*
///
bool k_textaddonswidgets__selectspecialchardialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param enabled bool
///
void k_textaddonswidgets__selectspecialchardialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QBackingStore* k_textaddonswidgets__selectspecialchardialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QWindow* k_textaddonswidgets__selectspecialchardialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QScreen* k_textaddonswidgets__selectspecialchardialog_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param screen QScreen*
///
void k_textaddonswidgets__selectspecialchardialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param title const char*
///
void k_textaddonswidgets__selectspecialchardialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* title)
///
void k_textaddonswidgets__selectspecialchardialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param icon QIcon*
///
void k_textaddonswidgets__selectspecialchardialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QIcon* icon)
///
void k_textaddonswidgets__selectspecialchardialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param iconText const char*
///
void k_textaddonswidgets__selectspecialchardialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* iconText)
///
void k_textaddonswidgets__selectspecialchardialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param pos QPoint*
///
void k_textaddonswidgets__selectspecialchardialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QPoint* pos)
///
void k_textaddonswidgets__selectspecialchardialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textaddonswidgets__selectspecialchardialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textaddonswidgets__selectspecialchardialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textaddonswidgets__selectspecialchardialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textaddonswidgets__selectspecialchardialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textaddonswidgets__selectspecialchardialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textaddonswidgets__selectspecialchardialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textaddonswidgets__selectspecialchardialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textaddonswidgets__selectspecialchardialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param rectangle QRect*
///
QPixmap* k_textaddonswidgets__selectspecialchardialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textaddonswidgets__selectspecialchardialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textaddonswidgets__selectspecialchardialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param id int
/// @param enable bool
///
void k_textaddonswidgets__selectspecialchardialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param id int
/// @param enable bool
///
void k_textaddonswidgets__selectspecialchardialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textaddonswidgets__selectspecialchardialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textaddonswidgets__selectspecialchardialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textaddonswidgets__selectspecialchardialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textaddonswidgets__selectspecialchardialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char* k_textaddonswidgets__selectspecialchardialog_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param name const char*
///
void k_textaddonswidgets__selectspecialchardialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param b bool
///
bool k_textaddonswidgets__selectspecialchardialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QThread* k_textaddonswidgets__selectspecialchardialog_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param thread QThread*
///
bool k_textaddonswidgets__selectspecialchardialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param interval int
///
int32_t k_textaddonswidgets__selectspecialchardialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param time int64_t of nanoseconds
///
int32_t k_textaddonswidgets__selectspecialchardialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param id int
///
void k_textaddonswidgets__selectspecialchardialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param id enum Qt__TimerId
///
void k_textaddonswidgets__selectspecialchardialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
/// @return libqt_list of QObject*
///
libqt_list k_textaddonswidgets__selectspecialchardialog_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param filterObj QObject*
///
void k_textaddonswidgets__selectspecialchardialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param obj QObject*
///
void k_textaddonswidgets__selectspecialchardialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textaddonswidgets__selectspecialchardialog_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textaddonswidgets__selectspecialchardialog_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textaddonswidgets__selectspecialchardialog_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param receiver QObject*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_textaddonswidgets__selectspecialchardialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param name const char*
///
QVariant* k_textaddonswidgets__selectspecialchardialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const char** k_textaddonswidgets__selectspecialchardialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QBindingStorage* k_textaddonswidgets__selectspecialchardialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
const QBindingStorage* k_textaddonswidgets__selectspecialchardialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self)
///
void k_textaddonswidgets__selectspecialchardialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QObject* k_textaddonswidgets__selectspecialchardialog_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param classname const char*
///
bool k_textaddonswidgets__selectspecialchardialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textaddonswidgets__selectspecialchardialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textaddonswidgets__selectspecialchardialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textaddonswidgets__selectspecialchardialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textaddonswidgets__selectspecialchardialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textaddonswidgets__selectspecialchardialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal const char*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textaddonswidgets__selectspecialchardialog_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QObject*
///
void k_textaddonswidgets__selectspecialchardialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QObject* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
double k_textaddonswidgets__selectspecialchardialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
double k_textaddonswidgets__selectspecialchardialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textaddonswidgets__selectspecialchardialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textaddonswidgets__selectspecialchardialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param visible bool
///
void k_textaddonswidgets__selectspecialchardialog_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_set_visible` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_set_visible k_textaddonswidgets__selectspecialchardialog_super_set_visible

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param visible bool
///
void k_textaddonswidgets__selectspecialchardialog_super_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, bool visible)
///
void k_textaddonswidgets__selectspecialchardialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_size_hint` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_size_hint k_textaddonswidgets__selectspecialchardialog_super_size_hint

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_super_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback QSize* func()
///
void k_textaddonswidgets__selectspecialchardialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_minimum_size_hint` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_minimum_size_hint k_textaddonswidgets__selectspecialchardialog_super_minimum_size_hint

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QSize* k_textaddonswidgets__selectspecialchardialog_super_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback QSize* func()
///
void k_textaddonswidgets__selectspecialchardialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_open(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_open` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_open k_textaddonswidgets__selectspecialchardialog_super_open

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_super_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func()
///
void k_textaddonswidgets__selectspecialchardialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_exec(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_exec` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_exec k_textaddonswidgets__selectspecialchardialog_super_exec

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_super_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback int32_t func()
///
void k_textaddonswidgets__selectspecialchardialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 int
///
void k_textaddonswidgets__selectspecialchardialog_done(void* self, int param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_done` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_done k_textaddonswidgets__selectspecialchardialog_super_done

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 int
///
void k_textaddonswidgets__selectspecialchardialog_super_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_accept(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_accept` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_accept k_textaddonswidgets__selectspecialchardialog_super_accept

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_super_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func()
///
void k_textaddonswidgets__selectspecialchardialog_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_reject(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_reject` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_reject k_textaddonswidgets__selectspecialchardialog_super_reject

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_super_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func()
///
void k_textaddonswidgets__selectspecialchardialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QKeyEvent*
///
void k_textaddonswidgets__selectspecialchardialog_key_press_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_key_press_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_key_press_event k_textaddonswidgets__selectspecialchardialog_super_key_press_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QKeyEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QCloseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_close_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_close_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_close_event k_textaddonswidgets__selectspecialchardialog_super_close_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QCloseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QCloseEvent* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QShowEvent*
///
void k_textaddonswidgets__selectspecialchardialog_show_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_show_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_show_event k_textaddonswidgets__selectspecialchardialog_super_show_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QShowEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QShowEvent* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QResizeEvent*
///
void k_textaddonswidgets__selectspecialchardialog_resize_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_resize_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_resize_event k_textaddonswidgets__selectspecialchardialog_super_resize_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QResizeEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QResizeEvent* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QContextMenuEvent*
///
void k_textaddonswidgets__selectspecialchardialog_context_menu_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_context_menu_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_context_menu_event k_textaddonswidgets__selectspecialchardialog_super_context_menu_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QContextMenuEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QContextMenuEvent* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textaddonswidgets__selectspecialchardialog_event_filter(void* self, void* param1, void* param2);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_event_filter` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_event_filter k_textaddonswidgets__selectspecialchardialog_super_event_filter

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textaddonswidgets__selectspecialchardialog_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func(TextAddonsWidgets__SelectSpecialCharDialog* self, QObject* param1, QEvent* param2)
///
void k_textaddonswidgets__selectspecialchardialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_dev_type` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_dev_type k_textaddonswidgets__selectspecialchardialog_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback int32_t func()
///
void k_textaddonswidgets__selectspecialchardialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 int
///
int32_t k_textaddonswidgets__selectspecialchardialog_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_height_for_width` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_height_for_width k_textaddonswidgets__selectspecialchardialog_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 int
///
int32_t k_textaddonswidgets__selectspecialchardialog_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback int32_t func(TextAddonsWidgets__SelectSpecialCharDialog* self, int param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_has_height_for_width` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_has_height_for_width k_textaddonswidgets__selectspecialchardialog_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func()
///
void k_textaddonswidgets__selectspecialchardialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QPaintEngine* k_textaddonswidgets__selectspecialchardialog_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_paint_engine` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_paint_engine k_textaddonswidgets__selectspecialchardialog_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QPaintEngine* k_textaddonswidgets__selectspecialchardialog_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback QPaintEngine* func()
///
void k_textaddonswidgets__selectspecialchardialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEvent*
///
bool k_textaddonswidgets__selectspecialchardialog_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_event k_textaddonswidgets__selectspecialchardialog_super_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEvent*
///
bool k_textaddonswidgets__selectspecialchardialog_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_mouse_press_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_mouse_press_event k_textaddonswidgets__selectspecialchardialog_super_mouse_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_mouse_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_mouse_release_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_mouse_release_event k_textaddonswidgets__selectspecialchardialog_super_mouse_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_mouse_double_click_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_mouse_double_click_event k_textaddonswidgets__selectspecialchardialog_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_mouse_move_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_mouse_move_event k_textaddonswidgets__selectspecialchardialog_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMouseEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMouseEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QWheelEvent*
///
void k_textaddonswidgets__selectspecialchardialog_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_wheel_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_wheel_event k_textaddonswidgets__selectspecialchardialog_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QWheelEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QWheelEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QKeyEvent*
///
void k_textaddonswidgets__selectspecialchardialog_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_key_release_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_key_release_event k_textaddonswidgets__selectspecialchardialog_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QKeyEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QKeyEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QFocusEvent*
///
void k_textaddonswidgets__selectspecialchardialog_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_focus_in_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_focus_in_event k_textaddonswidgets__selectspecialchardialog_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QFocusEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QFocusEvent*
///
void k_textaddonswidgets__selectspecialchardialog_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_focus_out_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_focus_out_event k_textaddonswidgets__selectspecialchardialog_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QFocusEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QFocusEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEnterEvent*
///
void k_textaddonswidgets__selectspecialchardialog_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_enter_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_enter_event k_textaddonswidgets__selectspecialchardialog_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEnterEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QEnterEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEvent*
///
void k_textaddonswidgets__selectspecialchardialog_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_leave_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_leave_event k_textaddonswidgets__selectspecialchardialog_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QPaintEvent*
///
void k_textaddonswidgets__selectspecialchardialog_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_paint_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_paint_event k_textaddonswidgets__selectspecialchardialog_super_paint_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QPaintEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QPaintEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMoveEvent*
///
void k_textaddonswidgets__selectspecialchardialog_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_move_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_move_event k_textaddonswidgets__selectspecialchardialog_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QMoveEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMoveEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QTabletEvent*
///
void k_textaddonswidgets__selectspecialchardialog_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_tablet_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_tablet_event k_textaddonswidgets__selectspecialchardialog_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QTabletEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QTabletEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QActionEvent*
///
void k_textaddonswidgets__selectspecialchardialog_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_action_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_action_event k_textaddonswidgets__selectspecialchardialog_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QActionEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QActionEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDragEnterEvent*
///
void k_textaddonswidgets__selectspecialchardialog_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_drag_enter_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_drag_enter_event k_textaddonswidgets__selectspecialchardialog_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDragEnterEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragEnterEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDragMoveEvent*
///
void k_textaddonswidgets__selectspecialchardialog_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_drag_move_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_drag_move_event k_textaddonswidgets__selectspecialchardialog_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDragMoveEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragMoveEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDragLeaveEvent*
///
void k_textaddonswidgets__selectspecialchardialog_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_drag_leave_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_drag_leave_event k_textaddonswidgets__selectspecialchardialog_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDragLeaveEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QDragLeaveEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDropEvent*
///
void k_textaddonswidgets__selectspecialchardialog_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_drop_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_drop_event k_textaddonswidgets__selectspecialchardialog_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QDropEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QDropEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QHideEvent*
///
void k_textaddonswidgets__selectspecialchardialog_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_hide_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_hide_event k_textaddonswidgets__selectspecialchardialog_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QHideEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QHideEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textaddonswidgets__selectspecialchardialog_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_native_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_native_event k_textaddonswidgets__selectspecialchardialog_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textaddonswidgets__selectspecialchardialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func(TextAddonsWidgets__SelectSpecialCharDialog* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textaddonswidgets__selectspecialchardialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QEvent*
///
void k_textaddonswidgets__selectspecialchardialog_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_change_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_change_event k_textaddonswidgets__selectspecialchardialog_super_change_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textaddonswidgets__selectspecialchardialog_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_metric` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_metric k_textaddonswidgets__selectspecialchardialog_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textaddonswidgets__selectspecialchardialog_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback int32_t func(TextAddonsWidgets__SelectSpecialCharDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param painter QPainter*
///
void k_textaddonswidgets__selectspecialchardialog_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_init_painter` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_init_painter k_textaddonswidgets__selectspecialchardialog_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param painter QPainter*
///
void k_textaddonswidgets__selectspecialchardialog_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QPainter* painter)
///
void k_textaddonswidgets__selectspecialchardialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param offset QPoint*
///
QPaintDevice* k_textaddonswidgets__selectspecialchardialog_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_redirected` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_redirected k_textaddonswidgets__selectspecialchardialog_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param offset QPoint*
///
QPaintDevice* k_textaddonswidgets__selectspecialchardialog_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback QPaintDevice* func(TextAddonsWidgets__SelectSpecialCharDialog* self, QPoint* offset)
///
void k_textaddonswidgets__selectspecialchardialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QPainter* k_textaddonswidgets__selectspecialchardialog_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_shared_painter` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_shared_painter k_textaddonswidgets__selectspecialchardialog_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QPainter* k_textaddonswidgets__selectspecialchardialog_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback QPainter* func()
///
void k_textaddonswidgets__selectspecialchardialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QInputMethodEvent*
///
void k_textaddonswidgets__selectspecialchardialog_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_input_method_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_input_method_event k_textaddonswidgets__selectspecialchardialog_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QInputMethodEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QInputMethodEvent* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textaddonswidgets__selectspecialchardialog_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_input_method_query` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_input_method_query k_textaddonswidgets__selectspecialchardialog_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textaddonswidgets__selectspecialchardialog_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback QVariant* func(TextAddonsWidgets__SelectSpecialCharDialog* self, enum Qt__InputMethodQuery param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param next bool
///
bool k_textaddonswidgets__selectspecialchardialog_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_focus_next_prev_child` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_focus_next_prev_child k_textaddonswidgets__selectspecialchardialog_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param next bool
///
bool k_textaddonswidgets__selectspecialchardialog_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func(TextAddonsWidgets__SelectSpecialCharDialog* self, bool next)
///
void k_textaddonswidgets__selectspecialchardialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QTimerEvent*
///
void k_textaddonswidgets__selectspecialchardialog_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_timer_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_timer_event k_textaddonswidgets__selectspecialchardialog_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QTimerEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QTimerEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QChildEvent*
///
void k_textaddonswidgets__selectspecialchardialog_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_child_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_child_event k_textaddonswidgets__selectspecialchardialog_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QChildEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QChildEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEvent*
///
void k_textaddonswidgets__selectspecialchardialog_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_custom_event` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_custom_event k_textaddonswidgets__selectspecialchardialog_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param event QEvent*
///
void k_textaddonswidgets__selectspecialchardialog_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QEvent* event)
///
void k_textaddonswidgets__selectspecialchardialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal QMetaMethod*
///
void k_textaddonswidgets__selectspecialchardialog_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_connect_notify` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_connect_notify k_textaddonswidgets__selectspecialchardialog_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal QMetaMethod*
///
void k_textaddonswidgets__selectspecialchardialog_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMetaMethod* signal)
///
void k_textaddonswidgets__selectspecialchardialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal QMetaMethod*
///
void k_textaddonswidgets__selectspecialchardialog_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_disconnect_notify` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_disconnect_notify k_textaddonswidgets__selectspecialchardialog_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal QMetaMethod*
///
void k_textaddonswidgets__selectspecialchardialog_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMetaMethod* signal)
///
void k_textaddonswidgets__selectspecialchardialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
///
void k_textaddonswidgets__selectspecialchardialog_adjust_position(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_adjust_position` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_adjust_position k_textaddonswidgets__selectspecialchardialog_super_adjust_position

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param param1 QWidget*
///
void k_textaddonswidgets__selectspecialchardialog_super_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, QWidget* param1)
///
void k_textaddonswidgets__selectspecialchardialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_update_micro_focus` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_update_micro_focus k_textaddonswidgets__selectspecialchardialog_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func()
///
void k_textaddonswidgets__selectspecialchardialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_create(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_create` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_create k_textaddonswidgets__selectspecialchardialog_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func()
///
void k_textaddonswidgets__selectspecialchardialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_destroy(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_destroy` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_destroy k_textaddonswidgets__selectspecialchardialog_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func()
///
void k_textaddonswidgets__selectspecialchardialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_focus_next_child` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_focus_next_child k_textaddonswidgets__selectspecialchardialog_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func()
///
void k_textaddonswidgets__selectspecialchardialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_focus_previous_child` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_focus_previous_child k_textaddonswidgets__selectspecialchardialog_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
bool k_textaddonswidgets__selectspecialchardialog_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func()
///
void k_textaddonswidgets__selectspecialchardialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QObject* k_textaddonswidgets__selectspecialchardialog_sender(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_sender` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_sender k_textaddonswidgets__selectspecialchardialog_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
QObject* k_textaddonswidgets__selectspecialchardialog_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback QObject* func()
///
void k_textaddonswidgets__selectspecialchardialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_sender_signal_index` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_sender_signal_index k_textaddonswidgets__selectspecialchardialog_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
int32_t k_textaddonswidgets__selectspecialchardialog_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback int32_t func()
///
void k_textaddonswidgets__selectspecialchardialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal const char*
///
int32_t k_textaddonswidgets__selectspecialchardialog_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_receivers` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_receivers k_textaddonswidgets__selectspecialchardialog_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal const char*
///
int32_t k_textaddonswidgets__selectspecialchardialog_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback int32_t func(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* signal)
///
void k_textaddonswidgets__selectspecialchardialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal QMetaMethod*
///
bool k_textaddonswidgets__selectspecialchardialog_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_is_signal_connected` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_is_signal_connected k_textaddonswidgets__selectspecialchardialog_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param signal QMetaMethod*
///
bool k_textaddonswidgets__selectspecialchardialog_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback bool func(TextAddonsWidgets__SelectSpecialCharDialog* self, QMetaMethod* signal)
///
void k_textaddonswidgets__selectspecialchardialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textaddonswidgets__selectspecialchardialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textaddonswidgets__selectspecialchardialog_super_get_decoded_metric_f` instead
///
#define k_textaddonswidgets__selectspecialchardialog_qbase_get_decoded_metric_f k_textaddonswidgets__selectspecialchardialog_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textaddonswidgets__selectspecialchardialog_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback double func(TextAddonsWidgets__SelectSpecialCharDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textaddonswidgets__selectspecialchardialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
/// @param callback void func(TextAddonsWidgets__SelectSpecialCharDialog* self, const char* objectName)
///
void k_textaddonswidgets__selectspecialchardialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAddonsWidgets__SelectSpecialCharDialog*
///
void k_textaddonswidgets__selectspecialchardialog_delete(void* self);

#endif
