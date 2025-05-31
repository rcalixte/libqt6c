#pragma once
#ifndef SRCQT6C_LIBQTEXTDOCUMENT_H
#define SRCQT6C_LIBQTEXTDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstracttextdocumentlayout.h"
#include "libqchar.h"
#include "libqevent.h"
#include "libqfont.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpagedpaintdevice.h"
#include "libqpainter.h"
#include "libqrect.h"
#include "libqregularexpression.h"
#include "libqsize.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextcursor.h"
#include "libqtextformat.h"
#include "libqtextoption.h"
#include "libqurl.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qabstractundoitem.html

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#undo)
///
/// ``` QAbstractUndoItem* self ```
void q_abstractundoitem_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#redo)
///
/// ``` QAbstractUndoItem* self ```
void q_abstractundoitem_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#operator=)
///
/// ``` QAbstractUndoItem* self, QAbstractUndoItem* param1 ```
void q_abstractundoitem_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractundoitem.html#dtor.QAbstractUndoItem)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractUndoItem* self ```
void q_abstractundoitem_delete(void* self);

/// https://doc.qt.io/qt-6/qtextdocument.html

/// q_textdocument_new constructs a new QTextDocument object.
///
///
QTextDocument* q_textdocument_new();

/// q_textdocument_new2 constructs a new QTextDocument object.
///
/// ``` const char* text ```
QTextDocument* q_textdocument_new2(const char* text);

/// q_textdocument_new3 constructs a new QTextDocument object.
///
/// ``` QObject* parent ```
QTextDocument* q_textdocument_new3(void* parent);

/// q_textdocument_new4 constructs a new QTextDocument object.
///
/// ``` const char* text, QObject* parent ```
QTextDocument* q_textdocument_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextDocument* self ```
const QMetaObject* q_textdocument_meta_object(void* self);

/// ``` QTextDocument* self, const char* param1 ```
void* q_textdocument_metacast(void* self, const char* param1);

/// ``` QTextDocument* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textdocument_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, int32_t (*slot)(QTextDocument*, enum QMetaObject__Call, int, void*) ```
void q_textdocument_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTextDocument* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textdocument_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textdocument_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// ``` QTextDocument* self ```
QTextDocument* q_textdocument_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isEmpty)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// ``` QTextDocument* self ```
void q_textdocument_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, void (*slot)() ```
void q_textdocument_on_clear(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clear)
///
/// Base class method implementation
///
/// ``` QTextDocument* self ```
void q_textdocument_qbase_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUndoRedoEnabled)
///
/// ``` QTextDocument* self, bool enable ```
void q_textdocument_set_undo_redo_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoRedoEnabled)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_undo_redo_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isUndoAvailable)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_undo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isRedoAvailable)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_redo_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableUndoSteps)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_available_undo_steps(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#availableRedoSteps)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_available_redo_steps(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#revision)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_revision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentLayout)
///
/// ``` QTextDocument* self, QAbstractTextDocumentLayout* layout ```
void q_textdocument_set_document_layout(void* self, void* layout);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayout)
///
/// ``` QTextDocument* self ```
QAbstractTextDocumentLayout* q_textdocument_document_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMetaInformation)
///
/// ``` QTextDocument* self, enum QTextDocument__MetaInformation info, const char* param2 ```
void q_textdocument_set_meta_information(void* self, int64_t info, const char* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#metaInformation)
///
/// ``` QTextDocument* self, enum QTextDocument__MetaInformation info ```
const char* q_textdocument_meta_information(void* self, int64_t info);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toHtml)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setHtml)
///
/// ``` QTextDocument* self, const char* html ```
void q_textdocument_set_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_markdown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// ``` QTextDocument* self, const char* markdown ```
void q_textdocument_set_markdown(void* self, const char* markdown);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toRawText)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_raw_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toPlainText)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_to_plain_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPlainText)
///
/// ``` QTextDocument* self, const char* text ```
void q_textdocument_set_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterAt)
///
/// ``` QTextDocument* self, int pos ```
QChar* q_textdocument_character_at(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString ```
QTextCursor* q_textdocument_find(void* self, const char* subString);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, QTextCursor* cursor ```
QTextCursor* q_textdocument_find2(void* self, const char* subString, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr ```
QTextCursor* q_textdocument_find_with_expr(void* self, void* expr);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor ```
QTextCursor* q_textdocument_find3(void* self, void* expr, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#frameAt)
///
/// ``` QTextDocument* self, int pos ```
QTextFrame* q_textdocument_frame_at(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#rootFrame)
///
/// ``` QTextDocument* self ```
QTextFrame* q_textdocument_root_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#object)
///
/// ``` QTextDocument* self, int objectIndex ```
QTextObject* q_textdocument_object(void* self, int objectIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#objectForFormat)
///
/// ``` QTextDocument* self, QTextFormat* param1 ```
QTextObject* q_textdocument_object_for_format(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlock)
///
/// ``` QTextDocument* self, int pos ```
QTextBlock* q_textdocument_find_block(void* self, int pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByNumber)
///
/// ``` QTextDocument* self, int blockNumber ```
QTextBlock* q_textdocument_find_block_by_number(void* self, int blockNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#findBlockByLineNumber)
///
/// ``` QTextDocument* self, int blockNumber ```
QTextBlock* q_textdocument_find_block_by_line_number(void* self, int blockNumber);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#begin)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_begin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#end)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_end(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#firstBlock)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_first_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lastBlock)
///
/// ``` QTextDocument* self ```
QTextBlock* q_textdocument_last_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setPageSize)
///
/// ``` QTextDocument* self, QSizeF* size ```
void q_textdocument_set_page_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageSize)
///
/// ``` QTextDocument* self ```
QSizeF* q_textdocument_page_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultFont)
///
/// ``` QTextDocument* self, QFont* font ```
void q_textdocument_set_default_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultFont)
///
/// ``` QTextDocument* self ```
QFont* q_textdocument_default_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSuperScriptBaseline)
///
/// ``` QTextDocument* self, double baseline ```
void q_textdocument_set_super_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#superScriptBaseline)
///
/// ``` QTextDocument* self ```
double q_textdocument_super_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setSubScriptBaseline)
///
/// ``` QTextDocument* self, double baseline ```
void q_textdocument_set_sub_script_baseline(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#subScriptBaseline)
///
/// ``` QTextDocument* self ```
double q_textdocument_sub_script_baseline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaselineOffset)
///
/// ``` QTextDocument* self, double baseline ```
void q_textdocument_set_baseline_offset(void* self, double baseline);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baselineOffset)
///
/// ``` QTextDocument* self ```
double q_textdocument_baseline_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#pageCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isModified)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#print)
///
/// ``` QTextDocument* self, QPagedPaintDevice* printer ```
void q_textdocument_print(void* self, void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#resource)
///
/// ``` QTextDocument* self, int typeVal, QUrl* name ```
QVariant* q_textdocument_resource(void* self, int typeVal, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#addResource)
///
/// ``` QTextDocument* self, int typeVal, QUrl* name, QVariant* resource ```
void q_textdocument_add_resource(void* self, int typeVal, void* name, void* resource);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#allFormats)
///
/// ``` QTextDocument* self ```
libqt_list /* of QTextFormat* */ q_textdocument_all_formats(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#markContentsDirty)
///
/// ``` QTextDocument* self, int from, int length ```
void q_textdocument_mark_contents_dirty(void* self, int from, int length);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setUseDesignMetrics)
///
/// ``` QTextDocument* self, bool b ```
void q_textdocument_set_use_design_metrics(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#useDesignMetrics)
///
/// ``` QTextDocument* self ```
bool q_textdocument_use_design_metrics(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setLayoutEnabled)
///
/// ``` QTextDocument* self, bool b ```
void q_textdocument_set_layout_enabled(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#isLayoutEnabled)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_layout_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// ``` QTextDocument* self, QPainter* painter ```
void q_textdocument_draw_contents(void* self, void* painter);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setTextWidth)
///
/// ``` QTextDocument* self, double width ```
void q_textdocument_set_text_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#textWidth)
///
/// ``` QTextDocument* self ```
double q_textdocument_text_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#idealWidth)
///
/// ``` QTextDocument* self ```
double q_textdocument_ideal_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#indentWidth)
///
/// ``` QTextDocument* self ```
double q_textdocument_indent_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setIndentWidth)
///
/// ``` QTextDocument* self, double width ```
void q_textdocument_set_indent_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentMargin)
///
/// ``` QTextDocument* self ```
double q_textdocument_document_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDocumentMargin)
///
/// ``` QTextDocument* self, double margin ```
void q_textdocument_set_document_margin(void* self, double margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#adjustSize)
///
/// ``` QTextDocument* self ```
void q_textdocument_adjust_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#size)
///
/// ``` QTextDocument* self ```
QSizeF* q_textdocument_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_block_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#lineCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_line_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#characterCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_character_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultStyleSheet)
///
/// ``` QTextDocument* self, const char* sheet ```
void q_textdocument_set_default_style_sheet(void* self, const char* sheet);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultStyleSheet)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_default_style_sheet(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// ``` QTextDocument* self, QTextCursor* cursor ```
void q_textdocument_undo(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// ``` QTextDocument* self, QTextCursor* cursor ```
void q_textdocument_redo(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// ``` QTextDocument* self ```
void q_textdocument_clear_undo_redo_stacks(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#maximumBlockCount)
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_maximum_block_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMaximumBlockCount)
///
/// ``` QTextDocument* self, int maximum ```
void q_textdocument_set_maximum_block_count(void* self, int maximum);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultTextOption)
///
/// ``` QTextDocument* self ```
QTextOption* q_textdocument_default_text_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultTextOption)
///
/// ``` QTextDocument* self, QTextOption* option ```
void q_textdocument_set_default_text_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrl)
///
/// ``` QTextDocument* self ```
QUrl* q_textdocument_base_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setBaseUrl)
///
/// ``` QTextDocument* self, QUrl* url ```
void q_textdocument_set_base_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#defaultCursorMoveStyle)
///
/// ``` QTextDocument* self ```
int64_t q_textdocument_default_cursor_move_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setDefaultCursorMoveStyle)
///
/// ``` QTextDocument* self, enum Qt__CursorMoveStyle style ```
void q_textdocument_set_default_cursor_move_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
///
/// ``` QTextDocument* self, int from, int charsRemoved, int charsAdded ```
void q_textdocument_contents_change(void* self, int from, int charsRemoved, int charsAdded);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChange)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, int, int, int) ```
void q_textdocument_on_contents_change(void* self, void (*slot)(void*, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
///
/// ``` QTextDocument* self ```
void q_textdocument_contents_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#contentsChanged)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*) ```
void q_textdocument_on_contents_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
///
/// ``` QTextDocument* self, bool param1 ```
void q_textdocument_undo_available(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoAvailable)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, bool) ```
void q_textdocument_on_undo_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
///
/// ``` QTextDocument* self, bool param1 ```
void q_textdocument_redo_available(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redoAvailable)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, bool) ```
void q_textdocument_on_redo_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
///
/// ``` QTextDocument* self ```
void q_textdocument_undo_command_added(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undoCommandAdded)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*) ```
void q_textdocument_on_undo_command_added(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
///
/// ``` QTextDocument* self, bool m ```
void q_textdocument_modification_changed(void* self, bool m);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#modificationChanged)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, bool) ```
void q_textdocument_on_modification_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
///
/// ``` QTextDocument* self, QTextCursor* cursor ```
void q_textdocument_cursor_position_changed(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#cursorPositionChanged)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QTextCursor*) ```
void q_textdocument_on_cursor_position_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
///
/// ``` QTextDocument* self, int newBlockCount ```
void q_textdocument_block_count_changed(void* self, int newBlockCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#blockCountChanged)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, int) ```
void q_textdocument_on_block_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
///
/// ``` QTextDocument* self, QUrl* url ```
void q_textdocument_base_url_changed(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#baseUrlChanged)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QUrl*) ```
void q_textdocument_on_base_url_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
///
/// ``` QTextDocument* self ```
void q_textdocument_document_layout_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#documentLayoutChanged)
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*) ```
void q_textdocument_on_document_layout_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#undo)
///
/// ``` QTextDocument* self ```
void q_textdocument_undo2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#redo)
///
/// ``` QTextDocument* self ```
void q_textdocument_redo2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#appendUndoItem)
///
/// ``` QTextDocument* self, QAbstractUndoItem* param1 ```
void q_textdocument_append_undo_item(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// ``` QTextDocument* self ```
void q_textdocument_set_modified(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// ``` QTextDocument* self, QTextFormat* f ```
QTextObject* q_textdocument_create_object(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, QTextObject* (*slot)(QTextDocument*, QTextFormat*) ```
void q_textdocument_on_create_object(void* self, QTextObject* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#createObject)
///
/// Base class method implementation
///
/// ``` QTextDocument* self, QTextFormat* f ```
QTextObject* q_textdocument_qbase_create_object(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// ``` QTextDocument* self, int typeVal, QUrl* name ```
QVariant* q_textdocument_load_resource(void* self, int typeVal, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// Allows for overriding the related default method
///
/// ``` QTextDocument* self, QVariant* (*slot)(QTextDocument*, int, QUrl*) ```
void q_textdocument_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#loadResource)
///
/// Base class method implementation
///
/// ``` QTextDocument* self, int typeVal, QUrl* name ```
QVariant* q_textdocument_qbase_load_resource(void* self, int typeVal, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textdocument_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textdocument_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clone)
///
/// ``` QTextDocument* self, QObject* parent ```
QTextDocument* q_textdocument_clone1(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#toMarkdown)
///
/// ``` QTextDocument* self, int features ```
const char* q_textdocument_to_markdown1(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setMarkdown)
///
/// ``` QTextDocument* self, const char* markdown, int features ```
void q_textdocument_set_markdown2(void* self, const char* markdown, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, int from ```
QTextCursor* q_textdocument_find22(void* self, const char* subString, int from);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, int from, int options ```
QTextCursor* q_textdocument_find32(void* self, const char* subString, int from, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, const char* subString, QTextCursor* cursor, int options ```
QTextCursor* q_textdocument_find33(void* self, const char* subString, void* cursor, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, int from ```
QTextCursor* q_textdocument_find23(void* self, void* expr, int from);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, int from, int options ```
QTextCursor* q_textdocument_find34(void* self, void* expr, int from, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#find)
///
/// ``` QTextDocument* self, QRegularExpression* expr, QTextCursor* cursor, int options ```
QTextCursor* q_textdocument_find35(void* self, void* expr, void* cursor, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#drawContents)
///
/// ``` QTextDocument* self, QPainter* painter, QRectF* rect ```
void q_textdocument_draw_contents2(void* self, void* painter, void* rect);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#clearUndoRedoStacks)
///
/// ``` QTextDocument* self, enum QTextDocument__Stacks historyToClear ```
void q_textdocument_clear_undo_redo_stacks1(void* self, int64_t historyToClear);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#setModified)
///
/// ``` QTextDocument* self, bool m ```
void q_textdocument_set_modified1(void* self, bool m);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextDocument* self ```
const char* q_textdocument_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextDocument* self, char* name ```
void q_textdocument_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextDocument* self ```
bool q_textdocument_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextDocument* self ```
bool q_textdocument_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextDocument* self, bool b ```
bool q_textdocument_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextDocument* self ```
QThread* q_textdocument_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextDocument* self, QThread* thread ```
void q_textdocument_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextDocument* self, int interval ```
int32_t q_textdocument_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextDocument* self, int id ```
void q_textdocument_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextDocument* self ```
const libqt_list /* of QObject* */ q_textdocument_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextDocument* self, QObject* parent ```
void q_textdocument_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextDocument* self, QObject* filterObj ```
void q_textdocument_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextDocument* self, QObject* obj ```
void q_textdocument_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textdocument_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextDocument* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textdocument_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textdocument_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textdocument_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextDocument* self ```
void q_textdocument_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextDocument* self ```
void q_textdocument_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextDocument* self, const char* name, QVariant* value ```
bool q_textdocument_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextDocument* self, const char* name ```
QVariant* q_textdocument_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextDocument* self ```
const char** q_textdocument_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextDocument* self ```
QBindingStorage* q_textdocument_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextDocument* self ```
const QBindingStorage* q_textdocument_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextDocument* self ```
void q_textdocument_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextDocument* self, void (*slot)(QObject*) ```
void q_textdocument_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextDocument* self ```
QObject* q_textdocument_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextDocument* self, const char* classname ```
bool q_textdocument_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextDocument* self ```
void q_textdocument_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextDocument* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textdocument_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textdocument_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextDocument* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textdocument_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextDocument* self, QObject* param1 ```
void q_textdocument_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextDocument* self, void (*slot)(QObject*, QObject*) ```
void q_textdocument_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
bool q_textdocument_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
bool q_textdocument_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, bool (*slot)(QTextDocument*, QEvent*) ```
void q_textdocument_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QObject* watched, QEvent* event ```
bool q_textdocument_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QObject* watched, QEvent* event ```
bool q_textdocument_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, bool (*slot)(QTextDocument*, QObject*, QEvent*) ```
void q_textdocument_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QTimerEvent* event ```
void q_textdocument_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QTimerEvent* event ```
void q_textdocument_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QTimerEvent*) ```
void q_textdocument_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QChildEvent* event ```
void q_textdocument_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QChildEvent* event ```
void q_textdocument_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QChildEvent*) ```
void q_textdocument_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
void q_textdocument_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QEvent* event ```
void q_textdocument_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QEvent*) ```
void q_textdocument_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QMetaMethod*) ```
void q_textdocument_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
void q_textdocument_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, void (*slot)(QTextDocument*, QMetaMethod*) ```
void q_textdocument_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self ```
QObject* q_textdocument_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self ```
QObject* q_textdocument_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, QObject* (*slot)() ```
void q_textdocument_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self ```
int32_t q_textdocument_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, int32_t (*slot)() ```
void q_textdocument_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, const char* signal ```
int32_t q_textdocument_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, const char* signal ```
int32_t q_textdocument_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, int32_t (*slot)(QTextDocument*, const char*) ```
void q_textdocument_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
bool q_textdocument_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextDocument* self, QMetaMethod* signal ```
bool q_textdocument_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextDocument* self, bool (*slot)(QTextDocument*, QMetaMethod*) ```
void q_textdocument_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTextDocument* self, void (*slot)(QObject*, const char*) ```
void q_textdocument_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocument.html#dtor.QTextDocument)
///
/// Delete this object from C++ memory.
///
/// ``` QTextDocument* self ```
void q_textdocument_delete(void* self);

/// https://doc.qt.io/qt-6/qtextdocument.html#types

typedef enum {
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTTITLE = 0,
    QTEXTDOCUMENT_METAINFORMATION_DOCUMENTURL = 1,
    QTEXTDOCUMENT_METAINFORMATION_CSSMEDIA = 2
} QTextDocument__MetaInformation;

typedef enum {
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNNOHTML = 96,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTCOMMONMARK = 0,
    QTEXTDOCUMENT_MARKDOWNFEATURE_MARKDOWNDIALECTGITHUB = 20236
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
