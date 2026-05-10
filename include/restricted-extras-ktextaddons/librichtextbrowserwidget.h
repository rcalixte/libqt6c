#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBRICHTEXTBROWSERWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBRICHTEXTBROWSERWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)

/// k_textcustomeditor__richtextbrowserwidget_new constructs a new TextCustomEditor::RichTextBrowserWidget object.
///
/// @param parent QWidget*
///
TextCustomEditor__RichTextBrowserWidget* k_textcustomeditor__richtextbrowserwidget_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)

/// k_textcustomeditor__richtextbrowserwidget_new2 constructs a new TextCustomEditor::RichTextBrowserWidget object.
///
TextCustomEditor__RichTextBrowserWidget* k_textcustomeditor__richtextbrowserwidget_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)

/// k_textcustomeditor__richtextbrowserwidget_new3 constructs a new TextCustomEditor::RichTextBrowserWidget object.
///
/// @param customEditor TextCustomEditor__RichTextBrowser*
///
TextCustomEditor__RichTextBrowserWidget* k_textcustomeditor__richtextbrowserwidget_new3(void* customEditor);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)

/// k_textcustomeditor__richtextbrowserwidget_new4 constructs a new TextCustomEditor::RichTextBrowserWidget object.
///
/// @param customEditor TextCustomEditor__RichTextBrowser*
/// @param parent QWidget*
///
TextCustomEditor__RichTextBrowserWidget* k_textcustomeditor__richtextbrowserwidget_new4(void* customEditor, void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const QMetaObject* k_textcustomeditor__richtextbrowserwidget_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback const QMetaObject* func()
///
void k_textcustomeditor__richtextbrowserwidget_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_meta_object` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_meta_object k_textcustomeditor__richtextbrowserwidget_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const QMetaObject* k_textcustomeditor__richtextbrowserwidget_super_meta_object(void* self);

/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 const char*
///
void* k_textcustomeditor__richtextbrowserwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void* func(TextCustomEditor__RichTextBrowserWidget* self, const char* param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_metacast` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_metacast k_textcustomeditor__richtextbrowserwidget_super_metacast

/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 const char*
///
void* k_textcustomeditor__richtextbrowserwidget_super_metacast(void* self, const char* param1);

/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__richtextbrowserwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textcustomeditor__richtextbrowserwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_metacall` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_metacall k_textcustomeditor__richtextbrowserwidget_super_metacall

/// Base class method implementation
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textcustomeditor__richtextbrowserwidget_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_clear(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
TextCustomEditor__RichTextBrowser* k_textcustomeditor__richtextbrowserwidget_editor(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param html const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_html(void* self, const char* html);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_to_html(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param text const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_plain_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_to_plain_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param b bool
///
void k_textcustomeditor__richtextbrowserwidget_set_accept_rich_text(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_accept_rich_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_slot_find_next(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_slot_find(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textcustomeditor__richtextbrowserwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textcustomeditor__richtextbrowserwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
uintptr_t k_textcustomeditor__richtextbrowserwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
uintptr_t k_textcustomeditor__richtextbrowserwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
uintptr_t k_textcustomeditor__richtextbrowserwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QStyle* k_textcustomeditor__richtextbrowserwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param style QStyle*
///
void k_textcustomeditor__richtextbrowserwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param windowModality enum Qt__WindowModality
///
void k_textcustomeditor__richtextbrowserwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param enabled bool
///
void k_textcustomeditor__richtextbrowserwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param disabled bool
///
void k_textcustomeditor__richtextbrowserwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param windowModified bool
///
void k_textcustomeditor__richtextbrowserwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const QRect* k_textcustomeditor__richtextbrowserwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRegion* k_textcustomeditor__richtextbrowserwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param minimumSize QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param minw int
/// @param minh int
///
void k_textcustomeditor__richtextbrowserwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param maximumSize QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param maxw int
/// @param maxh int
///
void k_textcustomeditor__richtextbrowserwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param minw int
///
void k_textcustomeditor__richtextbrowserwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param minh int
///
void k_textcustomeditor__richtextbrowserwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param maxw int
///
void k_textcustomeditor__richtextbrowserwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param maxh int
///
void k_textcustomeditor__richtextbrowserwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param sizeIncrement QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param baseSize QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param basew int
/// @param baseh int
///
void k_textcustomeditor__richtextbrowserwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param fixedSize QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param w int
///
void k_textcustomeditor__richtextbrowserwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param h int
///
void k_textcustomeditor__richtextbrowserwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const QPalette* k_textcustomeditor__richtextbrowserwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param palette QPalette*
///
void k_textcustomeditor__richtextbrowserwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textcustomeditor__richtextbrowserwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__richtextbrowserwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textcustomeditor__richtextbrowserwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__richtextbrowserwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const QFont* k_textcustomeditor__richtextbrowserwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param font QFont*
///
void k_textcustomeditor__richtextbrowserwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QFontMetrics* k_textcustomeditor__richtextbrowserwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QFontInfo* k_textcustomeditor__richtextbrowserwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QCursor* k_textcustomeditor__richtextbrowserwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param cursor QCursor*
///
void k_textcustomeditor__richtextbrowserwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param mask QBitmap*
///
void k_textcustomeditor__richtextbrowserwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param mask QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRegion* k_textcustomeditor__richtextbrowserwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param target QPaintDevice*
///
void k_textcustomeditor__richtextbrowserwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QPixmap* k_textcustomeditor__richtextbrowserwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QGraphicsEffect* k_textcustomeditor__richtextbrowserwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param effect QGraphicsEffect*
///
void k_textcustomeditor__richtextbrowserwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param type enum Qt__GestureType
///
void k_textcustomeditor__richtextbrowserwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param type enum Qt__GestureType
///
void k_textcustomeditor__richtextbrowserwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param windowTitle const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param styleSheet const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param icon QIcon*
///
void k_textcustomeditor__richtextbrowserwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QIcon* k_textcustomeditor__richtextbrowserwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param windowIconText const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param windowRole const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param filePath const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param level double
///
void k_textcustomeditor__richtextbrowserwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
double k_textcustomeditor__richtextbrowserwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param toolTip const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param msec int
///
void k_textcustomeditor__richtextbrowserwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param statusTip const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param whatsThis const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param name const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param description const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param direction enum Qt__LayoutDirection
///
void k_textcustomeditor__richtextbrowserwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textcustomeditor__richtextbrowserwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param locale QLocale*
///
void k_textcustomeditor__richtextbrowserwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QLocale* k_textcustomeditor__richtextbrowserwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param reason enum Qt__FocusReason
///
void k_textcustomeditor__richtextbrowserwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textcustomeditor__richtextbrowserwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param policy enum Qt__FocusPolicy
///
void k_textcustomeditor__richtextbrowserwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textcustomeditor__richtextbrowserwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param focusProxy QWidget*
///
void k_textcustomeditor__richtextbrowserwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textcustomeditor__richtextbrowserwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textcustomeditor__richtextbrowserwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QCursor*
///
void k_textcustomeditor__richtextbrowserwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param key QKeySequence*
///
int32_t k_textcustomeditor__richtextbrowserwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param id int
///
void k_textcustomeditor__richtextbrowserwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param id int
///
void k_textcustomeditor__richtextbrowserwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param id int
///
void k_textcustomeditor__richtextbrowserwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textcustomeditor__richtextbrowserwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textcustomeditor__richtextbrowserwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QGraphicsProxyWidget* k_textcustomeditor__richtextbrowserwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QRect*
///
void k_textcustomeditor__richtextbrowserwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QRect*
///
void k_textcustomeditor__richtextbrowserwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param hidden bool
///
void k_textcustomeditor__richtextbrowserwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
///
void k_textcustomeditor__richtextbrowserwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param x int
/// @param y int
///
void k_textcustomeditor__richtextbrowserwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
void k_textcustomeditor__richtextbrowserwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QSize*
///
void k_textcustomeditor__richtextbrowserwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textcustomeditor__richtextbrowserwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param geometry QRect*
///
void k_textcustomeditor__richtextbrowserwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
char* k_textcustomeditor__richtextbrowserwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param geometry char*
///
bool k_textcustomeditor__richtextbrowserwidget_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param state flag of enum Qt__WindowState
///
void k_textcustomeditor__richtextbrowserwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param state flag of enum Qt__WindowState
///
void k_textcustomeditor__richtextbrowserwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSizePolicy* k_textcustomeditor__richtextbrowserwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param sizePolicy QSizePolicy*
///
void k_textcustomeditor__richtextbrowserwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textcustomeditor__richtextbrowserwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRegion* k_textcustomeditor__richtextbrowserwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textcustomeditor__richtextbrowserwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param margins QMargins*
///
void k_textcustomeditor__richtextbrowserwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QMargins* k_textcustomeditor__richtextbrowserwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QLayout* k_textcustomeditor__richtextbrowserwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param layout QLayout*
///
void k_textcustomeditor__richtextbrowserwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param parent QWidget*
///
void k_textcustomeditor__richtextbrowserwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param dx int
/// @param dy int
///
void k_textcustomeditor__richtextbrowserwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textcustomeditor__richtextbrowserwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param on bool
///
void k_textcustomeditor__richtextbrowserwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param action QAction*
///
void k_textcustomeditor__richtextbrowserwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param actions libqt_list of QAction*
///
void k_textcustomeditor__richtextbrowserwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textcustomeditor__richtextbrowserwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param before QAction*
/// @param action QAction*
///
void k_textcustomeditor__richtextbrowserwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param action QAction*
///
void k_textcustomeditor__richtextbrowserwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_textcustomeditor__richtextbrowserwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param text const char*
///
QAction* k_textcustomeditor__richtextbrowserwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textcustomeditor__richtextbrowserwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__richtextbrowserwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__richtextbrowserwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param type flag of enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param type flag of enum Qt__WindowType
///
void k_textcustomeditor__richtextbrowserwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__WindowType
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_textcustomeditor__richtextbrowserwidget_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param x int
/// @param y int
///
QWidget* k_textcustomeditor__richtextbrowserwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param p QPoint*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param p QPointF*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textcustomeditor__richtextbrowserwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textcustomeditor__richtextbrowserwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param child QWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param enabled bool
///
void k_textcustomeditor__richtextbrowserwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QBackingStore* k_textcustomeditor__richtextbrowserwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QWindow* k_textcustomeditor__richtextbrowserwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QScreen* k_textcustomeditor__richtextbrowserwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param screen QScreen*
///
void k_textcustomeditor__richtextbrowserwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param title const char*
///
void k_textcustomeditor__richtextbrowserwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, const char* title)
///
void k_textcustomeditor__richtextbrowserwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param icon QIcon*
///
void k_textcustomeditor__richtextbrowserwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QIcon* icon)
///
void k_textcustomeditor__richtextbrowserwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param iconText const char*
///
void k_textcustomeditor__richtextbrowserwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, const char* iconText)
///
void k_textcustomeditor__richtextbrowserwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param pos QPoint*
///
void k_textcustomeditor__richtextbrowserwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QPoint* pos)
///
void k_textcustomeditor__richtextbrowserwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textcustomeditor__richtextbrowserwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textcustomeditor__richtextbrowserwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textcustomeditor__richtextbrowserwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textcustomeditor__richtextbrowserwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textcustomeditor__richtextbrowserwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textcustomeditor__richtextbrowserwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param rectangle QRect*
///
QPixmap* k_textcustomeditor__richtextbrowserwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textcustomeditor__richtextbrowserwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textcustomeditor__richtextbrowserwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param id int
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param id int
/// @param enable bool
///
void k_textcustomeditor__richtextbrowserwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textcustomeditor__richtextbrowserwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textcustomeditor__richtextbrowserwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textcustomeditor__richtextbrowserwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param name const char*
///
void k_textcustomeditor__richtextbrowserwidget_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param b bool
///
bool k_textcustomeditor__richtextbrowserwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QThread* k_textcustomeditor__richtextbrowserwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param thread QThread*
///
bool k_textcustomeditor__richtextbrowserwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param interval int
///
int32_t k_textcustomeditor__richtextbrowserwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param time int64_t of nanoseconds
///
int32_t k_textcustomeditor__richtextbrowserwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param id int
///
void k_textcustomeditor__richtextbrowserwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param id enum Qt__TimerId
///
void k_textcustomeditor__richtextbrowserwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
/// @return libqt_list of QObject*
///
libqt_list k_textcustomeditor__richtextbrowserwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param filterObj QObject*
///
void k_textcustomeditor__richtextbrowserwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param obj QObject*
///
void k_textcustomeditor__richtextbrowserwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param receiver QObject*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_textcustomeditor__richtextbrowserwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param name const char*
///
QVariant* k_textcustomeditor__richtextbrowserwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const char** k_textcustomeditor__richtextbrowserwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QBindingStorage* k_textcustomeditor__richtextbrowserwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
const QBindingStorage* k_textcustomeditor__richtextbrowserwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QObject* k_textcustomeditor__richtextbrowserwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param classname const char*
///
bool k_textcustomeditor__richtextbrowserwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__richtextbrowserwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__richtextbrowserwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QObject*
///
void k_textcustomeditor__richtextbrowserwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QObject* param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
double k_textcustomeditor__richtextbrowserwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
double k_textcustomeditor__richtextbrowserwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textcustomeditor__richtextbrowserwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textcustomeditor__richtextbrowserwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_dev_type` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_dev_type k_textcustomeditor__richtextbrowserwidget_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func()
///
void k_textcustomeditor__richtextbrowserwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param visible bool
///
void k_textcustomeditor__richtextbrowserwidget_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_set_visible` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_set_visible k_textcustomeditor__richtextbrowserwidget_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param visible bool
///
void k_textcustomeditor__richtextbrowserwidget_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, bool visible)
///
void k_textcustomeditor__richtextbrowserwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_size_hint` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_size_hint k_textcustomeditor__richtextbrowserwidget_super_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_super_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback QSize* func()
///
void k_textcustomeditor__richtextbrowserwidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_minimum_size_hint` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_minimum_size_hint k_textcustomeditor__richtextbrowserwidget_super_minimum_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_super_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback QSize* func()
///
void k_textcustomeditor__richtextbrowserwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 int
///
int32_t k_textcustomeditor__richtextbrowserwidget_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_height_for_width` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_height_for_width k_textcustomeditor__richtextbrowserwidget_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 int
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self, int param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_has_height_for_width` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_has_height_for_width k_textcustomeditor__richtextbrowserwidget_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QPaintEngine* k_textcustomeditor__richtextbrowserwidget_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_paint_engine` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_paint_engine k_textcustomeditor__richtextbrowserwidget_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QPaintEngine* k_textcustomeditor__richtextbrowserwidget_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback QPaintEngine* func()
///
void k_textcustomeditor__richtextbrowserwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEvent*
///
bool k_textcustomeditor__richtextbrowserwidget_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_event k_textcustomeditor__richtextbrowserwidget_super_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEvent*
///
bool k_textcustomeditor__richtextbrowserwidget_super_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_mouse_press_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_mouse_press_event k_textcustomeditor__richtextbrowserwidget_super_mouse_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_mouse_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_mouse_release_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_mouse_release_event k_textcustomeditor__richtextbrowserwidget_super_mouse_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_mouse_double_click_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_mouse_double_click_event k_textcustomeditor__richtextbrowserwidget_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_mouse_move_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_mouse_move_event k_textcustomeditor__richtextbrowserwidget_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMouseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMouseEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QWheelEvent*
///
void k_textcustomeditor__richtextbrowserwidget_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_wheel_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_wheel_event k_textcustomeditor__richtextbrowserwidget_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QWheelEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QWheelEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserwidget_key_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_key_press_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_key_press_event k_textcustomeditor__richtextbrowserwidget_super_key_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserwidget_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_key_release_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_key_release_event k_textcustomeditor__richtextbrowserwidget_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QKeyEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QKeyEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserwidget_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_focus_in_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_focus_in_event k_textcustomeditor__richtextbrowserwidget_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserwidget_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_focus_out_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_focus_out_event k_textcustomeditor__richtextbrowserwidget_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QFocusEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QFocusEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEnterEvent*
///
void k_textcustomeditor__richtextbrowserwidget_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_enter_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_enter_event k_textcustomeditor__richtextbrowserwidget_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEnterEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QEnterEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserwidget_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_leave_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_leave_event k_textcustomeditor__richtextbrowserwidget_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QPaintEvent*
///
void k_textcustomeditor__richtextbrowserwidget_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_paint_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_paint_event k_textcustomeditor__richtextbrowserwidget_super_paint_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QPaintEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QPaintEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMoveEvent*
///
void k_textcustomeditor__richtextbrowserwidget_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_move_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_move_event k_textcustomeditor__richtextbrowserwidget_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QMoveEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMoveEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QResizeEvent*
///
void k_textcustomeditor__richtextbrowserwidget_resize_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_resize_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_resize_event k_textcustomeditor__richtextbrowserwidget_super_resize_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QResizeEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QResizeEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QCloseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_close_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_close_event k_textcustomeditor__richtextbrowserwidget_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QCloseEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QCloseEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QContextMenuEvent*
///
void k_textcustomeditor__richtextbrowserwidget_context_menu_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_context_menu_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_context_menu_event k_textcustomeditor__richtextbrowserwidget_super_context_menu_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QContextMenuEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QContextMenuEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QTabletEvent*
///
void k_textcustomeditor__richtextbrowserwidget_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_tablet_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_tablet_event k_textcustomeditor__richtextbrowserwidget_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QTabletEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QTabletEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QActionEvent*
///
void k_textcustomeditor__richtextbrowserwidget_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_action_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_action_event k_textcustomeditor__richtextbrowserwidget_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QActionEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QActionEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDragEnterEvent*
///
void k_textcustomeditor__richtextbrowserwidget_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_drag_enter_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_drag_enter_event k_textcustomeditor__richtextbrowserwidget_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDragEnterEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QDragEnterEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDragMoveEvent*
///
void k_textcustomeditor__richtextbrowserwidget_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_drag_move_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_drag_move_event k_textcustomeditor__richtextbrowserwidget_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDragMoveEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QDragMoveEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDragLeaveEvent*
///
void k_textcustomeditor__richtextbrowserwidget_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_drag_leave_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_drag_leave_event k_textcustomeditor__richtextbrowserwidget_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDragLeaveEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QDragLeaveEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDropEvent*
///
void k_textcustomeditor__richtextbrowserwidget_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_drop_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_drop_event k_textcustomeditor__richtextbrowserwidget_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QDropEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QDropEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QShowEvent*
///
void k_textcustomeditor__richtextbrowserwidget_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_show_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_show_event k_textcustomeditor__richtextbrowserwidget_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QShowEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QShowEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QHideEvent*
///
void k_textcustomeditor__richtextbrowserwidget_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_hide_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_hide_event k_textcustomeditor__richtextbrowserwidget_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QHideEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QHideEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textcustomeditor__richtextbrowserwidget_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_native_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_native_event k_textcustomeditor__richtextbrowserwidget_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textcustomeditor__richtextbrowserwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textcustomeditor__richtextbrowserwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QEvent*
///
void k_textcustomeditor__richtextbrowserwidget_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_change_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_change_event k_textcustomeditor__richtextbrowserwidget_super_change_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QEvent* param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__richtextbrowserwidget_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_metric` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_metric k_textcustomeditor__richtextbrowserwidget_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserwidget_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_init_painter` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_init_painter k_textcustomeditor__richtextbrowserwidget_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserwidget_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QPainter* painter)
///
void k_textcustomeditor__richtextbrowserwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__richtextbrowserwidget_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_redirected` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_redirected k_textcustomeditor__richtextbrowserwidget_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__richtextbrowserwidget_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback QPaintDevice* func(TextCustomEditor__RichTextBrowserWidget* self, QPoint* offset)
///
void k_textcustomeditor__richtextbrowserwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QPainter* k_textcustomeditor__richtextbrowserwidget_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_shared_painter` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_shared_painter k_textcustomeditor__richtextbrowserwidget_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QPainter* k_textcustomeditor__richtextbrowserwidget_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback QPainter* func()
///
void k_textcustomeditor__richtextbrowserwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QInputMethodEvent*
///
void k_textcustomeditor__richtextbrowserwidget_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_input_method_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_input_method_event k_textcustomeditor__richtextbrowserwidget_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QInputMethodEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QInputMethodEvent* param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__richtextbrowserwidget_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_input_method_query` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_input_method_query k_textcustomeditor__richtextbrowserwidget_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__richtextbrowserwidget_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback QVariant* func(TextCustomEditor__RichTextBrowserWidget* self, enum Qt__InputMethodQuery param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param next bool
///
bool k_textcustomeditor__richtextbrowserwidget_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_focus_next_prev_child` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_focus_next_prev_child k_textcustomeditor__richtextbrowserwidget_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param next bool
///
bool k_textcustomeditor__richtextbrowserwidget_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self, bool next)
///
void k_textcustomeditor__richtextbrowserwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textcustomeditor__richtextbrowserwidget_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_event_filter` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_event_filter k_textcustomeditor__richtextbrowserwidget_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textcustomeditor__richtextbrowserwidget_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self, QObject* watched, QEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QTimerEvent*
///
void k_textcustomeditor__richtextbrowserwidget_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_timer_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_timer_event k_textcustomeditor__richtextbrowserwidget_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QTimerEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QTimerEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QChildEvent*
///
void k_textcustomeditor__richtextbrowserwidget_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_child_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_child_event k_textcustomeditor__richtextbrowserwidget_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QChildEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QChildEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserwidget_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_custom_event` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_custom_event k_textcustomeditor__richtextbrowserwidget_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param event QEvent*
///
void k_textcustomeditor__richtextbrowserwidget_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QEvent* event)
///
void k_textcustomeditor__richtextbrowserwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserwidget_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_connect_notify` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_connect_notify k_textcustomeditor__richtextbrowserwidget_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserwidget_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserwidget_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_disconnect_notify` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_disconnect_notify k_textcustomeditor__richtextbrowserwidget_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserwidget_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_update_micro_focus` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_update_micro_focus k_textcustomeditor__richtextbrowserwidget_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_create(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_create` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_create k_textcustomeditor__richtextbrowserwidget_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_destroy(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_destroy` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_destroy k_textcustomeditor__richtextbrowserwidget_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func()
///
void k_textcustomeditor__richtextbrowserwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_focus_next_child` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_focus_next_child k_textcustomeditor__richtextbrowserwidget_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_focus_previous_child` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_focus_previous_child k_textcustomeditor__richtextbrowserwidget_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func()
///
void k_textcustomeditor__richtextbrowserwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QObject* k_textcustomeditor__richtextbrowserwidget_sender(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_sender` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_sender k_textcustomeditor__richtextbrowserwidget_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QObject* k_textcustomeditor__richtextbrowserwidget_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback QObject* func()
///
void k_textcustomeditor__richtextbrowserwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_sender_signal_index` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_sender_signal_index k_textcustomeditor__richtextbrowserwidget_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func()
///
void k_textcustomeditor__richtextbrowserwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
///
int32_t k_textcustomeditor__richtextbrowserwidget_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_receivers` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_receivers k_textcustomeditor__richtextbrowserwidget_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self, const char* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserwidget_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_is_signal_connected` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_is_signal_connected k_textcustomeditor__richtextbrowserwidget_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserwidget_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__richtextbrowserwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textcustomeditor__richtextbrowserwidget_super_get_decoded_metric_f` instead
///
#define k_textcustomeditor__richtextbrowserwidget_qbase_get_decoded_metric_f k_textcustomeditor__richtextbrowserwidget_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__richtextbrowserwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback double func(TextCustomEditor__RichTextBrowserWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textcustomeditor__richtextbrowserwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, const char* objectName)
///
void k_textcustomeditor__richtextbrowserwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_delete(void* self);

#endif
