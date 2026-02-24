#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKLISTWIDGETSEARCHLINE_H
#define SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKLISTWIDGETSEARCHLINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html)

/// k_listwidgetsearchline_new constructs a new KListWidgetSearchLine object.
///
/// @param parent QWidget*
///
KListWidgetSearchLine* k_listwidgetsearchline_new(void* parent);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html)

/// k_listwidgetsearchline_new2 constructs a new KListWidgetSearchLine object.
///
KListWidgetSearchLine* k_listwidgetsearchline_new2();

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html)

/// k_listwidgetsearchline_new3 constructs a new KListWidgetSearchLine object.
///
/// @param parent QWidget*
/// @param listWidget QListWidget*
///
KListWidgetSearchLine* k_listwidgetsearchline_new3(void* parent, void* listWidget);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KListWidgetSearchLine*
///
const QMetaObject* k_listwidgetsearchline_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KListWidgetSearchLine*
/// @param callback const QMetaObject* func()
///
void k_listwidgetsearchline_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_meta_object` instead
///
#define k_listwidgetsearchline_qbase_meta_object k_listwidgetsearchline_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KListWidgetSearchLine*
///
const QMetaObject* k_listwidgetsearchline_super_meta_object(void* self);

/// @param self KListWidgetSearchLine*
/// @param param1 const char*
///
void* k_listwidgetsearchline_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KListWidgetSearchLine*
/// @param callback void* func(KListWidgetSearchLine* self, const char* param1)
///
void k_listwidgetsearchline_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_metacast` instead
///
#define k_listwidgetsearchline_qbase_metacast k_listwidgetsearchline_super_metacast

/// Base class method implementation
///
/// @param self KListWidgetSearchLine*
/// @param param1 const char*
///
void* k_listwidgetsearchline_super_metacast(void* self, const char* param1);

/// @param self KListWidgetSearchLine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_listwidgetsearchline_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KListWidgetSearchLine*
/// @param callback int32_t func(KListWidgetSearchLine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_listwidgetsearchline_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_metacall` instead
///
#define k_listwidgetsearchline_qbase_metacall k_listwidgetsearchline_super_metacall

/// Base class method implementation
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_listwidgetsearchline_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_listwidgetsearchline_tr(const char* s);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#caseSensitive)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum Qt__CaseSensitivity
///
int32_t k_listwidgetsearchline_case_sensitive(void* self);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#listWidget)
///
/// @param self KListWidgetSearchLine*
///
QListWidget* k_listwidgetsearchline_list_widget(void* self);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#updateSearch)
///
/// @param self KListWidgetSearchLine*
/// @param s const char*
///
void k_listwidgetsearchline_update_search(void* self, const char* s);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#updateSearch)
///
/// Allows for overriding the related default method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, const char* s)
///
void k_listwidgetsearchline_on_update_search(void* self, void (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_update_search` instead
///
#define k_listwidgetsearchline_qbase_update_search k_listwidgetsearchline_super_update_search

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#updateSearch)
///
/// Base class method implementation
///
/// @param self KListWidgetSearchLine*
/// @param s const char*
///
void k_listwidgetsearchline_super_update_search(void* self, const char* s);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#setCaseSensitivity)
///
/// @param self KListWidgetSearchLine*
/// @param cs enum Qt__CaseSensitivity
///
void k_listwidgetsearchline_set_case_sensitivity(void* self, int32_t cs);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#setListWidget)
///
/// @param self KListWidgetSearchLine*
/// @param lv QListWidget*
///
void k_listwidgetsearchline_set_list_widget(void* self, void* lv);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#clear)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_clear(void* self);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#itemMatches)
///
/// @param self KListWidgetSearchLine*
/// @param item QListWidgetItem*
/// @param s const char*
///
bool k_listwidgetsearchline_item_matches(void* self, void* item, const char* s);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#itemMatches)
///
/// Allows for overriding the related default method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func(KListWidgetSearchLine* self, QListWidgetItem* item, const char* s)
///
void k_listwidgetsearchline_on_item_matches(void* self, bool (*callback)(void*, void*, const char*));

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_item_matches` instead
///
#define k_listwidgetsearchline_qbase_item_matches k_listwidgetsearchline_super_item_matches

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#itemMatches)
///
/// Base class method implementation
///
/// @param self KListWidgetSearchLine*
/// @param item QListWidgetItem*
/// @param s const char*
///
bool k_listwidgetsearchline_super_item_matches(void* self, void* item, const char* s);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#event)
///
/// @param self KListWidgetSearchLine*
/// @param event QEvent*
///
bool k_listwidgetsearchline_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func(KListWidgetSearchLine* self, QEvent* event)
///
void k_listwidgetsearchline_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_event` instead
///
#define k_listwidgetsearchline_qbase_event k_listwidgetsearchline_super_event

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#event)
///
/// Base class method implementation
///
/// @param self KListWidgetSearchLine*
/// @param event QEvent*
///
bool k_listwidgetsearchline_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_listwidgetsearchline_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_listwidgetsearchline_tr3(const char* s, const char* c, int n);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#displayText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_display_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_placeholder_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
///
/// @param self KListWidgetSearchLine*
/// @param placeholderText const char*
///
void k_listwidgetsearchline_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_max_length(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
///
/// @param self KListWidgetSearchLine*
/// @param maxLength int
///
void k_listwidgetsearchline_set_max_length(void* self, int maxLength);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
///
/// @param self KListWidgetSearchLine*
/// @param frame bool
///
void k_listwidgetsearchline_set_frame(void* self, bool frame);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_has_frame(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
///
/// @param self KListWidgetSearchLine*
/// @param enable bool
///
void k_listwidgetsearchline_set_clear_button_enabled(void* self, bool enable);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_clear_button_enabled(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum QLineEdit__EchoMode
///
int32_t k_listwidgetsearchline_echo_mode(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
///
/// @param self KListWidgetSearchLine*
/// @param echoMode enum QLineEdit__EchoMode
///
void k_listwidgetsearchline_set_echo_mode(void* self, int32_t echoMode);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_read_only(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
///
/// @param self KListWidgetSearchLine*
/// @param readOnly bool
///
void k_listwidgetsearchline_set_read_only(void* self, bool readOnly);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
///
/// @param self KListWidgetSearchLine*
/// @param validator QValidator*
///
void k_listwidgetsearchline_set_validator(void* self, void* validator);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#validator)
///
/// @param self KListWidgetSearchLine*
///
const QValidator* k_listwidgetsearchline_validator(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
///
/// @param self KListWidgetSearchLine*
/// @param completer QCompleter*
///
void k_listwidgetsearchline_set_completer(void* self, void* completer);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#completer)
///
/// @param self KListWidgetSearchLine*
///
QCompleter* k_listwidgetsearchline_completer(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_cursor_position(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
///
/// @param self KListWidgetSearchLine*
/// @param cursorPosition int
///
void k_listwidgetsearchline_set_cursor_position(void* self, int cursorPosition);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
///
/// @param self KListWidgetSearchLine*
/// @param pos QPoint*
///
int32_t k_listwidgetsearchline_cursor_position_at(void* self, void* pos);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
///
/// @param self KListWidgetSearchLine*
/// @param flag flag of enum Qt__AlignmentFlag
///
void k_listwidgetsearchline_set_alignment(void* self, int32_t flag);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#alignment)
///
/// @param self KListWidgetSearchLine*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_listwidgetsearchline_alignment(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
///
void k_listwidgetsearchline_cursor_forward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
///
void k_listwidgetsearchline_cursor_backward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
///
void k_listwidgetsearchline_cursor_word_forward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
///
void k_listwidgetsearchline_cursor_word_backward(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#backspace)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_backspace(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#del)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_del(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#home)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
///
void k_listwidgetsearchline_home(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#end)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
///
void k_listwidgetsearchline_end(void* self, bool mark);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isModified)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_modified(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setModified)
///
/// @param self KListWidgetSearchLine*
/// @param modified bool
///
void k_listwidgetsearchline_set_modified(void* self, bool modified);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
///
/// @param self KListWidgetSearchLine*
/// @param param1 int
/// @param param2 int
///
void k_listwidgetsearchline_set_selection(void* self, int param1, int param2);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_has_selected_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_selected_text(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_selection_start(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_selection_end(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_selection_length(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_undo_available(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_redo_available(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
///
/// @param self KListWidgetSearchLine*
/// @param b bool
///
void k_listwidgetsearchline_set_drag_enabled(void* self, bool b);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_drag_enabled(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
///
/// @param self KListWidgetSearchLine*
/// @param style enum Qt__CursorMoveStyle
///
void k_listwidgetsearchline_set_cursor_move_style(void* self, int32_t style);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum Qt__CursorMoveStyle
///
int32_t k_listwidgetsearchline_cursor_move_style(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_input_mask(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
///
/// @param self KListWidgetSearchLine*
/// @param inputMask const char*
///
void k_listwidgetsearchline_set_input_mask(void* self, const char* inputMask);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_has_acceptable_input(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self KListWidgetSearchLine*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_listwidgetsearchline_set_text_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
///
/// @param self KListWidgetSearchLine*
/// @param margins QMargins*
///
void k_listwidgetsearchline_set_text_margins2(void* self, void* margins);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
///
/// @param self KListWidgetSearchLine*
///
QMargins* k_listwidgetsearchline_text_margins(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self KListWidgetSearchLine*
/// @param action QAction*
/// @param position enum QLineEdit__ActionPosition
///
void k_listwidgetsearchline_add_action(void* self, void* action, int32_t position);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
///
/// @param self KListWidgetSearchLine*
/// @param icon QIcon*
/// @param position enum QLineEdit__ActionPosition
///
QAction* k_listwidgetsearchline_add_action2(void* self, void* icon, int32_t position);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setText)
///
/// @param self KListWidgetSearchLine*
/// @param text const char*
///
void k_listwidgetsearchline_set_text(void* self, const char* text);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_select_all(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#undo)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_undo(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#redo)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_redo(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cut)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_cut(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#copy)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_copy(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paste)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_paste(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#deselect)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_deselect(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#insert)
///
/// @param self KListWidgetSearchLine*
/// @param param1 const char*
///
void k_listwidgetsearchline_insert(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
///
/// @param self KListWidgetSearchLine*
///
QMenu* k_listwidgetsearchline_create_standard_context_menu(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self KListWidgetSearchLine*
/// @param param1 const char*
///
void k_listwidgetsearchline_text_changed(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, const char* param1)
///
void k_listwidgetsearchline_on_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self KListWidgetSearchLine*
/// @param param1 const char*
///
void k_listwidgetsearchline_text_edited(void* self, const char* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, const char* param1)
///
void k_listwidgetsearchline_on_text_edited(void* self, void (*callback)(void*, const char*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self KListWidgetSearchLine*
/// @param param1 int
/// @param param2 int
///
void k_listwidgetsearchline_cursor_position_changed(void* self, int param1, int param2);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, int param1, int param2)
///
void k_listwidgetsearchline_on_cursor_position_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_return_pressed(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self)
///
void k_listwidgetsearchline_on_return_pressed(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_editing_finished(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self)
///
void k_listwidgetsearchline_on_editing_finished(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_selection_changed(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self)
///
void k_listwidgetsearchline_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_input_rejected(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self)
///
void k_listwidgetsearchline_on_input_rejected(void* self, void (*callback)(void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// @param self KListWidgetSearchLine*
/// @param property enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_listwidgetsearchline_input_method_query2(void* self, int32_t property, void* argument);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
/// @param steps int
///
void k_listwidgetsearchline_cursor_forward2(void* self, bool mark, int steps);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
///
/// @param self KListWidgetSearchLine*
/// @param mark bool
/// @param steps int
///
void k_listwidgetsearchline_cursor_backward2(void* self, bool mark, int steps);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KListWidgetSearchLine*
///
uintptr_t k_listwidgetsearchline_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KListWidgetSearchLine*
///
uintptr_t k_listwidgetsearchline_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KListWidgetSearchLine*
///
uintptr_t k_listwidgetsearchline_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KListWidgetSearchLine*
///
QStyle* k_listwidgetsearchline_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KListWidgetSearchLine*
/// @param style QStyle*
///
void k_listwidgetsearchline_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum Qt__WindowModality
///
int32_t k_listwidgetsearchline_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KListWidgetSearchLine*
/// @param windowModality enum Qt__WindowModality
///
void k_listwidgetsearchline_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QWidget*
///
bool k_listwidgetsearchline_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KListWidgetSearchLine*
/// @param enabled bool
///
void k_listwidgetsearchline_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KListWidgetSearchLine*
/// @param disabled bool
///
void k_listwidgetsearchline_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KListWidgetSearchLine*
/// @param windowModified bool
///
void k_listwidgetsearchline_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KListWidgetSearchLine*
///
QRect* k_listwidgetsearchline_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KListWidgetSearchLine*
///
const QRect* k_listwidgetsearchline_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KListWidgetSearchLine*
///
QRect* k_listwidgetsearchline_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KListWidgetSearchLine*
///
QPoint* k_listwidgetsearchline_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KListWidgetSearchLine*
///
QRect* k_listwidgetsearchline_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KListWidgetSearchLine*
///
QRect* k_listwidgetsearchline_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KListWidgetSearchLine*
///
QRegion* k_listwidgetsearchline_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KListWidgetSearchLine*
/// @param minimumSize QSize*
///
void k_listwidgetsearchline_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KListWidgetSearchLine*
/// @param minw int
/// @param minh int
///
void k_listwidgetsearchline_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KListWidgetSearchLine*
/// @param maximumSize QSize*
///
void k_listwidgetsearchline_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KListWidgetSearchLine*
/// @param maxw int
/// @param maxh int
///
void k_listwidgetsearchline_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KListWidgetSearchLine*
/// @param minw int
///
void k_listwidgetsearchline_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KListWidgetSearchLine*
/// @param minh int
///
void k_listwidgetsearchline_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KListWidgetSearchLine*
/// @param maxw int
///
void k_listwidgetsearchline_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KListWidgetSearchLine*
/// @param maxh int
///
void k_listwidgetsearchline_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KListWidgetSearchLine*
/// @param sizeIncrement QSize*
///
void k_listwidgetsearchline_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KListWidgetSearchLine*
/// @param w int
/// @param h int
///
void k_listwidgetsearchline_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KListWidgetSearchLine*
/// @param baseSize QSize*
///
void k_listwidgetsearchline_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KListWidgetSearchLine*
/// @param basew int
/// @param baseh int
///
void k_listwidgetsearchline_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KListWidgetSearchLine*
/// @param fixedSize QSize*
///
void k_listwidgetsearchline_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KListWidgetSearchLine*
/// @param w int
/// @param h int
///
void k_listwidgetsearchline_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KListWidgetSearchLine*
/// @param w int
///
void k_listwidgetsearchline_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KListWidgetSearchLine*
/// @param h int
///
void k_listwidgetsearchline_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_listwidgetsearchline_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_listwidgetsearchline_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_listwidgetsearchline_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_listwidgetsearchline_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_listwidgetsearchline_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_listwidgetsearchline_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPointF*
///
QPointF* k_listwidgetsearchline_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPoint*
///
QPoint* k_listwidgetsearchline_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_listwidgetsearchline_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_listwidgetsearchline_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_listwidgetsearchline_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_listwidgetsearchline_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KListWidgetSearchLine*
///
const QPalette* k_listwidgetsearchline_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KListWidgetSearchLine*
/// @param palette QPalette*
///
void k_listwidgetsearchline_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KListWidgetSearchLine*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_listwidgetsearchline_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum QPalette__ColorRole
///
int32_t k_listwidgetsearchline_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KListWidgetSearchLine*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_listwidgetsearchline_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum QPalette__ColorRole
///
int32_t k_listwidgetsearchline_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KListWidgetSearchLine*
///
const QFont* k_listwidgetsearchline_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KListWidgetSearchLine*
/// @param font QFont*
///
void k_listwidgetsearchline_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KListWidgetSearchLine*
///
QFontMetrics* k_listwidgetsearchline_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KListWidgetSearchLine*
///
QFontInfo* k_listwidgetsearchline_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KListWidgetSearchLine*
///
QCursor* k_listwidgetsearchline_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KListWidgetSearchLine*
/// @param cursor QCursor*
///
void k_listwidgetsearchline_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KListWidgetSearchLine*
/// @param enable bool
///
void k_listwidgetsearchline_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KListWidgetSearchLine*
/// @param enable bool
///
void k_listwidgetsearchline_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KListWidgetSearchLine*
/// @param mask QBitmap*
///
void k_listwidgetsearchline_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KListWidgetSearchLine*
/// @param mask QRegion*
///
void k_listwidgetsearchline_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KListWidgetSearchLine*
///
QRegion* k_listwidgetsearchline_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param target QPaintDevice*
///
void k_listwidgetsearchline_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param painter QPainter*
///
void k_listwidgetsearchline_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KListWidgetSearchLine*
///
QPixmap* k_listwidgetsearchline_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KListWidgetSearchLine*
///
QGraphicsEffect* k_listwidgetsearchline_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KListWidgetSearchLine*
/// @param effect QGraphicsEffect*
///
void k_listwidgetsearchline_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KListWidgetSearchLine*
/// @param type enum Qt__GestureType
///
void k_listwidgetsearchline_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KListWidgetSearchLine*
/// @param type enum Qt__GestureType
///
void k_listwidgetsearchline_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KListWidgetSearchLine*
/// @param windowTitle const char*
///
void k_listwidgetsearchline_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KListWidgetSearchLine*
/// @param styleSheet const char*
///
void k_listwidgetsearchline_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KListWidgetSearchLine*
/// @param icon QIcon*
///
void k_listwidgetsearchline_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KListWidgetSearchLine*
///
QIcon* k_listwidgetsearchline_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KListWidgetSearchLine*
/// @param windowIconText const char*
///
void k_listwidgetsearchline_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KListWidgetSearchLine*
/// @param windowRole const char*
///
void k_listwidgetsearchline_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KListWidgetSearchLine*
/// @param filePath const char*
///
void k_listwidgetsearchline_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KListWidgetSearchLine*
/// @param level double
///
void k_listwidgetsearchline_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KListWidgetSearchLine*
///
double k_listwidgetsearchline_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KListWidgetSearchLine*
/// @param toolTip const char*
///
void k_listwidgetsearchline_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KListWidgetSearchLine*
/// @param msec int
///
void k_listwidgetsearchline_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KListWidgetSearchLine*
/// @param statusTip const char*
///
void k_listwidgetsearchline_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KListWidgetSearchLine*
/// @param whatsThis const char*
///
void k_listwidgetsearchline_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KListWidgetSearchLine*
/// @param name const char*
///
void k_listwidgetsearchline_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KListWidgetSearchLine*
/// @param description const char*
///
void k_listwidgetsearchline_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KListWidgetSearchLine*
/// @param direction enum Qt__LayoutDirection
///
void k_listwidgetsearchline_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_listwidgetsearchline_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KListWidgetSearchLine*
/// @param locale QLocale*
///
void k_listwidgetsearchline_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KListWidgetSearchLine*
///
QLocale* k_listwidgetsearchline_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KListWidgetSearchLine*
/// @param reason enum Qt__FocusReason
///
void k_listwidgetsearchline_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_listwidgetsearchline_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KListWidgetSearchLine*
/// @param policy enum Qt__FocusPolicy
///
void k_listwidgetsearchline_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_listwidgetsearchline_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KListWidgetSearchLine*
/// @param focusProxy QWidget*
///
void k_listwidgetsearchline_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_listwidgetsearchline_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KListWidgetSearchLine*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_listwidgetsearchline_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QCursor*
///
void k_listwidgetsearchline_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KListWidgetSearchLine*
/// @param key QKeySequence*
///
int32_t k_listwidgetsearchline_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KListWidgetSearchLine*
/// @param id int
///
void k_listwidgetsearchline_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KListWidgetSearchLine*
/// @param id int
///
void k_listwidgetsearchline_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KListWidgetSearchLine*
/// @param id int
///
void k_listwidgetsearchline_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_listwidgetsearchline_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_listwidgetsearchline_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KListWidgetSearchLine*
/// @param enable bool
///
void k_listwidgetsearchline_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KListWidgetSearchLine*
///
QGraphicsProxyWidget* k_listwidgetsearchline_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KListWidgetSearchLine*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_listwidgetsearchline_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QRect*
///
void k_listwidgetsearchline_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QRegion*
///
void k_listwidgetsearchline_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KListWidgetSearchLine*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_listwidgetsearchline_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QRect*
///
void k_listwidgetsearchline_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QRegion*
///
void k_listwidgetsearchline_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KListWidgetSearchLine*
/// @param hidden bool
///
void k_listwidgetsearchline_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QWidget*
///
void k_listwidgetsearchline_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KListWidgetSearchLine*
/// @param x int
/// @param y int
///
void k_listwidgetsearchline_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPoint*
///
void k_listwidgetsearchline_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KListWidgetSearchLine*
/// @param w int
/// @param h int
///
void k_listwidgetsearchline_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QSize*
///
void k_listwidgetsearchline_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KListWidgetSearchLine*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_listwidgetsearchline_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KListWidgetSearchLine*
/// @param geometry QRect*
///
void k_listwidgetsearchline_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KListWidgetSearchLine*
///
char* k_listwidgetsearchline_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KListWidgetSearchLine*
/// @param geometry char*
///
bool k_listwidgetsearchline_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QWidget*
///
bool k_listwidgetsearchline_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KListWidgetSearchLine*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_listwidgetsearchline_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KListWidgetSearchLine*
/// @param state flag of enum Qt__WindowState
///
void k_listwidgetsearchline_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KListWidgetSearchLine*
/// @param state flag of enum Qt__WindowState
///
void k_listwidgetsearchline_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KListWidgetSearchLine*
///
QSizePolicy* k_listwidgetsearchline_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KListWidgetSearchLine*
/// @param sizePolicy QSizePolicy*
///
void k_listwidgetsearchline_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KListWidgetSearchLine*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_listwidgetsearchline_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KListWidgetSearchLine*
///
QRegion* k_listwidgetsearchline_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KListWidgetSearchLine*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_listwidgetsearchline_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KListWidgetSearchLine*
/// @param margins QMargins*
///
void k_listwidgetsearchline_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KListWidgetSearchLine*
///
QMargins* k_listwidgetsearchline_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KListWidgetSearchLine*
///
QRect* k_listwidgetsearchline_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KListWidgetSearchLine*
///
QLayout* k_listwidgetsearchline_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KListWidgetSearchLine*
/// @param layout QLayout*
///
void k_listwidgetsearchline_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KListWidgetSearchLine*
/// @param parent QWidget*
///
void k_listwidgetsearchline_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KListWidgetSearchLine*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_listwidgetsearchline_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KListWidgetSearchLine*
/// @param dx int
/// @param dy int
///
void k_listwidgetsearchline_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KListWidgetSearchLine*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_listwidgetsearchline_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KListWidgetSearchLine*
/// @param on bool
///
void k_listwidgetsearchline_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KListWidgetSearchLine*
/// @param actions libqt_list of QAction*
///
void k_listwidgetsearchline_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KListWidgetSearchLine*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_listwidgetsearchline_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KListWidgetSearchLine*
/// @param before QAction*
/// @param action QAction*
///
void k_listwidgetsearchline_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KListWidgetSearchLine*
/// @param action QAction*
///
void k_listwidgetsearchline_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KListWidgetSearchLine*
///
/// @return libqt_list of QAction*
///
libqt_list k_listwidgetsearchline_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KListWidgetSearchLine*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_listwidgetsearchline_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KListWidgetSearchLine*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_listwidgetsearchline_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KListWidgetSearchLine*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_listwidgetsearchline_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KListWidgetSearchLine*
///
QWidget* k_listwidgetsearchline_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KListWidgetSearchLine*
/// @param type flag of enum Qt__WindowType
///
void k_listwidgetsearchline_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KListWidgetSearchLine*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_listwidgetsearchline_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum Qt__WindowType
///
void k_listwidgetsearchline_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KListWidgetSearchLine*
/// @param type flag of enum Qt__WindowType
///
void k_listwidgetsearchline_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KListWidgetSearchLine*
///
/// @return enum Qt__WindowType
///
int32_t k_listwidgetsearchline_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_listwidgetsearchline_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KListWidgetSearchLine*
/// @param x int
/// @param y int
///
QWidget* k_listwidgetsearchline_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KListWidgetSearchLine*
/// @param p QPoint*
///
QWidget* k_listwidgetsearchline_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KListWidgetSearchLine*
/// @param p QPointF*
///
QWidget* k_listwidgetsearchline_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum Qt__WidgetAttribute
///
void k_listwidgetsearchline_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_listwidgetsearchline_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KListWidgetSearchLine*
/// @param child QWidget*
///
bool k_listwidgetsearchline_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KListWidgetSearchLine*
/// @param enabled bool
///
void k_listwidgetsearchline_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KListWidgetSearchLine*
///
QBackingStore* k_listwidgetsearchline_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KListWidgetSearchLine*
///
QWindow* k_listwidgetsearchline_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KListWidgetSearchLine*
///
QScreen* k_listwidgetsearchline_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KListWidgetSearchLine*
/// @param screen QScreen*
///
void k_listwidgetsearchline_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_listwidgetsearchline_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KListWidgetSearchLine*
/// @param title const char*
///
void k_listwidgetsearchline_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, const char* title)
///
void k_listwidgetsearchline_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KListWidgetSearchLine*
/// @param icon QIcon*
///
void k_listwidgetsearchline_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QIcon* icon)
///
void k_listwidgetsearchline_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KListWidgetSearchLine*
/// @param iconText const char*
///
void k_listwidgetsearchline_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, const char* iconText)
///
void k_listwidgetsearchline_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KListWidgetSearchLine*
/// @param pos QPoint*
///
void k_listwidgetsearchline_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QPoint* pos)
///
void k_listwidgetsearchline_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KListWidgetSearchLine*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_listwidgetsearchline_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KListWidgetSearchLine*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_listwidgetsearchline_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_listwidgetsearchline_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_listwidgetsearchline_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_listwidgetsearchline_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_listwidgetsearchline_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_listwidgetsearchline_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KListWidgetSearchLine*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_listwidgetsearchline_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KListWidgetSearchLine*
/// @param rectangle QRect*
///
QPixmap* k_listwidgetsearchline_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KListWidgetSearchLine*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_listwidgetsearchline_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KListWidgetSearchLine*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_listwidgetsearchline_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KListWidgetSearchLine*
/// @param id int
/// @param enable bool
///
void k_listwidgetsearchline_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KListWidgetSearchLine*
/// @param id int
/// @param enable bool
///
void k_listwidgetsearchline_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_listwidgetsearchline_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_listwidgetsearchline_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_listwidgetsearchline_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_listwidgetsearchline_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KListWidgetSearchLine*
///
const char* k_listwidgetsearchline_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KListWidgetSearchLine*
/// @param name const char*
///
void k_listwidgetsearchline_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KListWidgetSearchLine*
/// @param b bool
///
bool k_listwidgetsearchline_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KListWidgetSearchLine*
///
QThread* k_listwidgetsearchline_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KListWidgetSearchLine*
/// @param thread QThread*
///
bool k_listwidgetsearchline_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListWidgetSearchLine*
/// @param interval int
///
int32_t k_listwidgetsearchline_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListWidgetSearchLine*
/// @param time int64_t of nanoseconds
///
int32_t k_listwidgetsearchline_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KListWidgetSearchLine*
/// @param id int
///
void k_listwidgetsearchline_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KListWidgetSearchLine*
/// @param id enum Qt__TimerId
///
void k_listwidgetsearchline_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KListWidgetSearchLine*
///
/// @return libqt_list of QObject*
///
libqt_list k_listwidgetsearchline_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KListWidgetSearchLine*
/// @param filterObj QObject*
///
void k_listwidgetsearchline_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KListWidgetSearchLine*
/// @param obj QObject*
///
void k_listwidgetsearchline_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_listwidgetsearchline_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_listwidgetsearchline_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KListWidgetSearchLine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_listwidgetsearchline_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_listwidgetsearchline_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_listwidgetsearchline_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListWidgetSearchLine*
/// @param receiver QObject*
///
bool k_listwidgetsearchline_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_listwidgetsearchline_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KListWidgetSearchLine*
/// @param name const char*
/// @param value QVariant*
///
bool k_listwidgetsearchline_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KListWidgetSearchLine*
/// @param name const char*
///
QVariant* k_listwidgetsearchline_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KListWidgetSearchLine*
///
const char** k_listwidgetsearchline_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KListWidgetSearchLine*
///
QBindingStorage* k_listwidgetsearchline_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KListWidgetSearchLine*
///
const QBindingStorage* k_listwidgetsearchline_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self)
///
void k_listwidgetsearchline_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KListWidgetSearchLine*
///
QObject* k_listwidgetsearchline_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KListWidgetSearchLine*
/// @param classname const char*
///
bool k_listwidgetsearchline_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListWidgetSearchLine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_listwidgetsearchline_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KListWidgetSearchLine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_listwidgetsearchline_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_listwidgetsearchline_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_listwidgetsearchline_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KListWidgetSearchLine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_listwidgetsearchline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListWidgetSearchLine*
/// @param signal const char*
///
bool k_listwidgetsearchline_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListWidgetSearchLine*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_listwidgetsearchline_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListWidgetSearchLine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_listwidgetsearchline_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KListWidgetSearchLine*
/// @param receiver QObject*
/// @param member const char*
///
bool k_listwidgetsearchline_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListWidgetSearchLine*
/// @param param1 QObject*
///
void k_listwidgetsearchline_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QObject* param1)
///
void k_listwidgetsearchline_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KListWidgetSearchLine*
///
double k_listwidgetsearchline_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KListWidgetSearchLine*
///
double k_listwidgetsearchline_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_listwidgetsearchline_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_listwidgetsearchline_encode_metric_f(int32_t metric, double value);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_size_hint(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_size_hint` instead
///
#define k_listwidgetsearchline_qbase_size_hint k_listwidgetsearchline_super_size_hint

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_super_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QSize* func()
///
void k_listwidgetsearchline_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_minimum_size_hint` instead
///
#define k_listwidgetsearchline_qbase_minimum_size_hint k_listwidgetsearchline_super_minimum_size_hint

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QSize* k_listwidgetsearchline_super_minimum_size_hint(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QSize* func()
///
void k_listwidgetsearchline_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_mouse_press_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_mouse_press_event` instead
///
#define k_listwidgetsearchline_qbase_mouse_press_event k_listwidgetsearchline_super_mouse_press_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_super_mouse_press_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QMouseEvent* param1)
///
void k_listwidgetsearchline_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_mouse_move_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_mouse_move_event` instead
///
#define k_listwidgetsearchline_qbase_mouse_move_event k_listwidgetsearchline_super_mouse_move_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_super_mouse_move_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QMouseEvent* param1)
///
void k_listwidgetsearchline_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_mouse_release_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_mouse_release_event` instead
///
#define k_listwidgetsearchline_qbase_mouse_release_event k_listwidgetsearchline_super_mouse_release_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_super_mouse_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QMouseEvent* param1)
///
void k_listwidgetsearchline_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_mouse_double_click_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_mouse_double_click_event` instead
///
#define k_listwidgetsearchline_qbase_mouse_double_click_event k_listwidgetsearchline_super_mouse_double_click_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QMouseEvent*
///
void k_listwidgetsearchline_super_mouse_double_click_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QMouseEvent* param1)
///
void k_listwidgetsearchline_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_listwidgetsearchline_key_press_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_key_press_event` instead
///
#define k_listwidgetsearchline_qbase_key_press_event k_listwidgetsearchline_super_key_press_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_listwidgetsearchline_super_key_press_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QKeyEvent* param1)
///
void k_listwidgetsearchline_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_listwidgetsearchline_key_release_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_key_release_event` instead
///
#define k_listwidgetsearchline_qbase_key_release_event k_listwidgetsearchline_super_key_release_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QKeyEvent*
///
void k_listwidgetsearchline_super_key_release_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QKeyEvent* param1)
///
void k_listwidgetsearchline_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_listwidgetsearchline_focus_in_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_focus_in_event` instead
///
#define k_listwidgetsearchline_qbase_focus_in_event k_listwidgetsearchline_super_focus_in_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_listwidgetsearchline_super_focus_in_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QFocusEvent* param1)
///
void k_listwidgetsearchline_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_listwidgetsearchline_focus_out_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_focus_out_event` instead
///
#define k_listwidgetsearchline_qbase_focus_out_event k_listwidgetsearchline_super_focus_out_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QFocusEvent*
///
void k_listwidgetsearchline_super_focus_out_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QFocusEvent* param1)
///
void k_listwidgetsearchline_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPaintEvent*
///
void k_listwidgetsearchline_paint_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_paint_event` instead
///
#define k_listwidgetsearchline_qbase_paint_event k_listwidgetsearchline_super_paint_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QPaintEvent*
///
void k_listwidgetsearchline_super_paint_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QPaintEvent* param1)
///
void k_listwidgetsearchline_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QDragEnterEvent*
///
void k_listwidgetsearchline_drag_enter_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_drag_enter_event` instead
///
#define k_listwidgetsearchline_qbase_drag_enter_event k_listwidgetsearchline_super_drag_enter_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QDragEnterEvent*
///
void k_listwidgetsearchline_super_drag_enter_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QDragEnterEvent* param1)
///
void k_listwidgetsearchline_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param e QDragMoveEvent*
///
void k_listwidgetsearchline_drag_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_drag_move_event` instead
///
#define k_listwidgetsearchline_qbase_drag_move_event k_listwidgetsearchline_super_drag_move_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param e QDragMoveEvent*
///
void k_listwidgetsearchline_super_drag_move_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QDragMoveEvent* e)
///
void k_listwidgetsearchline_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param e QDragLeaveEvent*
///
void k_listwidgetsearchline_drag_leave_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_drag_leave_event` instead
///
#define k_listwidgetsearchline_qbase_drag_leave_event k_listwidgetsearchline_super_drag_leave_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param e QDragLeaveEvent*
///
void k_listwidgetsearchline_super_drag_leave_event(void* self, void* e);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QDragLeaveEvent* e)
///
void k_listwidgetsearchline_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QDropEvent*
///
void k_listwidgetsearchline_drop_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_drop_event` instead
///
#define k_listwidgetsearchline_qbase_drop_event k_listwidgetsearchline_super_drop_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QDropEvent*
///
void k_listwidgetsearchline_super_drop_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QDropEvent* param1)
///
void k_listwidgetsearchline_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QEvent*
///
void k_listwidgetsearchline_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_change_event` instead
///
#define k_listwidgetsearchline_qbase_change_event k_listwidgetsearchline_super_change_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QEvent*
///
void k_listwidgetsearchline_super_change_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QEvent* param1)
///
void k_listwidgetsearchline_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QContextMenuEvent*
///
void k_listwidgetsearchline_context_menu_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_context_menu_event` instead
///
#define k_listwidgetsearchline_qbase_context_menu_event k_listwidgetsearchline_super_context_menu_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QContextMenuEvent*
///
void k_listwidgetsearchline_super_context_menu_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QContextMenuEvent* param1)
///
void k_listwidgetsearchline_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QInputMethodEvent*
///
void k_listwidgetsearchline_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_input_method_event` instead
///
#define k_listwidgetsearchline_qbase_input_method_event k_listwidgetsearchline_super_input_method_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QInputMethodEvent*
///
void k_listwidgetsearchline_super_input_method_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QInputMethodEvent* param1)
///
void k_listwidgetsearchline_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param option QStyleOptionFrame*
///
void k_listwidgetsearchline_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_init_style_option` instead
///
#define k_listwidgetsearchline_qbase_init_style_option k_listwidgetsearchline_super_init_style_option

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param option QStyleOptionFrame*
///
void k_listwidgetsearchline_super_init_style_option(void* self, void* option);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QStyleOptionFrame* option)
///
void k_listwidgetsearchline_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_listwidgetsearchline_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_input_method_query` instead
///
#define k_listwidgetsearchline_qbase_input_method_query k_listwidgetsearchline_super_input_method_query

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_listwidgetsearchline_super_input_method_query(void* self, int32_t param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QVariant* func(KListWidgetSearchLine* self, enum Qt__InputMethodQuery param1)
///
void k_listwidgetsearchline_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QTimerEvent*
///
void k_listwidgetsearchline_timer_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_timer_event` instead
///
#define k_listwidgetsearchline_qbase_timer_event k_listwidgetsearchline_super_timer_event

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 QTimerEvent*
///
void k_listwidgetsearchline_super_timer_event(void* self, void* param1);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QTimerEvent* param1)
///
void k_listwidgetsearchline_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_dev_type(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_dev_type` instead
///
#define k_listwidgetsearchline_qbase_dev_type k_listwidgetsearchline_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback int32_t func()
///
void k_listwidgetsearchline_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param visible bool
///
void k_listwidgetsearchline_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_set_visible` instead
///
#define k_listwidgetsearchline_qbase_set_visible k_listwidgetsearchline_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param visible bool
///
void k_listwidgetsearchline_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, bool visible)
///
void k_listwidgetsearchline_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 int
///
int32_t k_listwidgetsearchline_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_height_for_width` instead
///
#define k_listwidgetsearchline_qbase_height_for_width k_listwidgetsearchline_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 int
///
int32_t k_listwidgetsearchline_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback int32_t func(KListWidgetSearchLine* self, int param1)
///
void k_listwidgetsearchline_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_has_height_for_width` instead
///
#define k_listwidgetsearchline_qbase_has_height_for_width k_listwidgetsearchline_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func()
///
void k_listwidgetsearchline_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QPaintEngine* k_listwidgetsearchline_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_paint_engine` instead
///
#define k_listwidgetsearchline_qbase_paint_engine k_listwidgetsearchline_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QPaintEngine* k_listwidgetsearchline_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QPaintEngine* func()
///
void k_listwidgetsearchline_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QWheelEvent*
///
void k_listwidgetsearchline_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_wheel_event` instead
///
#define k_listwidgetsearchline_qbase_wheel_event k_listwidgetsearchline_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QWheelEvent*
///
void k_listwidgetsearchline_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QWheelEvent* event)
///
void k_listwidgetsearchline_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QEnterEvent*
///
void k_listwidgetsearchline_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_enter_event` instead
///
#define k_listwidgetsearchline_qbase_enter_event k_listwidgetsearchline_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QEnterEvent*
///
void k_listwidgetsearchline_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QEnterEvent* event)
///
void k_listwidgetsearchline_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QEvent*
///
void k_listwidgetsearchline_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_leave_event` instead
///
#define k_listwidgetsearchline_qbase_leave_event k_listwidgetsearchline_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QEvent*
///
void k_listwidgetsearchline_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QEvent* event)
///
void k_listwidgetsearchline_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QMoveEvent*
///
void k_listwidgetsearchline_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_move_event` instead
///
#define k_listwidgetsearchline_qbase_move_event k_listwidgetsearchline_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QMoveEvent*
///
void k_listwidgetsearchline_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QMoveEvent* event)
///
void k_listwidgetsearchline_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QResizeEvent*
///
void k_listwidgetsearchline_resize_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_resize_event` instead
///
#define k_listwidgetsearchline_qbase_resize_event k_listwidgetsearchline_super_resize_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QResizeEvent*
///
void k_listwidgetsearchline_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QResizeEvent* event)
///
void k_listwidgetsearchline_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QCloseEvent*
///
void k_listwidgetsearchline_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_close_event` instead
///
#define k_listwidgetsearchline_qbase_close_event k_listwidgetsearchline_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QCloseEvent*
///
void k_listwidgetsearchline_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QCloseEvent* event)
///
void k_listwidgetsearchline_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QTabletEvent*
///
void k_listwidgetsearchline_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_tablet_event` instead
///
#define k_listwidgetsearchline_qbase_tablet_event k_listwidgetsearchline_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QTabletEvent*
///
void k_listwidgetsearchline_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QTabletEvent* event)
///
void k_listwidgetsearchline_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QActionEvent*
///
void k_listwidgetsearchline_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_action_event` instead
///
#define k_listwidgetsearchline_qbase_action_event k_listwidgetsearchline_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QActionEvent*
///
void k_listwidgetsearchline_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QActionEvent* event)
///
void k_listwidgetsearchline_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QShowEvent*
///
void k_listwidgetsearchline_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_show_event` instead
///
#define k_listwidgetsearchline_qbase_show_event k_listwidgetsearchline_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QShowEvent*
///
void k_listwidgetsearchline_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QShowEvent* event)
///
void k_listwidgetsearchline_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QHideEvent*
///
void k_listwidgetsearchline_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_hide_event` instead
///
#define k_listwidgetsearchline_qbase_hide_event k_listwidgetsearchline_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QHideEvent*
///
void k_listwidgetsearchline_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QHideEvent* event)
///
void k_listwidgetsearchline_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_listwidgetsearchline_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_native_event` instead
///
#define k_listwidgetsearchline_qbase_native_event k_listwidgetsearchline_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_listwidgetsearchline_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func(KListWidgetSearchLine* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_listwidgetsearchline_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_listwidgetsearchline_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_metric` instead
///
#define k_listwidgetsearchline_qbase_metric k_listwidgetsearchline_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_listwidgetsearchline_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback int32_t func(KListWidgetSearchLine* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_listwidgetsearchline_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param painter QPainter*
///
void k_listwidgetsearchline_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_init_painter` instead
///
#define k_listwidgetsearchline_qbase_init_painter k_listwidgetsearchline_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param painter QPainter*
///
void k_listwidgetsearchline_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QPainter* painter)
///
void k_listwidgetsearchline_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param offset QPoint*
///
QPaintDevice* k_listwidgetsearchline_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_redirected` instead
///
#define k_listwidgetsearchline_qbase_redirected k_listwidgetsearchline_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param offset QPoint*
///
QPaintDevice* k_listwidgetsearchline_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QPaintDevice* func(KListWidgetSearchLine* self, QPoint* offset)
///
void k_listwidgetsearchline_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QPainter* k_listwidgetsearchline_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_shared_painter` instead
///
#define k_listwidgetsearchline_qbase_shared_painter k_listwidgetsearchline_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QPainter* k_listwidgetsearchline_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QPainter* func()
///
void k_listwidgetsearchline_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param next bool
///
bool k_listwidgetsearchline_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_focus_next_prev_child` instead
///
#define k_listwidgetsearchline_qbase_focus_next_prev_child k_listwidgetsearchline_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param next bool
///
bool k_listwidgetsearchline_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func(KListWidgetSearchLine* self, bool next)
///
void k_listwidgetsearchline_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_listwidgetsearchline_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_event_filter` instead
///
#define k_listwidgetsearchline_qbase_event_filter k_listwidgetsearchline_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_listwidgetsearchline_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func(KListWidgetSearchLine* self, QObject* watched, QEvent* event)
///
void k_listwidgetsearchline_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QChildEvent*
///
void k_listwidgetsearchline_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_child_event` instead
///
#define k_listwidgetsearchline_qbase_child_event k_listwidgetsearchline_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QChildEvent*
///
void k_listwidgetsearchline_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QChildEvent* event)
///
void k_listwidgetsearchline_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QEvent*
///
void k_listwidgetsearchline_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_custom_event` instead
///
#define k_listwidgetsearchline_qbase_custom_event k_listwidgetsearchline_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param event QEvent*
///
void k_listwidgetsearchline_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QEvent* event)
///
void k_listwidgetsearchline_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_listwidgetsearchline_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_connect_notify` instead
///
#define k_listwidgetsearchline_qbase_connect_notify k_listwidgetsearchline_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_listwidgetsearchline_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QMetaMethod* signal)
///
void k_listwidgetsearchline_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_listwidgetsearchline_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_disconnect_notify` instead
///
#define k_listwidgetsearchline_qbase_disconnect_notify k_listwidgetsearchline_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal QMetaMethod*
///
void k_listwidgetsearchline_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, QMetaMethod* signal)
///
void k_listwidgetsearchline_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QRect* k_listwidgetsearchline_cursor_rect(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_cursor_rect` instead
///
#define k_listwidgetsearchline_qbase_cursor_rect k_listwidgetsearchline_super_cursor_rect

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QRect* k_listwidgetsearchline_super_cursor_rect(void* self);

/// Inherited from QLineEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QRect* func()
///
void k_listwidgetsearchline_on_cursor_rect(void* self, QRect* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_update_micro_focus` instead
///
#define k_listwidgetsearchline_qbase_update_micro_focus k_listwidgetsearchline_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func()
///
void k_listwidgetsearchline_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_create(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_create` instead
///
#define k_listwidgetsearchline_qbase_create k_listwidgetsearchline_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func()
///
void k_listwidgetsearchline_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_destroy(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_destroy` instead
///
#define k_listwidgetsearchline_qbase_destroy k_listwidgetsearchline_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback void func()
///
void k_listwidgetsearchline_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_focus_next_child` instead
///
#define k_listwidgetsearchline_qbase_focus_next_child k_listwidgetsearchline_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func()
///
void k_listwidgetsearchline_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_focus_previous_child` instead
///
#define k_listwidgetsearchline_qbase_focus_previous_child k_listwidgetsearchline_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
bool k_listwidgetsearchline_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func()
///
void k_listwidgetsearchline_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QObject* k_listwidgetsearchline_sender(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_sender` instead
///
#define k_listwidgetsearchline_qbase_sender k_listwidgetsearchline_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
QObject* k_listwidgetsearchline_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback QObject* func()
///
void k_listwidgetsearchline_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_sender_signal_index` instead
///
#define k_listwidgetsearchline_qbase_sender_signal_index k_listwidgetsearchline_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
///
int32_t k_listwidgetsearchline_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback int32_t func()
///
void k_listwidgetsearchline_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal const char*
///
int32_t k_listwidgetsearchline_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_receivers` instead
///
#define k_listwidgetsearchline_qbase_receivers k_listwidgetsearchline_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal const char*
///
int32_t k_listwidgetsearchline_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback int32_t func(KListWidgetSearchLine* self, const char* signal)
///
void k_listwidgetsearchline_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal QMetaMethod*
///
bool k_listwidgetsearchline_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_is_signal_connected` instead
///
#define k_listwidgetsearchline_qbase_is_signal_connected k_listwidgetsearchline_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param signal QMetaMethod*
///
bool k_listwidgetsearchline_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback bool func(KListWidgetSearchLine* self, QMetaMethod* signal)
///
void k_listwidgetsearchline_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_listwidgetsearchline_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_listwidgetsearchline_super_get_decoded_metric_f` instead
///
#define k_listwidgetsearchline_qbase_get_decoded_metric_f k_listwidgetsearchline_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_listwidgetsearchline_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KListWidgetSearchLine*
/// @param callback double func(KListWidgetSearchLine* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_listwidgetsearchline_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KListWidgetSearchLine*
/// @param callback void func(KListWidgetSearchLine* self, const char* objectName)
///
void k_listwidgetsearchline_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#dtor.KListWidgetSearchLine)
///
/// Delete this object from C++ memory.
///
/// @param self KListWidgetSearchLine*
///
void k_listwidgetsearchline_delete(void* self);

#endif
