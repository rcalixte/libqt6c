#pragma once
#ifndef SRC_QT6C_LIBQTEXTDOCUMENT_H
#define SRC_QT6C_LIBQTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractundoitem.html

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#undo)
///
/// @param self QAbstractUndoItem*
void q_abstractundoitem_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#redo)
///
/// @param self QAbstractUndoItem*
void q_abstractundoitem_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#operator-eq)
///
/// @param self QAbstractUndoItem*
/// @param param1 QAbstractUndoItem*
void q_abstractundoitem_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#dtor.QAbstractUndoItem)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractUndoItem*
void q_abstractundoitem_delete(void* self);

/// https://doc.qt.io/qt-6/qtextdocument.html

/// q_textdocument_new constructs a new QTextDocument object.
///
QTextDocument* q_textdocument_new();

/// q_textdocument_new2 constructs a new QTextDocument object.
///
/// @param text const char*
QTextDocument* q_textdocument_new2(const char* text);

/// q_textdocument_new3 constructs a new QTextDocument object.
///
/// @param parent QObject*
QTextDocument* q_textdocument_new3(void* parent);

/// q_textdocument_new4 constructs a new QTextDocument object.
///
/// @param text const char*
/// @param parent QObject*
QTextDocument* q_textdocument_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTextDocument*
const QMetaObject* q_textdocument_meta_object(void* self);

/// @param self QTextDocument*
/// @param param1 const char*
void* q_textdocument_metacast(void* self, const char* param1);

/// @param self QTextDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_textdocument_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback int32_t func(QTextDocument* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_textdocument_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_textdocument_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_textdocument_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// @param self QTextDocument*
QTextDocument* q_textdocument_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
///
/// @param self QTextDocument*
bool q_textdocument_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// @param self QTextDocument*
void q_textdocument_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback void func()
void q_textdocument_on_clear(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// Base class method implementation
///
/// @param self QTextDocument*
void q_textdocument_qbase_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
///
/// @param self QTextDocument*
/// @param enable bool
void q_textdocument_set_undo_redo_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
///
/// @param self QTextDocument*
bool q_textdocument_is_undo_redo_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
///
/// @param self QTextDocument*
bool q_textdocument_is_undo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
///
/// @param self QTextDocument*
bool q_textdocument_is_redo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
///
/// @param self QTextDocument*
int32_t q_textdocument_available_undo_steps(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
///
/// @param self QTextDocument*
int32_t q_textdocument_available_redo_steps(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#revision)
///
/// @param self QTextDocument*
int32_t q_textdocument_revision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
///
/// @param self QTextDocument*
/// @param layout QAbstractTextDocumentLayout*
void q_textdocument_set_document_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
///
/// @param self QTextDocument*
QAbstractTextDocumentLayout* q_textdocument_document_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMetaInformation)
///
/// @param self QTextDocument*
/// @param info enum QTextDocument__MetaInformation
/// @param param2 const char*
void q_textdocument_set_meta_information(void* self, int32_t info, const char* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#metaInformation)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
/// @param info enum QTextDocument__MetaInformation
const char* q_textdocument_meta_information(void* self, int32_t info);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
const char* q_textdocument_to_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
///
/// @param self QTextDocument*
/// @param html const char*
void q_textdocument_set_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
const char* q_textdocument_to_markdown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// @param self QTextDocument*
/// @param markdown const char*
void q_textdocument_set_markdown(void* self, const char* markdown);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
const char* q_textdocument_to_raw_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
const char* q_textdocument_to_plain_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
///
/// @param self QTextDocument*
/// @param text const char*
void q_textdocument_set_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
///
/// @param self QTextDocument*
/// @param pos int
QChar* q_textdocument_character_at(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param subString const char*
QTextCursor* q_textdocument_find(void* self, const char* subString);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param subString const char*
/// @param cursor QTextCursor*
QTextCursor* q_textdocument_find2(void* self, const char* subString, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param expr QRegularExpression*
QTextCursor* q_textdocument_find3(void* self, void* expr);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param expr QRegularExpression*
/// @param cursor QTextCursor*
QTextCursor* q_textdocument_find4(void* self, void* expr, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
///
/// @param self QTextDocument*
/// @param pos int
QTextFrame* q_textdocument_frame_at(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
///
/// @param self QTextDocument*
QTextFrame* q_textdocument_root_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#object)
///
/// @param self QTextDocument*
/// @param objectIndex int
QTextObject* q_textdocument_object(void* self, int objectIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
///
/// @param self QTextDocument*
/// @param param1 QTextFormat*
QTextObject* q_textdocument_object_for_format(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
///
/// @param self QTextDocument*
/// @param pos int
QTextBlock* q_textdocument_find_block(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
///
/// @param self QTextDocument*
/// @param blockNumber int
QTextBlock* q_textdocument_find_block_by_number(void* self, int blockNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
///
/// @param self QTextDocument*
/// @param blockNumber int
QTextBlock* q_textdocument_find_block_by_line_number(void* self, int blockNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#begin)
///
/// @param self QTextDocument*
QTextBlock* q_textdocument_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#end)
///
/// @param self QTextDocument*
QTextBlock* q_textdocument_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
///
/// @param self QTextDocument*
QTextBlock* q_textdocument_first_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
///
/// @param self QTextDocument*
QTextBlock* q_textdocument_last_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
///
/// @param self QTextDocument*
/// @param size QSizeF*
void q_textdocument_set_page_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
///
/// @param self QTextDocument*
QSizeF* q_textdocument_page_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
///
/// @param self QTextDocument*
/// @param font QFont*
void q_textdocument_set_default_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
///
/// @param self QTextDocument*
QFont* q_textdocument_default_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
///
/// @param self QTextDocument*
/// @param baseline double
void q_textdocument_set_super_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
///
/// @param self QTextDocument*
double q_textdocument_super_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
///
/// @param self QTextDocument*
/// @param baseline double
void q_textdocument_set_sub_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
///
/// @param self QTextDocument*
double q_textdocument_sub_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
///
/// @param self QTextDocument*
/// @param baseline double
void q_textdocument_set_baseline_offset(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
///
/// @param self QTextDocument*
double q_textdocument_baseline_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
///
/// @param self QTextDocument*
int32_t q_textdocument_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
///
/// @param self QTextDocument*
bool q_textdocument_is_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#print)
///
/// @param self QTextDocument*
/// @param printer QPagedPaintDevice*
void q_textdocument_print(void* self, void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#resource)
///
/// @param self QTextDocument*
/// @param type int
/// @param name QUrl*
QVariant* q_textdocument_resource(void* self, int type, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#addResource)
///
/// @param self QTextDocument*
/// @param type int
/// @param name QUrl*
/// @param resource QVariant*
void q_textdocument_add_resource(void* self, int type, void* name, void* resource);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
///
/// @param self QTextDocument*
libqt_list /* of QTextFormat* */ q_textdocument_all_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#markContentsDirty)
///
/// @param self QTextDocument*
/// @param from int
/// @param length int
void q_textdocument_mark_contents_dirty(void* self, int from, int length);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
///
/// @param self QTextDocument*
/// @param b bool
void q_textdocument_set_use_design_metrics(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
///
/// @param self QTextDocument*
bool q_textdocument_use_design_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
///
/// @param self QTextDocument*
/// @param b bool
void q_textdocument_set_layout_enabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
///
/// @param self QTextDocument*
bool q_textdocument_is_layout_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// @param self QTextDocument*
/// @param painter QPainter*
void q_textdocument_draw_contents(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
///
/// @param self QTextDocument*
/// @param width double
void q_textdocument_set_text_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
///
/// @param self QTextDocument*
double q_textdocument_text_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
///
/// @param self QTextDocument*
double q_textdocument_ideal_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
///
/// @param self QTextDocument*
double q_textdocument_indent_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
///
/// @param self QTextDocument*
/// @param width double
void q_textdocument_set_indent_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
///
/// @param self QTextDocument*
double q_textdocument_document_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
///
/// @param self QTextDocument*
/// @param margin double
void q_textdocument_set_document_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
///
/// @param self QTextDocument*
void q_textdocument_adjust_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#size)
///
/// @param self QTextDocument*
QSizeF* q_textdocument_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
///
/// @param self QTextDocument*
int32_t q_textdocument_block_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
///
/// @param self QTextDocument*
int32_t q_textdocument_line_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
///
/// @param self QTextDocument*
int32_t q_textdocument_character_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
///
/// @param self QTextDocument*
/// @param sheet const char*
void q_textdocument_set_default_style_sheet(void* self, const char* sheet);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
const char* q_textdocument_default_style_sheet(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// @param self QTextDocument*
/// @param cursor QTextCursor*
void q_textdocument_undo(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// @param self QTextDocument*
/// @param cursor QTextCursor*
void q_textdocument_redo(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// @param self QTextDocument*
void q_textdocument_clear_undo_redo_stacks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
///
/// @param self QTextDocument*
int32_t q_textdocument_maximum_block_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
///
/// @param self QTextDocument*
/// @param maximum int
void q_textdocument_set_maximum_block_count(void* self, int maximum);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
///
/// @param self QTextDocument*
QTextOption* q_textdocument_default_text_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
///
/// @param self QTextDocument*
/// @param option QTextOption*
void q_textdocument_set_default_text_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
///
/// @param self QTextDocument*
QUrl* q_textdocument_base_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
///
/// @param self QTextDocument*
/// @param url QUrl*
void q_textdocument_set_base_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultCursorMoveStyle)
///
/// @param self QTextDocument*
///
/// @return enum Qt__CursorMoveStyle
int32_t q_textdocument_default_cursor_move_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
///
/// @param self QTextDocument*
/// @param style enum Qt__CursorMoveStyle
void q_textdocument_set_default_cursor_move_style(void* self, int32_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
///
/// @param self QTextDocument*
/// @param from int
/// @param charsRemoved int
/// @param charsAdded int
void q_textdocument_contents_change(void* self, int from, int charsRemoved, int charsAdded);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, int from, int charsRemoved, int charsAdded)
void q_textdocument_on_contents_change(void* self, void (*callback)(void*, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
///
/// @param self QTextDocument*
void q_textdocument_contents_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
void q_textdocument_on_contents_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
///
/// @param self QTextDocument*
/// @param param1 bool
void q_textdocument_undo_available(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, bool param1)
void q_textdocument_on_undo_available(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
///
/// @param self QTextDocument*
/// @param param1 bool
void q_textdocument_redo_available(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, bool param1)
void q_textdocument_on_redo_available(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
///
/// @param self QTextDocument*
void q_textdocument_undo_command_added(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
void q_textdocument_on_undo_command_added(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
///
/// @param self QTextDocument*
/// @param m bool
void q_textdocument_modification_changed(void* self, bool m);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, bool m)
void q_textdocument_on_modification_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
///
/// @param self QTextDocument*
/// @param cursor QTextCursor*
void q_textdocument_cursor_position_changed(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QTextCursor* cursor)
void q_textdocument_on_cursor_position_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
///
/// @param self QTextDocument*
/// @param newBlockCount int
void q_textdocument_block_count_changed(void* self, int newBlockCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, int newBlockCount)
void q_textdocument_on_block_count_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
///
/// @param self QTextDocument*
/// @param url QUrl*
void q_textdocument_base_url_changed(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QUrl* url)
void q_textdocument_on_base_url_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
///
/// @param self QTextDocument*
void q_textdocument_document_layout_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
void q_textdocument_on_document_layout_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// @param self QTextDocument*
void q_textdocument_undo2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// @param self QTextDocument*
void q_textdocument_redo2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
///
/// @param self QTextDocument*
/// @param param1 QAbstractUndoItem*
void q_textdocument_append_undo_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// @param self QTextDocument*
void q_textdocument_set_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// @param self QTextDocument*
/// @param f QTextFormat*
QTextObject* q_textdocument_create_object(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback QTextObject* func(QTextDocument* self, QTextFormat* f)
void q_textdocument_on_create_object(void* self, QTextObject* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// Base class method implementation
///
/// @param self QTextDocument*
/// @param f QTextFormat*
QTextObject* q_textdocument_qbase_create_object(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// @param self QTextDocument*
/// @param type int
/// @param name QUrl*
QVariant* q_textdocument_load_resource(void* self, int type, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback QVariant* func(QTextDocument* self, int type, QUrl* name)
void q_textdocument_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// Base class method implementation
///
/// @param self QTextDocument*
/// @param type int
/// @param name QUrl*
QVariant* q_textdocument_qbase_load_resource(void* self, int type, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_textdocument_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_textdocument_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// @param self QTextDocument*
/// @param parent QObject*
QTextDocument* q_textdocument_clone1(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
/// @param features flag of enum QTextDocument__MarkdownFeature
const char* q_textdocument_to_markdown1(void* self, int32_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// @param self QTextDocument*
/// @param markdown const char*
/// @param features flag of enum QTextDocument__MarkdownFeature
void q_textdocument_set_markdown2(void* self, const char* markdown, int32_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param subString const char*
/// @param from int
QTextCursor* q_textdocument_find22(void* self, const char* subString, int from);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param subString const char*
/// @param from int
/// @param options flag of enum QTextDocument__FindFlag
QTextCursor* q_textdocument_find32(void* self, const char* subString, int from, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param subString const char*
/// @param cursor QTextCursor*
/// @param options flag of enum QTextDocument__FindFlag
QTextCursor* q_textdocument_find33(void* self, const char* subString, void* cursor, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param expr QRegularExpression*
/// @param from int
QTextCursor* q_textdocument_find23(void* self, void* expr, int from);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param expr QRegularExpression*
/// @param from int
/// @param options flag of enum QTextDocument__FindFlag
QTextCursor* q_textdocument_find34(void* self, void* expr, int from, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self QTextDocument*
/// @param expr QRegularExpression*
/// @param cursor QTextCursor*
/// @param options flag of enum QTextDocument__FindFlag
QTextCursor* q_textdocument_find35(void* self, void* expr, void* cursor, int32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// @param self QTextDocument*
/// @param painter QPainter*
/// @param rect QRectF*
void q_textdocument_draw_contents2(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// @param self QTextDocument*
/// @param historyToClear enum QTextDocument__Stacks
void q_textdocument_clear_undo_redo_stacks1(void* self, int32_t historyToClear);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// @param self QTextDocument*
/// @param m bool
void q_textdocument_set_modified1(void* self, bool m);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
const char* q_textdocument_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextDocument*
/// @param name char*
void q_textdocument_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTextDocument*
bool q_textdocument_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTextDocument*
bool q_textdocument_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTextDocument*
bool q_textdocument_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTextDocument*
bool q_textdocument_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextDocument*
/// @param b bool
bool q_textdocument_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTextDocument*
QThread* q_textdocument_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextDocument*
/// @param thread QThread*
bool q_textdocument_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextDocument*
/// @param interval int
int32_t q_textdocument_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextDocument*
/// @param id int
void q_textdocument_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextDocument*
/// @param id enum Qt__TimerId
void q_textdocument_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTextDocument*
libqt_list /* of QObject* */ q_textdocument_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextDocument*
/// @param parent QObject*
void q_textdocument_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextDocument*
/// @param filterObj QObject*
void q_textdocument_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextDocument*
/// @param obj QObject*
void q_textdocument_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_textdocument_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_textdocument_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_textdocument_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_textdocument_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTextDocument*
void q_textdocument_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTextDocument*
void q_textdocument_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextDocument*
/// @param name const char*
/// @param value QVariant*
bool q_textdocument_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTextDocument*
/// @param name const char*
QVariant* q_textdocument_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocument*
const char** q_textdocument_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextDocument*
QBindingStorage* q_textdocument_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextDocument*
const QBindingStorage* q_textdocument_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
void q_textdocument_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
void q_textdocument_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTextDocument*
QObject* q_textdocument_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTextDocument*
/// @param classname const char*
bool q_textdocument_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextDocument*
void q_textdocument_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextDocument*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_textdocument_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextDocument*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_textdocument_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_textdocument_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_textdocument_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
/// @param param1 QObject*
void q_textdocument_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QObject* param1)
void q_textdocument_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
bool q_textdocument_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
bool q_textdocument_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback bool func(QTextDocument* self, QEvent* event)
void q_textdocument_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param watched QObject*
/// @param event QEvent*
bool q_textdocument_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param watched QObject*
/// @param event QEvent*
bool q_textdocument_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback bool func(QTextDocument* self, QObject* watched, QEvent* event)
void q_textdocument_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QTimerEvent*
void q_textdocument_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QTimerEvent*
void q_textdocument_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QTimerEvent* event)
void q_textdocument_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QChildEvent*
void q_textdocument_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QChildEvent*
void q_textdocument_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QChildEvent* event)
void q_textdocument_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
void q_textdocument_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
void q_textdocument_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QEvent* event)
void q_textdocument_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
void q_textdocument_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
void q_textdocument_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QMetaMethod* signal)
void q_textdocument_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
void q_textdocument_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
void q_textdocument_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QMetaMethod* signal)
void q_textdocument_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
QObject* q_textdocument_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
QObject* q_textdocument_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback QObject* func()
void q_textdocument_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
int32_t q_textdocument_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
int32_t q_textdocument_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback int32_t func()
void q_textdocument_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param signal const char*
int32_t q_textdocument_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param signal const char*
int32_t q_textdocument_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback int32_t func(QTextDocument* self, const char* signal)
void q_textdocument_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
bool q_textdocument_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
bool q_textdocument_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback bool func(QTextDocument* self, QMetaMethod* signal)
void q_textdocument_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, const char* objectName)
void q_textdocument_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#dtor.QTextDocument)
///
/// Delete this object from C++ memory.
///
/// @param self QTextDocument*
void q_textdocument_delete(void* self);

/// https://doc.qt.io/qt-6/qtextdocument.html#types

typedef enum {
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTTITLE = 0,
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTURL = 1,
    QTEXTDOCUMENT_METAINFORMATION_CSSMEDIA = 2,
    QTEXTDOCUMENT_METAINFORMATION_FRONTMATTER = 3
} QTextDocument__MetaInformation;

typedef enum {
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNNOHTML = 96,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTCOMMONMARK = 0,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTGITHUB = 1068812
} QTextDocument__MarkdownFeature;

typedef enum {
    QTEXTDOCUMENT_FINDFLAG_FINDBACKWARD = 1,
    QTEXTDOCUMENT_FINDFLAG_FINDCASESENSITIVELY = 2,
    QTEXTDOCUMENT_FINDFLAG_FINDWHOLEWORDS = 4
} QTextDocument__FindFlag;

typedef enum {
    QTEXTDOCUMENT_RESOURCETYPE_UNKNOWNRESOURCE = 0,
    QTEXTDOCUMENT_RESOURCETYPE_HTMLRESOURCE = 1,
    QTEXTDOCUMENT_RESOURCETYPE_IMAGERESOURCE = 2,
    QTEXTDOCUMENT_RESOURCETYPE_STYLESHEETRESOURCE = 3,
    QTEXTDOCUMENT_RESOURCETYPE_MARKDOWNRESOURCE = 4,
    QTEXTDOCUMENT_RESOURCETYPE_USERRESOURCE = 100
} QTextDocument__ResourceType;

typedef enum {
    QTEXTDOCUMENT_STACKS_UNDOSTACK = 1,
    QTEXTDOCUMENT_STACKS_REDOSTACK = 2,
    QTEXTDOCUMENT_STACKS_UNDOANDREDOSTACKS = 3
} QTextDocument__Stacks;

#endif
