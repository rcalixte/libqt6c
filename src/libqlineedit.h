#pragma once
#ifndef SRCQT6C_LIBQLINEEDIT_H
#define SRCQT6C_LIBQLINEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qlineedit.html

/// q_lineedit_new constructs a new QLineEdit object.
///
/// ``` QWidget* parent ```
QLineEdit* q_lineedit_new(void* parent);

/// q_lineedit_new2 constructs a new QLineEdit object.
///
///
QLineEdit* q_lineedit_new2();

/// q_lineedit_new3 constructs a new QLineEdit object.
///
/// ``` const char* param1 ```
QLineEdit* q_lineedit_new3(const char* param1);

/// q_lineedit_new4 constructs a new QLineEdit object.
///
/// ``` const char* param1, QWidget* parent ```
QLineEdit* q_lineedit_new4(const char* param1, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLineEdit* self ```
const QMetaObject* q_lineedit_meta_object(void* self);

/// ``` QLineEdit* self, const char* param1 ```
void* q_lineedit_metacast(void* self, const char* param1);

/// ``` QLineEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineedit_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, enum QMetaObject__Call, int, void*) ```
void q_lineedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLineEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_lineedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_lineedit_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#text)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#displayText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_display_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_placeholder_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
///
/// ``` QLineEdit* self, const char* placeholderText ```
void q_lineedit_set_placeholder_text(void* self, const char* placeholderText);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_max_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
///
/// ``` QLineEdit* self, int maxLength ```
void q_lineedit_set_max_length(void* self, int maxLength);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
///
/// ``` QLineEdit* self, bool frame ```
void q_lineedit_set_frame(void* self, bool frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_clear_button_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_clear_button_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_echo_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
///
/// ``` QLineEdit* self, enum QLineEdit__EchoMode echoMode ```
void q_lineedit_set_echo_mode(void* self, int64_t echoMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
///
/// ``` QLineEdit* self, bool readOnly ```
void q_lineedit_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
///
/// ``` QLineEdit* self, QValidator* validator ```
void q_lineedit_set_validator(void* self, void* validator);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#validator)
///
/// ``` QLineEdit* self ```
const QValidator* q_lineedit_validator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
///
/// ``` QLineEdit* self, QCompleter* completer ```
void q_lineedit_set_completer(void* self, void* completer);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#completer)
///
/// ``` QLineEdit* self ```
QCompleter* q_lineedit_completer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QSize* (*slot)() ```
void q_lineedit_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QSize* (*slot)() ```
void q_lineedit_on_minimum_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Base class method implementation
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_cursor_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
///
/// ``` QLineEdit* self, int cursorPosition ```
void q_lineedit_set_cursor_position(void* self, int cursorPosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
///
/// ``` QLineEdit* self, QPoint* pos ```
int32_t q_lineedit_cursor_position_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
///
/// ``` QLineEdit* self, int flag ```
void q_lineedit_set_alignment(void* self, int64_t flag);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#alignment)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_forward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_backward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_word_forward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_cursor_word_backward(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#backspace)
///
/// ``` QLineEdit* self ```
void q_lineedit_backspace(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#del)
///
/// ``` QLineEdit* self ```
void q_lineedit_del(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#home)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_home(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#end)
///
/// ``` QLineEdit* self, bool mark ```
void q_lineedit_end(void* self, bool mark);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isModified)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setModified)
///
/// ``` QLineEdit* self, bool modified ```
void q_lineedit_set_modified(void* self, bool modified);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
///
/// ``` QLineEdit* self, int param1, int param2 ```
void q_lineedit_set_selection(void* self, int param1, int param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_selection_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_selection_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_selection_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_undo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_redo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
///
/// ``` QLineEdit* self, bool b ```
void q_lineedit_set_drag_enabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_drag_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
///
/// ``` QLineEdit* self, enum Qt__CursorMoveStyle style ```
void q_lineedit_set_cursor_move_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_cursor_move_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_input_mask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
///
/// ``` QLineEdit* self, const char* inputMask ```
void q_lineedit_set_input_mask(void* self, const char* inputMask);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_acceptable_input(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// ``` QLineEdit* self, int left, int top, int right, int bottom ```
void q_lineedit_set_text_margins(void* self, int left, int top, int right, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// ``` QLineEdit* self, QMargins* margins ```
void q_lineedit_set_text_margins2(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
///
/// ``` QLineEdit* self ```
QMargins* q_lineedit_text_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// ``` QLineEdit* self, QAction* action, enum QLineEdit__ActionPosition position ```
void q_lineedit_add_action(void* self, void* action, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// ``` QLineEdit* self, QIcon* icon, enum QLineEdit__ActionPosition position ```
QAction* q_lineedit_add_action2(void* self, void* icon, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#setText)
///
/// ``` QLineEdit* self, const char* text ```
void q_lineedit_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#clear)
///
/// ``` QLineEdit* self ```
void q_lineedit_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
///
/// ``` QLineEdit* self ```
void q_lineedit_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#undo)
///
/// ``` QLineEdit* self ```
void q_lineedit_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#redo)
///
/// ``` QLineEdit* self ```
void q_lineedit_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cut)
///
/// ``` QLineEdit* self ```
void q_lineedit_cut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#copy)
///
/// ``` QLineEdit* self ```
void q_lineedit_copy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paste)
///
/// ``` QLineEdit* self ```
void q_lineedit_paste(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#deselect)
///
/// ``` QLineEdit* self ```
void q_lineedit_deselect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#insert)
///
/// ``` QLineEdit* self, const char* param1 ```
void q_lineedit_insert(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
///
/// ``` QLineEdit* self ```
QMenu* q_lineedit_create_standard_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// ``` QLineEdit* self, const char* param1 ```
void q_lineedit_text_changed(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_text_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// ``` QLineEdit* self, const char* param1 ```
void q_lineedit_text_edited(void* self, const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_text_edited(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// ``` QLineEdit* self, int param1, int param2 ```
void q_lineedit_cursor_position_changed(void* self, int param1, int param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, int, int) ```
void q_lineedit_on_cursor_position_changed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// ``` QLineEdit* self ```
void q_lineedit_return_pressed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_return_pressed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// ``` QLineEdit* self ```
void q_lineedit_editing_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_editing_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// ``` QLineEdit* self ```
void q_lineedit_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// ``` QLineEdit* self ```
void q_lineedit_input_rejected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_input_rejected(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_move_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMouseEvent*) ```
void q_lineedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QMouseEvent* param1 ```
void q_lineedit_qbase_mouse_double_click_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QKeyEvent*) ```
void q_lineedit_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QKeyEvent*) ```
void q_lineedit_on_key_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QKeyEvent* param1 ```
void q_lineedit_qbase_key_release_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QFocusEvent*) ```
void q_lineedit_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_qbase_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QFocusEvent*) ```
void q_lineedit_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QFocusEvent* param1 ```
void q_lineedit_qbase_focus_out_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// ``` QLineEdit* self, QPaintEvent* param1 ```
void q_lineedit_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QPaintEvent*) ```
void q_lineedit_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QPaintEvent* param1 ```
void q_lineedit_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// ``` QLineEdit* self, QDragEnterEvent* param1 ```
void q_lineedit_drag_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDragEnterEvent*) ```
void q_lineedit_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QDragEnterEvent* param1 ```
void q_lineedit_qbase_drag_enter_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// ``` QLineEdit* self, QDragMoveEvent* e ```
void q_lineedit_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDragMoveEvent*) ```
void q_lineedit_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QDragMoveEvent* e ```
void q_lineedit_qbase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// ``` QLineEdit* self, QDragLeaveEvent* e ```
void q_lineedit_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDragLeaveEvent*) ```
void q_lineedit_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QDragLeaveEvent* e ```
void q_lineedit_qbase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// ``` QLineEdit* self, QDropEvent* param1 ```
void q_lineedit_drop_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QDropEvent*) ```
void q_lineedit_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QDropEvent* param1 ```
void q_lineedit_qbase_drop_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// ``` QLineEdit* self, QEvent* param1 ```
void q_lineedit_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QEvent* param1 ```
void q_lineedit_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// ``` QLineEdit* self, QContextMenuEvent* param1 ```
void q_lineedit_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QContextMenuEvent*) ```
void q_lineedit_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QContextMenuEvent* param1 ```
void q_lineedit_qbase_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// ``` QLineEdit* self, QInputMethodEvent* param1 ```
void q_lineedit_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QInputMethodEvent*) ```
void q_lineedit_on_input_method_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QInputMethodEvent* param1 ```
void q_lineedit_qbase_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// ``` QLineEdit* self, QStyleOptionFrame* option ```
void q_lineedit_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QStyleOptionFrame*) ```
void q_lineedit_on_init_style_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QStyleOptionFrame* option ```
void q_lineedit_qbase_init_style_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// ``` QLineEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_lineedit_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QVariant* (*slot)(QLineEdit*, enum Qt__InputMethodQuery) ```
void q_lineedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_lineedit_qbase_input_method_query(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// ``` QLineEdit* self, enum Qt__InputMethodQuery property, QVariant* argument ```
QVariant* q_lineedit_input_method_query2(void* self, int64_t property, void* argument);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// ``` QLineEdit* self, QTimerEvent* param1 ```
void q_lineedit_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QTimerEvent*) ```
void q_lineedit_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QTimerEvent* param1 ```
void q_lineedit_qbase_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// ``` QLineEdit* self, QEvent* param1 ```
bool q_lineedit_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#event)
///
/// Base class method implementation
///
/// ``` QLineEdit* self, QEvent* param1 ```
bool q_lineedit_qbase_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_cursor_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Allows for overriding the related default method
///
/// ``` QLineEdit* self, QRect* (*slot)() ```
void q_lineedit_on_cursor_rect(void* self, QRect* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Base class method implementation
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_qbase_cursor_rect(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_lineedit_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_lineedit_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// ``` QLineEdit* self, bool mark, int steps ```
void q_lineedit_cursor_forward2(void* self, bool mark, int steps);

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// ``` QLineEdit* self, bool mark, int steps ```
void q_lineedit_cursor_backward2(void* self, bool mark, int steps);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QLineEdit* self ```
uintptr_t q_lineedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QLineEdit* self ```
void q_lineedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QLineEdit* self ```
uintptr_t q_lineedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QLineEdit* self ```
uintptr_t q_lineedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QLineEdit* self ```
QStyle* q_lineedit_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QLineEdit* self, QStyle* style ```
void q_lineedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QLineEdit* self, enum Qt__WindowModality windowModality ```
void q_lineedit_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QLineEdit* self, QWidget* param1 ```
bool q_lineedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QLineEdit* self, bool enabled ```
void q_lineedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QLineEdit* self, bool disabled ```
void q_lineedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QLineEdit* self, bool windowModified ```
void q_lineedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QLineEdit* self ```
const QRect* q_lineedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QLineEdit* self ```
QPoint* q_lineedit_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QLineEdit* self ```
QRegion* q_lineedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLineEdit* self, QSize* minimumSize ```
void q_lineedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLineEdit* self, int minw, int minh ```
void q_lineedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLineEdit* self, QSize* maximumSize ```
void q_lineedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLineEdit* self, int maxw, int maxh ```
void q_lineedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QLineEdit* self, int minw ```
void q_lineedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QLineEdit* self, int minh ```
void q_lineedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QLineEdit* self, int maxw ```
void q_lineedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QLineEdit* self, int maxh ```
void q_lineedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLineEdit* self, QSize* sizeIncrement ```
void q_lineedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLineEdit* self, int w, int h ```
void q_lineedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QLineEdit* self ```
QSize* q_lineedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLineEdit* self, QSize* baseSize ```
void q_lineedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLineEdit* self, int basew, int baseh ```
void q_lineedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLineEdit* self, QSize* fixedSize ```
void q_lineedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLineEdit* self, int w, int h ```
void q_lineedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QLineEdit* self, int w ```
void q_lineedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QLineEdit* self, int h ```
void q_lineedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLineEdit* self, QPointF* param1 ```
QPointF* q_lineedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLineEdit* self, QPoint* param1 ```
QPoint* q_lineedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLineEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_lineedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLineEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_lineedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLineEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_lineedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLineEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_lineedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QLineEdit* self ```
const QPalette* q_lineedit_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QLineEdit* self, QPalette* palette ```
void q_lineedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QLineEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_lineedit_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QLineEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_lineedit_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QLineEdit* self ```
const QFont* q_lineedit_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QLineEdit* self, QFont* font ```
void q_lineedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QLineEdit* self ```
QFontMetrics* q_lineedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QLineEdit* self ```
QFontInfo* q_lineedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QLineEdit* self ```
QCursor* q_lineedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QLineEdit* self, QCursor* cursor ```
void q_lineedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QLineEdit* self ```
void q_lineedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QLineEdit* self ```
bool q_lineedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLineEdit* self, QBitmap* mask ```
void q_lineedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLineEdit* self, QRegion* mask ```
void q_lineedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QLineEdit* self ```
QRegion* q_lineedit_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QLineEdit* self ```
void q_lineedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target ```
void q_lineedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter ```
void q_lineedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLineEdit* self ```
QPixmap* q_lineedit_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QLineEdit* self ```
QGraphicsEffect* q_lineedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QLineEdit* self, QGraphicsEffect* effect ```
void q_lineedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLineEdit* self, enum Qt__GestureType typeVal ```
void q_lineedit_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QLineEdit* self, enum Qt__GestureType typeVal ```
void q_lineedit_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QLineEdit* self, const char* windowTitle ```
void q_lineedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QLineEdit* self, const char* styleSheet ```
void q_lineedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QLineEdit* self, QIcon* icon ```
void q_lineedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QLineEdit* self ```
QIcon* q_lineedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QLineEdit* self, const char* windowIconText ```
void q_lineedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QLineEdit* self, const char* windowRole ```
void q_lineedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QLineEdit* self, const char* filePath ```
void q_lineedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QLineEdit* self, double level ```
void q_lineedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QLineEdit* self ```
double q_lineedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QLineEdit* self, const char* toolTip ```
void q_lineedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QLineEdit* self, int msec ```
void q_lineedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QLineEdit* self, const char* statusTip ```
void q_lineedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QLineEdit* self, const char* whatsThis ```
void q_lineedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QLineEdit* self, const char* name ```
void q_lineedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QLineEdit* self, const char* description ```
void q_lineedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QLineEdit* self, enum Qt__LayoutDirection direction ```
void q_lineedit_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QLineEdit* self ```
void q_lineedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QLineEdit* self, QLocale* locale ```
void q_lineedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QLineEdit* self ```
QLocale* q_lineedit_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QLineEdit* self ```
void q_lineedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLineEdit* self ```
void q_lineedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QLineEdit* self ```
void q_lineedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QLineEdit* self ```
void q_lineedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLineEdit* self, enum Qt__FocusReason reason ```
void q_lineedit_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QLineEdit* self, enum Qt__FocusPolicy policy ```
void q_lineedit_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_lineedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QLineEdit* self, QWidget* focusProxy ```
void q_lineedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QLineEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_lineedit_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLineEdit* self ```
void q_lineedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLineEdit* self, QCursor* param1 ```
void q_lineedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QLineEdit* self ```
void q_lineedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QLineEdit* self ```
void q_lineedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QLineEdit* self ```
void q_lineedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLineEdit* self, QKeySequence* key ```
int32_t q_lineedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_lineedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_lineedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QLineEdit* self ```
bool q_lineedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QLineEdit* self, bool enable ```
void q_lineedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QLineEdit* self ```
QGraphicsProxyWidget* q_lineedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self ```
void q_lineedit_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self ```
void q_lineedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self, int x, int y, int w, int h ```
void q_lineedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self, QRect* param1 ```
void q_lineedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLineEdit* self, QRegion* param1 ```
void q_lineedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self, int x, int y, int w, int h ```
void q_lineedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self, QRect* param1 ```
void q_lineedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLineEdit* self, QRegion* param1 ```
void q_lineedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QLineEdit* self, bool hidden ```
void q_lineedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QLineEdit* self ```
void q_lineedit_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QLineEdit* self ```
void q_lineedit_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QLineEdit* self ```
void q_lineedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QLineEdit* self ```
bool q_lineedit_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QLineEdit* self ```
void q_lineedit_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QLineEdit* self ```
void q_lineedit_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QLineEdit* self, QWidget* param1 ```
void q_lineedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLineEdit* self, int x, int y ```
void q_lineedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLineEdit* self, QPoint* param1 ```
void q_lineedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLineEdit* self, int w, int h ```
void q_lineedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLineEdit* self, QSize* param1 ```
void q_lineedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLineEdit* self, int x, int y, int w, int h ```
void q_lineedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLineEdit* self, QRect* geometry ```
void q_lineedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QLineEdit* self ```
char* q_lineedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QLineEdit* self, const char* geometry ```
bool q_lineedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QLineEdit* self ```
void q_lineedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QLineEdit* self, QWidget* param1 ```
bool q_lineedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QLineEdit* self, int state ```
void q_lineedit_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QLineEdit* self, int state ```
void q_lineedit_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QLineEdit* self ```
QSizePolicy* q_lineedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLineEdit* self, QSizePolicy* sizePolicy ```
void q_lineedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLineEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_lineedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QLineEdit* self ```
QRegion* q_lineedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLineEdit* self, int left, int top, int right, int bottom ```
void q_lineedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLineEdit* self, QMargins* margins ```
void q_lineedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QLineEdit* self ```
QMargins* q_lineedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QLineEdit* self ```
QRect* q_lineedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QLineEdit* self ```
QLayout* q_lineedit_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QLineEdit* self, QLayout* layout ```
void q_lineedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QLineEdit* self ```
void q_lineedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLineEdit* self, QWidget* parent ```
void q_lineedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLineEdit* self, QWidget* parent, int f ```
void q_lineedit_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLineEdit* self, int dx, int dy ```
void q_lineedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLineEdit* self, int dx, int dy, QRect* param3 ```
void q_lineedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QLineEdit* self ```
bool q_lineedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QLineEdit* self, bool on ```
void q_lineedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QLineEdit* self, libqt_list /* of QAction* */ actions ```
void q_lineedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QLineEdit* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_lineedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QLineEdit* self, QAction* before, QAction* action ```
void q_lineedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QLineEdit* self, QAction* action ```
void q_lineedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QLineEdit* self ```
libqt_list /* of QAction* */ q_lineedit_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLineEdit* self, QIcon* icon, const char* text ```
QAction* q_lineedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLineEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_lineedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLineEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_lineedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QLineEdit* self ```
QWidget* q_lineedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QLineEdit* self, int typeVal ```
void q_lineedit_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLineEdit* self, enum Qt__WindowType param1 ```
void q_lineedit_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QLineEdit* self, int typeVal ```
void q_lineedit_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_lineedit_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLineEdit* self, int x, int y ```
QWidget* q_lineedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLineEdit* self, QPoint* p ```
QWidget* q_lineedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLineEdit* self, QPointF* p ```
QWidget* q_lineedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLineEdit* self, enum Qt__WidgetAttribute param1 ```
void q_lineedit_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QLineEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_lineedit_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QLineEdit* self ```
void q_lineedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QLineEdit* self, QWidget* child ```
bool q_lineedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QLineEdit* self ```
bool q_lineedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QLineEdit* self, bool enabled ```
void q_lineedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QLineEdit* self ```
QBackingStore* q_lineedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QLineEdit* self ```
QWindow* q_lineedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QLineEdit* self ```
QScreen* q_lineedit_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QLineEdit* self, QScreen* screen ```
void q_lineedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_lineedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QLineEdit* self, const char* title ```
void q_lineedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QLineEdit* self, QIcon* icon ```
void q_lineedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QIcon*) ```
void q_lineedit_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QLineEdit* self, const char* iconText ```
void q_lineedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QLineEdit* self, QPoint* pos ```
void q_lineedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QPoint*) ```
void q_lineedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QLineEdit* self ```
int64_t q_lineedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QLineEdit* self, int hints ```
void q_lineedit_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_lineedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_lineedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_lineedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_lineedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_lineedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLineEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_lineedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLineEdit* self, QRect* rectangle ```
QPixmap* q_lineedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLineEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_lineedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLineEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_lineedit_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLineEdit* self, int id, bool enable ```
void q_lineedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLineEdit* self, int id, bool enable ```
void q_lineedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLineEdit* self, enum Qt__WindowType param1, bool on ```
void q_lineedit_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLineEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_lineedit_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_lineedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_lineedit_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLineEdit* self ```
const char* q_lineedit_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLineEdit* self, char* name ```
void q_lineedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLineEdit* self ```
bool q_lineedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLineEdit* self ```
bool q_lineedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLineEdit* self, bool b ```
bool q_lineedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLineEdit* self ```
QThread* q_lineedit_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLineEdit* self, QThread* thread ```
bool q_lineedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineEdit* self, int interval ```
int32_t q_lineedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLineEdit* self, int id ```
void q_lineedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLineEdit* self, enum Qt__TimerId id ```
void q_lineedit_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLineEdit* self ```
libqt_list /* of QObject* */ q_lineedit_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLineEdit* self, QObject* filterObj ```
void q_lineedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLineEdit* self, QObject* obj ```
void q_lineedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_lineedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_lineedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_lineedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_lineedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLineEdit* self ```
void q_lineedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLineEdit* self ```
void q_lineedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLineEdit* self, const char* name, QVariant* value ```
bool q_lineedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLineEdit* self, const char* name ```
QVariant* q_lineedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLineEdit* self ```
const char** q_lineedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLineEdit* self ```
QBindingStorage* q_lineedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLineEdit* self ```
const QBindingStorage* q_lineedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineEdit* self ```
void q_lineedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*) ```
void q_lineedit_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLineEdit* self ```
QObject* q_lineedit_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLineEdit* self, const char* classname ```
bool q_lineedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLineEdit* self ```
void q_lineedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLineEdit* self, QThread* thread, Disambiguated_t* param2 ```
bool q_lineedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLineEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_lineedit_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLineEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_lineedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineEdit* self, QObject* param1 ```
void q_lineedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QObject*) ```
void q_lineedit_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QLineEdit* self ```
bool q_lineedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QLineEdit* self ```
double q_lineedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QLineEdit* self ```
double q_lineedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_lineedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_lineedit_encode_metric_f(int64_t metric, double value);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)() ```
void q_lineedit_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, bool visible ```
void q_lineedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, bool visible ```
void q_lineedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, bool) ```
void q_lineedit_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, int param1 ```
int32_t q_lineedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, int param1 ```
int32_t q_lineedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, int) ```
void q_lineedit_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)() ```
void q_lineedit_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
QPaintEngine* q_lineedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
QPaintEngine* q_lineedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QPaintEngine* (*slot)() ```
void q_lineedit_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QWheelEvent* event ```
void q_lineedit_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QWheelEvent* event ```
void q_lineedit_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QWheelEvent*) ```
void q_lineedit_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QEnterEvent* event ```
void q_lineedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QEnterEvent* event ```
void q_lineedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEnterEvent*) ```
void q_lineedit_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMoveEvent* event ```
void q_lineedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMoveEvent* event ```
void q_lineedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMoveEvent*) ```
void q_lineedit_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QResizeEvent* event ```
void q_lineedit_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QResizeEvent* event ```
void q_lineedit_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QResizeEvent*) ```
void q_lineedit_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QCloseEvent* event ```
void q_lineedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QCloseEvent* event ```
void q_lineedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QCloseEvent*) ```
void q_lineedit_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QTabletEvent* event ```
void q_lineedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QTabletEvent* event ```
void q_lineedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QTabletEvent*) ```
void q_lineedit_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QActionEvent* event ```
void q_lineedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QActionEvent* event ```
void q_lineedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QActionEvent*) ```
void q_lineedit_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QShowEvent* event ```
void q_lineedit_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QShowEvent* event ```
void q_lineedit_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QShowEvent*) ```
void q_lineedit_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QHideEvent* event ```
void q_lineedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QHideEvent* event ```
void q_lineedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QHideEvent*) ```
void q_lineedit_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_lineedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_lineedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, const char*, void*, intptr_t*) ```
void q_lineedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_lineedit_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_lineedit_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_lineedit_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QPainter* painter ```
void q_lineedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QPainter* painter ```
void q_lineedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QPainter*) ```
void q_lineedit_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QPoint* offset ```
QPaintDevice* q_lineedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QPoint* offset ```
QPaintDevice* q_lineedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QPaintDevice* (*slot)(QLineEdit*, QPoint*) ```
void q_lineedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
QPainter* q_lineedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
QPainter* q_lineedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QPainter* (*slot)() ```
void q_lineedit_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, bool next ```
bool q_lineedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, bool next ```
bool q_lineedit_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, bool) ```
void q_lineedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QObject* watched, QEvent* event ```
bool q_lineedit_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QObject* watched, QEvent* event ```
bool q_lineedit_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, QObject*, QEvent*) ```
void q_lineedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QChildEvent* event ```
void q_lineedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QChildEvent* event ```
void q_lineedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QChildEvent*) ```
void q_lineedit_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QEvent* event ```
void q_lineedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QEvent*) ```
void q_lineedit_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMetaMethod*) ```
void q_lineedit_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
void q_lineedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, QMetaMethod*) ```
void q_lineedit_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)() ```
void q_lineedit_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)() ```
void q_lineedit_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
void q_lineedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, void (*slot)() ```
void q_lineedit_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)() ```
void q_lineedit_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
bool q_lineedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)() ```
void q_lineedit_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
QObject* q_lineedit_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
QObject* q_lineedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, QObject* (*slot)() ```
void q_lineedit_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self ```
int32_t q_lineedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)() ```
void q_lineedit_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, const char* signal ```
int32_t q_lineedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, const char* signal ```
int32_t q_lineedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, int32_t (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
bool q_lineedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, QMetaMethod* signal ```
bool q_lineedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, bool (*slot)(QLineEdit*, QMetaMethod*) ```
void q_lineedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLineEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_lineedit_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLineEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_lineedit_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLineEdit* self, double (*slot)(QLineEdit*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_lineedit_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QLineEdit* self, void (*slot)(QLineEdit*, const char*) ```
void q_lineedit_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlineedit.html#dtor.QLineEdit)
///
/// Delete this object from C++ memory.
///
/// ``` QLineEdit* self ```
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
