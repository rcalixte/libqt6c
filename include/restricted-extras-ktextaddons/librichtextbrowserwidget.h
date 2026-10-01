#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSERWIDGET_H
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBRICHTEXTBROWSERWIDGET_H

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const QMetaObject* k_textcustomeditor__richtextbrowserwidget_meta_object(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// Allows for overriding the related default method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback const QMetaObject* func(const TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// Base class method implementation
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const QMetaObject* k_textcustomeditor__richtextbrowserwidget_super_meta_object(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
TextCustomEditor__RichTextBrowser* k_textcustomeditor__richtextbrowserwidget_editor(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_to_html(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_to_plain_text(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param b bool
///
void k_textcustomeditor__richtextbrowserwidget_set_accept_rich_text(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_accept_rich_text(const void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowserWidget.html)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_empty(const void* self);

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
/// Upcasts to a QPaintDevice object
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
QPaintDevice* k_textcustomeditor__richtextbrowserwidget_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a TextCustomEditor__RichTextBrowserWidget object
///
/// @param _qpaintdevice QPaintDevice*
///
TextCustomEditor__RichTextBrowserWidget* k_textcustomeditor__richtextbrowserwidget_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
uintptr_t k_textcustomeditor__richtextbrowserwidget_win_id(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
uintptr_t k_textcustomeditor__richtextbrowserwidget_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
uintptr_t k_textcustomeditor__richtextbrowserwidget_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QStyle* k_textcustomeditor__richtextbrowserwidget_style(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_modality(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_enabled_to(const void* self, const void* param1);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const QRect* k_textcustomeditor__richtextbrowserwidget_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRegion* k_textcustomeditor__richtextbrowserwidget_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param minimumSize QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_minimum_size(void* self, const void* minimumSize);

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
void k_textcustomeditor__richtextbrowserwidget_set_maximum_size(void* self, const void* maximumSize);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param sizeIncrement QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_size_increment(void* self, const void* sizeIncrement);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param baseSize QSize*
///
void k_textcustomeditor__richtextbrowserwidget_set_base_size(void* self, const void* baseSize);

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
void k_textcustomeditor__richtextbrowserwidget_set_fixed_size(void* self, const void* fixedSize);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textcustomeditor__richtextbrowserwidget_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textcustomeditor__richtextbrowserwidget_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const QPalette* k_textcustomeditor__richtextbrowserwidget_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param palette QPalette*
///
void k_textcustomeditor__richtextbrowserwidget_set_palette(void* self, const void* palette);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__richtextbrowserwidget_background_role(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textcustomeditor__richtextbrowserwidget_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const QFont* k_textcustomeditor__richtextbrowserwidget_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param font QFont*
///
void k_textcustomeditor__richtextbrowserwidget_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QFontMetrics* k_textcustomeditor__richtextbrowserwidget_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QFontInfo* k_textcustomeditor__richtextbrowserwidget_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QCursor* k_textcustomeditor__richtextbrowserwidget_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param cursor QCursor*
///
void k_textcustomeditor__richtextbrowserwidget_set_cursor(void* self, const void* cursor);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_under_mouse(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param mask QBitmap*
///
void k_textcustomeditor__richtextbrowserwidget_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param mask QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRegion* k_textcustomeditor__richtextbrowserwidget_mask(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QGraphicsEffect* k_textcustomeditor__richtextbrowserwidget_graphics_effect(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param icon QIcon*
///
void k_textcustomeditor__richtextbrowserwidget_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QIcon* k_textcustomeditor__richtextbrowserwidget_window_icon(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_icon_text(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_role(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_window_file_path(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
double k_textcustomeditor__richtextbrowserwidget_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_window_modified(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_tool_tip(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_tool_tip_duration(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_status_tip(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_accessible_name(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_accessible_description(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textcustomeditor__richtextbrowserwidget_layout_direction(const void* self);

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
void k_textcustomeditor__richtextbrowserwidget_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QLocale* k_textcustomeditor__richtextbrowserwidget_locale(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_left_to_right(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_active_window(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textcustomeditor__richtextbrowserwidget_focus_policy(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_focus(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textcustomeditor__richtextbrowserwidget_context_menu_policy(const void* self);

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
void k_textcustomeditor__richtextbrowserwidget_grab_mouse2(void* self, const void* param1);

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
int32_t k_textcustomeditor__richtextbrowserwidget_grab_shortcut(void* self, const void* key);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_updates_enabled(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QGraphicsProxyWidget* k_textcustomeditor__richtextbrowserwidget_graphics_proxy_widget(const void* self);

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
void k_textcustomeditor__richtextbrowserwidget_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_update4(void* self, const void* param1);

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
void k_textcustomeditor__richtextbrowserwidget_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_repaint4(void* self, const void* param1);

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
void k_textcustomeditor__richtextbrowserwidget_move2(void* self, const void* param1);

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
void k_textcustomeditor__richtextbrowserwidget_resize2(void* self, const void* param1);

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
void k_textcustomeditor__richtextbrowserwidget_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
char* k_textcustomeditor__richtextbrowserwidget_save_geometry(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 QWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_state(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSizePolicy* k_textcustomeditor__richtextbrowserwidget_size_policy(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRegion* k_textcustomeditor__richtextbrowserwidget_visible_region(const void* self);

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
void k_textcustomeditor__richtextbrowserwidget_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QMargins* k_textcustomeditor__richtextbrowserwidget_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QRect* k_textcustomeditor__richtextbrowserwidget_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QLayout* k_textcustomeditor__richtextbrowserwidget_layout(const void* self);

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
void k_textcustomeditor__richtextbrowserwidget_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_accept_drops(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_textcustomeditor__richtextbrowserwidget_actions(const void* self);

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
QAction* k_textcustomeditor__richtextbrowserwidget_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__richtextbrowserwidget_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textcustomeditor__richtextbrowserwidget_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_parent_widget(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_flags(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return enum Qt__WindowType
///
int32_t k_textcustomeditor__richtextbrowserwidget_window_type(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param x int
/// @param y int
///
QWidget* k_textcustomeditor__richtextbrowserwidget_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param p QPoint*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param p QPointF*
///
QWidget* k_textcustomeditor__richtextbrowserwidget_child_at3(const void* self, const void* p);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textcustomeditor__richtextbrowserwidget_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param child QWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_auto_fill_background(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QBackingStore* k_textcustomeditor__richtextbrowserwidget_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QWindow* k_textcustomeditor__richtextbrowserwidget_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QScreen* k_textcustomeditor__richtextbrowserwidget_screen(const void* self);

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
void k_textcustomeditor__richtextbrowserwidget_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QIcon* icon)
///
void k_textcustomeditor__richtextbrowserwidget_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

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
void k_textcustomeditor__richtextbrowserwidget_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QPoint* pos)
///
void k_textcustomeditor__richtextbrowserwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textcustomeditor__richtextbrowserwidget_input_method_hints(const void* self);

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
void k_textcustomeditor__richtextbrowserwidget_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

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
void k_textcustomeditor__richtextbrowserwidget_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textcustomeditor__richtextbrowserwidget_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textcustomeditor__richtextbrowserwidget_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

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
void k_textcustomeditor__richtextbrowserwidget_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param rectangle QRect*
///
QPixmap* k_textcustomeditor__richtextbrowserwidget_grab1(void* self, const void* rectangle);

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
int32_t k_textcustomeditor__richtextbrowserwidget_grab_shortcut2(void* self, const void* key, int32_t context);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char* k_textcustomeditor__richtextbrowserwidget_object_name(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_signals_blocked(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QThread* k_textcustomeditor__richtextbrowserwidget_thread(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
/// @return libqt_list of QObject*
///
libqt_list k_textcustomeditor__richtextbrowserwidget_children(const void* self);

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
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param receiver QObject*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_textcustomeditor__richtextbrowserwidget_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param name const char*
///
QVariant* k_textcustomeditor__richtextbrowserwidget_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const char** k_textcustomeditor__richtextbrowserwidget_dynamic_property_names(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
const QBindingStorage* k_textcustomeditor__richtextbrowserwidget_binding_storage2(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QObject* k_textcustomeditor__richtextbrowserwidget_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param classname const char*
///
bool k_textcustomeditor__richtextbrowserwidget_inherits(const void* self, const char* classname);

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
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textcustomeditor__richtextbrowserwidget_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__richtextbrowserwidget_disconnect23(const void* self, const void* receiver, const char* member);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
double k_textcustomeditor__richtextbrowserwidget_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
double k_textcustomeditor__richtextbrowserwidget_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_depth(const void* self);

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_dev_type(const void* self, int32_t (*callback)(const void*));

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_super_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback QSize* func(TextCustomEditor__RichTextBrowserWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_textcustomeditor__richtextbrowserwidget_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QSize* k_textcustomeditor__richtextbrowserwidget_super_minimum_size_hint(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback QSize* func(TextCustomEditor__RichTextBrowserWidget* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_textcustomeditor__richtextbrowserwidget_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 int
///
int32_t k_textcustomeditor__richtextbrowserwidget_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 int
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self, int param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QPaintEngine* k_textcustomeditor__richtextbrowserwidget_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QPaintEngine* k_textcustomeditor__richtextbrowserwidget_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback QPaintEngine* func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__richtextbrowserwidget_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textcustomeditor__richtextbrowserwidget_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserwidget_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param painter QPainter*
///
void k_textcustomeditor__richtextbrowserwidget_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QPainter* painter)
///
void k_textcustomeditor__richtextbrowserwidget_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__richtextbrowserwidget_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param offset QPoint*
///
QPaintDevice* k_textcustomeditor__richtextbrowserwidget_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback QPaintDevice* func(TextCustomEditor__RichTextBrowserWidget* self, QPoint* offset)
///
void k_textcustomeditor__richtextbrowserwidget_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QPainter* k_textcustomeditor__richtextbrowserwidget_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QPainter* k_textcustomeditor__richtextbrowserwidget_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback QPainter* func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

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
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__richtextbrowserwidget_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_textcustomeditor__richtextbrowserwidget_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback QVariant* func(TextCustomEditor__RichTextBrowserWidget* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_textcustomeditor__richtextbrowserwidget_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

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
void k_textcustomeditor__richtextbrowserwidget_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserwidget_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserwidget_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__richtextbrowserwidget_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_update_micro_focus(void* self);

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
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_create(void* self);

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
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
void k_textcustomeditor__richtextbrowserwidget_destroy(void* self);

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
/// @param callback void func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_focus_next_child(void* self);

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
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__RichTextBrowserWidget*
///
bool k_textcustomeditor__richtextbrowserwidget_focus_previous_child(void* self);

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
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QObject* k_textcustomeditor__richtextbrowserwidget_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
QObject* k_textcustomeditor__richtextbrowserwidget_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback QObject* func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self)
///
void k_textcustomeditor__richtextbrowserwidget_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
///
int32_t k_textcustomeditor__richtextbrowserwidget_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param signal const char*
///
int32_t k_textcustomeditor__richtextbrowserwidget_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback int32_t func(TextCustomEditor__RichTextBrowserWidget* self, const char* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserwidget_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__richtextbrowserwidget_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback bool func(TextCustomEditor__RichTextBrowserWidget* self, QMetaMethod* signal)
///
void k_textcustomeditor__richtextbrowserwidget_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__richtextbrowserwidget_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textcustomeditor__richtextbrowserwidget_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const TextCustomEditor__RichTextBrowserWidget*
/// @param callback double func(TextCustomEditor__RichTextBrowserWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textcustomeditor__richtextbrowserwidget_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

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
