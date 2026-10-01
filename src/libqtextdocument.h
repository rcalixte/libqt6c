#pragma once
#ifndef LIBQTEXTDOCUMENT_H
#define LIBQTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#operator-eq)
///
/// @param self QAbstractUndoItem*
/// @param param1 QAbstractUndoItem*
///
void q_abstractundoitem_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractundoitem.html#dtor.QAbstractUndoItem)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractUndoItem*
///
void q_abstractundoitem_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html)

/// q_textdocument_new constructs a new QTextDocument object.
///
QTextDocument* q_textdocument_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html)

/// q_textdocument_new2 constructs a new QTextDocument object.
///
/// @param text const char*
///
QTextDocument* q_textdocument_new2(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html)

/// q_textdocument_new3 constructs a new QTextDocument object.
///
/// @param parent QObject*
///
QTextDocument* q_textdocument_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html)

/// q_textdocument_new4 constructs a new QTextDocument object.
///
/// @param text const char*
/// @param parent QObject*
///
QTextDocument* q_textdocument_new4(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTextDocument*
///
const QMetaObject* q_textdocument_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback const QMetaObject* func(const QTextDocument* self)
///
void q_textdocument_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTextDocument*
///
const QMetaObject* q_textdocument_super_meta_object(const void* self);

/// @param self QTextDocument*
/// @param param1 const char*
///
void* q_textdocument_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback void* func(QTextDocument* self, const char* param1)
///
void q_textdocument_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTextDocument*
/// @param param1 const char*
///
void* q_textdocument_super_metacast(void* self, const char* param1);

/// @param self QTextDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textdocument_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback int32_t func(QTextDocument* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_textdocument_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextDocument*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textdocument_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_textdocument_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// @param self const QTextDocument*
///
QTextDocument* q_textdocument_clone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// @param self QTextDocument*
///
void q_textdocument_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
///
void q_textdocument_on_clear(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// Base class method implementation
///
/// @param self QTextDocument*
///
void q_textdocument_super_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
///
/// @param self QTextDocument*
/// @param enable bool
///
void q_textdocument_set_undo_redo_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_undo_redo_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_undo_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_redo_available(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_available_undo_steps(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_available_redo_steps(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#revision)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_revision(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
///
/// @param self QTextDocument*
/// @param layout QAbstractTextDocumentLayout*
///
void q_textdocument_set_document_layout(void* self, void* layout);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
///
/// @param self const QTextDocument*
///
QAbstractTextDocumentLayout* q_textdocument_document_layout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMetaInformation)
///
/// @param self QTextDocument*
/// @param info enum QTextDocument__MetaInformation
/// @param param2 const char*
///
void q_textdocument_set_meta_information(void* self, int32_t info, const char* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#metaInformation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
/// @param info enum QTextDocument__MetaInformation
///
const char* q_textdocument_meta_information(const void* self, int32_t info);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
///
const char* q_textdocument_to_html(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
///
/// @param self QTextDocument*
/// @param html const char*
///
void q_textdocument_set_html(void* self, const char* html);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
///
const char* q_textdocument_to_markdown(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// @param self QTextDocument*
/// @param markdown const char*
///
void q_textdocument_set_markdown(void* self, const char* markdown);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
///
const char* q_textdocument_to_raw_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
///
const char* q_textdocument_to_plain_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
///
/// @param self QTextDocument*
/// @param text const char*
///
void q_textdocument_set_plain_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
///
/// @param self const QTextDocument*
/// @param pos int
///
QChar* q_textdocument_character_at(const void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param subString const char*
///
QTextCursor* q_textdocument_find(const void* self, const char* subString);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param subString const char*
/// @param cursor QTextCursor*
///
QTextCursor* q_textdocument_find2(const void* self, const char* subString, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param expr QRegularExpression*
///
QTextCursor* q_textdocument_find3(const void* self, const void* expr);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param expr QRegularExpression*
/// @param cursor QTextCursor*
///
QTextCursor* q_textdocument_find4(const void* self, const void* expr, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
///
/// @param self const QTextDocument*
/// @param pos int
///
QTextFrame* q_textdocument_frame_at(const void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
///
/// @param self const QTextDocument*
///
QTextFrame* q_textdocument_root_frame(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#object)
///
/// @param self const QTextDocument*
/// @param objectIndex int
///
QTextObject* q_textdocument_object(const void* self, int objectIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
///
/// @param self const QTextDocument*
/// @param param1 QTextFormat*
///
QTextObject* q_textdocument_object_for_format(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
///
/// @param self const QTextDocument*
/// @param pos int
///
QTextBlock* q_textdocument_find_block(const void* self, int pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
///
/// @param self const QTextDocument*
/// @param blockNumber int
///
QTextBlock* q_textdocument_find_block_by_number(const void* self, int blockNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
///
/// @param self const QTextDocument*
/// @param blockNumber int
///
QTextBlock* q_textdocument_find_block_by_line_number(const void* self, int blockNumber);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#begin)
///
/// @param self const QTextDocument*
///
QTextBlock* q_textdocument_begin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#end)
///
/// @param self const QTextDocument*
///
QTextBlock* q_textdocument_end(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
///
/// @param self const QTextDocument*
///
QTextBlock* q_textdocument_first_block(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
///
/// @param self const QTextDocument*
///
QTextBlock* q_textdocument_last_block(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
///
/// @param self QTextDocument*
/// @param size QSizeF*
///
void q_textdocument_set_page_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
///
/// @param self const QTextDocument*
///
QSizeF* q_textdocument_page_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
///
/// @param self QTextDocument*
/// @param font QFont*
///
void q_textdocument_set_default_font(void* self, const void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
///
/// @param self const QTextDocument*
///
QFont* q_textdocument_default_font(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
///
/// @param self QTextDocument*
/// @param baseline double
///
void q_textdocument_set_super_script_baseline(void* self, double baseline);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
///
/// @param self const QTextDocument*
///
double q_textdocument_super_script_baseline(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
///
/// @param self QTextDocument*
/// @param baseline double
///
void q_textdocument_set_sub_script_baseline(void* self, double baseline);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
///
/// @param self const QTextDocument*
///
double q_textdocument_sub_script_baseline(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
///
/// @param self QTextDocument*
/// @param baseline double
///
void q_textdocument_set_baseline_offset(void* self, double baseline);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
///
/// @param self const QTextDocument*
///
double q_textdocument_baseline_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_page_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_modified(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#print)
///
/// @param self const QTextDocument*
/// @param printer QPagedPaintDevice*
///
void q_textdocument_print(const void* self, void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#resource)
///
/// @param self const QTextDocument*
/// @param type int
/// @param name QUrl*
///
QVariant* q_textdocument_resource(const void* self, int type, const void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#addResource)
///
/// @param self QTextDocument*
/// @param type int
/// @param name QUrl*
/// @param resource QVariant*
///
void q_textdocument_add_resource(void* self, int type, const void* name, const void* resource);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setResourceProvider)
///
/// @param self QTextDocument*
/// @param provider QVariant* func(QUrl* param1)
///
void q_textdocument_set_resource_provider(void* self, QVariant* (*provider)(const void* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultResourceProvider)
///
/// @param provider QVariant* func(QUrl* param1)
///
void q_textdocument_set_default_resource_provider(QVariant* (*provider)(const void* funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
///
/// @param self const QTextDocument*
///
/// @return libqt_list of QTextFormat*
///
libqt_list q_textdocument_all_formats(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#markContentsDirty)
///
/// @param self QTextDocument*
/// @param from int
/// @param length int
///
void q_textdocument_mark_contents_dirty(void* self, int from, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
///
/// @param self QTextDocument*
/// @param b bool
///
void q_textdocument_set_use_design_metrics(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
///
/// @param self const QTextDocument*
///
bool q_textdocument_use_design_metrics(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
///
/// @param self QTextDocument*
/// @param b bool
///
void q_textdocument_set_layout_enabled(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_layout_enabled(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// @param self QTextDocument*
/// @param painter QPainter*
///
void q_textdocument_draw_contents(void* self, void* painter);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
///
/// @param self QTextDocument*
/// @param width double
///
void q_textdocument_set_text_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
///
/// @param self const QTextDocument*
///
double q_textdocument_text_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
///
/// @param self const QTextDocument*
///
double q_textdocument_ideal_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
///
/// @param self const QTextDocument*
///
double q_textdocument_indent_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
///
/// @param self QTextDocument*
/// @param width double
///
void q_textdocument_set_indent_width(void* self, double width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
///
/// @param self const QTextDocument*
///
double q_textdocument_document_margin(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
///
/// @param self QTextDocument*
/// @param margin double
///
void q_textdocument_set_document_margin(void* self, double margin);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
///
/// @param self QTextDocument*
///
void q_textdocument_adjust_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#size)
///
/// @param self const QTextDocument*
///
QSizeF* q_textdocument_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_block_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_line_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_character_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
///
/// @param self QTextDocument*
/// @param sheet const char*
///
void q_textdocument_set_default_style_sheet(void* self, const char* sheet);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
///
const char* q_textdocument_default_style_sheet(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// @param self QTextDocument*
/// @param cursor QTextCursor*
///
void q_textdocument_undo(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// @param self QTextDocument*
/// @param cursor QTextCursor*
///
void q_textdocument_redo(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// @param self QTextDocument*
///
void q_textdocument_clear_undo_redo_stacks(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_maximum_block_count(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
///
/// @param self QTextDocument*
/// @param maximum int
///
void q_textdocument_set_maximum_block_count(void* self, int maximum);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
///
/// @param self const QTextDocument*
///
QTextOption* q_textdocument_default_text_option(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
///
/// @param self QTextDocument*
/// @param option QTextOption*
///
void q_textdocument_set_default_text_option(void* self, const void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
///
/// @param self const QTextDocument*
///
QUrl* q_textdocument_base_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
///
/// @param self QTextDocument*
/// @param url QUrl*
///
void q_textdocument_set_base_url(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#defaultCursorMoveStyle)
///
/// @param self const QTextDocument*
///
/// @return enum Qt__CursorMoveStyle
///
int32_t q_textdocument_default_cursor_move_style(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
///
/// @param self QTextDocument*
/// @param style enum Qt__CursorMoveStyle
///
void q_textdocument_set_default_cursor_move_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
///
/// @param self QTextDocument*
/// @param from int
/// @param charsRemoved int
/// @param charsAdded int
///
void q_textdocument_contents_change(void* self, int from, int charsRemoved, int charsAdded);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, int from, int charsRemoved, int charsAdded)
///
void q_textdocument_on_contents_change(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
///
/// @param self QTextDocument*
///
void q_textdocument_contents_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
///
void q_textdocument_on_contents_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
///
/// @param self QTextDocument*
/// @param param1 bool
///
void q_textdocument_undo_available(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, bool param1)
///
void q_textdocument_on_undo_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
///
/// @param self QTextDocument*
/// @param param1 bool
///
void q_textdocument_redo_available(void* self, bool param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, bool param1)
///
void q_textdocument_on_redo_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
///
/// @param self QTextDocument*
///
void q_textdocument_undo_command_added(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
///
void q_textdocument_on_undo_command_added(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
///
/// @param self QTextDocument*
/// @param m bool
///
void q_textdocument_modification_changed(void* self, bool m);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, bool m)
///
void q_textdocument_on_modification_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
///
/// @param self QTextDocument*
/// @param cursor QTextCursor*
///
void q_textdocument_cursor_position_changed(void* self, const void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QTextCursor* cursor)
///
void q_textdocument_on_cursor_position_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
///
/// @param self QTextDocument*
/// @param newBlockCount int
///
void q_textdocument_block_count_changed(void* self, int newBlockCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, int newBlockCount)
///
void q_textdocument_on_block_count_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
///
/// @param self QTextDocument*
/// @param url QUrl*
///
void q_textdocument_base_url_changed(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QUrl* url)
///
void q_textdocument_on_base_url_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
///
/// @param self QTextDocument*
///
void q_textdocument_document_layout_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
///
void q_textdocument_on_document_layout_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// @param self QTextDocument*
///
void q_textdocument_undo2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// @param self QTextDocument*
///
void q_textdocument_redo2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
///
/// @param self QTextDocument*
/// @param param1 QAbstractUndoItem*
///
void q_textdocument_append_undo_item(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// @param self QTextDocument*
///
void q_textdocument_set_modified(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// @param self QTextDocument*
/// @param f QTextFormat*
///
QTextObject* q_textdocument_create_object(void* self, const void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback QTextObject* func(QTextDocument* self, QTextFormat* f)
///
void q_textdocument_on_create_object(void* self, QTextObject* (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// Base class method implementation
///
/// @param self QTextDocument*
/// @param f QTextFormat*
///
QTextObject* q_textdocument_super_create_object(void* self, const void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// @param self QTextDocument*
/// @param type int
/// @param name QUrl*
///
QVariant* q_textdocument_load_resource(void* self, int type, const void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// Allows for overriding the related default method
///
/// @param self QTextDocument*
/// @param callback QVariant* func(QTextDocument* self, int type, QUrl* name)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_textdocument_on_load_resource(void* self, QVariant* (*callback)(void*, int, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// Base class method implementation
///
/// @param self QTextDocument*
/// @param type int
/// @param name QUrl*
///
QVariant* q_textdocument_super_load_resource(void* self, int type, const void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_textdocument_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_textdocument_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// @param self const QTextDocument*
/// @param parent QObject*
///
QTextDocument* q_textdocument_clone1(const void* self, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
const char* q_textdocument_to_markdown1(const void* self, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// @param self QTextDocument*
/// @param markdown const char*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
void q_textdocument_set_markdown2(void* self, const char* markdown, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param subString const char*
/// @param from int
///
QTextCursor* q_textdocument_find22(const void* self, const char* subString, int from);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param subString const char*
/// @param from int
/// @param options flag of enum QTextDocument__FindFlag
///
QTextCursor* q_textdocument_find32(const void* self, const char* subString, int from, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param subString const char*
/// @param cursor QTextCursor*
/// @param options flag of enum QTextDocument__FindFlag
///
QTextCursor* q_textdocument_find33(const void* self, const char* subString, const void* cursor, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param expr QRegularExpression*
/// @param from int
///
QTextCursor* q_textdocument_find23(const void* self, const void* expr, int from);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param expr QRegularExpression*
/// @param from int
/// @param options flag of enum QTextDocument__FindFlag
///
QTextCursor* q_textdocument_find34(const void* self, const void* expr, int from, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// @param self const QTextDocument*
/// @param expr QRegularExpression*
/// @param cursor QTextCursor*
/// @param options flag of enum QTextDocument__FindFlag
///
QTextCursor* q_textdocument_find35(const void* self, const void* expr, const void* cursor, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// @param self QTextDocument*
/// @param painter QPainter*
/// @param rect QRectF*
///
void q_textdocument_draw_contents2(void* self, void* painter, const void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// @param self QTextDocument*
/// @param historyToClear enum QTextDocument__Stacks
///
void q_textdocument_clear_undo_redo_stacks1(void* self, int32_t historyToClear);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// @param self QTextDocument*
/// @param m bool
///
void q_textdocument_set_modified1(void* self, bool m);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocument*
///
const char* q_textdocument_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextDocument*
/// @param name const char*
///
void q_textdocument_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTextDocument*
///
bool q_textdocument_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTextDocument*
///
bool q_textdocument_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextDocument*
/// @param b bool
///
bool q_textdocument_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTextDocument*
///
QThread* q_textdocument_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextDocument*
/// @param thread QThread*
///
bool q_textdocument_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextDocument*
/// @param interval int
///
int32_t q_textdocument_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextDocument*
/// @param time int64_t of nanoseconds
///
int32_t q_textdocument_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextDocument*
/// @param id int
///
void q_textdocument_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextDocument*
/// @param id enum Qt__TimerId
///
void q_textdocument_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTextDocument*
///
/// @return libqt_list of QObject*
///
libqt_list q_textdocument_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextDocument*
/// @param parent QObject*
///
void q_textdocument_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextDocument*
/// @param filterObj QObject*
///
void q_textdocument_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextDocument*
/// @param obj QObject*
///
void q_textdocument_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_textdocument_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_textdocument_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_textdocument_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textdocument_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_textdocument_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextDocument*
///
bool q_textdocument_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextDocument*
/// @param receiver QObject*
///
bool q_textdocument_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_textdocument_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTextDocument*
///
void q_textdocument_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTextDocument*
///
void q_textdocument_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextDocument*
/// @param name const char*
/// @param value QVariant*
///
bool q_textdocument_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTextDocument*
/// @param name const char*
///
QVariant* q_textdocument_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTextDocument*
///
const char** q_textdocument_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextDocument*
///
QBindingStorage* q_textdocument_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTextDocument*
///
const QBindingStorage* q_textdocument_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
///
void q_textdocument_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self)
///
void q_textdocument_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTextDocument*
///
QObject* q_textdocument_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTextDocument*
/// @param classname const char*
///
bool q_textdocument_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextDocument*
///
void q_textdocument_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextDocument*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_textdocument_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextDocument*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_textdocument_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_textdocument_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_textdocument_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTextDocument*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textdocument_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextDocument*
/// @param signal const char*
///
bool q_textdocument_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextDocument*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_textdocument_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextDocument*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textdocument_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTextDocument*
/// @param receiver QObject*
/// @param member const char*
///
bool q_textdocument_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
/// @param param1 QObject*
///
void q_textdocument_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QObject* param1)
///
void q_textdocument_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
///
bool q_textdocument_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
///
bool q_textdocument_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback bool func(QTextDocument* self, QEvent* event)
///
void q_textdocument_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textdocument_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_textdocument_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback bool func(QTextDocument* self, QObject* watched, QEvent* event)
///
void q_textdocument_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QTimerEvent*
///
void q_textdocument_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QTimerEvent*
///
void q_textdocument_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QTimerEvent* event)
///
void q_textdocument_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QChildEvent*
///
void q_textdocument_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QChildEvent*
///
void q_textdocument_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QChildEvent* event)
///
void q_textdocument_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
///
void q_textdocument_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param event QEvent*
///
void q_textdocument_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QEvent* event)
///
void q_textdocument_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
///
void q_textdocument_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
///
void q_textdocument_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QMetaMethod* signal)
///
void q_textdocument_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
///
void q_textdocument_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextDocument*
/// @param signal QMetaMethod*
///
void q_textdocument_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, QMetaMethod* signal)
///
void q_textdocument_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextDocument*
///
QObject* q_textdocument_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextDocument*
///
QObject* q_textdocument_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback QObject* func(QTextDocument* self)
///
void q_textdocument_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextDocument*
///
int32_t q_textdocument_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback int32_t func(QTextDocument* self)
///
void q_textdocument_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextDocument*
/// @param signal const char*
///
int32_t q_textdocument_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextDocument*
/// @param signal const char*
///
int32_t q_textdocument_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback int32_t func(QTextDocument* self, const char* signal)
///
void q_textdocument_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTextDocument*
/// @param signal QMetaMethod*
///
bool q_textdocument_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTextDocument*
/// @param signal QMetaMethod*
///
bool q_textdocument_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextDocument*
/// @param callback bool func(QTextDocument* self, QMetaMethod* signal)
///
void q_textdocument_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextDocument*
/// @param callback void func(QTextDocument* self, const char* objectName)
///
void q_textdocument_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#dtor.QTextDocument)
///
/// Delete this object from C++ memory.
///
/// @param self QTextDocument*
///
void q_textdocument_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#public-types)

typedef enum {
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTTITLE = 0,
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTURL = 1,
    QTEXTDOCUMENT_METAINFORMATION_CSSMEDIA = 2,
    QTEXTDOCUMENT_METAINFORMATION_FRONTMATTER = 3
} QTextDocument__MetaInformation;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#public-types)

typedef enum {
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNNOHTML = 96,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTCOMMONMARK = 0,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTGITHUB = 1068812
} QTextDocument__MarkdownFeature;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#public-types)

typedef enum {
    QTEXTDOCUMENT_FINDFLAG_FINDBACKWARD = 1,
    QTEXTDOCUMENT_FINDFLAG_FINDCASESENSITIVELY = 2,
    QTEXTDOCUMENT_FINDFLAG_FINDWHOLEWORDS = 4
} QTextDocument__FindFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#public-types)

typedef enum {
    QTEXTDOCUMENT_RESOURCETYPE_UNKNOWNRESOURCE = 0,
    QTEXTDOCUMENT_RESOURCETYPE_HTMLRESOURCE = 1,
    QTEXTDOCUMENT_RESOURCETYPE_IMAGERESOURCE = 2,
    QTEXTDOCUMENT_RESOURCETYPE_STYLESHEETRESOURCE = 3,
    QTEXTDOCUMENT_RESOURCETYPE_MARKDOWNRESOURCE = 4,
    QTEXTDOCUMENT_RESOURCETYPE_USERRESOURCE = 100
} QTextDocument__ResourceType;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocument.html#public-types)

typedef enum {
    QTEXTDOCUMENT_STACKS_UNDOSTACK = 1,
    QTEXTDOCUMENT_STACKS_REDOSTACK = 2,
    QTEXTDOCUMENT_STACKS_UNDOANDREDOSTACKS = 3
} QTextDocument__Stacks;

#endif
