#pragma once
#ifndef LIBQPLAINTEXTEDIT_H
#define LIBQPLAINTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html)

/// q_plaintextedit_new constructs a new QPlainTextEdit object.
///
/// @param parent QWidget*
///
QPlainTextEdit* q_plaintextedit_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html)

/// q_plaintextedit_new2 constructs a new QPlainTextEdit object.
///
QPlainTextEdit* q_plaintextedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html)

/// q_plaintextedit_new3 constructs a new QPlainTextEdit object.
///
/// @param text const char*
///
QPlainTextEdit* q_plaintextedit_new3(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html)

/// q_plaintextedit_new4 constructs a new QPlainTextEdit object.
///
/// @param text const char*
/// @param parent QWidget*
///
QPlainTextEdit* q_plaintextedit_new4(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPlainTextEdit*
///
const QMetaObject* q_plaintextedit_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextEdit*
/// @param callback const QMetaObject* func(const QPlainTextEdit* self)
///
void q_plaintextedit_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPlainTextEdit*
///
const QMetaObject* q_plaintextedit_super_meta_object(const void* self);

/// @param self QPlainTextEdit*
/// @param param1 const char*
///
void* q_plaintextedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void* func(QPlainTextEdit* self, const char* param1)
///
void q_plaintextedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param param1 const char*
///
void* q_plaintextedit_super_metacast(void* self, const char* param1);

/// @param self QPlainTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_plaintextedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback int32_t func(QPlainTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_plaintextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_plaintextedit_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_plaintextedit_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
///
/// @param self QPlainTextEdit*
/// @param document QTextDocument*
///
void q_plaintextedit_set_document(void* self, void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#document)
///
/// @param self const QPlainTextEdit*
///
QTextDocument* q_plaintextedit_document(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
///
/// @param self QPlainTextEdit*
/// @param placeholderText const char*
///
void q_plaintextedit_set_placeholder_text(void* self, const char* placeholderText);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_placeholder_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
///
/// @param self QPlainTextEdit*
/// @param cursor QTextCursor*
///
void q_plaintextedit_set_text_cursor(void* self, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
///
/// @param self const QPlainTextEdit*
///
QTextCursor* q_plaintextedit_text_cursor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_read_only(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
///
/// @param self QPlainTextEdit*
/// @param ro bool
///
void q_plaintextedit_set_read_only(void* self, bool ro);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
///
/// @param self QPlainTextEdit*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void q_plaintextedit_set_text_interaction_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
///
/// @param self const QPlainTextEdit*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t q_plaintextedit_text_interaction_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
///
/// @param self QPlainTextEdit*
/// @param modifier QTextCharFormat*
///
void q_plaintextedit_merge_current_char_format(void* self, const void* modifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
///
/// @param self QPlainTextEdit*
/// @param format QTextCharFormat*
///
void q_plaintextedit_set_current_char_format(void* self, const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
///
/// @param self const QPlainTextEdit*
///
QTextCharFormat* q_plaintextedit_current_char_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_tab_changes_focus(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
///
/// @param self QPlainTextEdit*
/// @param b bool
///
void q_plaintextedit_set_tab_changes_focus(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
///
/// @param self QPlainTextEdit*
/// @param title const char*
///
void q_plaintextedit_set_document_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_document_title(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_undo_redo_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
///
/// @param self QPlainTextEdit*
/// @param enable bool
///
void q_plaintextedit_set_undo_redo_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
///
/// @param self QPlainTextEdit*
/// @param maximum int
///
void q_plaintextedit_set_maximum_block_count(void* self, int maximum);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_maximum_block_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
///
/// @param self const QPlainTextEdit*
///
/// @return enum QPlainTextEdit__LineWrapMode
///
int32_t q_plaintextedit_line_wrap_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
///
/// @param self QPlainTextEdit*
/// @param mode enum QPlainTextEdit__LineWrapMode
///
void q_plaintextedit_set_line_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
///
/// @param self const QPlainTextEdit*
///
/// @return enum QTextOption__WrapMode
///
int32_t q_plaintextedit_word_wrap_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
///
/// @param self QPlainTextEdit*
/// @param policy enum QTextOption__WrapMode
///
void q_plaintextedit_set_word_wrap_mode(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
///
/// @param self QPlainTextEdit*
/// @param visible bool
///
void q_plaintextedit_set_background_visible(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_background_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
///
/// @param self QPlainTextEdit*
/// @param enabled bool
///
void q_plaintextedit_set_center_on_scroll(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_center_on_scroll(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self QPlainTextEdit*
/// @param exp const char*
///
bool q_plaintextedit_find(void* self, const char* exp);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self QPlainTextEdit*
/// @param exp QRegularExpression*
///
bool q_plaintextedit_find2(void* self, const void* exp);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_to_plain_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_ensure_cursor_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// @param self QPlainTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* q_plaintextedit_load_resource(void* self, int type, const void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback QVariant* func(QPlainTextEdit* self, int type, QUrl* name)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* q_plaintextedit_super_load_resource(void* self, int type, const void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// @param self QPlainTextEdit*
///
QMenu* q_plaintextedit_create_standard_context_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// @param self QPlainTextEdit*
/// @param position QPoint*
///
QMenu* q_plaintextedit_create_standard_context_menu2(void* self, const void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
///
/// @param self const QPlainTextEdit*
/// @param pos QPoint*
///
QTextCursor* q_plaintextedit_cursor_for_position(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// @param self const QPlainTextEdit*
/// @param cursor QTextCursor*
///
QRect* q_plaintextedit_cursor_rect(const void* self, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// @param self const QPlainTextEdit*
///
QRect* q_plaintextedit_cursor_rect2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
/// @param pos QPoint*
///
const char* q_plaintextedit_anchor_at(const void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_overwrite_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
///
/// @param self QPlainTextEdit*
/// @param overwrite bool
///
void q_plaintextedit_set_overwrite_mode(void* self, bool overwrite);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
///
/// @param self const QPlainTextEdit*
///
double q_plaintextedit_tab_stop_distance(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
///
/// @param self QPlainTextEdit*
/// @param distance double
///
void q_plaintextedit_set_tab_stop_distance(void* self, double distance);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_cursor_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
///
/// @param self QPlainTextEdit*
/// @param width int
///
void q_plaintextedit_set_cursor_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
///
/// @param self QPlainTextEdit*
/// @param selections libqt_list of QTextEdit__ExtraSelection*
///
void q_plaintextedit_set_extra_selections(void* self, libqt_list selections);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
///
/// @param self const QPlainTextEdit*
///
/// @return libqt_list of QTextEdit__ExtraSelection*
///
libqt_list q_plaintextedit_extra_selections(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// @param self QPlainTextEdit*
/// @param operation enum QTextCursor__MoveOperation
///
void q_plaintextedit_move_cursor(void* self, int32_t operation);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_can_paste(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#print)
///
/// @param self const QPlainTextEdit*
/// @param printer QPagedPaintDevice*
///
void q_plaintextedit_print(const void* self, void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_block_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// @param self const QPlainTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* q_plaintextedit_input_method_query(const void* self, int32_t property);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextEdit*
/// @param callback QVariant* func(const QPlainTextEdit* self, enum Qt__InputMethodQuery property)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextedit_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self const QPlainTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* q_plaintextedit_super_input_method_query(const void* self, int32_t property);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// @param self const QPlainTextEdit*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_plaintextedit_input_method_query2(const void* self, int32_t query, void* argument);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
///
/// @param self QPlainTextEdit*
/// @param text const char*
///
void q_plaintextedit_set_plain_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_cut(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_copy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_paste(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_undo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_redo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
///
/// @param self QPlainTextEdit*
/// @param text const char*
///
void q_plaintextedit_insert_plain_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
///
/// @param self QPlainTextEdit*
/// @param text const char*
///
void q_plaintextedit_append_plain_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
///
/// @param self QPlainTextEdit*
/// @param html const char*
///
void q_plaintextedit_append_html(void* self, const char* html);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_center_cursor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_zoom_in(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_zoom_out(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_text_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self)
///
void q_plaintextedit_on_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// @param self QPlainTextEdit*
/// @param b bool
///
void q_plaintextedit_undo_available(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, bool b)
///
void q_plaintextedit_on_undo_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// @param self QPlainTextEdit*
/// @param b bool
///
void q_plaintextedit_redo_available(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, bool b)
///
void q_plaintextedit_on_redo_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// @param self QPlainTextEdit*
/// @param b bool
///
void q_plaintextedit_copy_available(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, bool b)
///
void q_plaintextedit_on_copy_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self)
///
void q_plaintextedit_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_cursor_position_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self)
///
void q_plaintextedit_on_cursor_position_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// @param self QPlainTextEdit*
/// @param rect QRect*
/// @param dy int
///
void q_plaintextedit_update_request(void* self, const void* rect, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QRect* rect, int dy)
///
void q_plaintextedit_on_update_request(void* self, void (*callback)(void*, const void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// @param self QPlainTextEdit*
/// @param newBlockCount int
///
void q_plaintextedit_block_count_changed(void* self, int newBlockCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, int newBlockCount)
///
void q_plaintextedit_on_block_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// @param self QPlainTextEdit*
/// @param param1 bool
///
void q_plaintextedit_modification_changed(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, bool param1)
///
void q_plaintextedit_on_modification_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// @param self QPlainTextEdit*
/// @param e QEvent*
///
bool q_plaintextedit_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self, QEvent* e)
///
void q_plaintextedit_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QEvent*
///
bool q_plaintextedit_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// @param self QPlainTextEdit*
/// @param e QTimerEvent*
///
void q_plaintextedit_timer_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QTimerEvent* e)
///
void q_plaintextedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QTimerEvent*
///
void q_plaintextedit_super_timer_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// @param self QPlainTextEdit*
/// @param e QKeyEvent*
///
void q_plaintextedit_key_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QKeyEvent* e)
///
void q_plaintextedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QKeyEvent*
///
void q_plaintextedit_super_key_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// @param self QPlainTextEdit*
/// @param e QKeyEvent*
///
void q_plaintextedit_key_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QKeyEvent* e)
///
void q_plaintextedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QKeyEvent*
///
void q_plaintextedit_super_key_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// @param self QPlainTextEdit*
/// @param e QResizeEvent*
///
void q_plaintextedit_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QResizeEvent* e)
///
void q_plaintextedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QResizeEvent*
///
void q_plaintextedit_super_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// @param self QPlainTextEdit*
/// @param e QPaintEvent*
///
void q_plaintextedit_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QPaintEvent* e)
///
void q_plaintextedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QPaintEvent*
///
void q_plaintextedit_super_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMouseEvent* e)
///
void q_plaintextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_super_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMouseEvent* e)
///
void q_plaintextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_super_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMouseEvent* e)
///
void q_plaintextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_super_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_mouse_double_click_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMouseEvent* e)
///
void q_plaintextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QMouseEvent*
///
void q_plaintextedit_super_mouse_double_click_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// @param self QPlainTextEdit*
/// @param next bool
///
bool q_plaintextedit_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self, bool next)
///
void q_plaintextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param next bool
///
bool q_plaintextedit_super_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// @param self QPlainTextEdit*
/// @param e QContextMenuEvent*
///
void q_plaintextedit_context_menu_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QContextMenuEvent* e)
///
void q_plaintextedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QContextMenuEvent*
///
void q_plaintextedit_super_context_menu_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// @param self QPlainTextEdit*
/// @param e QDragEnterEvent*
///
void q_plaintextedit_drag_enter_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QDragEnterEvent* e)
///
void q_plaintextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QDragEnterEvent*
///
void q_plaintextedit_super_drag_enter_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// @param self QPlainTextEdit*
/// @param e QDragLeaveEvent*
///
void q_plaintextedit_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QDragLeaveEvent* e)
///
void q_plaintextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QDragLeaveEvent*
///
void q_plaintextedit_super_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// @param self QPlainTextEdit*
/// @param e QDragMoveEvent*
///
void q_plaintextedit_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QDragMoveEvent* e)
///
void q_plaintextedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QDragMoveEvent*
///
void q_plaintextedit_super_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// @param self QPlainTextEdit*
/// @param e QDropEvent*
///
void q_plaintextedit_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QDropEvent* e)
///
void q_plaintextedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QDropEvent*
///
void q_plaintextedit_super_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// @param self QPlainTextEdit*
/// @param e QFocusEvent*
///
void q_plaintextedit_focus_in_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QFocusEvent* e)
///
void q_plaintextedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QFocusEvent*
///
void q_plaintextedit_super_focus_in_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// @param self QPlainTextEdit*
/// @param e QFocusEvent*
///
void q_plaintextedit_focus_out_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QFocusEvent* e)
///
void q_plaintextedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QFocusEvent*
///
void q_plaintextedit_super_focus_out_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// @param self QPlainTextEdit*
/// @param param1 QShowEvent*
///
void q_plaintextedit_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QShowEvent* param1)
///
void q_plaintextedit_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param param1 QShowEvent*
///
void q_plaintextedit_super_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// @param self QPlainTextEdit*
/// @param e QEvent*
///
void q_plaintextedit_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QEvent* e)
///
void q_plaintextedit_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QEvent*
///
void q_plaintextedit_super_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// @param self QPlainTextEdit*
/// @param e QWheelEvent*
///
void q_plaintextedit_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QWheelEvent* e)
///
void q_plaintextedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param e QWheelEvent*
///
void q_plaintextedit_super_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// @param self const QPlainTextEdit*
///
QMimeData* q_plaintextedit_create_mime_data_from_selection(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextEdit*
/// @param callback QMimeData* func(const QPlainTextEdit* self)
///
void q_plaintextedit_on_create_mime_data_from_selection(const void* self, QMimeData* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Base class method implementation
///
/// @param self const QPlainTextEdit*
///
QMimeData* q_plaintextedit_super_create_mime_data_from_selection(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// @param self const QPlainTextEdit*
/// @param source QMimeData*
///
bool q_plaintextedit_can_insert_from_mime_data(const void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextEdit*
/// @param callback bool func(const QPlainTextEdit* self, QMimeData* source)
///
void q_plaintextedit_on_can_insert_from_mime_data(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Base class method implementation
///
/// @param self const QPlainTextEdit*
/// @param source QMimeData*
///
bool q_plaintextedit_super_can_insert_from_mime_data(const void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// @param self QPlainTextEdit*
/// @param source QMimeData*
///
void q_plaintextedit_insert_from_mime_data(void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMimeData* source)
///
void q_plaintextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param source QMimeData*
///
void q_plaintextedit_super_insert_from_mime_data(void* self, const void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// @param self QPlainTextEdit*
/// @param param1 QInputMethodEvent*
///
void q_plaintextedit_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QInputMethodEvent* param1)
///
void q_plaintextedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param param1 QInputMethodEvent*
///
void q_plaintextedit_super_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// @param self QPlainTextEdit*
/// @param dx int
/// @param dy int
///
void q_plaintextedit_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, int dx, int dy)
///
void q_plaintextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param dx int
/// @param dy int
///
void q_plaintextedit_super_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// @param self QPlainTextEdit*
/// @param cursor QTextCursor*
///
void q_plaintextedit_do_set_text_cursor(void* self, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QTextCursor* cursor)
///
void q_plaintextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Base class method implementation
///
/// @param self QPlainTextEdit*
/// @param cursor QTextCursor*
///
void q_plaintextedit_super_do_set_text_cursor(void* self, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// @param self const QPlainTextEdit*
///
QTextBlock* q_plaintextedit_first_visible_block(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// @param self const QPlainTextEdit*
///
QPointF* q_plaintextedit_content_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// @param self const QPlainTextEdit*
/// @param block QTextBlock*
///
QRectF* q_plaintextedit_block_bounding_rect(const void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// @param self const QPlainTextEdit*
/// @param block QTextBlock*
///
QRectF* q_plaintextedit_block_bounding_geometry(const void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// @param self const QPlainTextEdit*
///
QAbstractTextDocumentLayout__PaintContext* q_plaintextedit_get_paint_context(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// @param self QPlainTextEdit*
/// @param range float
///
void q_plaintextedit_zoom_in_f(void* self, float range);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_plaintextedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_plaintextedit_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self QPlainTextEdit*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool q_plaintextedit_find22(void* self, const char* exp, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self QPlainTextEdit*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool q_plaintextedit_find23(void* self, const void* exp, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// @param self QPlainTextEdit*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void q_plaintextedit_move_cursor2(void* self, int32_t operation, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// @param self QPlainTextEdit*
/// @param range int
///
void q_plaintextedit_zoom_in1(void* self, int range);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// @param self QPlainTextEdit*
/// @param range int
///
void q_plaintextedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self const QPlainTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_plaintextedit_vertical_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QPlainTextEdit*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_plaintextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self const QPlainTextEdit*
///
QScrollBar* q_plaintextedit_vertical_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QPlainTextEdit*
/// @param scrollbar QScrollBar*
///
void q_plaintextedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self const QPlainTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_plaintextedit_horizontal_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QPlainTextEdit*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_plaintextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self const QPlainTextEdit*
///
QScrollBar* q_plaintextedit_horizontal_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QPlainTextEdit*
/// @param scrollbar QScrollBar*
///
void q_plaintextedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_corner_widget(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QPlainTextEdit*
/// @param widget QWidget*
///
void q_plaintextedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QPlainTextEdit*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_plaintextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QPlainTextEdit*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_plaintextedit_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_viewport(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QPlainTextEdit*
/// @param widget QWidget*
///
void q_plaintextedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_maximum_viewport_size(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self const QPlainTextEdit*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_plaintextedit_size_adjust_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QPlainTextEdit*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_plaintextedit_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QPlainTextEdit*
/// @param frameStyle int
///
void q_plaintextedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const QPlainTextEdit*
///
/// @return enum QFrame__Shape
///
int32_t q_plaintextedit_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QPlainTextEdit*
/// @param frameShape enum QFrame__Shape
///
void q_plaintextedit_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const QPlainTextEdit*
///
/// @return enum QFrame__Shadow
///
int32_t q_plaintextedit_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QPlainTextEdit*
/// @param frameShadow enum QFrame__Shadow
///
void q_plaintextedit_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QPlainTextEdit*
/// @param lineWidth int
///
void q_plaintextedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QPlainTextEdit*
/// @param midLineWidth int
///
void q_plaintextedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const QPlainTextEdit*
///
QRect* q_plaintextedit_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QPlainTextEdit*
/// @param frameRect QRect*
///
void q_plaintextedit_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self QPlainTextEdit*
///
QPaintDevice* q_plaintextedit_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a QPlainTextEdit object
///
/// @param _qpaintdevice QPaintDevice*
///
QPlainTextEdit* q_plaintextedit_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QPlainTextEdit*
///
uintptr_t q_plaintextedit_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QPlainTextEdit*
///
uintptr_t q_plaintextedit_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QPlainTextEdit*
///
uintptr_t q_plaintextedit_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QPlainTextEdit*
///
QStyle* q_plaintextedit_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QPlainTextEdit*
/// @param style QStyle*
///
void q_plaintextedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QPlainTextEdit*
///
/// @return enum Qt__WindowModality
///
int32_t q_plaintextedit_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QPlainTextEdit*
/// @param windowModality enum Qt__WindowModality
///
void q_plaintextedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QPlainTextEdit*
/// @param param1 QWidget*
///
bool q_plaintextedit_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QPlainTextEdit*
/// @param enabled bool
///
void q_plaintextedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QPlainTextEdit*
/// @param disabled bool
///
void q_plaintextedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QPlainTextEdit*
/// @param windowModified bool
///
void q_plaintextedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QPlainTextEdit*
///
QRect* q_plaintextedit_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QPlainTextEdit*
///
const QRect* q_plaintextedit_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QPlainTextEdit*
///
QRect* q_plaintextedit_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QPlainTextEdit*
///
QPoint* q_plaintextedit_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QPlainTextEdit*
///
QRect* q_plaintextedit_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QPlainTextEdit*
///
QRect* q_plaintextedit_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QPlainTextEdit*
///
QRegion* q_plaintextedit_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPlainTextEdit*
/// @param minimumSize QSize*
///
void q_plaintextedit_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QPlainTextEdit*
/// @param minw int
/// @param minh int
///
void q_plaintextedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPlainTextEdit*
/// @param maximumSize QSize*
///
void q_plaintextedit_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QPlainTextEdit*
/// @param maxw int
/// @param maxh int
///
void q_plaintextedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QPlainTextEdit*
/// @param minw int
///
void q_plaintextedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QPlainTextEdit*
/// @param minh int
///
void q_plaintextedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QPlainTextEdit*
/// @param maxw int
///
void q_plaintextedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QPlainTextEdit*
/// @param maxh int
///
void q_plaintextedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPlainTextEdit*
/// @param sizeIncrement QSize*
///
void q_plaintextedit_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QPlainTextEdit*
/// @param w int
/// @param h int
///
void q_plaintextedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPlainTextEdit*
/// @param baseSize QSize*
///
void q_plaintextedit_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QPlainTextEdit*
/// @param basew int
/// @param baseh int
///
void q_plaintextedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPlainTextEdit*
/// @param fixedSize QSize*
///
void q_plaintextedit_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QPlainTextEdit*
/// @param w int
/// @param h int
///
void q_plaintextedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QPlainTextEdit*
/// @param w int
///
void q_plaintextedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QPlainTextEdit*
/// @param h int
///
void q_plaintextedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPointF*
///
QPointF* q_plaintextedit_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPoint*
///
QPoint* q_plaintextedit_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPointF*
///
QPointF* q_plaintextedit_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPoint*
///
QPoint* q_plaintextedit_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPointF*
///
QPointF* q_plaintextedit_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPoint*
///
QPoint* q_plaintextedit_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPointF*
///
QPointF* q_plaintextedit_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QPlainTextEdit*
/// @param param1 QPoint*
///
QPoint* q_plaintextedit_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QPlainTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_plaintextedit_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QPlainTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_plaintextedit_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QPlainTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_plaintextedit_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QPlainTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_plaintextedit_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QPlainTextEdit*
///
const QPalette* q_plaintextedit_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QPlainTextEdit*
/// @param palette QPalette*
///
void q_plaintextedit_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QPlainTextEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_plaintextedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QPlainTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_plaintextedit_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QPlainTextEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_plaintextedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QPlainTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_plaintextedit_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QPlainTextEdit*
///
const QFont* q_plaintextedit_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QPlainTextEdit*
/// @param font QFont*
///
void q_plaintextedit_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QPlainTextEdit*
///
QFontMetrics* q_plaintextedit_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QPlainTextEdit*
///
QFontInfo* q_plaintextedit_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QPlainTextEdit*
///
QCursor* q_plaintextedit_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QPlainTextEdit*
/// @param cursor QCursor*
///
void q_plaintextedit_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QPlainTextEdit*
/// @param enable bool
///
void q_plaintextedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QPlainTextEdit*
/// @param enable bool
///
void q_plaintextedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPlainTextEdit*
/// @param mask QBitmap*
///
void q_plaintextedit_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QPlainTextEdit*
/// @param mask QRegion*
///
void q_plaintextedit_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QPlainTextEdit*
///
QRegion* q_plaintextedit_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param target QPaintDevice*
///
void q_plaintextedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param painter QPainter*
///
void q_plaintextedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPlainTextEdit*
///
QPixmap* q_plaintextedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QPlainTextEdit*
///
QGraphicsEffect* q_plaintextedit_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QPlainTextEdit*
/// @param effect QGraphicsEffect*
///
void q_plaintextedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPlainTextEdit*
/// @param type enum Qt__GestureType
///
void q_plaintextedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QPlainTextEdit*
/// @param type enum Qt__GestureType
///
void q_plaintextedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QPlainTextEdit*
/// @param windowTitle const char*
///
void q_plaintextedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QPlainTextEdit*
/// @param styleSheet const char*
///
void q_plaintextedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QPlainTextEdit*
/// @param icon QIcon*
///
void q_plaintextedit_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QPlainTextEdit*
///
QIcon* q_plaintextedit_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QPlainTextEdit*
/// @param windowIconText const char*
///
void q_plaintextedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QPlainTextEdit*
/// @param windowRole const char*
///
void q_plaintextedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QPlainTextEdit*
/// @param filePath const char*
///
void q_plaintextedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QPlainTextEdit*
/// @param level double
///
void q_plaintextedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QPlainTextEdit*
///
double q_plaintextedit_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QPlainTextEdit*
/// @param toolTip const char*
///
void q_plaintextedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QPlainTextEdit*
/// @param msec int
///
void q_plaintextedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QPlainTextEdit*
/// @param statusTip const char*
///
void q_plaintextedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QPlainTextEdit*
/// @param whatsThis const char*
///
void q_plaintextedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QPlainTextEdit*
/// @param name const char*
///
void q_plaintextedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QPlainTextEdit*
/// @param description const char*
///
void q_plaintextedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QPlainTextEdit*
/// @param direction enum Qt__LayoutDirection
///
void q_plaintextedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QPlainTextEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_plaintextedit_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QPlainTextEdit*
/// @param locale QLocale*
///
void q_plaintextedit_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QPlainTextEdit*
///
QLocale* q_plaintextedit_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QPlainTextEdit*
/// @param reason enum Qt__FocusReason
///
void q_plaintextedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QPlainTextEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_plaintextedit_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QPlainTextEdit*
/// @param policy enum Qt__FocusPolicy
///
void q_plaintextedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_plaintextedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QPlainTextEdit*
/// @param focusProxy QWidget*
///
void q_plaintextedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QPlainTextEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_plaintextedit_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QPlainTextEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_plaintextedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QPlainTextEdit*
/// @param param1 QCursor*
///
void q_plaintextedit_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPlainTextEdit*
/// @param key QKeySequence*
///
int32_t q_plaintextedit_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QPlainTextEdit*
/// @param id int
///
void q_plaintextedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPlainTextEdit*
/// @param id int
///
void q_plaintextedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPlainTextEdit*
/// @param id int
///
void q_plaintextedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_plaintextedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_plaintextedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QPlainTextEdit*
/// @param enable bool
///
void q_plaintextedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QPlainTextEdit*
///
QGraphicsProxyWidget* q_plaintextedit_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPlainTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_plaintextedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPlainTextEdit*
/// @param param1 QRect*
///
void q_plaintextedit_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QPlainTextEdit*
/// @param param1 QRegion*
///
void q_plaintextedit_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPlainTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_plaintextedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPlainTextEdit*
/// @param param1 QRect*
///
void q_plaintextedit_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QPlainTextEdit*
/// @param param1 QRegion*
///
void q_plaintextedit_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QPlainTextEdit*
/// @param hidden bool
///
void q_plaintextedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QPlainTextEdit*
///
bool q_plaintextedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QPlainTextEdit*
/// @param param1 QWidget*
///
void q_plaintextedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPlainTextEdit*
/// @param x int
/// @param y int
///
void q_plaintextedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QPlainTextEdit*
/// @param param1 QPoint*
///
void q_plaintextedit_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPlainTextEdit*
/// @param w int
/// @param h int
///
void q_plaintextedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QPlainTextEdit*
/// @param param1 QSize*
///
void q_plaintextedit_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPlainTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_plaintextedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QPlainTextEdit*
/// @param geometry QRect*
///
void q_plaintextedit_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlainTextEdit*
///
char* q_plaintextedit_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QPlainTextEdit*
/// @param geometry char*
///
bool q_plaintextedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QPlainTextEdit*
/// @param param1 QWidget*
///
bool q_plaintextedit_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QPlainTextEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_plaintextedit_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QPlainTextEdit*
/// @param state flag of enum Qt__WindowState
///
void q_plaintextedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QPlainTextEdit*
/// @param state flag of enum Qt__WindowState
///
void q_plaintextedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QPlainTextEdit*
///
QSizePolicy* q_plaintextedit_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPlainTextEdit*
/// @param sizePolicy QSizePolicy*
///
void q_plaintextedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QPlainTextEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_plaintextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QPlainTextEdit*
///
QRegion* q_plaintextedit_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPlainTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_plaintextedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QPlainTextEdit*
/// @param margins QMargins*
///
void q_plaintextedit_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QPlainTextEdit*
///
QMargins* q_plaintextedit_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QPlainTextEdit*
///
QRect* q_plaintextedit_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QPlainTextEdit*
///
QLayout* q_plaintextedit_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QPlainTextEdit*
/// @param layout QLayout*
///
void q_plaintextedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPlainTextEdit*
/// @param parent QWidget*
///
void q_plaintextedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QPlainTextEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_plaintextedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPlainTextEdit*
/// @param dx int
/// @param dy int
///
void q_plaintextedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QPlainTextEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_plaintextedit_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QPlainTextEdit*
/// @param on bool
///
void q_plaintextedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPlainTextEdit*
/// @param action QAction*
///
void q_plaintextedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QPlainTextEdit*
/// @param actions libqt_list of QAction*
///
void q_plaintextedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QPlainTextEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_plaintextedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QPlainTextEdit*
/// @param before QAction*
/// @param action QAction*
///
void q_plaintextedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QPlainTextEdit*
/// @param action QAction*
///
void q_plaintextedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QPlainTextEdit*
///
/// @return libqt_list of QAction*
///
libqt_list q_plaintextedit_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPlainTextEdit*
/// @param text const char*
///
QAction* q_plaintextedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPlainTextEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_plaintextedit_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPlainTextEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_plaintextedit_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QPlainTextEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_plaintextedit_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QPlainTextEdit*
///
QWidget* q_plaintextedit_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QPlainTextEdit*
/// @param type flag of enum Qt__WindowType
///
void q_plaintextedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QPlainTextEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_plaintextedit_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPlainTextEdit*
/// @param param1 enum Qt__WindowType
///
void q_plaintextedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QPlainTextEdit*
/// @param type flag of enum Qt__WindowType
///
void q_plaintextedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QPlainTextEdit*
///
/// @return enum Qt__WindowType
///
int32_t q_plaintextedit_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPlainTextEdit*
/// @param x int
/// @param y int
///
QWidget* q_plaintextedit_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPlainTextEdit*
/// @param p QPoint*
///
QWidget* q_plaintextedit_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QPlainTextEdit*
/// @param p QPointF*
///
QWidget* q_plaintextedit_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPlainTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void q_plaintextedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QPlainTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_plaintextedit_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QPlainTextEdit*
///
void q_plaintextedit_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QPlainTextEdit*
/// @param child QWidget*
///
bool q_plaintextedit_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QPlainTextEdit*
/// @param enabled bool
///
void q_plaintextedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QPlainTextEdit*
///
QBackingStore* q_plaintextedit_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QPlainTextEdit*
///
QWindow* q_plaintextedit_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QPlainTextEdit*
///
QScreen* q_plaintextedit_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QPlainTextEdit*
/// @param screen QScreen*
///
void q_plaintextedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_plaintextedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPlainTextEdit*
/// @param title const char*
///
void q_plaintextedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, const char* title)
///
void q_plaintextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPlainTextEdit*
/// @param icon QIcon*
///
void q_plaintextedit_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QIcon* icon)
///
void q_plaintextedit_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPlainTextEdit*
/// @param iconText const char*
///
void q_plaintextedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, const char* iconText)
///
void q_plaintextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPlainTextEdit*
/// @param pos QPoint*
///
void q_plaintextedit_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QPoint* pos)
///
void q_plaintextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QPlainTextEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_plaintextedit_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QPlainTextEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_plaintextedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_plaintextedit_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_plaintextedit_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_plaintextedit_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_plaintextedit_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_plaintextedit_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QPlainTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_plaintextedit_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QPlainTextEdit*
/// @param rectangle QRect*
///
QPixmap* q_plaintextedit_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QPlainTextEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_plaintextedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QPlainTextEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_plaintextedit_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QPlainTextEdit*
/// @param id int
/// @param enable bool
///
void q_plaintextedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QPlainTextEdit*
/// @param id int
/// @param enable bool
///
void q_plaintextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QPlainTextEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_plaintextedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QPlainTextEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_plaintextedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_plaintextedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_plaintextedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextEdit*
///
const char* q_plaintextedit_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlainTextEdit*
/// @param name const char*
///
void q_plaintextedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlainTextEdit*
/// @param b bool
///
bool q_plaintextedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPlainTextEdit*
///
QThread* q_plaintextedit_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlainTextEdit*
/// @param thread QThread*
///
bool q_plaintextedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextEdit*
/// @param interval int
///
int32_t q_plaintextedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextEdit*
/// @param time int64_t of nanoseconds
///
int32_t q_plaintextedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlainTextEdit*
/// @param id int
///
void q_plaintextedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlainTextEdit*
/// @param id enum Qt__TimerId
///
void q_plaintextedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPlainTextEdit*
///
/// @return libqt_list of QObject*
///
libqt_list q_plaintextedit_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlainTextEdit*
/// @param filterObj QObject*
///
void q_plaintextedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlainTextEdit*
/// @param obj QObject*
///
void q_plaintextedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_plaintextedit_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_plaintextedit_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlainTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_plaintextedit_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_plaintextedit_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_plaintextedit_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextEdit*
/// @param receiver QObject*
///
bool q_plaintextedit_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_plaintextedit_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPlainTextEdit*
///
void q_plaintextedit_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPlainTextEdit*
///
void q_plaintextedit_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlainTextEdit*
/// @param name const char*
/// @param value QVariant*
///
bool q_plaintextedit_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPlainTextEdit*
/// @param name const char*
///
QVariant* q_plaintextedit_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlainTextEdit*
///
const char** q_plaintextedit_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlainTextEdit*
///
QBindingStorage* q_plaintextedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPlainTextEdit*
///
const QBindingStorage* q_plaintextedit_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self)
///
void q_plaintextedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPlainTextEdit*
///
QObject* q_plaintextedit_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPlainTextEdit*
/// @param classname const char*
///
bool q_plaintextedit_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_plaintextedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_plaintextedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_plaintextedit_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_plaintextedit_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlainTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_plaintextedit_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextEdit*
/// @param signal const char*
///
bool q_plaintextedit_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_plaintextedit_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_plaintextedit_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool q_plaintextedit_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextEdit*
/// @param param1 QObject*
///
void q_plaintextedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QObject* param1)
///
void q_plaintextedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QPlainTextEdit*
///
double q_plaintextedit_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QPlainTextEdit*
///
double q_plaintextedit_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_plaintextedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_plaintextedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_minimum_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_super_minimum_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QSize* func(QPlainTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextedit_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_super_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QSize* func(QPlainTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextedit_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param viewport QWidget*
///
void q_plaintextedit_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param viewport QWidget*
///
void q_plaintextedit_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QWidget* viewport)
///
void q_plaintextedit_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_plaintextedit_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_plaintextedit_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self, QObject* param1, QEvent* param2)
///
void q_plaintextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param param1 QEvent*
///
bool q_plaintextedit_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param param1 QEvent*
///
bool q_plaintextedit_super_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self, QEvent* param1)
///
void q_plaintextedit_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_viewport_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QSize* q_plaintextedit_super_viewport_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QSize* func(QPlainTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextedit_on_viewport_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param option QStyleOptionFrame*
///
void q_plaintextedit_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param option QStyleOptionFrame*
///
void q_plaintextedit_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QStyleOptionFrame* option)
///
void q_plaintextedit_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback int32_t func(QPlainTextEdit* self)
///
void q_plaintextedit_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param visible bool
///
void q_plaintextedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param visible bool
///
void q_plaintextedit_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, bool visible)
///
void q_plaintextedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param param1 int
///
int32_t q_plaintextedit_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param param1 int
///
int32_t q_plaintextedit_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback int32_t func(QPlainTextEdit* self, int param1)
///
void q_plaintextedit_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
bool q_plaintextedit_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self)
///
void q_plaintextedit_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QPaintEngine* q_plaintextedit_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QPaintEngine* q_plaintextedit_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QPaintEngine* func(QPlainTextEdit* self)
///
void q_plaintextedit_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QEnterEvent*
///
void q_plaintextedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QEnterEvent*
///
void q_plaintextedit_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QEnterEvent* event)
///
void q_plaintextedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QEvent*
///
void q_plaintextedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QEvent*
///
void q_plaintextedit_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QEvent* event)
///
void q_plaintextedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QMoveEvent*
///
void q_plaintextedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QMoveEvent*
///
void q_plaintextedit_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMoveEvent* event)
///
void q_plaintextedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QCloseEvent*
///
void q_plaintextedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QCloseEvent*
///
void q_plaintextedit_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QCloseEvent* event)
///
void q_plaintextedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QTabletEvent*
///
void q_plaintextedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QTabletEvent*
///
void q_plaintextedit_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QTabletEvent* event)
///
void q_plaintextedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QActionEvent*
///
void q_plaintextedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QActionEvent*
///
void q_plaintextedit_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QActionEvent* event)
///
void q_plaintextedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QHideEvent*
///
void q_plaintextedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QHideEvent*
///
void q_plaintextedit_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QHideEvent* event)
///
void q_plaintextedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_plaintextedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_plaintextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_plaintextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_plaintextedit_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_plaintextedit_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback int32_t func(QPlainTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_plaintextedit_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param painter QPainter*
///
void q_plaintextedit_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param painter QPainter*
///
void q_plaintextedit_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QPainter* painter)
///
void q_plaintextedit_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param offset QPoint*
///
QPaintDevice* q_plaintextedit_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param offset QPoint*
///
QPaintDevice* q_plaintextedit_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QPaintDevice* func(QPlainTextEdit* self, QPoint* offset)
///
void q_plaintextedit_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QPainter* q_plaintextedit_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QPainter* q_plaintextedit_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QPainter* func(QPlainTextEdit* self)
///
void q_plaintextedit_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QChildEvent*
///
void q_plaintextedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QChildEvent*
///
void q_plaintextedit_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QChildEvent* event)
///
void q_plaintextedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QEvent*
///
void q_plaintextedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param event QEvent*
///
void q_plaintextedit_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QEvent* event)
///
void q_plaintextedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param signal QMetaMethod*
///
void q_plaintextedit_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param signal QMetaMethod*
///
void q_plaintextedit_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMetaMethod* signal)
///
void q_plaintextedit_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param signal QMetaMethod*
///
void q_plaintextedit_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param signal QMetaMethod*
///
void q_plaintextedit_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QMetaMethod* signal)
///
void q_plaintextedit_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_plaintextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_plaintextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, int left, int top, int right, int bottom)
///
void q_plaintextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QMargins* q_plaintextedit_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QMargins* q_plaintextedit_super_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QMargins* func(QPlainTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextedit_on_viewport_margins(const void* self, QMargins* (*callback)(const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param param1 QPainter*
///
void q_plaintextedit_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param param1 QPainter*
///
void q_plaintextedit_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, QPainter* param1)
///
void q_plaintextedit_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self)
///
void q_plaintextedit_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self)
///
void q_plaintextedit_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self)
///
void q_plaintextedit_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
///
bool q_plaintextedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
///
bool q_plaintextedit_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self)
///
void q_plaintextedit_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextEdit*
///
bool q_plaintextedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextEdit*
///
bool q_plaintextedit_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self)
///
void q_plaintextedit_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QObject* q_plaintextedit_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
QObject* q_plaintextedit_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback QObject* func(QPlainTextEdit* self)
///
void q_plaintextedit_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
///
int32_t q_plaintextedit_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback int32_t func(QPlainTextEdit* self)
///
void q_plaintextedit_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param signal const char*
///
int32_t q_plaintextedit_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param signal const char*
///
int32_t q_plaintextedit_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback int32_t func(QPlainTextEdit* self, const char* signal)
///
void q_plaintextedit_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param signal QMetaMethod*
///
bool q_plaintextedit_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param signal QMetaMethod*
///
bool q_plaintextedit_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback bool func(QPlainTextEdit* self, QMetaMethod* signal)
///
void q_plaintextedit_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_plaintextedit_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_plaintextedit_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextEdit*
/// @param callback double func(QPlainTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_plaintextedit_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlainTextEdit*
/// @param callback void func(QPlainTextEdit* self, const char* objectName)
///
void q_plaintextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dtor.QPlainTextEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QPlainTextEdit*
///
void q_plaintextedit_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html)

/// q_plaintextdocumentlayout_new constructs a new QPlainTextDocumentLayout object.
///
/// @param document QTextDocument*
///
QPlainTextDocumentLayout* q_plaintextdocumentlayout_new(void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPlainTextDocumentLayout*
///
const QMetaObject* q_plaintextdocumentlayout_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback const QMetaObject* func(const QPlainTextDocumentLayout* self)
///
void q_plaintextdocumentlayout_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPlainTextDocumentLayout*
///
const QMetaObject* q_plaintextdocumentlayout_super_meta_object(const void* self);

/// @param self QPlainTextDocumentLayout*
/// @param param1 const char*
///
void* q_plaintextdocumentlayout_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void* func(QPlainTextDocumentLayout* self, const char* param1)
///
void q_plaintextdocumentlayout_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPlainTextDocumentLayout*
/// @param param1 const char*
///
void* q_plaintextdocumentlayout_super_metacast(void* self, const char* param1);

/// @param self QPlainTextDocumentLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_plaintextdocumentlayout_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback int32_t func(QPlainTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_plaintextdocumentlayout_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPlainTextDocumentLayout*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_plaintextdocumentlayout_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_plaintextdocumentlayout_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
///
/// @param self QPlainTextDocumentLayout*
/// @param param1 QPainter*
/// @param param2 QAbstractTextDocumentLayout__PaintContext*
///
void q_plaintextdocumentlayout_draw(void* self, void* param1, const void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2)
///
void q_plaintextdocumentlayout_on_draw(void* self, void (*callback)(void*, void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
///
/// Base class method implementation
///
/// @param self QPlainTextDocumentLayout*
/// @param param1 QPainter*
/// @param param2 QAbstractTextDocumentLayout__PaintContext*
///
void q_plaintextdocumentlayout_super_draw(void* self, void* param1, const void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
///
/// @param self const QPlainTextDocumentLayout*
/// @param param1 QPointF*
/// @param param2 enum Qt__HitTestAccuracy
///
int32_t q_plaintextdocumentlayout_hit_test(const void* self, const void* param1, int32_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback int32_t func(const QPlainTextDocumentLayout* self, QPointF* param1, enum Qt__HitTestAccuracy param2)
///
void q_plaintextdocumentlayout_on_hit_test(const void* self, int32_t (*callback)(const void*, const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
///
/// Base class method implementation
///
/// @param self const QPlainTextDocumentLayout*
/// @param param1 QPointF*
/// @param param2 enum Qt__HitTestAccuracy
///
int32_t q_plaintextdocumentlayout_super_hit_test(const void* self, const void* param1, int32_t param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
///
/// @param self const QPlainTextDocumentLayout*
///
int32_t q_plaintextdocumentlayout_page_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback int32_t func(const QPlainTextDocumentLayout* self)
///
void q_plaintextdocumentlayout_on_page_count(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
///
/// Base class method implementation
///
/// @param self const QPlainTextDocumentLayout*
///
int32_t q_plaintextdocumentlayout_super_page_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
///
/// @param self const QPlainTextDocumentLayout*
///
QSizeF* q_plaintextdocumentlayout_document_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback QSizeF* func(const QPlainTextDocumentLayout* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextdocumentlayout_on_document_size(const void* self, QSizeF* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
///
/// Base class method implementation
///
/// @param self const QPlainTextDocumentLayout*
///
QSizeF* q_plaintextdocumentlayout_super_document_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param param1 QTextFrame*
///
QRectF* q_plaintextdocumentlayout_frame_bounding_rect(const void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback QRectF* func(const QPlainTextDocumentLayout* self, QTextFrame* param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextdocumentlayout_on_frame_bounding_rect(const void* self, QRectF* (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
///
/// Base class method implementation
///
/// @param self const QPlainTextDocumentLayout*
/// @param param1 QTextFrame*
///
QRectF* q_plaintextdocumentlayout_super_frame_bounding_rect(const void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param block QTextBlock*
///
QRectF* q_plaintextdocumentlayout_block_bounding_rect(const void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
///
/// Allows for overriding the related default method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback QRectF* func(const QPlainTextDocumentLayout* self, QTextBlock* block)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextdocumentlayout_on_block_bounding_rect(const void* self, QRectF* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
///
/// Base class method implementation
///
/// @param self const QPlainTextDocumentLayout*
/// @param block QTextBlock*
///
QRectF* q_plaintextdocumentlayout_super_block_bounding_rect(const void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#ensureBlockLayout)
///
/// @param self const QPlainTextDocumentLayout*
/// @param block QTextBlock*
///
void q_plaintextdocumentlayout_ensure_block_layout(const void* self, const void* block);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#setCursorWidth)
///
/// @param self QPlainTextDocumentLayout*
/// @param width int
///
void q_plaintextdocumentlayout_set_cursor_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#cursorWidth)
///
/// @param self const QPlainTextDocumentLayout*
///
int32_t q_plaintextdocumentlayout_cursor_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#requestUpdate)
///
/// @param self QPlainTextDocumentLayout*
///
void q_plaintextdocumentlayout_request_update(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
///
/// @param self QPlainTextDocumentLayout*
/// @param from int
/// @param param2 int
/// @param charsAdded int
///
void q_plaintextdocumentlayout_document_changed(void* self, int from, int param2, int charsAdded);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
///
/// Allows for overriding the related default method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, int from, int param2, int charsAdded)
///
void q_plaintextdocumentlayout_on_document_changed(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
///
/// Base class method implementation
///
/// @param self QPlainTextDocumentLayout*
/// @param from int
/// @param param2 int
/// @param charsAdded int
///
void q_plaintextdocumentlayout_super_document_changed(void* self, int from, int param2, int charsAdded);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_plaintextdocumentlayout_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_plaintextdocumentlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextDocumentLayout*
/// @param pos QPointF*
///
const char* q_plaintextdocumentlayout_anchor_at(const void* self, const void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextDocumentLayout*
/// @param pos QPointF*
///
const char* q_plaintextdocumentlayout_image_at(const void* self, const void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
///
/// @param self const QPlainTextDocumentLayout*
/// @param pos QPointF*
///
QTextFormat* q_plaintextdocumentlayout_format_at(const void* self, const void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
///
/// @param self const QPlainTextDocumentLayout*
/// @param pos QPointF*
///
QTextBlock* q_plaintextdocumentlayout_block_with_marker_at(const void* self, const void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
///
/// @param self QPlainTextDocumentLayout*
/// @param device QPaintDevice*
///
void q_plaintextdocumentlayout_set_paint_device(void* self, void* device);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
///
/// @param self const QPlainTextDocumentLayout*
///
QPaintDevice* q_plaintextdocumentlayout_paint_device(const void* self);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
///
/// @param self const QPlainTextDocumentLayout*
///
QTextDocument* q_plaintextdocumentlayout_document(const void* self);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
///
/// @param self QPlainTextDocumentLayout*
/// @param objectType int
/// @param component QObject*
///
void q_plaintextdocumentlayout_register_handler(void* self, int objectType, void* component);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// @param self QPlainTextDocumentLayout*
/// @param objectType int
///
void q_plaintextdocumentlayout_unregister_handler(void* self, int objectType);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
///
/// @param self const QPlainTextDocumentLayout*
/// @param objectType int
///
QTextObjectInterface* q_plaintextdocumentlayout_handler_for_object(const void* self, int objectType);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QPlainTextDocumentLayout*
///
void q_plaintextdocumentlayout_update(void* self);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self)
///
void q_plaintextdocumentlayout_on_update(void* self, void (*callback)(void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// @param self QPlainTextDocumentLayout*
/// @param block QTextBlock*
///
void q_plaintextdocumentlayout_update_block(void* self, const void* block);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QTextBlock* block)
///
void q_plaintextdocumentlayout_on_update_block(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// @param self QPlainTextDocumentLayout*
/// @param newSize QSizeF*
///
void q_plaintextdocumentlayout_document_size_changed(void* self, const void* newSize);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QSizeF* newSize)
///
void q_plaintextdocumentlayout_on_document_size_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// @param self QPlainTextDocumentLayout*
/// @param newPages int
///
void q_plaintextdocumentlayout_page_count_changed(void* self, int newPages);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, int newPages)
///
void q_plaintextdocumentlayout_on_page_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// @param self QPlainTextDocumentLayout*
/// @param objectType int
/// @param component QObject*
///
void q_plaintextdocumentlayout_unregister_handler2(void* self, int objectType, void* component);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QPlainTextDocumentLayout*
/// @param param1 QRectF*
///
void q_plaintextdocumentlayout_update1(void* self, const void* param1);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QRectF* param1)
///
void q_plaintextdocumentlayout_on_update1(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlainTextDocumentLayout*
///
const char* q_plaintextdocumentlayout_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlainTextDocumentLayout*
/// @param name const char*
///
void q_plaintextdocumentlayout_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPlainTextDocumentLayout*
///
bool q_plaintextdocumentlayout_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPlainTextDocumentLayout*
///
bool q_plaintextdocumentlayout_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPlainTextDocumentLayout*
///
bool q_plaintextdocumentlayout_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPlainTextDocumentLayout*
///
bool q_plaintextdocumentlayout_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlainTextDocumentLayout*
/// @param b bool
///
bool q_plaintextdocumentlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPlainTextDocumentLayout*
///
QThread* q_plaintextdocumentlayout_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlainTextDocumentLayout*
/// @param thread QThread*
///
bool q_plaintextdocumentlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextDocumentLayout*
/// @param interval int
///
int32_t q_plaintextdocumentlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextDocumentLayout*
/// @param time int64_t of nanoseconds
///
int32_t q_plaintextdocumentlayout_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlainTextDocumentLayout*
/// @param id int
///
void q_plaintextdocumentlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlainTextDocumentLayout*
/// @param id enum Qt__TimerId
///
void q_plaintextdocumentlayout_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPlainTextDocumentLayout*
///
/// @return libqt_list of QObject*
///
libqt_list q_plaintextdocumentlayout_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlainTextDocumentLayout*
/// @param parent QObject*
///
void q_plaintextdocumentlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlainTextDocumentLayout*
/// @param filterObj QObject*
///
void q_plaintextdocumentlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlainTextDocumentLayout*
/// @param obj QObject*
///
void q_plaintextdocumentlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_plaintextdocumentlayout_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_plaintextdocumentlayout_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_plaintextdocumentlayout_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_plaintextdocumentlayout_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_plaintextdocumentlayout_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextDocumentLayout*
///
bool q_plaintextdocumentlayout_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param receiver QObject*
///
bool q_plaintextdocumentlayout_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_plaintextdocumentlayout_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPlainTextDocumentLayout*
///
void q_plaintextdocumentlayout_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPlainTextDocumentLayout*
///
void q_plaintextdocumentlayout_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlainTextDocumentLayout*
/// @param name const char*
/// @param value QVariant*
///
bool q_plaintextdocumentlayout_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPlainTextDocumentLayout*
/// @param name const char*
///
QVariant* q_plaintextdocumentlayout_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlainTextDocumentLayout*
///
const char** q_plaintextdocumentlayout_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlainTextDocumentLayout*
///
QBindingStorage* q_plaintextdocumentlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPlainTextDocumentLayout*
///
const QBindingStorage* q_plaintextdocumentlayout_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextDocumentLayout*
///
void q_plaintextdocumentlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self)
///
void q_plaintextdocumentlayout_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPlainTextDocumentLayout*
///
QObject* q_plaintextdocumentlayout_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPlainTextDocumentLayout*
/// @param classname const char*
///
bool q_plaintextdocumentlayout_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlainTextDocumentLayout*
///
void q_plaintextdocumentlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextDocumentLayout*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_plaintextdocumentlayout_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlainTextDocumentLayout*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_plaintextdocumentlayout_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_plaintextdocumentlayout_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_plaintextdocumentlayout_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_plaintextdocumentlayout_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param signal const char*
///
bool q_plaintextdocumentlayout_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_plaintextdocumentlayout_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_plaintextdocumentlayout_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlainTextDocumentLayout*
/// @param receiver QObject*
/// @param member const char*
///
bool q_plaintextdocumentlayout_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextDocumentLayout*
/// @param param1 QObject*
///
void q_plaintextdocumentlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QObject* param1)
///
void q_plaintextdocumentlayout_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_plaintextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, const void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_plaintextdocumentlayout_super_resize_inline_object(void* self, void* item, int posInDocument, const void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format)
///
void q_plaintextdocumentlayout_on_resize_inline_object(void* self, void (*callback)(void*, void*, int, const void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_plaintextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, const void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param item QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_plaintextdocumentlayout_super_position_inline_object(void* self, void* item, int posInDocument, const void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format)
///
void q_plaintextdocumentlayout_on_position_inline_object(void* self, void (*callback)(void*, void*, int, const void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param object QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_plaintextdocumentlayout_draw_inline_object(void* self, void* painter, const void* rect, void* object, int posInDocument, const void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param painter QPainter*
/// @param rect QRectF*
/// @param object QTextInlineObject*
/// @param posInDocument int
/// @param format QTextFormat*
///
void q_plaintextdocumentlayout_super_draw_inline_object(void* self, void* painter, const void* rect, void* object, int posInDocument, const void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format)
///
void q_plaintextdocumentlayout_on_draw_inline_object(void* self, void (*callback)(void*, void*, const void*, void*, int, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QEvent*
///
bool q_plaintextdocumentlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QEvent*
///
bool q_plaintextdocumentlayout_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback bool func(QPlainTextDocumentLayout* self, QEvent* event)
///
void q_plaintextdocumentlayout_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_plaintextdocumentlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_plaintextdocumentlayout_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback bool func(QPlainTextDocumentLayout* self, QObject* watched, QEvent* event)
///
void q_plaintextdocumentlayout_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QTimerEvent*
///
void q_plaintextdocumentlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QTimerEvent*
///
void q_plaintextdocumentlayout_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QTimerEvent* event)
///
void q_plaintextdocumentlayout_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QChildEvent*
///
void q_plaintextdocumentlayout_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QChildEvent*
///
void q_plaintextdocumentlayout_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QChildEvent* event)
///
void q_plaintextdocumentlayout_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QEvent*
///
void q_plaintextdocumentlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param event QEvent*
///
void q_plaintextdocumentlayout_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QEvent* event)
///
void q_plaintextdocumentlayout_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_plaintextdocumentlayout_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_plaintextdocumentlayout_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QMetaMethod* signal)
///
void q_plaintextdocumentlayout_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_plaintextdocumentlayout_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param signal QMetaMethod*
///
void q_plaintextdocumentlayout_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, QMetaMethod* signal)
///
void q_plaintextdocumentlayout_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param pos int
///
int32_t q_plaintextdocumentlayout_format_index(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param pos int
///
int32_t q_plaintextdocumentlayout_super_format_index(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback int32_t func(QPlainTextDocumentLayout* self, int pos)
///
void q_plaintextdocumentlayout_on_format_index(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param pos int
///
QTextCharFormat* q_plaintextdocumentlayout_format(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param pos int
///
QTextCharFormat* q_plaintextdocumentlayout_super_format(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlainTextDocumentLayout*
/// @param callback QTextCharFormat* func(QPlainTextDocumentLayout* self, int pos)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_plaintextdocumentlayout_on_format(void* self, QTextCharFormat* (*callback)(void*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
///
QObject* q_plaintextdocumentlayout_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
///
QObject* q_plaintextdocumentlayout_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback QObject* func(QPlainTextDocumentLayout* self)
///
void q_plaintextdocumentlayout_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
///
int32_t q_plaintextdocumentlayout_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
///
int32_t q_plaintextdocumentlayout_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback int32_t func(QPlainTextDocumentLayout* self)
///
void q_plaintextdocumentlayout_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param signal const char*
///
int32_t q_plaintextdocumentlayout_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param signal const char*
///
int32_t q_plaintextdocumentlayout_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback int32_t func(QPlainTextDocumentLayout* self, const char* signal)
///
void q_plaintextdocumentlayout_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param signal QMetaMethod*
///
bool q_plaintextdocumentlayout_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param signal QMetaMethod*
///
bool q_plaintextdocumentlayout_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPlainTextDocumentLayout*
/// @param callback bool func(QPlainTextDocumentLayout* self, QMetaMethod* signal)
///
void q_plaintextdocumentlayout_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlainTextDocumentLayout*
/// @param callback void func(QPlainTextDocumentLayout* self, const char* objectName)
///
void q_plaintextdocumentlayout_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#dtor.QPlainTextDocumentLayout)
///
/// Delete this object from C++ memory.
///
/// @param self QPlainTextDocumentLayout*
///
void q_plaintextdocumentlayout_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#public-types)

typedef enum {
    QPLAINTEXTEDIT_LINEWRAPMODE_NOWRAP = 0,
    QPLAINTEXTEDIT_LINEWRAPMODE_WIDGETWIDTH = 1
} QPlainTextEdit__LineWrapMode;

#endif
