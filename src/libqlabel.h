#pragma once
#ifndef LIBQLABEL_H
#define LIBQLABEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html)

/// q_label_new constructs a new QLabel object.
///
/// @param parent QWidget*
///
QLabel* q_label_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html)

/// q_label_new2 constructs a new QLabel object.
///
QLabel* q_label_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html)

/// q_label_new3 constructs a new QLabel object.
///
/// @param text const char*
///
QLabel* q_label_new3(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html)

/// q_label_new4 constructs a new QLabel object.
///
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
QLabel* q_label_new4(void* parent, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html)

/// q_label_new5 constructs a new QLabel object.
///
/// @param text const char*
/// @param parent QWidget*
///
QLabel* q_label_new5(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html)

/// q_label_new6 constructs a new QLabel object.
///
/// @param text const char*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
QLabel* q_label_new6(const char* text, void* parent, int32_t f);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QLabel*
///
const QMetaObject* q_label_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback const QMetaObject* func(const QLabel* self)
///
void q_label_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QLabel*
///
const QMetaObject* q_label_super_meta_object(const void* self);

/// @param self QLabel*
/// @param param1 const char*
///
void* q_label_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void* func(QLabel* self, const char* param1)
///
void q_label_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QLabel*
/// @param param1 const char*
///
void* q_label_super_metacast(void* self, const char* param1);

/// @param self QLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_label_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback int32_t func(QLabel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_label_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_label_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_label_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// @param self const QLabel*
/// @param param1 enum Qt__ReturnByValueConstant
///
QPixmap* q_label_pixmap(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// @param self const QLabel*
///
QPixmap* q_label_pixmap2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// @param self const QLabel*
/// @param param1 enum Qt__ReturnByValueConstant
///
QPicture* q_label_picture(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// @param self const QLabel*
///
QPicture* q_label_picture2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#movie)
///
/// @param self const QLabel*
///
QMovie* q_label_movie(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#textFormat)
///
/// @param self const QLabel*
///
/// @return enum Qt__TextFormat
///
int32_t q_label_text_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setTextFormat)
///
/// @param self QLabel*
/// @param textFormat enum Qt__TextFormat
///
void q_label_set_text_format(void* self, int32_t textFormat);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setResourceProvider)
///
/// @param self QLabel*
/// @param provider QVariant* func(QUrl* param1)
///
void q_label_set_resource_provider(void* self, QVariant* (*provider)(const void* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#alignment)
///
/// @param self const QLabel*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_label_alignment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setAlignment)
///
/// @param self QLabel*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_label_set_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setWordWrap)
///
/// @param self QLabel*
/// @param on bool
///
void q_label_set_word_wrap(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#wordWrap)
///
/// @param self const QLabel*
///
bool q_label_word_wrap(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#indent)
///
/// @param self const QLabel*
///
int32_t q_label_indent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setIndent)
///
/// @param self QLabel*
/// @param indent int
///
void q_label_set_indent(void* self, int indent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#margin)
///
/// @param self const QLabel*
///
int32_t q_label_margin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setMargin)
///
/// @param self QLabel*
/// @param margin int
///
void q_label_set_margin(void* self, int margin);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#hasScaledContents)
///
/// @param self const QLabel*
///
bool q_label_has_scaled_contents(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setScaledContents)
///
/// @param self QLabel*
/// @param scaledContents bool
///
void q_label_set_scaled_contents(void* self, bool scaledContents);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#sizeHint)
///
/// @param self const QLabel*
///
QSize* q_label_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback QSize* func(const QLabel* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_label_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QLabel*
///
QSize* q_label_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#minimumSizeHint)
///
/// @param self const QLabel*
///
QSize* q_label_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback QSize* func(const QLabel* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_label_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QLabel*
///
QSize* q_label_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setBuddy)
///
/// @param self QLabel*
/// @param buddy QWidget*
///
void q_label_set_buddy(void* self, void* buddy);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#buddy)
///
/// @param self const QLabel*
///
QWidget* q_label_buddy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// @param self const QLabel*
/// @param param1 int
///
int32_t q_label_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback int32_t func(const QLabel* self, int param1)
///
void q_label_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Base class method implementation
///
/// @param self const QLabel*
/// @param param1 int
///
int32_t q_label_super_height_for_width(const void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#openExternalLinks)
///
/// @param self const QLabel*
///
bool q_label_open_external_links(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setOpenExternalLinks)
///
/// @param self QLabel*
/// @param open bool
///
void q_label_set_open_external_links(void* self, bool open);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setTextInteractionFlags)
///
/// @param self QLabel*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void q_label_set_text_interaction_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#textInteractionFlags)
///
/// @param self const QLabel*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t q_label_text_interaction_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setSelection)
///
/// @param self QLabel*
/// @param param1 int
/// @param param2 int
///
void q_label_set_selection(void* self, int param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#hasSelectedText)
///
/// @param self const QLabel*
///
bool q_label_has_selected_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_selected_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#selectionStart)
///
/// @param self const QLabel*
///
int32_t q_label_selection_start(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setText)
///
/// @param self QLabel*
/// @param text const char*
///
void q_label_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setPixmap)
///
/// @param self QLabel*
/// @param pixmap QPixmap*
///
void q_label_set_pixmap(void* self, const void* pixmap);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setPicture)
///
/// @param self QLabel*
/// @param picture QPicture*
///
void q_label_set_picture(void* self, const void* picture);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setMovie)
///
/// @param self QLabel*
/// @param movie QMovie*
///
void q_label_set_movie(void* self, void* movie);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// @param self QLabel*
/// @param num int
///
void q_label_set_num(void* self, int num);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// @param self QLabel*
/// @param num double
///
void q_label_set_num2(void* self, double num);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#clear)
///
/// @param self QLabel*
///
void q_label_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkActivated)
///
/// @param self QLabel*
/// @param link const char*
///
void q_label_link_activated(void* self, const char* link);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkActivated)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, const char* link)
///
void q_label_on_link_activated(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkHovered)
///
/// @param self QLabel*
/// @param link const char*
///
void q_label_link_hovered(void* self, const char* link);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkHovered)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, const char* link)
///
void q_label_on_link_hovered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#event)
///
/// @param self QLabel*
/// @param e QEvent*
///
bool q_label_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self, QEvent* e)
///
void q_label_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#event)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param e QEvent*
///
bool q_label_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// @param self QLabel*
/// @param ev QKeyEvent*
///
void q_label_key_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QKeyEvent* ev)
///
void q_label_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param ev QKeyEvent*
///
void q_label_super_key_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// @param self QLabel*
/// @param param1 QPaintEvent*
///
void q_label_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QPaintEvent* param1)
///
void q_label_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param param1 QPaintEvent*
///
void q_label_super_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// @param self QLabel*
/// @param param1 QEvent*
///
void q_label_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QEvent* param1)
///
void q_label_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param param1 QEvent*
///
void q_label_super_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// @param self QLabel*
/// @param ev QMouseEvent*
///
void q_label_mouse_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QMouseEvent* ev)
///
void q_label_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param ev QMouseEvent*
///
void q_label_super_mouse_press_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// @param self QLabel*
/// @param ev QMouseEvent*
///
void q_label_mouse_move_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QMouseEvent* ev)
///
void q_label_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param ev QMouseEvent*
///
void q_label_super_mouse_move_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseReleaseEvent)
///
/// @param self QLabel*
/// @param ev QMouseEvent*
///
void q_label_mouse_release_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QMouseEvent* ev)
///
void q_label_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param ev QMouseEvent*
///
void q_label_super_mouse_release_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#contextMenuEvent)
///
/// @param self QLabel*
/// @param ev QContextMenuEvent*
///
void q_label_context_menu_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QContextMenuEvent* ev)
///
void q_label_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param ev QContextMenuEvent*
///
void q_label_super_context_menu_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// @param self QLabel*
/// @param ev QFocusEvent*
///
void q_label_focus_in_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QFocusEvent* ev)
///
void q_label_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param ev QFocusEvent*
///
void q_label_super_focus_in_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// @param self QLabel*
/// @param ev QFocusEvent*
///
void q_label_focus_out_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QFocusEvent* ev)
///
void q_label_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param ev QFocusEvent*
///
void q_label_super_focus_out_event(void* self, void* ev);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// @param self QLabel*
/// @param next bool
///
bool q_label_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self, bool next)
///
void q_label_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QLabel*
/// @param next bool
///
bool q_label_super_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_label_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_label_tr3(const char* s, const char* c, int n);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const QLabel*
///
int32_t q_label_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QLabel*
/// @param frameStyle int
///
void q_label_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const QLabel*
///
int32_t q_label_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const QLabel*
///
/// @return enum QFrame__Shape
///
int32_t q_label_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QLabel*
/// @param frameShape enum QFrame__Shape
///
void q_label_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const QLabel*
///
/// @return enum QFrame__Shadow
///
int32_t q_label_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QLabel*
/// @param frameShadow enum QFrame__Shadow
///
void q_label_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const QLabel*
///
int32_t q_label_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QLabel*
/// @param lineWidth int
///
void q_label_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const QLabel*
///
int32_t q_label_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QLabel*
/// @param midLineWidth int
///
void q_label_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const QLabel*
///
QRect* q_label_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QLabel*
/// @param frameRect QRect*
///
void q_label_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QLabel*
///
QPaintDevice* q_label_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QLabel object
///
/// @param _qpaintdevice QPaintDevice*
///
QLabel* q_label_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QLabel*
///
uintptr_t q_label_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QLabel*
///
void q_label_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QLabel*
///
uintptr_t q_label_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QLabel*
///
uintptr_t q_label_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QLabel*
///
QStyle* q_label_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QLabel*
/// @param style QStyle*
///
void q_label_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QLabel*
///
bool q_label_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QLabel*
///
bool q_label_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QLabel*
///
bool q_label_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QLabel*
///
/// @return enum Qt__WindowModality
///
int32_t q_label_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QLabel*
/// @param windowModality enum Qt__WindowModality
///
void q_label_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QLabel*
///
bool q_label_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QLabel*
/// @param param1 QWidget*
///
bool q_label_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QLabel*
/// @param enabled bool
///
void q_label_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QLabel*
/// @param disabled bool
///
void q_label_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QLabel*
/// @param windowModified bool
///
void q_label_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QLabel*
///
QRect* q_label_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QLabel*
///
const QRect* q_label_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QLabel*
///
QRect* q_label_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QLabel*
///
int32_t q_label_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QLabel*
///
int32_t q_label_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QLabel*
///
QPoint* q_label_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QLabel*
///
QSize* q_label_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QLabel*
///
QSize* q_label_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QLabel*
///
int32_t q_label_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QLabel*
///
int32_t q_label_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QLabel*
///
QRect* q_label_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QLabel*
///
QRect* q_label_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QLabel*
///
QRegion* q_label_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QLabel*
///
QSize* q_label_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QLabel*
///
QSize* q_label_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QLabel*
///
int32_t q_label_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QLabel*
///
int32_t q_label_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QLabel*
///
int32_t q_label_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QLabel*
///
int32_t q_label_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QLabel*
/// @param minimumSize QSize*
///
void q_label_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QLabel*
/// @param minw int
/// @param minh int
///
void q_label_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QLabel*
/// @param maximumSize QSize*
///
void q_label_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QLabel*
/// @param maxw int
/// @param maxh int
///
void q_label_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QLabel*
/// @param minw int
///
void q_label_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QLabel*
/// @param minh int
///
void q_label_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QLabel*
/// @param maxw int
///
void q_label_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QLabel*
/// @param maxh int
///
void q_label_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QLabel*
///
QSize* q_label_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QLabel*
/// @param sizeIncrement QSize*
///
void q_label_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QLabel*
/// @param w int
/// @param h int
///
void q_label_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QLabel*
///
QSize* q_label_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QLabel*
/// @param baseSize QSize*
///
void q_label_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QLabel*
/// @param basew int
/// @param baseh int
///
void q_label_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QLabel*
/// @param fixedSize QSize*
///
void q_label_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QLabel*
/// @param w int
/// @param h int
///
void q_label_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QLabel*
/// @param w int
///
void q_label_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QLabel*
/// @param h int
///
void q_label_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QLabel*
/// @param param1 QPointF*
///
QPointF* q_label_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QLabel*
/// @param param1 QPoint*
///
QPoint* q_label_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QLabel*
/// @param param1 QPointF*
///
QPointF* q_label_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QLabel*
/// @param param1 QPoint*
///
QPoint* q_label_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QLabel*
/// @param param1 QPointF*
///
QPointF* q_label_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QLabel*
/// @param param1 QPoint*
///
QPoint* q_label_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QLabel*
/// @param param1 QPointF*
///
QPointF* q_label_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QLabel*
/// @param param1 QPoint*
///
QPoint* q_label_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QLabel*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_label_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QLabel*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_label_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QLabel*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_label_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QLabel*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_label_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QLabel*
///
QWidget* q_label_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QLabel*
///
QWidget* q_label_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QLabel*
///
QWidget* q_label_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QLabel*
///
const QPalette* q_label_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QLabel*
/// @param palette QPalette*
///
void q_label_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QLabel*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_label_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QLabel*
///
/// @return enum QPalette__ColorRole
///
int32_t q_label_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QLabel*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_label_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QLabel*
///
/// @return enum QPalette__ColorRole
///
int32_t q_label_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QLabel*
///
const QFont* q_label_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QLabel*
/// @param font QFont*
///
void q_label_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QLabel*
///
QFontMetrics* q_label_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QLabel*
///
QFontInfo* q_label_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QLabel*
///
QCursor* q_label_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QLabel*
/// @param cursor QCursor*
///
void q_label_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QLabel*
///
void q_label_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QLabel*
/// @param enable bool
///
void q_label_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QLabel*
///
bool q_label_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QLabel*
///
bool q_label_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QLabel*
/// @param enable bool
///
void q_label_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QLabel*
///
bool q_label_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QLabel*
/// @param mask QBitmap*
///
void q_label_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QLabel*
/// @param mask QRegion*
///
void q_label_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QLabel*
///
QRegion* q_label_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QLabel*
///
void q_label_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param target QPaintDevice*
///
void q_label_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param painter QPainter*
///
void q_label_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QLabel*
///
QPixmap* q_label_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QLabel*
///
QGraphicsEffect* q_label_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QLabel*
/// @param effect QGraphicsEffect*
///
void q_label_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QLabel*
/// @param type enum Qt__GestureType
///
void q_label_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QLabel*
/// @param type enum Qt__GestureType
///
void q_label_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QLabel*
/// @param windowTitle const char*
///
void q_label_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QLabel*
/// @param styleSheet const char*
///
void q_label_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QLabel*
/// @param icon QIcon*
///
void q_label_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QLabel*
///
QIcon* q_label_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QLabel*
/// @param windowIconText const char*
///
void q_label_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QLabel*
/// @param windowRole const char*
///
void q_label_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QLabel*
/// @param filePath const char*
///
void q_label_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QLabel*
/// @param level double
///
void q_label_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QLabel*
///
double q_label_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QLabel*
///
bool q_label_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QLabel*
/// @param toolTip const char*
///
void q_label_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QLabel*
/// @param msec int
///
void q_label_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QLabel*
///
int32_t q_label_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QLabel*
/// @param statusTip const char*
///
void q_label_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QLabel*
/// @param whatsThis const char*
///
void q_label_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QLabel*
/// @param name const char*
///
void q_label_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QLabel*
/// @param description const char*
///
void q_label_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QLabel*
/// @param direction enum Qt__LayoutDirection
///
void q_label_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QLabel*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_label_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QLabel*
///
void q_label_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QLabel*
/// @param locale QLocale*
///
void q_label_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QLabel*
///
QLocale* q_label_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QLabel*
///
void q_label_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QLabel*
///
bool q_label_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QLabel*
///
bool q_label_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QLabel*
///
void q_label_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QLabel*
///
bool q_label_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QLabel*
///
void q_label_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QLabel*
///
void q_label_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QLabel*
/// @param reason enum Qt__FocusReason
///
void q_label_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QLabel*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_label_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QLabel*
/// @param policy enum Qt__FocusPolicy
///
void q_label_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QLabel*
///
bool q_label_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_label_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QLabel*
/// @param focusProxy QWidget*
///
void q_label_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QLabel*
///
QWidget* q_label_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QLabel*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_label_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QLabel*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_label_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QLabel*
///
void q_label_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QLabel*
/// @param param1 QCursor*
///
void q_label_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QLabel*
///
void q_label_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QLabel*
///
void q_label_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QLabel*
///
void q_label_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QLabel*
/// @param key QKeySequence*
///
int32_t q_label_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QLabel*
/// @param id int
///
void q_label_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QLabel*
/// @param id int
///
void q_label_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QLabel*
/// @param id int
///
void q_label_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_label_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_label_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QLabel*
///
bool q_label_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QLabel*
/// @param enable bool
///
void q_label_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QLabel*
///
QGraphicsProxyWidget* q_label_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLabel*
///
void q_label_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLabel*
///
void q_label_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_label_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLabel*
/// @param param1 QRect*
///
void q_label_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLabel*
/// @param param1 QRegion*
///
void q_label_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_label_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLabel*
/// @param param1 QRect*
///
void q_label_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLabel*
/// @param param1 QRegion*
///
void q_label_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QLabel*
/// @param hidden bool
///
void q_label_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QLabel*
///
void q_label_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QLabel*
///
void q_label_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QLabel*
///
void q_label_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QLabel*
///
void q_label_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QLabel*
///
void q_label_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QLabel*
///
void q_label_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QLabel*
///
bool q_label_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QLabel*
///
void q_label_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QLabel*
///
void q_label_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QLabel*
/// @param param1 QWidget*
///
void q_label_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QLabel*
/// @param x int
/// @param y int
///
void q_label_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QLabel*
/// @param param1 QPoint*
///
void q_label_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QLabel*
/// @param w int
/// @param h int
///
void q_label_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QLabel*
/// @param param1 QSize*
///
void q_label_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_label_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QLabel*
/// @param geometry QRect*
///
void q_label_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QLabel*
/// @param geometry const char*
///
bool q_label_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QLabel*
///
void q_label_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QLabel*
///
bool q_label_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QLabel*
/// @param param1 QWidget*
///
bool q_label_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QLabel*
///
bool q_label_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QLabel*
///
bool q_label_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QLabel*
///
bool q_label_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QLabel*
///
bool q_label_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QLabel*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_label_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QLabel*
/// @param state flag of enum Qt__WindowState
///
void q_label_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QLabel*
/// @param state flag of enum Qt__WindowState
///
void q_label_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QLabel*
///
QSizePolicy* q_label_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QLabel*
/// @param sizePolicy QSizePolicy*
///
void q_label_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QLabel*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_label_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QLabel*
///
QRegion* q_label_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QLabel*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_label_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QLabel*
/// @param margins QMargins*
///
void q_label_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QLabel*
///
QMargins* q_label_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QLabel*
///
QRect* q_label_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QLabel*
///
QLayout* q_label_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QLabel*
/// @param layout QLayout*
///
void q_label_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QLabel*
///
void q_label_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QLabel*
/// @param parent QWidget*
///
void q_label_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QLabel*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_label_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QLabel*
/// @param dx int
/// @param dy int
///
void q_label_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QLabel*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_label_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QLabel*
///
QWidget* q_label_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QLabel*
///
QWidget* q_label_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QLabel*
///
QWidget* q_label_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QLabel*
///
bool q_label_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QLabel*
/// @param on bool
///
void q_label_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLabel*
/// @param action QAction*
///
void q_label_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QLabel*
/// @param actions libqt_list of QAction*
///
void q_label_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QLabel*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_label_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QLabel*
/// @param before QAction*
/// @param action QAction*
///
void q_label_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QLabel*
/// @param action QAction*
///
void q_label_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QLabel*
///
/// @return libqt_list of QAction*
///
libqt_list q_label_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLabel*
/// @param text const char*
///
QAction* q_label_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLabel*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_label_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLabel*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_label_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLabel*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_label_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QLabel*
///
QWidget* q_label_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QLabel*
/// @param type flag of enum Qt__WindowType
///
void q_label_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QLabel*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_label_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QLabel*
/// @param param1 enum Qt__WindowType
///
void q_label_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QLabel*
/// @param type flag of enum Qt__WindowType
///
void q_label_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QLabel*
///
/// @return enum Qt__WindowType
///
int32_t q_label_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_label_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QLabel*
/// @param x int
/// @param y int
///
QWidget* q_label_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QLabel*
/// @param p QPoint*
///
QWidget* q_label_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QLabel*
/// @param p QPointF*
///
QWidget* q_label_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QLabel*
/// @param param1 enum Qt__WidgetAttribute
///
void q_label_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QLabel*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_label_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QLabel*
///
void q_label_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QLabel*
/// @param child QWidget*
///
bool q_label_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QLabel*
///
bool q_label_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QLabel*
/// @param enabled bool
///
void q_label_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QLabel*
///
QBackingStore* q_label_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QLabel*
///
QWindow* q_label_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QLabel*
///
QScreen* q_label_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QLabel*
/// @param screen QScreen*
///
void q_label_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_label_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QLabel*
/// @param title const char*
///
void q_label_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, const char* title)
///
void q_label_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QLabel*
/// @param icon QIcon*
///
void q_label_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QIcon* icon)
///
void q_label_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QLabel*
/// @param iconText const char*
///
void q_label_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, const char* iconText)
///
void q_label_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QLabel*
/// @param pos QPoint*
///
void q_label_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QPoint* pos)
///
void q_label_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QLabel*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_label_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QLabel*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_label_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_label_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_label_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_label_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_label_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_label_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_label_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QLabel*
/// @param rectangle QRect*
///
QPixmap* q_label_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QLabel*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_label_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QLabel*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_label_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QLabel*
/// @param id int
/// @param enable bool
///
void q_label_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QLabel*
/// @param id int
/// @param enable bool
///
void q_label_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QLabel*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_label_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QLabel*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_label_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_label_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_label_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLabel*
///
const char* q_label_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLabel*
/// @param name const char*
///
void q_label_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QLabel*
///
bool q_label_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QLabel*
///
bool q_label_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QLabel*
///
bool q_label_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QLabel*
///
bool q_label_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLabel*
/// @param b bool
///
bool q_label_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QLabel*
///
QThread* q_label_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLabel*
/// @param thread QThread*
///
bool q_label_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLabel*
/// @param interval int
///
int32_t q_label_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLabel*
/// @param time int64_t of nanoseconds
///
int32_t q_label_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLabel*
/// @param id int
///
void q_label_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLabel*
/// @param id enum Qt__TimerId
///
void q_label_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QLabel*
///
/// @return libqt_list of QObject*
///
libqt_list q_label_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLabel*
/// @param filterObj QObject*
///
void q_label_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLabel*
/// @param obj QObject*
///
void q_label_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_label_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_label_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_label_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_label_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_label_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLabel*
///
bool q_label_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLabel*
/// @param receiver QObject*
///
bool q_label_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_label_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QLabel*
///
void q_label_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QLabel*
///
void q_label_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLabel*
/// @param name const char*
/// @param value QVariant*
///
bool q_label_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QLabel*
/// @param name const char*
///
QVariant* q_label_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QLabel*
///
const char** q_label_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLabel*
///
QBindingStorage* q_label_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QLabel*
///
const QBindingStorage* q_label_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLabel*
///
void q_label_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self)
///
void q_label_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QLabel*
///
QObject* q_label_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QLabel*
/// @param classname const char*
///
bool q_label_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLabel*
///
void q_label_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLabel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_label_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLabel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_label_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_label_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_label_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_label_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLabel*
/// @param signal const char*
///
bool q_label_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLabel*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_label_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLabel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_label_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLabel*
/// @param receiver QObject*
/// @param member const char*
///
bool q_label_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLabel*
/// @param param1 QObject*
///
void q_label_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QObject* param1)
///
void q_label_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QLabel*
///
bool q_label_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QLabel*
///
int32_t q_label_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QLabel*
///
int32_t q_label_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QLabel*
///
int32_t q_label_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QLabel*
///
int32_t q_label_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QLabel*
///
int32_t q_label_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QLabel*
///
int32_t q_label_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QLabel*
///
double q_label_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QLabel*
///
double q_label_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QLabel*
///
int32_t q_label_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QLabel*
///
int32_t q_label_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_label_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_label_encode_metric_f(int32_t metric, double value);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param option QStyleOptionFrame*
///
void q_label_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param option QStyleOptionFrame*
///
void q_label_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QStyleOptionFrame* option)
///
void q_label_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
///
int32_t q_label_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
///
int32_t q_label_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback int32_t func(QLabel* self)
///
void q_label_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param visible bool
///
void q_label_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param visible bool
///
void q_label_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, bool visible)
///
void q_label_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
///
bool q_label_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
///
bool q_label_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self)
///
void q_label_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
///
QPaintEngine* q_label_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
///
QPaintEngine* q_label_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback QPaintEngine* func(QLabel* self)
///
void q_label_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QMouseEvent*
///
void q_label_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QMouseEvent*
///
void q_label_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QMouseEvent* event)
///
void q_label_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QWheelEvent*
///
void q_label_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QWheelEvent*
///
void q_label_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QWheelEvent* event)
///
void q_label_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QKeyEvent*
///
void q_label_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QKeyEvent*
///
void q_label_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QKeyEvent* event)
///
void q_label_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QEnterEvent*
///
void q_label_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QEnterEvent*
///
void q_label_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QEnterEvent* event)
///
void q_label_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QEvent*
///
void q_label_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QEvent*
///
void q_label_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QEvent* event)
///
void q_label_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QMoveEvent*
///
void q_label_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QMoveEvent*
///
void q_label_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QMoveEvent* event)
///
void q_label_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QResizeEvent*
///
void q_label_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QResizeEvent*
///
void q_label_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QResizeEvent* event)
///
void q_label_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QCloseEvent*
///
void q_label_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QCloseEvent*
///
void q_label_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QCloseEvent* event)
///
void q_label_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QTabletEvent*
///
void q_label_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QTabletEvent*
///
void q_label_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QTabletEvent* event)
///
void q_label_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QActionEvent*
///
void q_label_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QActionEvent*
///
void q_label_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QActionEvent* event)
///
void q_label_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QDragEnterEvent*
///
void q_label_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QDragEnterEvent*
///
void q_label_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QDragEnterEvent* event)
///
void q_label_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QDragMoveEvent*
///
void q_label_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QDragMoveEvent*
///
void q_label_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QDragMoveEvent* event)
///
void q_label_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QDragLeaveEvent*
///
void q_label_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QDragLeaveEvent*
///
void q_label_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QDragLeaveEvent* event)
///
void q_label_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QDropEvent*
///
void q_label_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QDropEvent*
///
void q_label_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QDropEvent* event)
///
void q_label_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QShowEvent*
///
void q_label_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QShowEvent*
///
void q_label_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QShowEvent* event)
///
void q_label_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QHideEvent*
///
void q_label_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QHideEvent*
///
void q_label_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QHideEvent* event)
///
void q_label_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_label_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_label_super_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_label_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_label_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_label_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback int32_t func(QLabel* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_label_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param painter QPainter*
///
void q_label_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param painter QPainter*
///
void q_label_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QPainter* painter)
///
void q_label_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param offset QPoint*
///
QPaintDevice* q_label_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param offset QPoint*
///
QPaintDevice* q_label_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback QPaintDevice* func(QLabel* self, QPoint* offset)
///
void q_label_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
///
QPainter* q_label_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
///
QPainter* q_label_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback QPainter* func(QLabel* self)
///
void q_label_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param param1 QInputMethodEvent*
///
void q_label_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param param1 QInputMethodEvent*
///
void q_label_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QInputMethodEvent* param1)
///
void q_label_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_label_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_label_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback QVariant* func(QLabel* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_label_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_label_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_label_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self, QObject* watched, QEvent* event)
///
void q_label_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QTimerEvent*
///
void q_label_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QTimerEvent*
///
void q_label_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QTimerEvent* event)
///
void q_label_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QChildEvent*
///
void q_label_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QChildEvent*
///
void q_label_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QChildEvent* event)
///
void q_label_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param event QEvent*
///
void q_label_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param event QEvent*
///
void q_label_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QEvent* event)
///
void q_label_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param signal QMetaMethod*
///
void q_label_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param signal QMetaMethod*
///
void q_label_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QMetaMethod* signal)
///
void q_label_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param signal QMetaMethod*
///
void q_label_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param signal QMetaMethod*
///
void q_label_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QMetaMethod* signal)
///
void q_label_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
/// @param param1 QPainter*
///
void q_label_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
/// @param param1 QPainter*
///
void q_label_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, QPainter* param1)
///
void q_label_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
///
void q_label_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
///
void q_label_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self)
///
void q_label_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
///
void q_label_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
///
void q_label_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self)
///
void q_label_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
///
void q_label_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
///
void q_label_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback void func(QLabel* self)
///
void q_label_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
///
bool q_label_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
///
bool q_label_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self)
///
void q_label_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLabel*
///
bool q_label_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLabel*
///
bool q_label_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self)
///
void q_label_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
///
QObject* q_label_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
///
QObject* q_label_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback QObject* func(QLabel* self)
///
void q_label_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
///
int32_t q_label_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
///
int32_t q_label_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback int32_t func(QLabel* self)
///
void q_label_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param signal const char*
///
int32_t q_label_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param signal const char*
///
int32_t q_label_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback int32_t func(QLabel* self, const char* signal)
///
void q_label_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param signal QMetaMethod*
///
bool q_label_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param signal QMetaMethod*
///
bool q_label_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback bool func(QLabel* self, QMetaMethod* signal)
///
void q_label_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLabel*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_label_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLabel*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_label_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLabel*
/// @param callback double func(QLabel* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_label_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLabel*
/// @param callback void func(QLabel* self, const char* objectName)
///
void q_label_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#dtor.QLabel)
///
/// Delete this object from C++ memory.
///
/// @param self QLabel*
///
void q_label_delete(void* self);

#endif
