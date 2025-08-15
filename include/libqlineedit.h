#pragma once
#ifndef SRCQT6C_LIBQLINEEDIT_H
#define SRCQT6C_LIBQLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlineedit.html

/// q_lineedit_new constructs a new QLineEdit object.
///
/// @param parent QWidget*
QLineEdit* q_lineedit_new(void* parent);

/// q_lineedit_new2 constructs a new QLineEdit object.
///
QLineEdit* q_lineedit_new2();

/// q_lineedit_new3 constructs a new QLineEdit object.
///
/// @param param1 const char*
QLineEdit* q_lineedit_new3(const char* param1);

/// q_lineedit_new4 constructs a new QLineEdit object.
///
/// @param param1 const char*
/// @param parent QWidget*
QLineEdit* q_lineedit_new4(const char* param1, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QLineEdit*
const QMetaObject* q_lineedit_meta_object(void* self);

/// @param self QLineEdit*
/// @param param1 const char*
void* q_lineedit_metacast(void* self, const char* param1);

/// @param self QLineEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_lineedit_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback int32_t fn(QLineEdit*, enum QMetaObject__Call, int, void*)
void q_lineedit_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_lineedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_lineedit_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#displayText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_display_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_placeholder_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
///
/// @param self QLineEdit*
/// @param placeholderText const char*
void q_lineedit_set_placeholder_text(void* self, const char* placeholderText);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
///
/// @param self QLineEdit*
int32_t q_lineedit_max_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
///
/// @param self QLineEdit*
/// @param maxLength int
void q_lineedit_set_max_length(void* self, int maxLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
///
/// @param self QLineEdit*
/// @param frame bool
void q_lineedit_set_frame(void* self, bool frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
///
/// @param self QLineEdit*
bool q_lineedit_has_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
///
/// @param self QLineEdit*
/// @param enable bool
void q_lineedit_set_clear_button_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
///
/// @param self QLineEdit*
bool q_lineedit_is_clear_button_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
///
/// @param self QLineEdit*
///
/// @return enum QLineEdit__EchoMode
int64_t q_lineedit_echo_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
///
/// @param self QLineEdit*
/// @param echoMode enum QLineEdit__EchoMode
void q_lineedit_set_echo_mode(void* self, int64_t echoMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
///
/// @param self QLineEdit*
bool q_lineedit_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
///
/// @param self QLineEdit*
/// @param readOnly bool
void q_lineedit_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
///
/// @param self QLineEdit*
/// @param validator QValidator*
void q_lineedit_set_validator(void* self, void* validator);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#validator)
///
/// @param self QLineEdit*
const QValidator* q_lineedit_validator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
///
/// @param self QLineEdit*
/// @param completer QCompleter*
void q_lineedit_set_completer(void* self, void* completer);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#completer)
///
/// @param self QLineEdit*
QCompleter* q_lineedit_completer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// @param self QLineEdit*
QSize* q_lineedit_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback QSize* fn()
void q_lineedit_on_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Base class method implementation
///
/// @param self QLineEdit*
QSize* q_lineedit_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// @param self QLineEdit*
QSize* q_lineedit_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback QSize* fn()
void q_lineedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self QLineEdit*
QSize* q_lineedit_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
///
/// @param self QLineEdit*
int32_t q_lineedit_cursor_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
///
/// @param self QLineEdit*
/// @param cursorPosition int
void q_lineedit_set_cursor_position(void* self, int cursorPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
///
/// @param self QLineEdit*
/// @param pos QPoint*
int32_t q_lineedit_cursor_position_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
///
/// @param self QLineEdit*
/// @param flag flag of enum Qt__AlignmentFlag
void q_lineedit_set_alignment(void* self, int64_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#alignment)
///
/// @param self QLineEdit*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_lineedit_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self QLineEdit*
/// @param mark bool
void q_lineedit_cursor_forward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self QLineEdit*
/// @param mark bool
void q_lineedit_cursor_backward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
///
/// @param self QLineEdit*
/// @param mark bool
void q_lineedit_cursor_word_forward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
///
/// @param self QLineEdit*
/// @param mark bool
void q_lineedit_cursor_word_backward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#backspace)
///
/// @param self QLineEdit*
void q_lineedit_backspace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#del)
///
/// @param self QLineEdit*
void q_lineedit_del(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#home)
///
/// @param self QLineEdit*
/// @param mark bool
void q_lineedit_home(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#end)
///
/// @param self QLineEdit*
/// @param mark bool
void q_lineedit_end(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isModified)
///
/// @param self QLineEdit*
bool q_lineedit_is_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setModified)
///
/// @param self QLineEdit*
/// @param modified bool
void q_lineedit_set_modified(void* self, bool modified);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
///
/// @param self QLineEdit*
/// @param param1 int
/// @param param2 int
void q_lineedit_set_selection(void* self, int param1, int param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
///
/// @param self QLineEdit*
bool q_lineedit_has_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
///
/// @param self QLineEdit*
int32_t q_lineedit_selection_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
///
/// @param self QLineEdit*
int32_t q_lineedit_selection_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
///
/// @param self QLineEdit*
int32_t q_lineedit_selection_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
///
/// @param self QLineEdit*
bool q_lineedit_is_undo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
///
/// @param self QLineEdit*
bool q_lineedit_is_redo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
///
/// @param self QLineEdit*
/// @param b bool
void q_lineedit_set_drag_enabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
///
/// @param self QLineEdit*
bool q_lineedit_drag_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
///
/// @param self QLineEdit*
/// @param style enum Qt__CursorMoveStyle
void q_lineedit_set_cursor_move_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
///
/// @param self QLineEdit*
///
/// @return enum Qt__CursorMoveStyle
int64_t q_lineedit_cursor_move_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_input_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
///
/// @param self QLineEdit*
/// @param inputMask const char*
void q_lineedit_set_input_mask(void* self, const char* inputMask);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
///
/// @param self QLineEdit*
bool q_lineedit_has_acceptable_input(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self QLineEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self QLineEdit*
/// @param margins QMargins*
void q_lineedit_set_text_margins2(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
///
/// @param self QLineEdit*
QMargins* q_lineedit_text_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self QLineEdit*
/// @param action QAction*
/// @param position enum QLineEdit__ActionPosition
void q_lineedit_add_action(void* self, void* action, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self QLineEdit*
/// @param icon QIcon*
/// @param position enum QLineEdit__ActionPosition
QAction* q_lineedit_add_action2(void* self, void* icon, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setText)
///
/// @param self QLineEdit*
/// @param text const char*
void q_lineedit_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#clear)
///
/// @param self QLineEdit*
void q_lineedit_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
///
/// @param self QLineEdit*
void q_lineedit_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#undo)
///
/// @param self QLineEdit*
void q_lineedit_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#redo)
///
/// @param self QLineEdit*
void q_lineedit_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cut)
///
/// @param self QLineEdit*
void q_lineedit_cut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#copy)
///
/// @param self QLineEdit*
void q_lineedit_copy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paste)
///
/// @param self QLineEdit*
void q_lineedit_paste(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#deselect)
///
/// @param self QLineEdit*
void q_lineedit_deselect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#insert)
///
/// @param self QLineEdit*
/// @param param1 const char*
void q_lineedit_insert(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
///
/// @param self QLineEdit*
QMenu* q_lineedit_create_standard_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self QLineEdit*
/// @param param1 const char*
void q_lineedit_text_changed(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, const char*)
void q_lineedit_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self QLineEdit*
/// @param param1 const char*
void q_lineedit_text_edited(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, const char*)
void q_lineedit_on_text_edited(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self QLineEdit*
/// @param param1 int
/// @param param2 int
void q_lineedit_cursor_position_changed(void* self, int param1, int param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, int, int)
void q_lineedit_on_cursor_position_changed(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self QLineEdit*
void q_lineedit_return_pressed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*)
void q_lineedit_on_return_pressed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self QLineEdit*
void q_lineedit_editing_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*)
void q_lineedit_on_editing_finished(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self QLineEdit*
void q_lineedit_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*)
void q_lineedit_on_selection_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self QLineEdit*
void q_lineedit_input_rejected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*)
void q_lineedit_on_input_rejected(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QMouseEvent*)
void q_lineedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QMouseEvent*)
void q_lineedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QMouseEvent*)
void q_lineedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QMouseEvent*)
void q_lineedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QMouseEvent*
void q_lineedit_qbase_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
void q_lineedit_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QKeyEvent*)
void q_lineedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
void q_lineedit_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
void q_lineedit_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QKeyEvent*)
void q_lineedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QKeyEvent*
void q_lineedit_qbase_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
void q_lineedit_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QFocusEvent*)
void q_lineedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
void q_lineedit_qbase_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
void q_lineedit_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QFocusEvent*)
void q_lineedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QFocusEvent*
void q_lineedit_qbase_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// @param self QLineEdit*
/// @param param1 QPaintEvent*
void q_lineedit_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QPaintEvent*)
void q_lineedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QPaintEvent*
void q_lineedit_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// @param self QLineEdit*
/// @param param1 QDragEnterEvent*
void q_lineedit_drag_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QDragEnterEvent*)
void q_lineedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QDragEnterEvent*
void q_lineedit_qbase_drag_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// @param self QLineEdit*
/// @param e QDragMoveEvent*
void q_lineedit_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QDragMoveEvent*)
void q_lineedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param e QDragMoveEvent*
void q_lineedit_qbase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// @param self QLineEdit*
/// @param e QDragLeaveEvent*
void q_lineedit_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QDragLeaveEvent*)
void q_lineedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param e QDragLeaveEvent*
void q_lineedit_qbase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// @param self QLineEdit*
/// @param param1 QDropEvent*
void q_lineedit_drop_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QDropEvent*)
void q_lineedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QDropEvent*
void q_lineedit_qbase_drop_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// @param self QLineEdit*
/// @param param1 QEvent*
void q_lineedit_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QEvent*)
void q_lineedit_on_change_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QEvent*
void q_lineedit_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// @param self QLineEdit*
/// @param param1 QContextMenuEvent*
void q_lineedit_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QContextMenuEvent*)
void q_lineedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QContextMenuEvent*
void q_lineedit_qbase_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// @param self QLineEdit*
/// @param param1 QInputMethodEvent*
void q_lineedit_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QInputMethodEvent*)
void q_lineedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QInputMethodEvent*
void q_lineedit_qbase_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// @param self QLineEdit*
/// @param option QStyleOptionFrame*
void q_lineedit_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QStyleOptionFrame*)
void q_lineedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param option QStyleOptionFrame*
void q_lineedit_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_lineedit_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback QVariant* fn(QLineEdit*, enum Qt__InputMethodQuery)
void q_lineedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 enum Qt__InputMethodQuery
QVariant* q_lineedit_qbase_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// @param self QLineEdit*
/// @param property enum Qt__InputMethodQuery
/// @param argument QVariant*
QVariant* q_lineedit_input_method_query2(void* self, int64_t property, void* argument);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// @param self QLineEdit*
/// @param param1 QTimerEvent*
void q_lineedit_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QTimerEvent*)
void q_lineedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QTimerEvent*
void q_lineedit_qbase_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// @param self QLineEdit*
/// @param param1 QEvent*
bool q_lineedit_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback bool fn(QLineEdit*, QEvent*)
void q_lineedit_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// Base class method implementation
///
/// @param self QLineEdit*
/// @param param1 QEvent*
bool q_lineedit_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// @param self QLineEdit*
QRect* q_lineedit_cursor_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Allows for overriding the related default method
///
/// @param self QLineEdit*
/// @param callback QRect* fn()
void q_lineedit_on_cursor_rect(void* self, QRect* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Base class method implementation
///
/// @param self QLineEdit*
QRect* q_lineedit_qbase_cursor_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_lineedit_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_lineedit_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self QLineEdit*
/// @param mark bool
/// @param steps int
void q_lineedit_cursor_forward2(void* self, bool mark, int steps);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self QLineEdit*
/// @param mark bool
/// @param steps int
void q_lineedit_cursor_backward2(void* self, bool mark, int steps);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QLineEdit*
uintptr_t q_lineedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QLineEdit*
void q_lineedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QLineEdit*
uintptr_t q_lineedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QLineEdit*
uintptr_t q_lineedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QLineEdit*
QStyle* q_lineedit_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QLineEdit*
/// @param style QStyle*
void q_lineedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QLineEdit*
bool q_lineedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QLineEdit*
bool q_lineedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QLineEdit*
bool q_lineedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QLineEdit*
///
/// @return enum Qt__WindowModality
int64_t q_lineedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QLineEdit*
/// @param windowModality enum Qt__WindowModality
void q_lineedit_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QLineEdit*
bool q_lineedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
bool q_lineedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QLineEdit*
/// @param enabled bool
void q_lineedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QLineEdit*
/// @param disabled bool
void q_lineedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QLineEdit*
/// @param windowModified bool
void q_lineedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QLineEdit*
QRect* q_lineedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QLineEdit*
const QRect* q_lineedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QLineEdit*
QRect* q_lineedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QLineEdit*
int32_t q_lineedit_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QLineEdit*
int32_t q_lineedit_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QLineEdit*
QPoint* q_lineedit_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QLineEdit*
QSize* q_lineedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QLineEdit*
QSize* q_lineedit_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QLineEdit*
int32_t q_lineedit_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QLineEdit*
int32_t q_lineedit_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QLineEdit*
QRect* q_lineedit_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QLineEdit*
QRect* q_lineedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QLineEdit*
QRegion* q_lineedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QLineEdit*
QSize* q_lineedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QLineEdit*
QSize* q_lineedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QLineEdit*
int32_t q_lineedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QLineEdit*
int32_t q_lineedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QLineEdit*
int32_t q_lineedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QLineEdit*
int32_t q_lineedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QLineEdit*
/// @param minimumSize QSize*
void q_lineedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QLineEdit*
/// @param minw int
/// @param minh int
void q_lineedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QLineEdit*
/// @param maximumSize QSize*
void q_lineedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QLineEdit*
/// @param maxw int
/// @param maxh int
void q_lineedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QLineEdit*
/// @param minw int
void q_lineedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QLineEdit*
/// @param minh int
void q_lineedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QLineEdit*
/// @param maxw int
void q_lineedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QLineEdit*
/// @param maxh int
void q_lineedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QLineEdit*
QSize* q_lineedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QLineEdit*
/// @param sizeIncrement QSize*
void q_lineedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QLineEdit*
/// @param w int
/// @param h int
void q_lineedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QLineEdit*
QSize* q_lineedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QLineEdit*
/// @param baseSize QSize*
void q_lineedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QLineEdit*
/// @param basew int
/// @param baseh int
void q_lineedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QLineEdit*
/// @param fixedSize QSize*
void q_lineedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QLineEdit*
/// @param w int
/// @param h int
void q_lineedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QLineEdit*
/// @param w int
void q_lineedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QLineEdit*
/// @param h int
void q_lineedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QLineEdit*
/// @param param1 QPointF*
QPointF* q_lineedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QLineEdit*
/// @param param1 QPoint*
QPoint* q_lineedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QLineEdit*
/// @param param1 QPointF*
QPointF* q_lineedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QLineEdit*
/// @param param1 QPoint*
QPoint* q_lineedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QLineEdit*
/// @param param1 QPointF*
QPointF* q_lineedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QLineEdit*
/// @param param1 QPoint*
QPoint* q_lineedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QLineEdit*
/// @param param1 QPointF*
QPointF* q_lineedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QLineEdit*
/// @param param1 QPoint*
QPoint* q_lineedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_lineedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_lineedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_lineedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_lineedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QLineEdit*
QWidget* q_lineedit_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QLineEdit*
QWidget* q_lineedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QLineEdit*
QWidget* q_lineedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QLineEdit*
const QPalette* q_lineedit_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QLineEdit*
/// @param palette QPalette*
void q_lineedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QLineEdit*
/// @param backgroundRole enum QPalette__ColorRole
void q_lineedit_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QLineEdit*
///
/// @return enum QPalette__ColorRole
int64_t q_lineedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QLineEdit*
/// @param foregroundRole enum QPalette__ColorRole
void q_lineedit_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QLineEdit*
///
/// @return enum QPalette__ColorRole
int64_t q_lineedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QLineEdit*
const QFont* q_lineedit_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QLineEdit*
/// @param font QFont*
void q_lineedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QLineEdit*
QFontMetrics* q_lineedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QLineEdit*
QFontInfo* q_lineedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QLineEdit*
QCursor* q_lineedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QLineEdit*
/// @param cursor QCursor*
void q_lineedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QLineEdit*
void q_lineedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QLineEdit*
/// @param enable bool
void q_lineedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QLineEdit*
bool q_lineedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QLineEdit*
bool q_lineedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QLineEdit*
/// @param enable bool
void q_lineedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QLineEdit*
bool q_lineedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QLineEdit*
/// @param mask QBitmap*
void q_lineedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QLineEdit*
/// @param mask QRegion*
void q_lineedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QLineEdit*
QRegion* q_lineedit_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QLineEdit*
void q_lineedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
void q_lineedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
void q_lineedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QLineEdit*
QPixmap* q_lineedit_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QLineEdit*
QGraphicsEffect* q_lineedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QLineEdit*
/// @param effect QGraphicsEffect*
void q_lineedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QLineEdit*
/// @param typeVal enum Qt__GestureType
void q_lineedit_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QLineEdit*
/// @param typeVal enum Qt__GestureType
void q_lineedit_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QLineEdit*
/// @param windowTitle const char*
void q_lineedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QLineEdit*
/// @param styleSheet const char*
void q_lineedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QLineEdit*
/// @param icon QIcon*
void q_lineedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QLineEdit*
QIcon* q_lineedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QLineEdit*
/// @param windowIconText const char*
void q_lineedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QLineEdit*
/// @param windowRole const char*
void q_lineedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QLineEdit*
/// @param filePath const char*
void q_lineedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QLineEdit*
/// @param level double
void q_lineedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QLineEdit*
double q_lineedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QLineEdit*
bool q_lineedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QLineEdit*
/// @param toolTip const char*
void q_lineedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QLineEdit*
/// @param msec int
void q_lineedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QLineEdit*
int32_t q_lineedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QLineEdit*
/// @param statusTip const char*
void q_lineedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QLineEdit*
/// @param whatsThis const char*
void q_lineedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QLineEdit*
/// @param name const char*
void q_lineedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QLineEdit*
/// @param description const char*
void q_lineedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QLineEdit*
/// @param direction enum Qt__LayoutDirection
void q_lineedit_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QLineEdit*
///
/// @return enum Qt__LayoutDirection
int64_t q_lineedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QLineEdit*
void q_lineedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QLineEdit*
/// @param locale QLocale*
void q_lineedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QLineEdit*
QLocale* q_lineedit_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QLineEdit*
void q_lineedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QLineEdit*
bool q_lineedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QLineEdit*
bool q_lineedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QLineEdit*
void q_lineedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QLineEdit*
bool q_lineedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QLineEdit*
void q_lineedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QLineEdit*
void q_lineedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QLineEdit*
/// @param reason enum Qt__FocusReason
void q_lineedit_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QLineEdit*
///
/// @return enum Qt__FocusPolicy
int64_t q_lineedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QLineEdit*
/// @param policy enum Qt__FocusPolicy
void q_lineedit_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QLineEdit*
bool q_lineedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_lineedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QLineEdit*
/// @param focusProxy QWidget*
void q_lineedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QLineEdit*
QWidget* q_lineedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QLineEdit*
///
/// @return enum Qt__ContextMenuPolicy
int64_t q_lineedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QLineEdit*
/// @param policy enum Qt__ContextMenuPolicy
void q_lineedit_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QLineEdit*
void q_lineedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QLineEdit*
/// @param param1 QCursor*
void q_lineedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QLineEdit*
void q_lineedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QLineEdit*
void q_lineedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QLineEdit*
void q_lineedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QLineEdit*
/// @param key QKeySequence*
int32_t q_lineedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QLineEdit*
/// @param id int
void q_lineedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QLineEdit*
/// @param id int
void q_lineedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QLineEdit*
/// @param id int
void q_lineedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_lineedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_lineedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QLineEdit*
bool q_lineedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QLineEdit*
/// @param enable bool
void q_lineedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QLineEdit*
QGraphicsProxyWidget* q_lineedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
void q_lineedit_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
void q_lineedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_lineedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
/// @param param1 QRect*
void q_lineedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QLineEdit*
/// @param param1 QRegion*
void q_lineedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_lineedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
/// @param param1 QRect*
void q_lineedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QLineEdit*
/// @param param1 QRegion*
void q_lineedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QLineEdit*
/// @param hidden bool
void q_lineedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QLineEdit*
void q_lineedit_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QLineEdit*
void q_lineedit_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QLineEdit*
void q_lineedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QLineEdit*
void q_lineedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QLineEdit*
void q_lineedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QLineEdit*
void q_lineedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QLineEdit*
bool q_lineedit_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QLineEdit*
void q_lineedit_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QLineEdit*
void q_lineedit_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
void q_lineedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
void q_lineedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QLineEdit*
/// @param param1 QPoint*
void q_lineedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QLineEdit*
/// @param w int
/// @param h int
void q_lineedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QLineEdit*
/// @param param1 QSize*
void q_lineedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_lineedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QLineEdit*
/// @param geometry QRect*
void q_lineedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
char* q_lineedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QLineEdit*
/// @param geometry const char*
bool q_lineedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QLineEdit*
void q_lineedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QLineEdit*
bool q_lineedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QLineEdit*
/// @param param1 QWidget*
bool q_lineedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QLineEdit*
bool q_lineedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QLineEdit*
bool q_lineedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QLineEdit*
bool q_lineedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QLineEdit*
bool q_lineedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QLineEdit*
///
/// @return flag of enum Qt__WindowState
int64_t q_lineedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QLineEdit*
/// @param state flag of enum Qt__WindowState
void q_lineedit_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QLineEdit*
/// @param state flag of enum Qt__WindowState
void q_lineedit_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QLineEdit*
QSizePolicy* q_lineedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QLineEdit*
/// @param sizePolicy QSizePolicy*
void q_lineedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QLineEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_lineedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QLineEdit*
QRegion* q_lineedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QLineEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QLineEdit*
/// @param margins QMargins*
void q_lineedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QLineEdit*
QMargins* q_lineedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QLineEdit*
QRect* q_lineedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QLineEdit*
QLayout* q_lineedit_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QLineEdit*
/// @param layout QLayout*
void q_lineedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QLineEdit*
void q_lineedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QLineEdit*
/// @param parent QWidget*
void q_lineedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QLineEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_lineedit_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QLineEdit*
/// @param dx int
/// @param dy int
void q_lineedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QLineEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_lineedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QLineEdit*
QWidget* q_lineedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QLineEdit*
QWidget* q_lineedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QLineEdit*
QWidget* q_lineedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QLineEdit*
bool q_lineedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QLineEdit*
/// @param on bool
void q_lineedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QLineEdit*
/// @param actions libqt_list /* of QAction* */
void q_lineedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QLineEdit*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_lineedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QLineEdit*
/// @param before QAction*
/// @param action QAction*
void q_lineedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QLineEdit*
/// @param action QAction*
void q_lineedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QLineEdit*
libqt_list /* of QAction* */ q_lineedit_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLineEdit*
/// @param icon QIcon*
/// @param text const char*
QAction* q_lineedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLineEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_lineedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QLineEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_lineedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QLineEdit*
QWidget* q_lineedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QLineEdit*
/// @param typeVal flag of enum Qt__WindowType
void q_lineedit_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QLineEdit*
///
/// @return flag of enum Qt__WindowType
int64_t q_lineedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WindowType
void q_lineedit_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QLineEdit*
/// @param typeVal flag of enum Qt__WindowType
void q_lineedit_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QLineEdit*
///
/// @return enum Qt__WindowType
int64_t q_lineedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_lineedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QLineEdit*
/// @param x int
/// @param y int
QWidget* q_lineedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QLineEdit*
/// @param p QPoint*
QWidget* q_lineedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QLineEdit*
/// @param p QPointF*
QWidget* q_lineedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WidgetAttribute
void q_lineedit_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WidgetAttribute
bool q_lineedit_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QLineEdit*
void q_lineedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QLineEdit*
/// @param child QWidget*
bool q_lineedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QLineEdit*
bool q_lineedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QLineEdit*
/// @param enabled bool
void q_lineedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QLineEdit*
QBackingStore* q_lineedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QLineEdit*
QWindow* q_lineedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QLineEdit*
QScreen* q_lineedit_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QLineEdit*
/// @param screen QScreen*
void q_lineedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_lineedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QLineEdit*
/// @param title const char*
void q_lineedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, const char*)
void q_lineedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QLineEdit*
/// @param icon QIcon*
void q_lineedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QIcon*)
void q_lineedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QLineEdit*
/// @param iconText const char*
void q_lineedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, const char*)
void q_lineedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QLineEdit*
/// @param pos QPoint*
void q_lineedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QPoint*)
void q_lineedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QLineEdit*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_lineedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QLineEdit*
/// @param hints flag of enum Qt__InputMethodHint
void q_lineedit_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_lineedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_lineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_lineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_lineedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_lineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QLineEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_lineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QLineEdit*
/// @param rectangle QRect*
QPixmap* q_lineedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QLineEdit*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_lineedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QLineEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_lineedit_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QLineEdit*
/// @param id int
/// @param enable bool
void q_lineedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QLineEdit*
/// @param id int
/// @param enable bool
void q_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_lineedit_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QLineEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_lineedit_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_lineedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_lineedit_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char* q_lineedit_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QLineEdit*
/// @param name char*
void q_lineedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QLineEdit*
bool q_lineedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QLineEdit*
bool q_lineedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QLineEdit*
bool q_lineedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QLineEdit*
bool q_lineedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QLineEdit*
/// @param b bool
bool q_lineedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QLineEdit*
QThread* q_lineedit_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLineEdit*
/// @param thread QThread*
bool q_lineedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineEdit*
/// @param interval int
int32_t q_lineedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLineEdit*
/// @param id int
void q_lineedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QLineEdit*
/// @param id enum Qt__TimerId
void q_lineedit_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QLineEdit*
libqt_list /* of QObject* */ q_lineedit_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QLineEdit*
/// @param filterObj QObject*
void q_lineedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QLineEdit*
/// @param obj QObject*
void q_lineedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_lineedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLineEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_lineedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_lineedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_lineedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QLineEdit*
void q_lineedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QLineEdit*
void q_lineedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QLineEdit*
/// @param name const char*
/// @param value QVariant*
bool q_lineedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QLineEdit*
/// @param name const char*
QVariant* q_lineedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QLineEdit*
const char** q_lineedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLineEdit*
QBindingStorage* q_lineedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QLineEdit*
const QBindingStorage* q_lineedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
void q_lineedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*)
void q_lineedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QLineEdit*
QObject* q_lineedit_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QLineEdit*
/// @param classname const char*
bool q_lineedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QLineEdit*
void q_lineedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QLineEdit*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_lineedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QLineEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_lineedit_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_lineedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QLineEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_lineedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
/// @param param1 QObject*
void q_lineedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QObject*)
void q_lineedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QLineEdit*
bool q_lineedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QLineEdit*
int32_t q_lineedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QLineEdit*
int32_t q_lineedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QLineEdit*
int32_t q_lineedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QLineEdit*
int32_t q_lineedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QLineEdit*
int32_t q_lineedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QLineEdit*
int32_t q_lineedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QLineEdit*
double q_lineedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QLineEdit*
double q_lineedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QLineEdit*
int32_t q_lineedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QLineEdit*
int32_t q_lineedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_lineedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_lineedit_encode_metric_f(int64_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
int32_t q_lineedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
int32_t q_lineedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t fn()
void q_lineedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param visible bool
void q_lineedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param visible bool
void q_lineedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, bool)
void q_lineedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param param1 int
int32_t q_lineedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param param1 int
int32_t q_lineedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t fn(QLineEdit*, int)
void q_lineedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
bool q_lineedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
bool q_lineedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool fn()
void q_lineedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
QPaintEngine* q_lineedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
QPaintEngine* q_lineedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QPaintEngine* fn()
void q_lineedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QWheelEvent*
void q_lineedit_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QWheelEvent*
void q_lineedit_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QWheelEvent*)
void q_lineedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEnterEvent*
void q_lineedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEnterEvent*
void q_lineedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QEnterEvent*)
void q_lineedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
void q_lineedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
void q_lineedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QEvent*)
void q_lineedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QMoveEvent*
void q_lineedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QMoveEvent*
void q_lineedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QMoveEvent*)
void q_lineedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QResizeEvent*
void q_lineedit_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QResizeEvent*
void q_lineedit_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QResizeEvent*)
void q_lineedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QCloseEvent*
void q_lineedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QCloseEvent*
void q_lineedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QCloseEvent*)
void q_lineedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QTabletEvent*
void q_lineedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QTabletEvent*
void q_lineedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QTabletEvent*)
void q_lineedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QActionEvent*
void q_lineedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QActionEvent*
void q_lineedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QActionEvent*)
void q_lineedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QShowEvent*
void q_lineedit_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QShowEvent*
void q_lineedit_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QShowEvent*)
void q_lineedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QHideEvent*
void q_lineedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QHideEvent*
void q_lineedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QHideEvent*)
void q_lineedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_lineedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_lineedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool fn(QLineEdit*, const char*, void*, intptr_t*)
void q_lineedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_lineedit_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_lineedit_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t fn(QLineEdit*, enum QPaintDevice__PaintDeviceMetric)
void q_lineedit_on_metric(void* self, int32_t (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param painter QPainter*
void q_lineedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param painter QPainter*
void q_lineedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QPainter*)
void q_lineedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param offset QPoint*
QPaintDevice* q_lineedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param offset QPoint*
QPaintDevice* q_lineedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QPaintDevice* fn(QLineEdit*, QPoint*)
void q_lineedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
QPainter* q_lineedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
QPainter* q_lineedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QPainter* fn()
void q_lineedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param next bool
bool q_lineedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param next bool
bool q_lineedit_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool fn(QLineEdit*, bool)
void q_lineedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param watched QObject*
/// @param event QEvent*
bool q_lineedit_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param watched QObject*
/// @param event QEvent*
bool q_lineedit_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool fn(QLineEdit*, QObject*, QEvent*)
void q_lineedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QChildEvent*
void q_lineedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QChildEvent*
void q_lineedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QChildEvent*)
void q_lineedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
void q_lineedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param event QEvent*
void q_lineedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QEvent*)
void q_lineedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
void q_lineedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
void q_lineedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QMetaMethod*)
void q_lineedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
void q_lineedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
void q_lineedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, QMetaMethod*)
void q_lineedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
void q_lineedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
void q_lineedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn()
void q_lineedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
void q_lineedit_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
void q_lineedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn()
void q_lineedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
void q_lineedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
void q_lineedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback void fn()
void q_lineedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
bool q_lineedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
bool q_lineedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool fn()
void q_lineedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
bool q_lineedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
bool q_lineedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool fn()
void q_lineedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
QObject* q_lineedit_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
QObject* q_lineedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback QObject* fn()
void q_lineedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
int32_t q_lineedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
int32_t q_lineedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t fn()
void q_lineedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param signal const char*
int32_t q_lineedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param signal const char*
int32_t q_lineedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback int32_t fn(QLineEdit*, const char*)
void q_lineedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
bool q_lineedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param signal QMetaMethod*
bool q_lineedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback bool fn(QLineEdit*, QMetaMethod*)
void q_lineedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QLineEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_lineedit_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QLineEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_lineedit_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QLineEdit*
/// @param callback double fn(QLineEdit*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_lineedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QLineEdit*
/// @param callback void fn(QLineEdit*, const char*)
void q_lineedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dtor.QLineEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QLineEdit*
void q_lineedit_delete(void* self);

/// https://doc.qt.io/qt-6/qlineedit.html#types

typedef enum {
    QLINEEDIT_ACTIONPOSITION_LEADINGPOSITION = 0,
    QLINEEDIT_ACTIONPOSITION_TRAILINGPOSITION = 1
} QLineEdit__ActionPosition;

typedef enum {
    QLINEEDIT_ECHOMODE_NORMAL = 0,
    QLINEEDIT_ECHOMODE_NOECHO = 1,
    QLINEEDIT_ECHOMODE_PASSWORD = 2,
    QLINEEDIT_ECHOMODE_PASSWORDECHOONEDIT = 3
} QLineEdit__EchoMode;

#endif
