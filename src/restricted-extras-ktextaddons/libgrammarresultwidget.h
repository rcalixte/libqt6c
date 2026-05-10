#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARRESULTWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARRESULTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)

/// k_textgrammarcheck__grammarresultwidget_new constructs a new TextGrammarCheck::GrammarResultWidget object.
///
/// @param parent QWidget*
///
TextGrammarCheck__GrammarResultWidget* k_textgrammarcheck__grammarresultwidget_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)

/// k_textgrammarcheck__grammarresultwidget_new2 constructs a new TextGrammarCheck::GrammarResultWidget object.
///
TextGrammarCheck__GrammarResultWidget* k_textgrammarcheck__grammarresultwidget_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const QMetaObject* k_textgrammarcheck__grammarresultwidget_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback const QMetaObject* func()
///
void k_textgrammarcheck__grammarresultwidget_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_meta_object` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_meta_object k_textgrammarcheck__grammarresultwidget_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const QMetaObject* k_textgrammarcheck__grammarresultwidget_super_meta_object(void* self);

/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 const char*
///
void* k_textgrammarcheck__grammarresultwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void* func(TextGrammarCheck__GrammarResultWidget* self, const char* param1)
///
void k_textgrammarcheck__grammarresultwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_metacast` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_metacast k_textgrammarcheck__grammarresultwidget_super_metacast

/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 const char*
///
void* k_textgrammarcheck__grammarresultwidget_super_metacast(void* self, const char* param1);

/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__grammarresultwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textgrammarcheck__grammarresultwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_metacall` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_metacall k_textgrammarcheck__grammarresultwidget_super_metacall

/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__grammarresultwidget_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textgrammarcheck__grammarresultwidget_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param str const char*
///
void k_textgrammarcheck__grammarresultwidget_set_text(void* self, const char* str);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_check_grammar(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresultwidget_on_check_grammar(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_check_grammar` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_check_grammar k_textgrammarcheck__grammarresultwidget_super_check_grammar

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_super_check_grammar(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param infos libqt_list of TextGrammarCheck__GrammarError*
///
void k_textgrammarcheck__grammarresultwidget_apply_grammar_result(void* self, libqt_list infos);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param act TextGrammarCheck__GrammarAction*
///
void k_textgrammarcheck__grammarresultwidget_replace_text(void* self, void* act);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, TextGrammarCheck__GrammarAction* act)
///
void k_textgrammarcheck__grammarresultwidget_on_replace_text(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_check_again(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self)
///
void k_textgrammarcheck__grammarresultwidget_on_check_again(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_close_checker(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self)
///
void k_textgrammarcheck__grammarresultwidget_on_close_checker(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_configure(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self)
///
void k_textgrammarcheck__grammarresultwidget_on_configure(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_add_extra_widget(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresultwidget_on_add_extra_widget(void* self, void (*callback)());

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_add_extra_widget` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_add_extra_widget k_textgrammarcheck__grammarresultwidget_super_add_extra_widget

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_super_add_extra_widget(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textgrammarcheck__grammarresultwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textgrammarcheck__grammarresultwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
uintptr_t k_textgrammarcheck__grammarresultwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
uintptr_t k_textgrammarcheck__grammarresultwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
uintptr_t k_textgrammarcheck__grammarresultwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QStyle* k_textgrammarcheck__grammarresultwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param style QStyle*
///
void k_textgrammarcheck__grammarresultwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_textgrammarcheck__grammarresultwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param windowModality enum Qt__WindowModality
///
void k_textgrammarcheck__grammarresultwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param enabled bool
///
void k_textgrammarcheck__grammarresultwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param disabled bool
///
void k_textgrammarcheck__grammarresultwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param windowModified bool
///
void k_textgrammarcheck__grammarresultwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRect* k_textgrammarcheck__grammarresultwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const QRect* k_textgrammarcheck__grammarresultwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRect* k_textgrammarcheck__grammarresultwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QPoint* k_textgrammarcheck__grammarresultwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRect* k_textgrammarcheck__grammarresultwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRect* k_textgrammarcheck__grammarresultwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRegion* k_textgrammarcheck__grammarresultwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param minimumSize QSize*
///
void k_textgrammarcheck__grammarresultwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param minw int
/// @param minh int
///
void k_textgrammarcheck__grammarresultwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param maximumSize QSize*
///
void k_textgrammarcheck__grammarresultwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param maxw int
/// @param maxh int
///
void k_textgrammarcheck__grammarresultwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param minw int
///
void k_textgrammarcheck__grammarresultwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param minh int
///
void k_textgrammarcheck__grammarresultwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param maxw int
///
void k_textgrammarcheck__grammarresultwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param maxh int
///
void k_textgrammarcheck__grammarresultwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param sizeIncrement QSize*
///
void k_textgrammarcheck__grammarresultwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresultwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param baseSize QSize*
///
void k_textgrammarcheck__grammarresultwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param basew int
/// @param baseh int
///
void k_textgrammarcheck__grammarresultwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param fixedSize QSize*
///
void k_textgrammarcheck__grammarresultwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresultwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param w int
///
void k_textgrammarcheck__grammarresultwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param h int
///
void k_textgrammarcheck__grammarresultwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresultwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresultwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresultwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresultwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresultwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresultwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresultwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresultwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textgrammarcheck__grammarresultwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textgrammarcheck__grammarresultwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textgrammarcheck__grammarresultwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textgrammarcheck__grammarresultwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const QPalette* k_textgrammarcheck__grammarresultwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param palette QPalette*
///
void k_textgrammarcheck__grammarresultwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textgrammarcheck__grammarresultwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textgrammarcheck__grammarresultwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textgrammarcheck__grammarresultwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textgrammarcheck__grammarresultwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const QFont* k_textgrammarcheck__grammarresultwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param font QFont*
///
void k_textgrammarcheck__grammarresultwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QFontMetrics* k_textgrammarcheck__grammarresultwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QFontInfo* k_textgrammarcheck__grammarresultwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QCursor* k_textgrammarcheck__grammarresultwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param cursor QCursor*
///
void k_textgrammarcheck__grammarresultwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param enable bool
///
void k_textgrammarcheck__grammarresultwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param enable bool
///
void k_textgrammarcheck__grammarresultwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param mask QBitmap*
///
void k_textgrammarcheck__grammarresultwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param mask QRegion*
///
void k_textgrammarcheck__grammarresultwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRegion* k_textgrammarcheck__grammarresultwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param target QPaintDevice*
///
void k_textgrammarcheck__grammarresultwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param painter QPainter*
///
void k_textgrammarcheck__grammarresultwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QPixmap* k_textgrammarcheck__grammarresultwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QGraphicsEffect* k_textgrammarcheck__grammarresultwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param effect QGraphicsEffect*
///
void k_textgrammarcheck__grammarresultwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param type enum Qt__GestureType
///
void k_textgrammarcheck__grammarresultwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param type enum Qt__GestureType
///
void k_textgrammarcheck__grammarresultwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param windowTitle const char*
///
void k_textgrammarcheck__grammarresultwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param styleSheet const char*
///
void k_textgrammarcheck__grammarresultwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param icon QIcon*
///
void k_textgrammarcheck__grammarresultwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QIcon* k_textgrammarcheck__grammarresultwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param windowIconText const char*
///
void k_textgrammarcheck__grammarresultwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param windowRole const char*
///
void k_textgrammarcheck__grammarresultwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param filePath const char*
///
void k_textgrammarcheck__grammarresultwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param level double
///
void k_textgrammarcheck__grammarresultwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
double k_textgrammarcheck__grammarresultwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param toolTip const char*
///
void k_textgrammarcheck__grammarresultwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param msec int
///
void k_textgrammarcheck__grammarresultwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param statusTip const char*
///
void k_textgrammarcheck__grammarresultwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param whatsThis const char*
///
void k_textgrammarcheck__grammarresultwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param name const char*
///
void k_textgrammarcheck__grammarresultwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param description const char*
///
void k_textgrammarcheck__grammarresultwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param direction enum Qt__LayoutDirection
///
void k_textgrammarcheck__grammarresultwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textgrammarcheck__grammarresultwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param locale QLocale*
///
void k_textgrammarcheck__grammarresultwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QLocale* k_textgrammarcheck__grammarresultwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param reason enum Qt__FocusReason
///
void k_textgrammarcheck__grammarresultwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textgrammarcheck__grammarresultwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param policy enum Qt__FocusPolicy
///
void k_textgrammarcheck__grammarresultwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textgrammarcheck__grammarresultwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param focusProxy QWidget*
///
void k_textgrammarcheck__grammarresultwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textgrammarcheck__grammarresultwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textgrammarcheck__grammarresultwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QCursor*
///
void k_textgrammarcheck__grammarresultwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param key QKeySequence*
///
int32_t k_textgrammarcheck__grammarresultwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param id int
///
void k_textgrammarcheck__grammarresultwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param id int
///
void k_textgrammarcheck__grammarresultwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param id int
///
void k_textgrammarcheck__grammarresultwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textgrammarcheck__grammarresultwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textgrammarcheck__grammarresultwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param enable bool
///
void k_textgrammarcheck__grammarresultwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QGraphicsProxyWidget* k_textgrammarcheck__grammarresultwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresultwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QRect*
///
void k_textgrammarcheck__grammarresultwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QRegion*
///
void k_textgrammarcheck__grammarresultwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresultwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QRect*
///
void k_textgrammarcheck__grammarresultwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QRegion*
///
void k_textgrammarcheck__grammarresultwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param hidden bool
///
void k_textgrammarcheck__grammarresultwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QWidget*
///
void k_textgrammarcheck__grammarresultwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param x int
/// @param y int
///
void k_textgrammarcheck__grammarresultwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QPoint*
///
void k_textgrammarcheck__grammarresultwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresultwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QSize*
///
void k_textgrammarcheck__grammarresultwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresultwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param geometry QRect*
///
void k_textgrammarcheck__grammarresultwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
char* k_textgrammarcheck__grammarresultwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param geometry char*
///
bool k_textgrammarcheck__grammarresultwidget_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textgrammarcheck__grammarresultwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param state flag of enum Qt__WindowState
///
void k_textgrammarcheck__grammarresultwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param state flag of enum Qt__WindowState
///
void k_textgrammarcheck__grammarresultwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSizePolicy* k_textgrammarcheck__grammarresultwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param sizePolicy QSizePolicy*
///
void k_textgrammarcheck__grammarresultwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textgrammarcheck__grammarresultwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRegion* k_textgrammarcheck__grammarresultwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textgrammarcheck__grammarresultwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param margins QMargins*
///
void k_textgrammarcheck__grammarresultwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QMargins* k_textgrammarcheck__grammarresultwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QRect* k_textgrammarcheck__grammarresultwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QLayout* k_textgrammarcheck__grammarresultwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param layout QLayout*
///
void k_textgrammarcheck__grammarresultwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param parent QWidget*
///
void k_textgrammarcheck__grammarresultwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textgrammarcheck__grammarresultwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param dx int
/// @param dy int
///
void k_textgrammarcheck__grammarresultwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textgrammarcheck__grammarresultwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param on bool
///
void k_textgrammarcheck__grammarresultwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param action QAction*
///
void k_textgrammarcheck__grammarresultwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param actions libqt_list of QAction*
///
void k_textgrammarcheck__grammarresultwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textgrammarcheck__grammarresultwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param before QAction*
/// @param action QAction*
///
void k_textgrammarcheck__grammarresultwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param action QAction*
///
void k_textgrammarcheck__grammarresultwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_textgrammarcheck__grammarresultwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param text const char*
///
QAction* k_textgrammarcheck__grammarresultwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textgrammarcheck__grammarresultwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textgrammarcheck__grammarresultwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textgrammarcheck__grammarresultwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param type flag of enum Qt__WindowType
///
void k_textgrammarcheck__grammarresultwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textgrammarcheck__grammarresultwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum Qt__WindowType
///
void k_textgrammarcheck__grammarresultwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param type flag of enum Qt__WindowType
///
void k_textgrammarcheck__grammarresultwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return enum Qt__WindowType
///
int32_t k_textgrammarcheck__grammarresultwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_textgrammarcheck__grammarresultwidget_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param x int
/// @param y int
///
QWidget* k_textgrammarcheck__grammarresultwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param p QPoint*
///
QWidget* k_textgrammarcheck__grammarresultwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param p QPointF*
///
QWidget* k_textgrammarcheck__grammarresultwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textgrammarcheck__grammarresultwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textgrammarcheck__grammarresultwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param child QWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param enabled bool
///
void k_textgrammarcheck__grammarresultwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QBackingStore* k_textgrammarcheck__grammarresultwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QWindow* k_textgrammarcheck__grammarresultwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QScreen* k_textgrammarcheck__grammarresultwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param screen QScreen*
///
void k_textgrammarcheck__grammarresultwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textgrammarcheck__grammarresultwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param title const char*
///
void k_textgrammarcheck__grammarresultwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, const char* title)
///
void k_textgrammarcheck__grammarresultwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param icon QIcon*
///
void k_textgrammarcheck__grammarresultwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QIcon* icon)
///
void k_textgrammarcheck__grammarresultwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param iconText const char*
///
void k_textgrammarcheck__grammarresultwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, const char* iconText)
///
void k_textgrammarcheck__grammarresultwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param pos QPoint*
///
void k_textgrammarcheck__grammarresultwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QPoint* pos)
///
void k_textgrammarcheck__grammarresultwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textgrammarcheck__grammarresultwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textgrammarcheck__grammarresultwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textgrammarcheck__grammarresultwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textgrammarcheck__grammarresultwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textgrammarcheck__grammarresultwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textgrammarcheck__grammarresultwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textgrammarcheck__grammarresultwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textgrammarcheck__grammarresultwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param rectangle QRect*
///
QPixmap* k_textgrammarcheck__grammarresultwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textgrammarcheck__grammarresultwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textgrammarcheck__grammarresultwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param id int
/// @param enable bool
///
void k_textgrammarcheck__grammarresultwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param id int
/// @param enable bool
///
void k_textgrammarcheck__grammarresultwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textgrammarcheck__grammarresultwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textgrammarcheck__grammarresultwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textgrammarcheck__grammarresultwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textgrammarcheck__grammarresultwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char* k_textgrammarcheck__grammarresultwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param name const char*
///
void k_textgrammarcheck__grammarresultwidget_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param b bool
///
bool k_textgrammarcheck__grammarresultwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QThread* k_textgrammarcheck__grammarresultwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param thread QThread*
///
bool k_textgrammarcheck__grammarresultwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param interval int
///
int32_t k_textgrammarcheck__grammarresultwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param time int64_t of nanoseconds
///
int32_t k_textgrammarcheck__grammarresultwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param id int
///
void k_textgrammarcheck__grammarresultwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param id enum Qt__TimerId
///
void k_textgrammarcheck__grammarresultwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
/// @return libqt_list of QObject*
///
libqt_list k_textgrammarcheck__grammarresultwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param filterObj QObject*
///
void k_textgrammarcheck__grammarresultwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param obj QObject*
///
void k_textgrammarcheck__grammarresultwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__grammarresultwidget_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textgrammarcheck__grammarresultwidget_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__grammarresultwidget_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param receiver QObject*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_textgrammarcheck__grammarresultwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param name const char*
///
QVariant* k_textgrammarcheck__grammarresultwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const char** k_textgrammarcheck__grammarresultwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QBindingStorage* k_textgrammarcheck__grammarresultwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
const QBindingStorage* k_textgrammarcheck__grammarresultwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self)
///
void k_textgrammarcheck__grammarresultwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QObject* k_textgrammarcheck__grammarresultwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param classname const char*
///
bool k_textgrammarcheck__grammarresultwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__grammarresultwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__grammarresultwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textgrammarcheck__grammarresultwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textgrammarcheck__grammarresultwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textgrammarcheck__grammarresultwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal const char*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammarresultwidget_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QObject*
///
void k_textgrammarcheck__grammarresultwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QObject* param1)
///
void k_textgrammarcheck__grammarresultwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
double k_textgrammarcheck__grammarresultwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
double k_textgrammarcheck__grammarresultwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textgrammarcheck__grammarresultwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textgrammarcheck__grammarresultwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_dev_type` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_dev_type k_textgrammarcheck__grammarresultwidget_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback int32_t func()
///
void k_textgrammarcheck__grammarresultwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param visible bool
///
void k_textgrammarcheck__grammarresultwidget_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_set_visible` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_set_visible k_textgrammarcheck__grammarresultwidget_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param visible bool
///
void k_textgrammarcheck__grammarresultwidget_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, bool visible)
///
void k_textgrammarcheck__grammarresultwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_size_hint` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_size_hint k_textgrammarcheck__grammarresultwidget_super_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_super_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback QSize* func()
///
void k_textgrammarcheck__grammarresultwidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_minimum_size_hint` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_minimum_size_hint k_textgrammarcheck__grammarresultwidget_super_minimum_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QSize* k_textgrammarcheck__grammarresultwidget_super_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback QSize* func()
///
void k_textgrammarcheck__grammarresultwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 int
///
int32_t k_textgrammarcheck__grammarresultwidget_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_height_for_width` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_height_for_width k_textgrammarcheck__grammarresultwidget_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 int
///
int32_t k_textgrammarcheck__grammarresultwidget_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultWidget* self, int param1)
///
void k_textgrammarcheck__grammarresultwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_has_height_for_width` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_has_height_for_width k_textgrammarcheck__grammarresultwidget_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func()
///
void k_textgrammarcheck__grammarresultwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QPaintEngine* k_textgrammarcheck__grammarresultwidget_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_paint_engine` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_paint_engine k_textgrammarcheck__grammarresultwidget_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QPaintEngine* k_textgrammarcheck__grammarresultwidget_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback QPaintEngine* func()
///
void k_textgrammarcheck__grammarresultwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammarresultwidget_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_event k_textgrammarcheck__grammarresultwidget_super_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammarresultwidget_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func(TextGrammarCheck__GrammarResultWidget* self, QEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_mouse_press_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_mouse_press_event k_textgrammarcheck__grammarresultwidget_super_mouse_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_mouse_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_mouse_release_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_mouse_release_event k_textgrammarcheck__grammarresultwidget_super_mouse_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_mouse_double_click_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_mouse_double_click_event k_textgrammarcheck__grammarresultwidget_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_mouse_move_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_mouse_move_event k_textgrammarcheck__grammarresultwidget_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMouseEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QMouseEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QWheelEvent*
///
void k_textgrammarcheck__grammarresultwidget_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_wheel_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_wheel_event k_textgrammarcheck__grammarresultwidget_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QWheelEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QWheelEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QKeyEvent*
///
void k_textgrammarcheck__grammarresultwidget_key_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_key_press_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_key_press_event k_textgrammarcheck__grammarresultwidget_super_key_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QKeyEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QKeyEvent*
///
void k_textgrammarcheck__grammarresultwidget_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_key_release_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_key_release_event k_textgrammarcheck__grammarresultwidget_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QKeyEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QKeyEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__grammarresultwidget_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_focus_in_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_focus_in_event k_textgrammarcheck__grammarresultwidget_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__grammarresultwidget_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_focus_out_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_focus_out_event k_textgrammarcheck__grammarresultwidget_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QFocusEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QFocusEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEnterEvent*
///
void k_textgrammarcheck__grammarresultwidget_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_enter_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_enter_event k_textgrammarcheck__grammarresultwidget_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEnterEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QEnterEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresultwidget_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_leave_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_leave_event k_textgrammarcheck__grammarresultwidget_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QPaintEvent*
///
void k_textgrammarcheck__grammarresultwidget_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_paint_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_paint_event k_textgrammarcheck__grammarresultwidget_super_paint_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QPaintEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QPaintEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMoveEvent*
///
void k_textgrammarcheck__grammarresultwidget_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_move_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_move_event k_textgrammarcheck__grammarresultwidget_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QMoveEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QMoveEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QResizeEvent*
///
void k_textgrammarcheck__grammarresultwidget_resize_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_resize_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_resize_event k_textgrammarcheck__grammarresultwidget_super_resize_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QResizeEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QResizeEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QCloseEvent*
///
void k_textgrammarcheck__grammarresultwidget_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_close_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_close_event k_textgrammarcheck__grammarresultwidget_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QCloseEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QCloseEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QContextMenuEvent*
///
void k_textgrammarcheck__grammarresultwidget_context_menu_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_context_menu_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_context_menu_event k_textgrammarcheck__grammarresultwidget_super_context_menu_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QContextMenuEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QContextMenuEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QTabletEvent*
///
void k_textgrammarcheck__grammarresultwidget_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_tablet_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_tablet_event k_textgrammarcheck__grammarresultwidget_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QTabletEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QTabletEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QActionEvent*
///
void k_textgrammarcheck__grammarresultwidget_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_action_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_action_event k_textgrammarcheck__grammarresultwidget_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QActionEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QActionEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDragEnterEvent*
///
void k_textgrammarcheck__grammarresultwidget_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_drag_enter_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_drag_enter_event k_textgrammarcheck__grammarresultwidget_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDragEnterEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QDragEnterEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDragMoveEvent*
///
void k_textgrammarcheck__grammarresultwidget_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_drag_move_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_drag_move_event k_textgrammarcheck__grammarresultwidget_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDragMoveEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QDragMoveEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDragLeaveEvent*
///
void k_textgrammarcheck__grammarresultwidget_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_drag_leave_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_drag_leave_event k_textgrammarcheck__grammarresultwidget_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDragLeaveEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QDragLeaveEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDropEvent*
///
void k_textgrammarcheck__grammarresultwidget_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_drop_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_drop_event k_textgrammarcheck__grammarresultwidget_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QDropEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QDropEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QShowEvent*
///
void k_textgrammarcheck__grammarresultwidget_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_show_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_show_event k_textgrammarcheck__grammarresultwidget_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QShowEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QShowEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QHideEvent*
///
void k_textgrammarcheck__grammarresultwidget_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_hide_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_hide_event k_textgrammarcheck__grammarresultwidget_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QHideEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QHideEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textgrammarcheck__grammarresultwidget_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_native_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_native_event k_textgrammarcheck__grammarresultwidget_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textgrammarcheck__grammarresultwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func(TextGrammarCheck__GrammarResultWidget* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textgrammarcheck__grammarresultwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QEvent*
///
void k_textgrammarcheck__grammarresultwidget_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_change_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_change_event k_textgrammarcheck__grammarresultwidget_super_change_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QEvent* param1)
///
void k_textgrammarcheck__grammarresultwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textgrammarcheck__grammarresultwidget_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_metric` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_metric k_textgrammarcheck__grammarresultwidget_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textgrammarcheck__grammarresultwidget_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textgrammarcheck__grammarresultwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param painter QPainter*
///
void k_textgrammarcheck__grammarresultwidget_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_init_painter` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_init_painter k_textgrammarcheck__grammarresultwidget_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param painter QPainter*
///
void k_textgrammarcheck__grammarresultwidget_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QPainter* painter)
///
void k_textgrammarcheck__grammarresultwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param offset QPoint*
///
QPaintDevice* k_textgrammarcheck__grammarresultwidget_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_redirected` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_redirected k_textgrammarcheck__grammarresultwidget_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param offset QPoint*
///
QPaintDevice* k_textgrammarcheck__grammarresultwidget_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback QPaintDevice* func(TextGrammarCheck__GrammarResultWidget* self, QPoint* offset)
///
void k_textgrammarcheck__grammarresultwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QPainter* k_textgrammarcheck__grammarresultwidget_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_shared_painter` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_shared_painter k_textgrammarcheck__grammarresultwidget_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QPainter* k_textgrammarcheck__grammarresultwidget_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback QPainter* func()
///
void k_textgrammarcheck__grammarresultwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QInputMethodEvent*
///
void k_textgrammarcheck__grammarresultwidget_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_input_method_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_input_method_event k_textgrammarcheck__grammarresultwidget_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 QInputMethodEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QInputMethodEvent* param1)
///
void k_textgrammarcheck__grammarresultwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textgrammarcheck__grammarresultwidget_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_input_method_query` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_input_method_query k_textgrammarcheck__grammarresultwidget_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textgrammarcheck__grammarresultwidget_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback QVariant* func(TextGrammarCheck__GrammarResultWidget* self, enum Qt__InputMethodQuery param1)
///
void k_textgrammarcheck__grammarresultwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param next bool
///
bool k_textgrammarcheck__grammarresultwidget_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_focus_next_prev_child` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_focus_next_prev_child k_textgrammarcheck__grammarresultwidget_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param next bool
///
bool k_textgrammarcheck__grammarresultwidget_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func(TextGrammarCheck__GrammarResultWidget* self, bool next)
///
void k_textgrammarcheck__grammarresultwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammarresultwidget_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_event_filter` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_event_filter k_textgrammarcheck__grammarresultwidget_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textgrammarcheck__grammarresultwidget_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func(TextGrammarCheck__GrammarResultWidget* self, QObject* watched, QEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QTimerEvent*
///
void k_textgrammarcheck__grammarresultwidget_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_timer_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_timer_event k_textgrammarcheck__grammarresultwidget_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QTimerEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QTimerEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QChildEvent*
///
void k_textgrammarcheck__grammarresultwidget_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_child_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_child_event k_textgrammarcheck__grammarresultwidget_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QChildEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QChildEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresultwidget_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_custom_event` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_custom_event k_textgrammarcheck__grammarresultwidget_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresultwidget_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QEvent* event)
///
void k_textgrammarcheck__grammarresultwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresultwidget_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_connect_notify` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_connect_notify k_textgrammarcheck__grammarresultwidget_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresultwidget_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammarresultwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresultwidget_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_disconnect_notify` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_disconnect_notify k_textgrammarcheck__grammarresultwidget_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresultwidget_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammarresultwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_update_micro_focus` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_update_micro_focus k_textgrammarcheck__grammarresultwidget_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresultwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_create(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_create` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_create k_textgrammarcheck__grammarresultwidget_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresultwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_destroy(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_destroy` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_destroy k_textgrammarcheck__grammarresultwidget_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresultwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_focus_next_child` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_focus_next_child k_textgrammarcheck__grammarresultwidget_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func()
///
void k_textgrammarcheck__grammarresultwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_focus_previous_child` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_focus_previous_child k_textgrammarcheck__grammarresultwidget_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
bool k_textgrammarcheck__grammarresultwidget_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func()
///
void k_textgrammarcheck__grammarresultwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QObject* k_textgrammarcheck__grammarresultwidget_sender(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_sender` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_sender k_textgrammarcheck__grammarresultwidget_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
QObject* k_textgrammarcheck__grammarresultwidget_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback QObject* func()
///
void k_textgrammarcheck__grammarresultwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_sender_signal_index` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_sender_signal_index k_textgrammarcheck__grammarresultwidget_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
int32_t k_textgrammarcheck__grammarresultwidget_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback int32_t func()
///
void k_textgrammarcheck__grammarresultwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal const char*
///
int32_t k_textgrammarcheck__grammarresultwidget_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_receivers` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_receivers k_textgrammarcheck__grammarresultwidget_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal const char*
///
int32_t k_textgrammarcheck__grammarresultwidget_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultWidget* self, const char* signal)
///
void k_textgrammarcheck__grammarresultwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__grammarresultwidget_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_is_signal_connected` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_is_signal_connected k_textgrammarcheck__grammarresultwidget_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__grammarresultwidget_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback bool func(TextGrammarCheck__GrammarResultWidget* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammarresultwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textgrammarcheck__grammarresultwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresultwidget_super_get_decoded_metric_f` instead
///
#define k_textgrammarcheck__grammarresultwidget_qbase_get_decoded_metric_f k_textgrammarcheck__grammarresultwidget_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textgrammarcheck__grammarresultwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback double func(TextGrammarCheck__GrammarResultWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textgrammarcheck__grammarresultwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextGrammarCheck__GrammarResultWidget*
/// @param callback void func(TextGrammarCheck__GrammarResultWidget* self, const char* objectName)
///
void k_textgrammarcheck__grammarresultwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultWidget.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextGrammarCheck__GrammarResultWidget*
///
void k_textgrammarcheck__grammarresultwidget_delete(void* self);

#endif
