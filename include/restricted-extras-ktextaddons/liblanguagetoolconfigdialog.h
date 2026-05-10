#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBLANGUAGETOOLCONFIGDIALOG_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBLANGUAGETOOLCONFIGDIALOG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)

/// k_textgrammarcheck__languagetoolconfigdialog_new constructs a new TextGrammarCheck::LanguageToolConfigDialog object.
///
/// @param parent QWidget*
///
TextGrammarCheck__LanguageToolConfigDialog* k_textgrammarcheck__languagetoolconfigdialog_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)

/// k_textgrammarcheck__languagetoolconfigdialog_new2 constructs a new TextGrammarCheck::LanguageToolConfigDialog object.
///
TextGrammarCheck__LanguageToolConfigDialog* k_textgrammarcheck__languagetoolconfigdialog_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const QMetaObject* k_textgrammarcheck__languagetoolconfigdialog_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback const QMetaObject* func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_meta_object` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_meta_object k_textgrammarcheck__languagetoolconfigdialog_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const QMetaObject* k_textgrammarcheck__languagetoolconfigdialog_super_meta_object(void* self);

/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 const char*
///
void* k_textgrammarcheck__languagetoolconfigdialog_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void* func(TextGrammarCheck__LanguageToolConfigDialog* self, const char* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_metacast` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_metacast k_textgrammarcheck__languagetoolconfigdialog_super_metacast

/// Base class method implementation
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 const char*
///
void* k_textgrammarcheck__languagetoolconfigdialog_super_metacast(void* self, const char* param1);

/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback int32_t func(TextGrammarCheck__LanguageToolConfigDialog* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_metacall` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_metacall k_textgrammarcheck__languagetoolconfigdialog_super_metacall

/// Base class method implementation
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textgrammarcheck__languagetoolconfigdialog_tr3(const char* s, const char* c, int n);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_result(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param sizeGripEnabled bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_size_grip_enabled(void* self, bool sizeGripEnabled);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_size_grip_enabled(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param modal bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_modal(void* self, bool modal);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param r int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_result(void* self, int r);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param result int
///
void k_textgrammarcheck__languagetoolconfigdialog_finished(void* self, int result);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, int result)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_finished(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_accepted(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_accepted(void* self, void (*callback)(void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_rejected(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_rejected(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
uintptr_t k_textgrammarcheck__languagetoolconfigdialog_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
uintptr_t k_textgrammarcheck__languagetoolconfigdialog_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
uintptr_t k_textgrammarcheck__languagetoolconfigdialog_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QStyle* k_textgrammarcheck__languagetoolconfigdialog_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param style QStyle*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return enum Qt__WindowModality
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param windowModality enum Qt__WindowModality
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param enabled bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param disabled bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param windowModified bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRect* k_textgrammarcheck__languagetoolconfigdialog_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const QRect* k_textgrammarcheck__languagetoolconfigdialog_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRect* k_textgrammarcheck__languagetoolconfigdialog_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QPoint* k_textgrammarcheck__languagetoolconfigdialog_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRect* k_textgrammarcheck__languagetoolconfigdialog_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRect* k_textgrammarcheck__languagetoolconfigdialog_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRegion* k_textgrammarcheck__languagetoolconfigdialog_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param minimumSize QSize*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param minw int
/// @param minh int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param maximumSize QSize*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param maxw int
/// @param maxh int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param minw int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param minh int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param maxw int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param maxh int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param sizeIncrement QSize*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param baseSize QSize*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param basew int
/// @param baseh int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param fixedSize QSize*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param w int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param h int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textgrammarcheck__languagetoolconfigdialog_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textgrammarcheck__languagetoolconfigdialog_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const QPalette* k_textgrammarcheck__languagetoolconfigdialog_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param palette QPalette*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textgrammarcheck__languagetoolconfigdialog_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textgrammarcheck__languagetoolconfigdialog_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const QFont* k_textgrammarcheck__languagetoolconfigdialog_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param font QFont*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QFontMetrics* k_textgrammarcheck__languagetoolconfigdialog_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QFontInfo* k_textgrammarcheck__languagetoolconfigdialog_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QCursor* k_textgrammarcheck__languagetoolconfigdialog_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param cursor QCursor*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param enable bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param enable bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param mask QBitmap*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param mask QRegion*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRegion* k_textgrammarcheck__languagetoolconfigdialog_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param target QPaintDevice*
///
void k_textgrammarcheck__languagetoolconfigdialog_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param painter QPainter*
///
void k_textgrammarcheck__languagetoolconfigdialog_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QPixmap* k_textgrammarcheck__languagetoolconfigdialog_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QGraphicsEffect* k_textgrammarcheck__languagetoolconfigdialog_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param effect QGraphicsEffect*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param type enum Qt__GestureType
///
void k_textgrammarcheck__languagetoolconfigdialog_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param type enum Qt__GestureType
///
void k_textgrammarcheck__languagetoolconfigdialog_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param windowTitle const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param styleSheet const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param icon QIcon*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QIcon* k_textgrammarcheck__languagetoolconfigdialog_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param windowIconText const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param windowRole const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param filePath const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param level double
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
double k_textgrammarcheck__languagetoolconfigdialog_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param toolTip const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param msec int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param statusTip const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param whatsThis const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param name const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param description const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param direction enum Qt__LayoutDirection
///
void k_textgrammarcheck__languagetoolconfigdialog_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param locale QLocale*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QLocale* k_textgrammarcheck__languagetoolconfigdialog_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param reason enum Qt__FocusReason
///
void k_textgrammarcheck__languagetoolconfigdialog_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param policy enum Qt__FocusPolicy
///
void k_textgrammarcheck__languagetoolconfigdialog_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param focusProxy QWidget*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textgrammarcheck__languagetoolconfigdialog_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QCursor*
///
void k_textgrammarcheck__languagetoolconfigdialog_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param key QKeySequence*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param id int
///
void k_textgrammarcheck__languagetoolconfigdialog_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param id int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param id int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param enable bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QGraphicsProxyWidget* k_textgrammarcheck__languagetoolconfigdialog_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__languagetoolconfigdialog_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QRect*
///
void k_textgrammarcheck__languagetoolconfigdialog_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QRegion*
///
void k_textgrammarcheck__languagetoolconfigdialog_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__languagetoolconfigdialog_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QRect*
///
void k_textgrammarcheck__languagetoolconfigdialog_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QRegion*
///
void k_textgrammarcheck__languagetoolconfigdialog_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param hidden bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
///
void k_textgrammarcheck__languagetoolconfigdialog_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param x int
/// @param y int
///
void k_textgrammarcheck__languagetoolconfigdialog_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QPoint*
///
void k_textgrammarcheck__languagetoolconfigdialog_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__languagetoolconfigdialog_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QSize*
///
void k_textgrammarcheck__languagetoolconfigdialog_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param geometry QRect*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
char* k_textgrammarcheck__languagetoolconfigdialog_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param geometry char*
///
bool k_textgrammarcheck__languagetoolconfigdialog_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param state flag of enum Qt__WindowState
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param state flag of enum Qt__WindowState
///
void k_textgrammarcheck__languagetoolconfigdialog_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSizePolicy* k_textgrammarcheck__languagetoolconfigdialog_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param sizePolicy QSizePolicy*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textgrammarcheck__languagetoolconfigdialog_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRegion* k_textgrammarcheck__languagetoolconfigdialog_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textgrammarcheck__languagetoolconfigdialog_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param margins QMargins*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QMargins* k_textgrammarcheck__languagetoolconfigdialog_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QRect* k_textgrammarcheck__languagetoolconfigdialog_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QLayout* k_textgrammarcheck__languagetoolconfigdialog_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param layout QLayout*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param parent QWidget*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textgrammarcheck__languagetoolconfigdialog_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param dx int
/// @param dy int
///
void k_textgrammarcheck__languagetoolconfigdialog_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textgrammarcheck__languagetoolconfigdialog_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param on bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param action QAction*
///
void k_textgrammarcheck__languagetoolconfigdialog_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param actions libqt_list of QAction*
///
void k_textgrammarcheck__languagetoolconfigdialog_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textgrammarcheck__languagetoolconfigdialog_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param before QAction*
/// @param action QAction*
///
void k_textgrammarcheck__languagetoolconfigdialog_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param action QAction*
///
void k_textgrammarcheck__languagetoolconfigdialog_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return libqt_list of QAction*
///
libqt_list k_textgrammarcheck__languagetoolconfigdialog_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param text const char*
///
QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textgrammarcheck__languagetoolconfigdialog_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param type flag of enum Qt__WindowType
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum Qt__WindowType
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param type flag of enum Qt__WindowType
///
void k_textgrammarcheck__languagetoolconfigdialog_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return enum Qt__WindowType
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param x int
/// @param y int
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param p QPoint*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param p QPointF*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textgrammarcheck__languagetoolconfigdialog_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textgrammarcheck__languagetoolconfigdialog_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param child QWidget*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param enabled bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QBackingStore* k_textgrammarcheck__languagetoolconfigdialog_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QWindow* k_textgrammarcheck__languagetoolconfigdialog_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QScreen* k_textgrammarcheck__languagetoolconfigdialog_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param screen QScreen*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param title const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, const char* title)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param icon QIcon*
///
void k_textgrammarcheck__languagetoolconfigdialog_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QIcon* icon)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param iconText const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, const char* iconText)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param pos QPoint*
///
void k_textgrammarcheck__languagetoolconfigdialog_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QPoint* pos)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textgrammarcheck__languagetoolconfigdialog_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textgrammarcheck__languagetoolconfigdialog_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textgrammarcheck__languagetoolconfigdialog_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textgrammarcheck__languagetoolconfigdialog_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textgrammarcheck__languagetoolconfigdialog_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textgrammarcheck__languagetoolconfigdialog_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textgrammarcheck__languagetoolconfigdialog_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param rectangle QRect*
///
QPixmap* k_textgrammarcheck__languagetoolconfigdialog_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textgrammarcheck__languagetoolconfigdialog_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param id int
/// @param enable bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param id int
/// @param enable bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textgrammarcheck__languagetoolconfigdialog_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char* k_textgrammarcheck__languagetoolconfigdialog_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param name const char*
///
void k_textgrammarcheck__languagetoolconfigdialog_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param b bool
///
bool k_textgrammarcheck__languagetoolconfigdialog_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QThread* k_textgrammarcheck__languagetoolconfigdialog_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param thread QThread*
///
bool k_textgrammarcheck__languagetoolconfigdialog_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param interval int
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param time int64_t of nanoseconds
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param id int
///
void k_textgrammarcheck__languagetoolconfigdialog_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param id enum Qt__TimerId
///
void k_textgrammarcheck__languagetoolconfigdialog_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
/// @return libqt_list of QObject*
///
libqt_list k_textgrammarcheck__languagetoolconfigdialog_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param filterObj QObject*
///
void k_textgrammarcheck__languagetoolconfigdialog_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param obj QObject*
///
void k_textgrammarcheck__languagetoolconfigdialog_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param receiver QObject*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param name const char*
/// @param value QVariant*
///
bool k_textgrammarcheck__languagetoolconfigdialog_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param name const char*
///
QVariant* k_textgrammarcheck__languagetoolconfigdialog_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const char** k_textgrammarcheck__languagetoolconfigdialog_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QBindingStorage* k_textgrammarcheck__languagetoolconfigdialog_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
const QBindingStorage* k_textgrammarcheck__languagetoolconfigdialog_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QObject* k_textgrammarcheck__languagetoolconfigdialog_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param classname const char*
///
bool k_textgrammarcheck__languagetoolconfigdialog_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textgrammarcheck__languagetoolconfigdialog_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal const char*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__languagetoolconfigdialog_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QObject*
///
void k_textgrammarcheck__languagetoolconfigdialog_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QObject* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
double k_textgrammarcheck__languagetoolconfigdialog_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
double k_textgrammarcheck__languagetoolconfigdialog_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textgrammarcheck__languagetoolconfigdialog_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_encode_metric_f(int32_t metric, double value);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param visible bool
///
void k_textgrammarcheck__languagetoolconfigdialog_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_set_visible` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_set_visible k_textgrammarcheck__languagetoolconfigdialog_super_set_visible

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param visible bool
///
void k_textgrammarcheck__languagetoolconfigdialog_super_set_visible(void* self, bool visible);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, bool visible)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_size_hint` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_size_hint k_textgrammarcheck__languagetoolconfigdialog_super_size_hint

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_super_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback QSize* func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_minimum_size_hint` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_minimum_size_hint k_textgrammarcheck__languagetoolconfigdialog_super_minimum_size_hint

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QSize* k_textgrammarcheck__languagetoolconfigdialog_super_minimum_size_hint(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback QSize* func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_open(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_open` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_open k_textgrammarcheck__languagetoolconfigdialog_super_open

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_open(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_open(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_exec(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_exec` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_exec k_textgrammarcheck__languagetoolconfigdialog_super_exec

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_super_exec(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback int32_t func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_exec(void* self, int32_t (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 int
///
void k_textgrammarcheck__languagetoolconfigdialog_done(void* self, int param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_done` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_done k_textgrammarcheck__languagetoolconfigdialog_super_done

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 int
///
void k_textgrammarcheck__languagetoolconfigdialog_super_done(void* self, int param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, int param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_done(void* self, void (*callback)(void*, int));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_accept(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_accept` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_accept k_textgrammarcheck__languagetoolconfigdialog_super_accept

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_accept(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_accept(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_reject(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_reject` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_reject k_textgrammarcheck__languagetoolconfigdialog_super_reject

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_reject(void* self);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_reject(void* self, void (*callback)());

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QKeyEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_key_press_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_key_press_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_key_press_event k_textgrammarcheck__languagetoolconfigdialog_super_key_press_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QKeyEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_key_press_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QCloseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_close_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_close_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_close_event k_textgrammarcheck__languagetoolconfigdialog_super_close_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QCloseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_close_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QCloseEvent* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QShowEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_show_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_show_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_show_event k_textgrammarcheck__languagetoolconfigdialog_super_show_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QShowEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_show_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QShowEvent* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QResizeEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_resize_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_resize_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_resize_event k_textgrammarcheck__languagetoolconfigdialog_super_resize_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QResizeEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_resize_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QResizeEvent* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QContextMenuEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_context_menu_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_context_menu_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_context_menu_event k_textgrammarcheck__languagetoolconfigdialog_super_context_menu_event

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QContextMenuEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_context_menu_event(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QContextMenuEvent* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textgrammarcheck__languagetoolconfigdialog_event_filter(void* self, void* param1, void* param2);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_event_filter` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_event_filter k_textgrammarcheck__languagetoolconfigdialog_super_event_filter

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func(TextGrammarCheck__LanguageToolConfigDialog* self, QObject* param1, QEvent* param2)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_dev_type` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_dev_type k_textgrammarcheck__languagetoolconfigdialog_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback int32_t func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 int
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_height_for_width` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_height_for_width k_textgrammarcheck__languagetoolconfigdialog_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 int
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback int32_t func(TextGrammarCheck__LanguageToolConfigDialog* self, int param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_has_height_for_width` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_has_height_for_width k_textgrammarcheck__languagetoolconfigdialog_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QPaintEngine* k_textgrammarcheck__languagetoolconfigdialog_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_paint_engine` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_paint_engine k_textgrammarcheck__languagetoolconfigdialog_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QPaintEngine* k_textgrammarcheck__languagetoolconfigdialog_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback QPaintEngine* func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEvent*
///
bool k_textgrammarcheck__languagetoolconfigdialog_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_event k_textgrammarcheck__languagetoolconfigdialog_super_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEvent*
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_mouse_press_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_mouse_press_event k_textgrammarcheck__languagetoolconfigdialog_super_mouse_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_mouse_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_mouse_release_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_mouse_release_event k_textgrammarcheck__languagetoolconfigdialog_super_mouse_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_mouse_double_click_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_mouse_double_click_event k_textgrammarcheck__languagetoolconfigdialog_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_mouse_move_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_mouse_move_event k_textgrammarcheck__languagetoolconfigdialog_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QMouseEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QWheelEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_wheel_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_wheel_event k_textgrammarcheck__languagetoolconfigdialog_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QWheelEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QWheelEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QKeyEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_key_release_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_key_release_event k_textgrammarcheck__languagetoolconfigdialog_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QKeyEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QKeyEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_focus_in_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_focus_in_event k_textgrammarcheck__languagetoolconfigdialog_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_focus_out_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_focus_out_event k_textgrammarcheck__languagetoolconfigdialog_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QFocusEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEnterEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_enter_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_enter_event k_textgrammarcheck__languagetoolconfigdialog_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEnterEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QEnterEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_leave_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_leave_event k_textgrammarcheck__languagetoolconfigdialog_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QPaintEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_paint_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_paint_event k_textgrammarcheck__languagetoolconfigdialog_super_paint_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QPaintEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QPaintEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMoveEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_move_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_move_event k_textgrammarcheck__languagetoolconfigdialog_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QMoveEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QMoveEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QTabletEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_tablet_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_tablet_event k_textgrammarcheck__languagetoolconfigdialog_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QTabletEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QTabletEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QActionEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_action_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_action_event k_textgrammarcheck__languagetoolconfigdialog_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QActionEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QActionEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDragEnterEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_drag_enter_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_drag_enter_event k_textgrammarcheck__languagetoolconfigdialog_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDragEnterEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QDragEnterEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDragMoveEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_drag_move_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_drag_move_event k_textgrammarcheck__languagetoolconfigdialog_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDragMoveEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QDragMoveEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDragLeaveEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_drag_leave_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_drag_leave_event k_textgrammarcheck__languagetoolconfigdialog_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDragLeaveEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QDragLeaveEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDropEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_drop_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_drop_event k_textgrammarcheck__languagetoolconfigdialog_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QDropEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QDropEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QHideEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_hide_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_hide_event k_textgrammarcheck__languagetoolconfigdialog_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QHideEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QHideEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textgrammarcheck__languagetoolconfigdialog_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_native_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_native_event k_textgrammarcheck__languagetoolconfigdialog_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func(TextGrammarCheck__LanguageToolConfigDialog* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_change_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_change_event k_textgrammarcheck__languagetoolconfigdialog_super_change_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_metric` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_metric k_textgrammarcheck__languagetoolconfigdialog_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback int32_t func(TextGrammarCheck__LanguageToolConfigDialog* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param painter QPainter*
///
void k_textgrammarcheck__languagetoolconfigdialog_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_init_painter` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_init_painter k_textgrammarcheck__languagetoolconfigdialog_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param painter QPainter*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QPainter* painter)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param offset QPoint*
///
QPaintDevice* k_textgrammarcheck__languagetoolconfigdialog_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_redirected` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_redirected k_textgrammarcheck__languagetoolconfigdialog_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param offset QPoint*
///
QPaintDevice* k_textgrammarcheck__languagetoolconfigdialog_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback QPaintDevice* func(TextGrammarCheck__LanguageToolConfigDialog* self, QPoint* offset)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QPainter* k_textgrammarcheck__languagetoolconfigdialog_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_shared_painter` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_shared_painter k_textgrammarcheck__languagetoolconfigdialog_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QPainter* k_textgrammarcheck__languagetoolconfigdialog_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback QPainter* func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QInputMethodEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_input_method_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_input_method_event k_textgrammarcheck__languagetoolconfigdialog_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QInputMethodEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QInputMethodEvent* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textgrammarcheck__languagetoolconfigdialog_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_input_method_query` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_input_method_query k_textgrammarcheck__languagetoolconfigdialog_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textgrammarcheck__languagetoolconfigdialog_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback QVariant* func(TextGrammarCheck__LanguageToolConfigDialog* self, enum Qt__InputMethodQuery param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param next bool
///
bool k_textgrammarcheck__languagetoolconfigdialog_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_prev_child` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_focus_next_prev_child k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param next bool
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func(TextGrammarCheck__LanguageToolConfigDialog* self, bool next)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QTimerEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_timer_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_timer_event k_textgrammarcheck__languagetoolconfigdialog_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QTimerEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QTimerEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QChildEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_child_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_child_event k_textgrammarcheck__languagetoolconfigdialog_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QChildEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QChildEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_custom_event` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_custom_event k_textgrammarcheck__languagetoolconfigdialog_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param event QEvent*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QEvent* event)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__languagetoolconfigdialog_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_connect_notify` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_connect_notify k_textgrammarcheck__languagetoolconfigdialog_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QMetaMethod* signal)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__languagetoolconfigdialog_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_disconnect_notify` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_disconnect_notify k_textgrammarcheck__languagetoolconfigdialog_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QMetaMethod* signal)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
///
void k_textgrammarcheck__languagetoolconfigdialog_adjust_position(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_adjust_position` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_adjust_position k_textgrammarcheck__languagetoolconfigdialog_super_adjust_position

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param param1 QWidget*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_adjust_position(void* self, void* param1);

/// Inherited from QDialog
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, QWidget* param1)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_adjust_position(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_update_micro_focus` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_update_micro_focus k_textgrammarcheck__languagetoolconfigdialog_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_create(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_create` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_create k_textgrammarcheck__languagetoolconfigdialog_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_destroy(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_destroy` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_destroy k_textgrammarcheck__languagetoolconfigdialog_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_child` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_focus_next_child k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_focus_previous_child` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_focus_previous_child k_textgrammarcheck__languagetoolconfigdialog_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QObject* k_textgrammarcheck__languagetoolconfigdialog_sender(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_sender` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_sender k_textgrammarcheck__languagetoolconfigdialog_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
QObject* k_textgrammarcheck__languagetoolconfigdialog_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback QObject* func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_sender_signal_index` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_sender_signal_index k_textgrammarcheck__languagetoolconfigdialog_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback int32_t func()
///
void k_textgrammarcheck__languagetoolconfigdialog_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal const char*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_receivers` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_receivers k_textgrammarcheck__languagetoolconfigdialog_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal const char*
///
int32_t k_textgrammarcheck__languagetoolconfigdialog_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback int32_t func(TextGrammarCheck__LanguageToolConfigDialog* self, const char* signal)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__languagetoolconfigdialog_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_is_signal_connected` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_is_signal_connected k_textgrammarcheck__languagetoolconfigdialog_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__languagetoolconfigdialog_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback bool func(TextGrammarCheck__LanguageToolConfigDialog* self, QMetaMethod* signal)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textgrammarcheck__languagetoolconfigdialog_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textgrammarcheck__languagetoolconfigdialog_super_get_decoded_metric_f` instead
///
#define k_textgrammarcheck__languagetoolconfigdialog_qbase_get_decoded_metric_f k_textgrammarcheck__languagetoolconfigdialog_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textgrammarcheck__languagetoolconfigdialog_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback double func(TextGrammarCheck__LanguageToolConfigDialog* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
/// @param callback void func(TextGrammarCheck__LanguageToolConfigDialog* self, const char* objectName)
///
void k_textgrammarcheck__languagetoolconfigdialog_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1LanguageToolConfigDialog.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextGrammarCheck__LanguageToolConfigDialog*
///
void k_textgrammarcheck__languagetoolconfigdialog_delete(void* self);

#endif
