#pragma once
#ifndef LIBQLINEEDIT_H
#define LIBQLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html)

/// q_lineedit_new constructs a new QLineEdit object.
///
/// @param parent QWidget*
///
QLineEdit* q_lineedit_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html)

/// q_lineedit_new2 constructs a new QLineEdit object.
///
QLineEdit* q_lineedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html)

/// q_lineedit_new3 constructs a new QLineEdit object.
///
/// @param param1 const char*
///
QLineEdit* q_lineedit_new3(const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html)

/// q_lineedit_new4 constructs a new QLineEdit object.
///
/// @param param1 const char*
/// @param parent QWidget*
///
QLineEdit* q_lineedit_new4(const char* param1, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QLineEdit*
///
const QMetaObject* q_lineedit_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback const QMetaObject* func(const QLineEdit* self)
///
void q_lineedit_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QLineEdit*
///
const QMetaObject* q_lineedit_super_meta_object(const void* self);

/// @param self QLineEdit*
/// @param param1 const char*
///
void* q_lineedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void* func(QLineEdit* self, const char* param1)
///
void q_lineedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 const char*
///
void* q_lineedit_super_metacast(void* self, const char* param1);

/// @param self QLineEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_lineedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback int32_t func(QLineEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_lineedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_lineedit_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_lineedit_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#displayText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_display_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_placeholder_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
///
/// @param self QLineEdit*
/// @param placeholderText const char*
///
void q_lineedit_set_placeholder_text(void* self, const char* placeholderText);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_max_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
///
/// @param self QLineEdit*
/// @param maxLength int
///
void q_lineedit_set_max_length(void* self, int maxLength);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
///
/// @param self QLineEdit*
/// @param frame bool
///
void q_lineedit_set_frame(void* self, bool frame);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
///
/// @param self const QLineEdit*
///
bool q_lineedit_has_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
///
/// @param self QLineEdit*
/// @param enable bool
///
void q_lineedit_set_clear_button_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_clear_button_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
///
/// @param self const QLineEdit*
///
/// @return enum QLineEdit__EchoMode
///
int32_t q_lineedit_echo_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
///
/// @param self QLineEdit*
/// @param echoMode enum QLineEdit__EchoMode
///
void q_lineedit_set_echo_mode(void* self, int32_t echoMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_read_only(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
///
/// @param self QLineEdit*
/// @param readOnly bool
///
void q_lineedit_set_read_only(void* self, bool readOnly);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
///
/// @param self QLineEdit*
/// @param validator QValidator*
///
void q_lineedit_set_validator(void* self, const void* validator);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#validator)
///
/// @param self const QLineEdit*
///
const QValidator* q_lineedit_validator(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
///
/// @param self QLineEdit*
/// @param completer QCompleter*
///
void q_lineedit_set_completer(void* self, void* completer);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#completer)
///
/// @param self const QLineEdit*
///
QCompleter* q_lineedit_completer(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback QSize* func(const QLineEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_lineedit_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_super_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback QSize* func(const QLineEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_lineedit_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_cursor_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
///
/// @param self QLineEdit*
/// @param cursorPosition int
///
void q_lineedit_set_cursor_position(void* self, int cursorPosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
///
/// @param self QLineEdit*
/// @param pos QPoint*
///
int32_t q_lineedit_cursor_position_at(void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
///
/// @param self QLineEdit*
/// @param flag flag of enum Qt__AlignmentFlag
///
void q_lineedit_set_alignment(void* self, int32_t flag);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#alignment)
///
/// @param self const QLineEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_lineedit_alignment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self QLineEdit*
/// @param mark bool
///
void q_lineedit_cursor_forward(void* self, bool mark);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self QLineEdit*
/// @param mark bool
///
void q_lineedit_cursor_backward(void* self, bool mark);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
///
/// @param self QLineEdit*
/// @param mark bool
///
void q_lineedit_cursor_word_forward(void* self, bool mark);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
///
/// @param self QLineEdit*
/// @param mark bool
///
void q_lineedit_cursor_word_backward(void* self, bool mark);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#backspace)
///
/// @param self QLineEdit*
///
void q_lineedit_backspace(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#del)
///
/// @param self QLineEdit*
///
void q_lineedit_del(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#home)
///
/// @param self QLineEdit*
/// @param mark bool
///
void q_lineedit_home(void* self, bool mark);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#end)
///
/// @param self QLineEdit*
/// @param mark bool
///
void q_lineedit_end(void* self, bool mark);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isModified)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_modified(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setModified)
///
/// @param self QLineEdit*
/// @param modified bool
///
void q_lineedit_set_modified(void* self, bool modified);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
///
/// @param self QLineEdit*
/// @param param1 int
/// @param param2 int
///
void q_lineedit_set_selection(void* self, int param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
///
/// @param self const QLineEdit*
///
bool q_lineedit_has_selected_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_selected_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_selection_start(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_selection_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_selection_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_undo_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_redo_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
///
/// @param self QLineEdit*
/// @param b bool
///
void q_lineedit_set_drag_enabled(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
///
/// @param self const QLineEdit*
///
bool q_lineedit_drag_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
///
/// @param self QLineEdit*
/// @param style enum Qt__CursorMoveStyle
///
void q_lineedit_set_cursor_move_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
///
/// @param self const QLineEdit*
///
/// @return enum Qt__CursorMoveStyle
///
int32_t q_lineedit_cursor_move_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_input_mask(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
///
/// @param self QLineEdit*
/// @param inputMask const char*
///
void q_lineedit_set_input_mask(void* self, const char* inputMask);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
///
/// @param self const QLineEdit*
///
bool q_lineedit_has_acceptable_input(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self QLineEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self QLineEdit*
/// @param margins QMargins*
///
void q_lineedit_set_text_margins2(void* self, const void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
///
/// @param self const QLineEdit*
///
QMargins* q_lineedit_text_margins(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self QLineEdit*
/// @param action QAction*
/// @param position enum QLineEdit__ActionPosition
///
void q_lineedit_add_action(void* self, void* action, int32_t position);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self QLineEdit*
/// @param icon QIcon*
/// @param position enum QLineEdit__ActionPosition
///
QAction* q_lineedit_add_action2(void* self, const void* icon, int32_t position);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setText)
///
/// @param self QLineEdit*
/// @param text const char*
///
void q_lineedit_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#clear)
///
/// @param self QLineEdit*
///
void q_lineedit_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
///
/// @param self QLineEdit*
///
void q_lineedit_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#undo)
///
/// @param self QLineEdit*
///
void q_lineedit_undo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#redo)
///
/// @param self QLineEdit*
///
void q_lineedit_redo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cut)
///
/// @param self QLineEdit*
///
void q_lineedit_cut(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#copy)
///
/// @param self const QLineEdit*
///
void q_lineedit_copy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paste)
///
/// @param self QLineEdit*
///
void q_lineedit_paste(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#deselect)
///
/// @param self QLineEdit*
///
void q_lineedit_deselect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#insert)
///
/// @param self QLineEdit*
/// @param param1 const char*
///
void q_lineedit_insert(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
///
/// @param self QLineEdit*
///
QMenu* q_lineedit_create_standard_context_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self QLineEdit*
/// @param param1 const char*
///
void q_lineedit_text_changed(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, const char* param1)
///
void q_lineedit_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self QLineEdit*
/// @param param1 const char*
///
void q_lineedit_text_edited(void* self, const char* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, const char* param1)
///
void q_lineedit_on_text_edited(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self QLineEdit*
/// @param param1 int
/// @param param2 int
///
void q_lineedit_cursor_position_changed(void* self, int param1, int param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, int param1, int param2)
///
void q_lineedit_on_cursor_position_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self QLineEdit*
///
void q_lineedit_return_pressed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_return_pressed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self QLineEdit*
///
void q_lineedit_editing_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_editing_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self QLineEdit*
///
void q_lineedit_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self QLineEdit*
///
void q_lineedit_input_rejected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_input_rejected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QMouseEvent* param1)
///
void q_lineedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_super_mouse_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QMouseEvent* param1)
///
void q_lineedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_super_mouse_move_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QMouseEvent* param1)
///
void q_lineedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_super_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QMouseEvent* param1)
///
void q_lineedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
///
void q_lineedit_super_mouse_double_click_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
///
void q_lineedit_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QKeyEvent* param1)
///
void q_lineedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
///
void q_lineedit_super_key_press_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
///
void q_lineedit_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QKeyEvent* param1)
///
void q_lineedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
///
void q_lineedit_super_key_release_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
///
void q_lineedit_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QFocusEvent* param1)
///
void q_lineedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
///
void q_lineedit_super_focus_in_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
///
void q_lineedit_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QFocusEvent* param1)
///
void q_lineedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
///
void q_lineedit_super_focus_out_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// @param self QLineEdit*
/// @param param1 QPaintEvent*
///
void q_lineedit_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QPaintEvent* param1)
///
void q_lineedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QPaintEvent*
///
void q_lineedit_super_paint_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// @param self QLineEdit*
/// @param param1 QDragEnterEvent*
///
void q_lineedit_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QDragEnterEvent* param1)
///
void q_lineedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QDragEnterEvent*
///
void q_lineedit_super_drag_enter_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// @param self QLineEdit*
/// @param e QDragMoveEvent*
///
void q_lineedit_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QDragMoveEvent* e)
///
void q_lineedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param e QDragMoveEvent*
///
void q_lineedit_super_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// @param self QLineEdit*
/// @param e QDragLeaveEvent*
///
void q_lineedit_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QDragLeaveEvent* e)
///
void q_lineedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param e QDragLeaveEvent*
///
void q_lineedit_super_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// @param self QLineEdit*
/// @param param1 QDropEvent*
///
void q_lineedit_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QDropEvent* param1)
///
void q_lineedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QDropEvent*
///
void q_lineedit_super_drop_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// @param self QLineEdit*
/// @param param1 QEvent*
///
void q_lineedit_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QEvent* param1)
///
void q_lineedit_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QEvent*
///
void q_lineedit_super_change_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// @param self QLineEdit*
/// @param param1 QContextMenuEvent*
///
void q_lineedit_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QContextMenuEvent* param1)
///
void q_lineedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QContextMenuEvent*
///
void q_lineedit_super_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// @param self QLineEdit*
/// @param param1 QInputMethodEvent*
///
void q_lineedit_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QInputMethodEvent* param1)
///
void q_lineedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QInputMethodEvent*
///
void q_lineedit_super_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// @param self const QLineEdit*
/// @param option QStyleOptionFrame*
///
void q_lineedit_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(const QLineEdit* self, QStyleOptionFrame* option)
///
void q_lineedit_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self const QLineEdit*
/// @param option QStyleOptionFrame*
///
void q_lineedit_super_init_style_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// @param self const QLineEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_lineedit_input_method_query(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback QVariant* func(const QLineEdit* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_lineedit_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self const QLineEdit*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* q_lineedit_super_input_method_query(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// @param self const QLineEdit*
/// @param property enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_lineedit_input_method_query2(const void* self, int32_t property, void* argument);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// @param self QLineEdit*
/// @param param1 QTimerEvent*
///
void q_lineedit_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QTimerEvent* param1)
///
void q_lineedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QTimerEvent*
///
void q_lineedit_super_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// @param self QLineEdit*
/// @param param1 QEvent*
///
bool q_lineedit_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self, QEvent* param1)
///
void q_lineedit_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QEvent*
///
bool q_lineedit_super_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// @param self const QLineEdit*
///
QRect* q_lineedit_cursor_rect(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_lineedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_lineedit_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self QLineEdit*
/// @param mark bool
/// @param steps int
///
void q_lineedit_cursor_forward2(void* self, bool mark, int steps);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self QLineEdit*
/// @param mark bool
/// @param steps int
///
void q_lineedit_cursor_backward2(void* self, bool mark, int steps);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const QLineEdit*
///
QPaintDevice* q_lineedit_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a QLineEdit object
///
/// @param _qpaintdevice QPaintDevice*
///
QLineEdit* q_lineedit_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QLineEdit*
///
uintptr_t q_lineedit_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QLineEdit*
///
void q_lineedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QLineEdit*
///
uintptr_t q_lineedit_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QLineEdit*
///
uintptr_t q_lineedit_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QLineEdit*
///
QStyle* q_lineedit_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QLineEdit*
/// @param style QStyle*
///
void q_lineedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QLineEdit*
///
/// @return enum Qt__WindowModality
///
int32_t q_lineedit_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QLineEdit*
/// @param windowModality enum Qt__WindowModality
///
void q_lineedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QLineEdit*
/// @param param1 QWidget*
///
bool q_lineedit_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QLineEdit*
/// @param enabled bool
///
void q_lineedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QLineEdit*
/// @param disabled bool
///
void q_lineedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QLineEdit*
/// @param windowModified bool
///
void q_lineedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QLineEdit*
///
QRect* q_lineedit_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QLineEdit*
///
const QRect* q_lineedit_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QLineEdit*
///
QRect* q_lineedit_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QLineEdit*
///
QPoint* q_lineedit_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QLineEdit*
///
QRect* q_lineedit_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QLineEdit*
///
QRect* q_lineedit_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QLineEdit*
///
QRegion* q_lineedit_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QLineEdit*
/// @param minimumSize QSize*
///
void q_lineedit_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QLineEdit*
/// @param minw int
/// @param minh int
///
void q_lineedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QLineEdit*
/// @param maximumSize QSize*
///
void q_lineedit_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QLineEdit*
/// @param maxw int
/// @param maxh int
///
void q_lineedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QLineEdit*
/// @param minw int
///
void q_lineedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QLineEdit*
/// @param minh int
///
void q_lineedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QLineEdit*
/// @param maxw int
///
void q_lineedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QLineEdit*
/// @param maxh int
///
void q_lineedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QLineEdit*
/// @param sizeIncrement QSize*
///
void q_lineedit_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QLineEdit*
/// @param w int
/// @param h int
///
void q_lineedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QLineEdit*
///
QSize* q_lineedit_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QLineEdit*
/// @param baseSize QSize*
///
void q_lineedit_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QLineEdit*
/// @param basew int
/// @param baseh int
///
void q_lineedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QLineEdit*
/// @param fixedSize QSize*
///
void q_lineedit_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QLineEdit*
/// @param w int
/// @param h int
///
void q_lineedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QLineEdit*
/// @param w int
///
void q_lineedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QLineEdit*
/// @param h int
///
void q_lineedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QLineEdit*
/// @param param1 QPointF*
///
QPointF* q_lineedit_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QLineEdit*
/// @param param1 QPoint*
///
QPoint* q_lineedit_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QLineEdit*
/// @param param1 QPointF*
///
QPointF* q_lineedit_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QLineEdit*
/// @param param1 QPoint*
///
QPoint* q_lineedit_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QLineEdit*
/// @param param1 QPointF*
///
QPointF* q_lineedit_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QLineEdit*
/// @param param1 QPoint*
///
QPoint* q_lineedit_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QLineEdit*
/// @param param1 QPointF*
///
QPointF* q_lineedit_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QLineEdit*
/// @param param1 QPoint*
///
QPoint* q_lineedit_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_lineedit_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_lineedit_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_lineedit_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_lineedit_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QLineEdit*
///
const QPalette* q_lineedit_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QLineEdit*
/// @param palette QPalette*
///
void q_lineedit_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QLineEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_lineedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QLineEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_lineedit_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QLineEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_lineedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QLineEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_lineedit_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QLineEdit*
///
const QFont* q_lineedit_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QLineEdit*
/// @param font QFont*
///
void q_lineedit_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QLineEdit*
///
QFontMetrics* q_lineedit_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QLineEdit*
///
QFontInfo* q_lineedit_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QLineEdit*
///
QCursor* q_lineedit_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QLineEdit*
/// @param cursor QCursor*
///
void q_lineedit_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QLineEdit*
///
void q_lineedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QLineEdit*
/// @param enable bool
///
void q_lineedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QLineEdit*
///
bool q_lineedit_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QLineEdit*
///
bool q_lineedit_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QLineEdit*
/// @param enable bool
///
void q_lineedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QLineEdit*
///
bool q_lineedit_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QLineEdit*
/// @param mask QBitmap*
///
void q_lineedit_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QLineEdit*
/// @param mask QRegion*
///
void q_lineedit_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QLineEdit*
///
QRegion* q_lineedit_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QLineEdit*
///
void q_lineedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
///
void q_lineedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
///
void q_lineedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QLineEdit*
///
QPixmap* q_lineedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QLineEdit*
///
QGraphicsEffect* q_lineedit_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QLineEdit*
/// @param effect QGraphicsEffect*
///
void q_lineedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QLineEdit*
/// @param type enum Qt__GestureType
///
void q_lineedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QLineEdit*
/// @param type enum Qt__GestureType
///
void q_lineedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QLineEdit*
/// @param windowTitle const char*
///
void q_lineedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QLineEdit*
/// @param styleSheet const char*
///
void q_lineedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QLineEdit*
/// @param icon QIcon*
///
void q_lineedit_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QLineEdit*
///
QIcon* q_lineedit_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QLineEdit*
/// @param windowIconText const char*
///
void q_lineedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QLineEdit*
/// @param windowRole const char*
///
void q_lineedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QLineEdit*
/// @param filePath const char*
///
void q_lineedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QLineEdit*
/// @param level double
///
void q_lineedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QLineEdit*
///
double q_lineedit_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QLineEdit*
/// @param toolTip const char*
///
void q_lineedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QLineEdit*
/// @param msec int
///
void q_lineedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QLineEdit*
/// @param statusTip const char*
///
void q_lineedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QLineEdit*
/// @param whatsThis const char*
///
void q_lineedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QLineEdit*
/// @param name const char*
///
void q_lineedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QLineEdit*
/// @param description const char*
///
void q_lineedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QLineEdit*
/// @param direction enum Qt__LayoutDirection
///
void q_lineedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QLineEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_lineedit_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QLineEdit*
///
void q_lineedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QLineEdit*
/// @param locale QLocale*
///
void q_lineedit_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QLineEdit*
///
QLocale* q_lineedit_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QLineEdit*
///
void q_lineedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QLineEdit*
///
void q_lineedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QLineEdit*
///
void q_lineedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QLineEdit*
///
void q_lineedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QLineEdit*
/// @param reason enum Qt__FocusReason
///
void q_lineedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QLineEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_lineedit_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QLineEdit*
/// @param policy enum Qt__FocusPolicy
///
void q_lineedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QLineEdit*
///
bool q_lineedit_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_lineedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QLineEdit*
/// @param focusProxy QWidget*
///
void q_lineedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QLineEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_lineedit_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QLineEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_lineedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QLineEdit*
///
void q_lineedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QLineEdit*
/// @param param1 QCursor*
///
void q_lineedit_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QLineEdit*
///
void q_lineedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QLineEdit*
///
void q_lineedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QLineEdit*
///
void q_lineedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QLineEdit*
/// @param key QKeySequence*
///
int32_t q_lineedit_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QLineEdit*
/// @param id int
///
void q_lineedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QLineEdit*
/// @param id int
///
void q_lineedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QLineEdit*
/// @param id int
///
void q_lineedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_lineedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_lineedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QLineEdit*
///
bool q_lineedit_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QLineEdit*
/// @param enable bool
///
void q_lineedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QLineEdit*
///
QGraphicsProxyWidget* q_lineedit_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
///
void q_lineedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
///
void q_lineedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_lineedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
/// @param param1 QRect*
///
void q_lineedit_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
/// @param param1 QRegion*
///
void q_lineedit_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_lineedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
/// @param param1 QRect*
///
void q_lineedit_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
/// @param param1 QRegion*
///
void q_lineedit_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QLineEdit*
/// @param hidden bool
///
void q_lineedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QLineEdit*
///
void q_lineedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QLineEdit*
///
void q_lineedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QLineEdit*
///
void q_lineedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QLineEdit*
///
void q_lineedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QLineEdit*
///
void q_lineedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QLineEdit*
///
void q_lineedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QLineEdit*
///
bool q_lineedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QLineEdit*
///
void q_lineedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QLineEdit*
///
void q_lineedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
///
void q_lineedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
///
void q_lineedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QLineEdit*
/// @param param1 QPoint*
///
void q_lineedit_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QLineEdit*
/// @param w int
/// @param h int
///
void q_lineedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QLineEdit*
/// @param param1 QSize*
///
void q_lineedit_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_lineedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QLineEdit*
/// @param geometry QRect*
///
void q_lineedit_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QLineEdit*
///
char* q_lineedit_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QLineEdit*
/// @param geometry char*
///
bool q_lineedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QLineEdit*
///
void q_lineedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QLineEdit*
/// @param param1 QWidget*
///
bool q_lineedit_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QLineEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_lineedit_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QLineEdit*
/// @param state flag of enum Qt__WindowState
///
void q_lineedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QLineEdit*
/// @param state flag of enum Qt__WindowState
///
void q_lineedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QLineEdit*
///
QSizePolicy* q_lineedit_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QLineEdit*
/// @param sizePolicy QSizePolicy*
///
void q_lineedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QLineEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_lineedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QLineEdit*
///
QRegion* q_lineedit_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QLineEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QLineEdit*
/// @param margins QMargins*
///
void q_lineedit_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QLineEdit*
///
QMargins* q_lineedit_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QLineEdit*
///
QRect* q_lineedit_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QLineEdit*
///
QLayout* q_lineedit_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QLineEdit*
/// @param layout QLayout*
///
void q_lineedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QLineEdit*
///
void q_lineedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QLineEdit*
/// @param parent QWidget*
///
void q_lineedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QLineEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_lineedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QLineEdit*
/// @param dx int
/// @param dy int
///
void q_lineedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QLineEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_lineedit_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QLineEdit*
///
bool q_lineedit_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QLineEdit*
/// @param on bool
///
void q_lineedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QLineEdit*
/// @param actions libqt_list of QAction*
///
void q_lineedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QLineEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_lineedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QLineEdit*
/// @param before QAction*
/// @param action QAction*
///
void q_lineedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QLineEdit*
/// @param action QAction*
///
void q_lineedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QLineEdit*
///
/// @return libqt_list of QAction*
///
libqt_list q_lineedit_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLineEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_lineedit_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLineEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_lineedit_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLineEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_lineedit_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QLineEdit*
///
QWidget* q_lineedit_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QLineEdit*
/// @param type flag of enum Qt__WindowType
///
void q_lineedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QLineEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_lineedit_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WindowType
///
void q_lineedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QLineEdit*
/// @param type flag of enum Qt__WindowType
///
void q_lineedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QLineEdit*
///
/// @return enum Qt__WindowType
///
int32_t q_lineedit_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_lineedit_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QLineEdit*
/// @param x int
/// @param y int
///
QWidget* q_lineedit_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QLineEdit*
/// @param p QPoint*
///
QWidget* q_lineedit_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QLineEdit*
/// @param p QPointF*
///
QWidget* q_lineedit_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void q_lineedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QLineEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_lineedit_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QLineEdit*
///
void q_lineedit_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QLineEdit*
/// @param child QWidget*
///
bool q_lineedit_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QLineEdit*
///
bool q_lineedit_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QLineEdit*
/// @param enabled bool
///
void q_lineedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QLineEdit*
///
QBackingStore* q_lineedit_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QLineEdit*
///
QWindow* q_lineedit_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QLineEdit*
///
QScreen* q_lineedit_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QLineEdit*
/// @param screen QScreen*
///
void q_lineedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_lineedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QLineEdit*
/// @param title const char*
///
void q_lineedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, const char* title)
///
void q_lineedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QLineEdit*
/// @param icon QIcon*
///
void q_lineedit_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QIcon* icon)
///
void q_lineedit_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QLineEdit*
/// @param iconText const char*
///
void q_lineedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, const char* iconText)
///
void q_lineedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QLineEdit*
/// @param pos QPoint*
///
void q_lineedit_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QPoint* pos)
///
void q_lineedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QLineEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_lineedit_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QLineEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_lineedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_lineedit_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_lineedit_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_lineedit_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_lineedit_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_lineedit_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_lineedit_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QLineEdit*
/// @param rectangle QRect*
///
QPixmap* q_lineedit_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QLineEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_lineedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QLineEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_lineedit_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QLineEdit*
/// @param id int
/// @param enable bool
///
void q_lineedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QLineEdit*
/// @param id int
/// @param enable bool
///
void q_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_lineedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_lineedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_lineedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_lineedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLineEdit*
///
const char* q_lineedit_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLineEdit*
/// @param name const char*
///
void q_lineedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QLineEdit*
///
bool q_lineedit_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QLineEdit*
///
bool q_lineedit_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLineEdit*
/// @param b bool
///
bool q_lineedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QLineEdit*
///
QThread* q_lineedit_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLineEdit*
/// @param thread QThread*
///
bool q_lineedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineEdit*
/// @param interval int
///
int32_t q_lineedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineEdit*
/// @param time int64_t of nanoseconds
///
int32_t q_lineedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLineEdit*
/// @param id int
///
void q_lineedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLineEdit*
/// @param id enum Qt__TimerId
///
void q_lineedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QLineEdit*
///
/// @return libqt_list of QObject*
///
libqt_list q_lineedit_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLineEdit*
/// @param filterObj QObject*
///
void q_lineedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLineEdit*
/// @param obj QObject*
///
void q_lineedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_lineedit_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_lineedit_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLineEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_lineedit_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lineedit_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_lineedit_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLineEdit*
///
bool q_lineedit_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLineEdit*
/// @param receiver QObject*
///
bool q_lineedit_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_lineedit_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QLineEdit*
///
void q_lineedit_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QLineEdit*
///
void q_lineedit_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLineEdit*
/// @param name const char*
/// @param value QVariant*
///
bool q_lineedit_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QLineEdit*
/// @param name const char*
///
QVariant* q_lineedit_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QLineEdit*
///
const char** q_lineedit_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLineEdit*
///
QBindingStorage* q_lineedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QLineEdit*
///
const QBindingStorage* q_lineedit_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
///
void q_lineedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QLineEdit*
///
QObject* q_lineedit_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QLineEdit*
/// @param classname const char*
///
bool q_lineedit_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLineEdit*
///
void q_lineedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_lineedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_lineedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_lineedit_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_lineedit_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QLineEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_lineedit_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLineEdit*
/// @param signal const char*
///
bool q_lineedit_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLineEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_lineedit_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLineEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lineedit_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QLineEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool q_lineedit_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
/// @param param1 QObject*
///
void q_lineedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QObject* param1)
///
void q_lineedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QLineEdit*
///
bool q_lineedit_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QLineEdit*
///
double q_lineedit_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QLineEdit*
///
double q_lineedit_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_lineedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_lineedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t func(QLineEdit* self)
///
void q_lineedit_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param visible bool
///
void q_lineedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param visible bool
///
void q_lineedit_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, bool visible)
///
void q_lineedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
/// @param param1 int
///
int32_t q_lineedit_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
/// @param param1 int
///
int32_t q_lineedit_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t func(QLineEdit* self, int param1)
///
void q_lineedit_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
///
bool q_lineedit_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
///
bool q_lineedit_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self)
///
void q_lineedit_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
///
QPaintEngine* q_lineedit_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
///
QPaintEngine* q_lineedit_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QPaintEngine* func(QLineEdit* self)
///
void q_lineedit_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QWheelEvent*
///
void q_lineedit_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QWheelEvent*
///
void q_lineedit_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QWheelEvent* event)
///
void q_lineedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEnterEvent*
///
void q_lineedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEnterEvent*
///
void q_lineedit_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QEnterEvent* event)
///
void q_lineedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
///
void q_lineedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
///
void q_lineedit_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QEvent* event)
///
void q_lineedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QMoveEvent*
///
void q_lineedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QMoveEvent*
///
void q_lineedit_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QMoveEvent* event)
///
void q_lineedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QResizeEvent*
///
void q_lineedit_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QResizeEvent*
///
void q_lineedit_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QResizeEvent* event)
///
void q_lineedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QCloseEvent*
///
void q_lineedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QCloseEvent*
///
void q_lineedit_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QCloseEvent* event)
///
void q_lineedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QTabletEvent*
///
void q_lineedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QTabletEvent*
///
void q_lineedit_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QTabletEvent* event)
///
void q_lineedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QActionEvent*
///
void q_lineedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QActionEvent*
///
void q_lineedit_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QActionEvent* event)
///
void q_lineedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QShowEvent*
///
void q_lineedit_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QShowEvent*
///
void q_lineedit_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QShowEvent* event)
///
void q_lineedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QHideEvent*
///
void q_lineedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QHideEvent*
///
void q_lineedit_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QHideEvent* event)
///
void q_lineedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_lineedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_lineedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_lineedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_lineedit_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_lineedit_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t func(QLineEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_lineedit_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
/// @param painter QPainter*
///
void q_lineedit_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
/// @param painter QPainter*
///
void q_lineedit_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QPainter* painter)
///
void q_lineedit_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
/// @param offset QPoint*
///
QPaintDevice* q_lineedit_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
/// @param offset QPoint*
///
QPaintDevice* q_lineedit_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QPaintDevice* func(QLineEdit* self, QPoint* offset)
///
void q_lineedit_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
///
QPainter* q_lineedit_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
///
QPainter* q_lineedit_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QPainter* func(QLineEdit* self)
///
void q_lineedit_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param next bool
///
bool q_lineedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param next bool
///
bool q_lineedit_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self, bool next)
///
void q_lineedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_lineedit_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_lineedit_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self, QObject* watched, QEvent* event)
///
void q_lineedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QChildEvent*
///
void q_lineedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QChildEvent*
///
void q_lineedit_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QChildEvent* event)
///
void q_lineedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
///
void q_lineedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
///
void q_lineedit_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QEvent* event)
///
void q_lineedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
///
void q_lineedit_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
///
void q_lineedit_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QMetaMethod* signal)
///
void q_lineedit_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
///
void q_lineedit_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
///
void q_lineedit_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, QMetaMethod* signal)
///
void q_lineedit_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
///
void q_lineedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
///
void q_lineedit_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
///
void q_lineedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
///
void q_lineedit_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
///
void q_lineedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
///
void q_lineedit_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self)
///
void q_lineedit_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
///
bool q_lineedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
///
bool q_lineedit_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self)
///
void q_lineedit_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
///
bool q_lineedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
///
bool q_lineedit_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self)
///
void q_lineedit_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
///
QObject* q_lineedit_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
///
QObject* q_lineedit_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QObject* func(QLineEdit* self)
///
void q_lineedit_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
///
int32_t q_lineedit_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t func(QLineEdit* self)
///
void q_lineedit_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
/// @param signal const char*
///
int32_t q_lineedit_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
/// @param signal const char*
///
int32_t q_lineedit_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t func(QLineEdit* self, const char* signal)
///
void q_lineedit_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
/// @param signal QMetaMethod*
///
bool q_lineedit_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
/// @param signal QMetaMethod*
///
bool q_lineedit_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool func(QLineEdit* self, QMetaMethod* signal)
///
void q_lineedit_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QLineEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_lineedit_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QLineEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_lineedit_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback double func(QLineEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_lineedit_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLineEdit*
/// @param callback void func(QLineEdit* self, const char* objectName)
///
void q_lineedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dtor.QLineEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QLineEdit*
///
void q_lineedit_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#public-types)

typedef enum {
    QLINEEDIT_ACTIONPOSITION_LEADINGPOSITION = 0,
    QLINEEDIT_ACTIONPOSITION_TRAILINGPOSITION = 1
} QLineEdit__ActionPosition;

/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#public-types)

typedef enum {
    QLINEEDIT_ECHOMODE_NORMAL = 0,
    QLINEEDIT_ECHOMODE_NOECHO = 1,
    QLINEEDIT_ECHOMODE_PASSWORD = 2,
    QLINEEDIT_ECHOMODE_PASSWORDECHOONEDIT = 3
} QLineEdit__EchoMode;

#endif
