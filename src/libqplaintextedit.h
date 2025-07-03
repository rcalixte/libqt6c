#pragma once
#ifndef SRCQT6C_LIBQPLAINTEXTEDIT_H
#define SRCQT6C_LIBQPLAINTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractscrollarea.h"
#include "libqabstracttextdocumentlayout.h"
#include "libqevent.h"
#include "libqframe.h"
#include "libqmargins.h"
#include "libqmenu.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqpagedpaintdevice.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregularexpression.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqtextobject.h"
#include "libqtextformat.h"
#include "libqtextcursor.h"
#include "libqtextdocument.h"
#include "libqtextlayout.h"
#include "libqurl.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qplaintextedit.html

/// q_plaintextedit_new constructs a new QPlainTextEdit object.
///
/// ``` QWidget* parent ```
QPlainTextEdit* q_plaintextedit_new(void* parent);

/// q_plaintextedit_new2 constructs a new QPlainTextEdit object.
///
///
QPlainTextEdit* q_plaintextedit_new2();

/// q_plaintextedit_new3 constructs a new QPlainTextEdit object.
///
/// ``` const char* text ```
QPlainTextEdit* q_plaintextedit_new3(const char* text);

/// q_plaintextedit_new4 constructs a new QPlainTextEdit object.
///
/// ``` const char* text, QWidget* parent ```
QPlainTextEdit* q_plaintextedit_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPlainTextEdit* self ```
const QMetaObject* q_plaintextedit_meta_object(void* self);

/// ``` QPlainTextEdit* self, const char* param1 ```
void* q_plaintextedit_metacast(void* self, const char* param1);

/// ``` QPlainTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextedit_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, enum QMetaObject__Call, int, void*) ```
void q_plaintextedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPlainTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_plaintextedit_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
///
/// ``` QPlainTextEdit* self, QTextDocument* document ```
void q_plaintextedit_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#document)
///
/// ``` QPlainTextEdit* self ```
QTextDocument* q_plaintextedit_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
///
/// ``` QPlainTextEdit* self, const char* placeholderText ```
void q_plaintextedit_set_placeholder_text(void* self, const char* placeholderText);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_placeholder_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
void q_plaintextedit_set_text_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
///
/// ``` QPlainTextEdit* self ```
QTextCursor* q_plaintextedit_text_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
///
/// ``` QPlainTextEdit* self, bool ro ```
void q_plaintextedit_set_read_only(void* self, bool ro);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
///
/// ``` QPlainTextEdit* self, int flags ```
void q_plaintextedit_set_text_interaction_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_text_interaction_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
///
/// ``` QPlainTextEdit* self, QTextCharFormat* modifier ```
void q_plaintextedit_merge_current_char_format(void* self, void* modifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
///
/// ``` QPlainTextEdit* self, QTextCharFormat* format ```
void q_plaintextedit_set_current_char_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
///
/// ``` QPlainTextEdit* self ```
QTextCharFormat* q_plaintextedit_current_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_tab_changes_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_set_tab_changes_focus(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
///
/// ``` QPlainTextEdit* self, const char* title ```
void q_plaintextedit_set_document_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_document_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_undo_redo_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_undo_redo_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
///
/// ``` QPlainTextEdit* self, int maximum ```
void q_plaintextedit_set_maximum_block_count(void* self, int maximum);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_maximum_block_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_line_wrap_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
///
/// ``` QPlainTextEdit* self, enum QPlainTextEdit__LineWrapMode mode ```
void q_plaintextedit_set_line_wrap_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_word_wrap_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
///
/// ``` QPlainTextEdit* self, enum QTextOption__WrapMode policy ```
void q_plaintextedit_set_word_wrap_mode(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
///
/// ``` QPlainTextEdit* self, bool visible ```
void q_plaintextedit_set_background_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_background_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
///
/// ``` QPlainTextEdit* self, bool enabled ```
void q_plaintextedit_set_center_on_scroll(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_center_on_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, const char* exp ```
bool q_plaintextedit_find(void* self, const char* exp);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, QRegularExpression* exp ```
bool q_plaintextedit_find_with_exp(void* self, void* exp);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_to_plain_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_ensure_cursor_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// ``` QPlainTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_plaintextedit_load_resource(void* self, int typeVal, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QVariant* (*slot)(QPlainTextEdit*, int, QUrl*) ```
void q_plaintextedit_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_plaintextedit_qbase_load_resource(void* self, int typeVal, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// ``` QPlainTextEdit* self ```
QMenu* q_plaintextedit_create_standard_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// ``` QPlainTextEdit* self, QPoint* position ```
QMenu* q_plaintextedit_create_standard_context_menu_with_position(void* self, void* position);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
///
/// ``` QPlainTextEdit* self, QPoint* pos ```
QTextCursor* q_plaintextedit_cursor_for_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
QRect* q_plaintextedit_cursor_rect(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_cursor_rect2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
///
/// ``` QPlainTextEdit* self, QPoint* pos ```
const char* q_plaintextedit_anchor_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_overwrite_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
///
/// ``` QPlainTextEdit* self, bool overwrite ```
void q_plaintextedit_set_overwrite_mode(void* self, bool overwrite);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_tab_stop_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
///
/// ``` QPlainTextEdit* self, double distance ```
void q_plaintextedit_set_tab_stop_distance(void* self, double distance);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_cursor_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
///
/// ``` QPlainTextEdit* self, int width ```
void q_plaintextedit_set_cursor_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
///
/// ``` QPlainTextEdit* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections ```
void q_plaintextedit_set_extra_selections(void* self, libqt_list selections);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
///
/// ``` QPlainTextEdit* self ```
libqt_list /* of QTextEdit__ExtraSelection* */ q_plaintextedit_extra_selections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// ``` QPlainTextEdit* self, enum QTextCursor__MoveOperation operation ```
void q_plaintextedit_move_cursor(void* self, int64_t operation);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_can_paste(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#print)
///
/// ``` QPlainTextEdit* self, QPagedPaintDevice* printer ```
void q_plaintextedit_print(void* self, void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_block_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// ``` QPlainTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_plaintextedit_input_method_query(void* self, int64_t property);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QVariant* (*slot)(QPlainTextEdit*, enum Qt__InputMethodQuery) ```
void q_plaintextedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_plaintextedit_qbase_input_method_query(void* self, int64_t property);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// ``` QPlainTextEdit* self, enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_plaintextedit_input_method_query2(void* self, int64_t query, void* argument);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
///
/// ``` QPlainTextEdit* self, const char* text ```
void q_plaintextedit_set_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_cut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_copy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_paste(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
///
/// ``` QPlainTextEdit* self, const char* text ```
void q_plaintextedit_insert_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
///
/// ``` QPlainTextEdit* self, const char* text ```
void q_plaintextedit_append_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
///
/// ``` QPlainTextEdit* self, const char* html ```
void q_plaintextedit_append_html(void* self, const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_center_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_zoom_in(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_zoom_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_text_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*) ```
void q_plaintextedit_on_text_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_undo_available(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_undo_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_redo_available(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_redo_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// ``` QPlainTextEdit* self, bool b ```
void q_plaintextedit_copy_available(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_copy_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*) ```
void q_plaintextedit_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_cursor_position_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*) ```
void q_plaintextedit_on_cursor_position_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// ``` QPlainTextEdit* self, QRect* rect, int dy ```
void q_plaintextedit_update_request(void* self, void* rect, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QRect*, int) ```
void q_plaintextedit_on_update_request(void* self, void (*slot)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// ``` QPlainTextEdit* self, int newBlockCount ```
void q_plaintextedit_block_count_changed(void* self, int newBlockCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, int) ```
void q_plaintextedit_on_block_count_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// ``` QPlainTextEdit* self, bool param1 ```
void q_plaintextedit_modification_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_modification_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// ``` QPlainTextEdit* self, QEvent* e ```
bool q_plaintextedit_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QEvent* e ```
bool q_plaintextedit_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// ``` QPlainTextEdit* self, QTimerEvent* e ```
void q_plaintextedit_timer_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QTimerEvent*) ```
void q_plaintextedit_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTimerEvent* e ```
void q_plaintextedit_qbase_timer_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_key_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QKeyEvent*) ```
void q_plaintextedit_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_qbase_key_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_key_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QKeyEvent*) ```
void q_plaintextedit_on_key_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QKeyEvent* e ```
void q_plaintextedit_qbase_key_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// ``` QPlainTextEdit* self, QResizeEvent* e ```
void q_plaintextedit_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QResizeEvent*) ```
void q_plaintextedit_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QResizeEvent* e ```
void q_plaintextedit_qbase_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// ``` QPlainTextEdit* self, QPaintEvent* e ```
void q_plaintextedit_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QPaintEvent*) ```
void q_plaintextedit_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QPaintEvent* e ```
void q_plaintextedit_qbase_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMouseEvent*) ```
void q_plaintextedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMouseEvent* e ```
void q_plaintextedit_qbase_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// ``` QPlainTextEdit* self, bool next ```
bool q_plaintextedit_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, bool next ```
bool q_plaintextedit_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// ``` QPlainTextEdit* self, QContextMenuEvent* e ```
void q_plaintextedit_context_menu_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QContextMenuEvent*) ```
void q_plaintextedit_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QContextMenuEvent* e ```
void q_plaintextedit_qbase_context_menu_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// ``` QPlainTextEdit* self, QDragEnterEvent* e ```
void q_plaintextedit_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDragEnterEvent*) ```
void q_plaintextedit_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDragEnterEvent* e ```
void q_plaintextedit_qbase_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// ``` QPlainTextEdit* self, QDragLeaveEvent* e ```
void q_plaintextedit_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDragLeaveEvent*) ```
void q_plaintextedit_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDragLeaveEvent* e ```
void q_plaintextedit_qbase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// ``` QPlainTextEdit* self, QDragMoveEvent* e ```
void q_plaintextedit_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDragMoveEvent*) ```
void q_plaintextedit_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDragMoveEvent* e ```
void q_plaintextedit_qbase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// ``` QPlainTextEdit* self, QDropEvent* e ```
void q_plaintextedit_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QDropEvent*) ```
void q_plaintextedit_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QDropEvent* e ```
void q_plaintextedit_qbase_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_focus_in_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QFocusEvent*) ```
void q_plaintextedit_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_qbase_focus_in_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_focus_out_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QFocusEvent*) ```
void q_plaintextedit_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QFocusEvent* e ```
void q_plaintextedit_qbase_focus_out_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// ``` QPlainTextEdit* self, QShowEvent* param1 ```
void q_plaintextedit_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QShowEvent*) ```
void q_plaintextedit_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QShowEvent* param1 ```
void q_plaintextedit_qbase_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// ``` QPlainTextEdit* self, QEvent* e ```
void q_plaintextedit_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QEvent* e ```
void q_plaintextedit_qbase_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// ``` QPlainTextEdit* self, QWheelEvent* e ```
void q_plaintextedit_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QWheelEvent*) ```
void q_plaintextedit_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QWheelEvent* e ```
void q_plaintextedit_qbase_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// ``` QPlainTextEdit* self ```
QMimeData* q_plaintextedit_create_mime_data_from_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QMimeData* (*slot)() ```
void q_plaintextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QMimeData* q_plaintextedit_qbase_create_mime_data_from_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
bool q_plaintextedit_can_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QMimeData*) ```
void q_plaintextedit_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
bool q_plaintextedit_qbase_can_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
void q_plaintextedit_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMimeData*) ```
void q_plaintextedit_on_insert_from_mime_data(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QMimeData* source ```
void q_plaintextedit_qbase_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// ``` QPlainTextEdit* self, QInputMethodEvent* param1 ```
void q_plaintextedit_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QInputMethodEvent*) ```
void q_plaintextedit_on_input_method_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QInputMethodEvent* param1 ```
void q_plaintextedit_qbase_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// ``` QPlainTextEdit* self, int dx, int dy ```
void q_plaintextedit_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, int, int) ```
void q_plaintextedit_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, int dx, int dy ```
void q_plaintextedit_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
void q_plaintextedit_do_set_text_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QTextCursor*) ```
void q_plaintextedit_on_do_set_text_cursor(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTextCursor* cursor ```
void q_plaintextedit_qbase_do_set_text_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// ``` QPlainTextEdit* self ```
QTextBlock* q_plaintextedit_first_visible_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QTextBlock* (*slot)() ```
void q_plaintextedit_on_first_visible_block(void* self, QTextBlock* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QTextBlock* q_plaintextedit_qbase_first_visible_block(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// ``` QPlainTextEdit* self ```
QPointF* q_plaintextedit_content_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QPointF* (*slot)() ```
void q_plaintextedit_on_content_offset(void* self, QPointF* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QPointF* q_plaintextedit_qbase_content_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_block_bounding_rect(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QRectF* (*slot)(QPlainTextEdit*, QTextBlock*) ```
void q_plaintextedit_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_qbase_block_bounding_rect(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_block_bounding_geometry(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QRectF* (*slot)(QPlainTextEdit*, QTextBlock*) ```
void q_plaintextedit_on_block_bounding_geometry(void* self, QRectF* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, QTextBlock* block ```
QRectF* q_plaintextedit_qbase_block_bounding_geometry(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// ``` QPlainTextEdit* self ```
QAbstractTextDocumentLayout__PaintContext* q_plaintextedit_get_paint_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, QAbstractTextDocumentLayout__PaintContext* (*slot)() ```
void q_plaintextedit_on_get_paint_context(void* self, QAbstractTextDocumentLayout__PaintContext* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self ```
QAbstractTextDocumentLayout__PaintContext* q_plaintextedit_qbase_get_paint_context(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// ``` QPlainTextEdit* self, float range ```
void q_plaintextedit_zoom_in_f(void* self, float range);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, float) ```
void q_plaintextedit_on_zoom_in_f(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Base class method implementation
///
/// ``` QPlainTextEdit* self, float range ```
void q_plaintextedit_qbase_zoom_in_f(void* self, float range);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_plaintextedit_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_plaintextedit_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, const char* exp, int options ```
bool q_plaintextedit_find2(void* self, const char* exp, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// ``` QPlainTextEdit* self, QRegularExpression* exp, int options ```
bool q_plaintextedit_find22(void* self, void* exp, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// ``` QPlainTextEdit* self, enum QTextCursor__MoveOperation operation, enum QTextCursor__MoveMode mode ```
void q_plaintextedit_move_cursor2(void* self, int64_t operation, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// ``` QPlainTextEdit* self, int range ```
void q_plaintextedit_zoom_in1(void* self, int range);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// ``` QPlainTextEdit* self, int range ```
void q_plaintextedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_plaintextedit_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QPlainTextEdit* self ```
QScrollBar* q_plaintextedit_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QPlainTextEdit* self, QScrollBar* scrollbar ```
void q_plaintextedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_plaintextedit_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QPlainTextEdit* self ```
QScrollBar* q_plaintextedit_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QPlainTextEdit* self, QScrollBar* scrollbar ```
void q_plaintextedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QPlainTextEdit* self, QWidget* widget ```
void q_plaintextedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QPlainTextEdit* self, QWidget* widget, int alignment ```
void q_plaintextedit_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QPlainTextEdit* self, int alignment ```
libqt_list /* of QWidget* */ q_plaintextedit_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QPlainTextEdit* self, QWidget* widget ```
void q_plaintextedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QPlainTextEdit* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_plaintextedit_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QPlainTextEdit* self, int frameStyle ```
void q_plaintextedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QPlainTextEdit* self, enum QFrame__Shape frameShape ```
void q_plaintextedit_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QPlainTextEdit* self, enum QFrame__Shadow frameShadow ```
void q_plaintextedit_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QPlainTextEdit* self, int lineWidth ```
void q_plaintextedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QPlainTextEdit* self, int midLineWidth ```
void q_plaintextedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QPlainTextEdit* self, QRect* frameRect ```
void q_plaintextedit_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QPlainTextEdit* self ```
uintptr_t q_plaintextedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QPlainTextEdit* self ```
uintptr_t q_plaintextedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QPlainTextEdit* self ```
uintptr_t q_plaintextedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QPlainTextEdit* self ```
QStyle* q_plaintextedit_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QPlainTextEdit* self, QStyle* style ```
void q_plaintextedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QPlainTextEdit* self, enum Qt__WindowModality windowModality ```
void q_plaintextedit_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1 ```
bool q_plaintextedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QPlainTextEdit* self, bool enabled ```
void q_plaintextedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QPlainTextEdit* self, bool disabled ```
void q_plaintextedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QPlainTextEdit* self, bool windowModified ```
void q_plaintextedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QPlainTextEdit* self ```
const QRect* q_plaintextedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QPlainTextEdit* self ```
QPoint* q_plaintextedit_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QPlainTextEdit* self ```
QRegion* q_plaintextedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPlainTextEdit* self, QSize* minimumSize ```
void q_plaintextedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QPlainTextEdit* self, int minw, int minh ```
void q_plaintextedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPlainTextEdit* self, QSize* maximumSize ```
void q_plaintextedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QPlainTextEdit* self, int maxw, int maxh ```
void q_plaintextedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QPlainTextEdit* self, int minw ```
void q_plaintextedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QPlainTextEdit* self, int minh ```
void q_plaintextedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QPlainTextEdit* self, int maxw ```
void q_plaintextedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QPlainTextEdit* self, int maxh ```
void q_plaintextedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPlainTextEdit* self, QSize* sizeIncrement ```
void q_plaintextedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QPlainTextEdit* self, int w, int h ```
void q_plaintextedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPlainTextEdit* self, QSize* baseSize ```
void q_plaintextedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QPlainTextEdit* self, int basew, int baseh ```
void q_plaintextedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPlainTextEdit* self, QSize* fixedSize ```
void q_plaintextedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QPlainTextEdit* self, int w, int h ```
void q_plaintextedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QPlainTextEdit* self, int w ```
void q_plaintextedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QPlainTextEdit* self, int h ```
void q_plaintextedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPlainTextEdit* self, QPointF* param1 ```
QPointF* q_plaintextedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
QPoint* q_plaintextedit_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_plaintextedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_plaintextedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_plaintextedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QPlainTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_plaintextedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QPlainTextEdit* self ```
const QPalette* q_plaintextedit_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QPlainTextEdit* self, QPalette* palette ```
void q_plaintextedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QPlainTextEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_plaintextedit_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QPlainTextEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_plaintextedit_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QPlainTextEdit* self ```
const QFont* q_plaintextedit_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QPlainTextEdit* self, QFont* font ```
void q_plaintextedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QPlainTextEdit* self ```
QFontMetrics* q_plaintextedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QPlainTextEdit* self ```
QFontInfo* q_plaintextedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QPlainTextEdit* self ```
QCursor* q_plaintextedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QPlainTextEdit* self, QCursor* cursor ```
void q_plaintextedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPlainTextEdit* self, QBitmap* mask ```
void q_plaintextedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QPlainTextEdit* self, QRegion* mask ```
void q_plaintextedit_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QPlainTextEdit* self ```
QRegion* q_plaintextedit_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target ```
void q_plaintextedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter ```
void q_plaintextedit_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPlainTextEdit* self ```
QPixmap* q_plaintextedit_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QPlainTextEdit* self ```
QGraphicsEffect* q_plaintextedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QPlainTextEdit* self, QGraphicsEffect* effect ```
void q_plaintextedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPlainTextEdit* self, enum Qt__GestureType typeVal ```
void q_plaintextedit_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QPlainTextEdit* self, enum Qt__GestureType typeVal ```
void q_plaintextedit_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QPlainTextEdit* self, const char* windowTitle ```
void q_plaintextedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QPlainTextEdit* self, const char* styleSheet ```
void q_plaintextedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QPlainTextEdit* self, QIcon* icon ```
void q_plaintextedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QPlainTextEdit* self ```
QIcon* q_plaintextedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QPlainTextEdit* self, const char* windowIconText ```
void q_plaintextedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QPlainTextEdit* self, const char* windowRole ```
void q_plaintextedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QPlainTextEdit* self, const char* filePath ```
void q_plaintextedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QPlainTextEdit* self, double level ```
void q_plaintextedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QPlainTextEdit* self, const char* toolTip ```
void q_plaintextedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QPlainTextEdit* self, int msec ```
void q_plaintextedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QPlainTextEdit* self, const char* statusTip ```
void q_plaintextedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QPlainTextEdit* self, const char* whatsThis ```
void q_plaintextedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QPlainTextEdit* self, const char* name ```
void q_plaintextedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QPlainTextEdit* self, const char* description ```
void q_plaintextedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QPlainTextEdit* self, enum Qt__LayoutDirection direction ```
void q_plaintextedit_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QPlainTextEdit* self, QLocale* locale ```
void q_plaintextedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QPlainTextEdit* self ```
QLocale* q_plaintextedit_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QPlainTextEdit* self, enum Qt__FocusReason reason ```
void q_plaintextedit_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__FocusPolicy policy ```
void q_plaintextedit_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_plaintextedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QPlainTextEdit* self, QWidget* focusProxy ```
void q_plaintextedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QPlainTextEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_plaintextedit_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QPlainTextEdit* self, QCursor* param1 ```
void q_plaintextedit_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPlainTextEdit* self, QKeySequence* key ```
int32_t q_plaintextedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_plaintextedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_plaintextedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QPlainTextEdit* self, bool enable ```
void q_plaintextedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QPlainTextEdit* self ```
QGraphicsProxyWidget* q_plaintextedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self, int x, int y, int w, int h ```
void q_plaintextedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self, QRect* param1 ```
void q_plaintextedit_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QPlainTextEdit* self, QRegion* param1 ```
void q_plaintextedit_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self, int x, int y, int w, int h ```
void q_plaintextedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self, QRect* param1 ```
void q_plaintextedit_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QPlainTextEdit* self, QRegion* param1 ```
void q_plaintextedit_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QPlainTextEdit* self, bool hidden ```
void q_plaintextedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QPlainTextEdit* self, QWidget* param1 ```
void q_plaintextedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPlainTextEdit* self, int x, int y ```
void q_plaintextedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QPlainTextEdit* self, QPoint* param1 ```
void q_plaintextedit_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPlainTextEdit* self, int w, int h ```
void q_plaintextedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QPlainTextEdit* self, QSize* param1 ```
void q_plaintextedit_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPlainTextEdit* self, int x, int y, int w, int h ```
void q_plaintextedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QPlainTextEdit* self, QRect* geometry ```
void q_plaintextedit_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QPlainTextEdit* self ```
char* q_plaintextedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QPlainTextEdit* self, const char* geometry ```
bool q_plaintextedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QPlainTextEdit* self, QWidget* param1 ```
bool q_plaintextedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QPlainTextEdit* self, int state ```
void q_plaintextedit_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QPlainTextEdit* self, int state ```
void q_plaintextedit_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QPlainTextEdit* self ```
QSizePolicy* q_plaintextedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPlainTextEdit* self, QSizePolicy* sizePolicy ```
void q_plaintextedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QPlainTextEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_plaintextedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QPlainTextEdit* self ```
QRegion* q_plaintextedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPlainTextEdit* self, int left, int top, int right, int bottom ```
void q_plaintextedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QPlainTextEdit* self, QMargins* margins ```
void q_plaintextedit_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QPlainTextEdit* self ```
QMargins* q_plaintextedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QPlainTextEdit* self ```
QRect* q_plaintextedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QPlainTextEdit* self ```
QLayout* q_plaintextedit_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QPlainTextEdit* self, QLayout* layout ```
void q_plaintextedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPlainTextEdit* self, QWidget* parent ```
void q_plaintextedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QPlainTextEdit* self, QWidget* parent, int f ```
void q_plaintextedit_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPlainTextEdit* self, int dx, int dy ```
void q_plaintextedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QPlainTextEdit* self, int dx, int dy, QRect* param3 ```
void q_plaintextedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QPlainTextEdit* self, bool on ```
void q_plaintextedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, QAction* action ```
void q_plaintextedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QPlainTextEdit* self, libqt_list /* of QAction* */ actions ```
void q_plaintextedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QPlainTextEdit* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_plaintextedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QPlainTextEdit* self, QAction* before, QAction* action ```
void q_plaintextedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QPlainTextEdit* self, QAction* action ```
void q_plaintextedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QPlainTextEdit* self ```
libqt_list /* of QAction* */ q_plaintextedit_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, const char* text ```
QAction* q_plaintextedit_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, QIcon* icon, const char* text ```
QAction* q_plaintextedit_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_plaintextedit_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QPlainTextEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_plaintextedit_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QPlainTextEdit* self ```
QWidget* q_plaintextedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QPlainTextEdit* self, int typeVal ```
void q_plaintextedit_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPlainTextEdit* self, enum Qt__WindowType param1 ```
void q_plaintextedit_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QPlainTextEdit* self, int typeVal ```
void q_plaintextedit_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPlainTextEdit* self, int x, int y ```
QWidget* q_plaintextedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QPlainTextEdit* self, QPoint* p ```
QWidget* q_plaintextedit_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPlainTextEdit* self, enum Qt__WidgetAttribute param1 ```
void q_plaintextedit_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QPlainTextEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_plaintextedit_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QPlainTextEdit* self, QWidget* child ```
bool q_plaintextedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QPlainTextEdit* self, bool enabled ```
void q_plaintextedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QPlainTextEdit* self ```
QBackingStore* q_plaintextedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QPlainTextEdit* self ```
QWindow* q_plaintextedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QPlainTextEdit* self ```
QScreen* q_plaintextedit_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QPlainTextEdit* self, QScreen* screen ```
void q_plaintextedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_plaintextedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPlainTextEdit* self, const char* title ```
void q_plaintextedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_plaintextedit_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPlainTextEdit* self, QIcon* icon ```
void q_plaintextedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_plaintextedit_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPlainTextEdit* self, const char* iconText ```
void q_plaintextedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_plaintextedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPlainTextEdit* self, QPoint* pos ```
void q_plaintextedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QPlainTextEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_plaintextedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QPlainTextEdit* self ```
int64_t q_plaintextedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QPlainTextEdit* self, int hints ```
void q_plaintextedit_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_plaintextedit_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_plaintextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_plaintextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_plaintextedit_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_plaintextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QPlainTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_plaintextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QPlainTextEdit* self, QRect* rectangle ```
QPixmap* q_plaintextedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QPlainTextEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_plaintextedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QPlainTextEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_plaintextedit_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QPlainTextEdit* self, int id, bool enable ```
void q_plaintextedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QPlainTextEdit* self, int id, bool enable ```
void q_plaintextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QPlainTextEdit* self, enum Qt__WindowType param1, bool on ```
void q_plaintextedit_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QPlainTextEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_plaintextedit_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_plaintextedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_plaintextedit_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPlainTextEdit* self ```
const char* q_plaintextedit_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPlainTextEdit* self, char* name ```
void q_plaintextedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPlainTextEdit* self, bool b ```
bool q_plaintextedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPlainTextEdit* self ```
QThread* q_plaintextedit_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPlainTextEdit* self, QThread* thread ```
void q_plaintextedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextEdit* self, int interval ```
int32_t q_plaintextedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPlainTextEdit* self, int id ```
void q_plaintextedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPlainTextEdit* self ```
libqt_list /* of QObject* */ q_plaintextedit_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPlainTextEdit* self, QObject* filterObj ```
void q_plaintextedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPlainTextEdit* self, QObject* obj ```
void q_plaintextedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_plaintextedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_plaintextedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_plaintextedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_plaintextedit_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPlainTextEdit* self, const char* name, QVariant* value ```
bool q_plaintextedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPlainTextEdit* self, const char* name ```
QVariant* q_plaintextedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPlainTextEdit* self ```
const char** q_plaintextedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPlainTextEdit* self ```
QBindingStorage* q_plaintextedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPlainTextEdit* self ```
const QBindingStorage* q_plaintextedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextEdit* self, void (*slot)(QObject*) ```
void q_plaintextedit_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPlainTextEdit* self ```
QObject* q_plaintextedit_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPlainTextEdit* self, const char* classname ```
bool q_plaintextedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_plaintextedit_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextEdit* self, QObject* param1 ```
void q_plaintextedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextEdit* self, void (*slot)(QObject*, QObject*) ```
void q_plaintextedit_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPlainTextEdit* self ```
double q_plaintextedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_plaintextedit_device_pixel_ratio_f_scale();

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QSize* (*slot)() ```
void q_plaintextedit_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QSize* (*slot)() ```
void q_plaintextedit_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QWidget* viewport ```
void q_plaintextedit_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QWidget* viewport ```
void q_plaintextedit_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QWidget*) ```
void q_plaintextedit_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_plaintextedit_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_plaintextedit_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QObject*, QEvent*) ```
void q_plaintextedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* param1 ```
bool q_plaintextedit_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* param1 ```
bool q_plaintextedit_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QSize* q_plaintextedit_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QSize* (*slot)() ```
void q_plaintextedit_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QStyleOptionFrame* option ```
void q_plaintextedit_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QStyleOptionFrame* option ```
void q_plaintextedit_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QStyleOptionFrame*) ```
void q_plaintextedit_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)() ```
void q_plaintextedit_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, bool visible ```
void q_plaintextedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool visible ```
void q_plaintextedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, bool) ```
void q_plaintextedit_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, int param1 ```
int32_t q_plaintextedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int param1 ```
int32_t q_plaintextedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, int) ```
void q_plaintextedit_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)() ```
void q_plaintextedit_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPaintEngine* q_plaintextedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPaintEngine* q_plaintextedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPaintEngine* (*slot)() ```
void q_plaintextedit_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEnterEvent* event ```
void q_plaintextedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEnterEvent* event ```
void q_plaintextedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEnterEvent*) ```
void q_plaintextedit_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMoveEvent* event ```
void q_plaintextedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMoveEvent* event ```
void q_plaintextedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMoveEvent*) ```
void q_plaintextedit_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QCloseEvent* event ```
void q_plaintextedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QCloseEvent* event ```
void q_plaintextedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QCloseEvent*) ```
void q_plaintextedit_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QTabletEvent* event ```
void q_plaintextedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QTabletEvent* event ```
void q_plaintextedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QTabletEvent*) ```
void q_plaintextedit_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QActionEvent* event ```
void q_plaintextedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QActionEvent* event ```
void q_plaintextedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QActionEvent*) ```
void q_plaintextedit_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QHideEvent* event ```
void q_plaintextedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QHideEvent* event ```
void q_plaintextedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QHideEvent*) ```
void q_plaintextedit_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_plaintextedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_plaintextedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, const char*, void*, intptr_t*) ```
void q_plaintextedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_plaintextedit_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_plaintextedit_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_plaintextedit_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* painter ```
void q_plaintextedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* painter ```
void q_plaintextedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QPainter*) ```
void q_plaintextedit_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QPoint* offset ```
QPaintDevice* q_plaintextedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPoint* offset ```
QPaintDevice* q_plaintextedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPaintDevice* (*slot)(QPlainTextEdit*, QPoint*) ```
void q_plaintextedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPainter* q_plaintextedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QPainter* q_plaintextedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* (*slot)() ```
void q_plaintextedit_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QChildEvent* event ```
void q_plaintextedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QChildEvent* event ```
void q_plaintextedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QChildEvent*) ```
void q_plaintextedit_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QEvent* event ```
void q_plaintextedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QEvent*) ```
void q_plaintextedit_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMetaMethod*) ```
void q_plaintextedit_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
void q_plaintextedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QMetaMethod*) ```
void q_plaintextedit_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, int left, int top, int right, int bottom ```
void q_plaintextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int left, int top, int right, int bottom ```
void q_plaintextedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, int, int, int, int) ```
void q_plaintextedit_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QMargins* q_plaintextedit_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QMargins* q_plaintextedit_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMargins* (*slot)() ```
void q_plaintextedit_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* param1 ```
void q_plaintextedit_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QPainter* param1 ```
void q_plaintextedit_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)(QPlainTextEdit*, QPainter*) ```
void q_plaintextedit_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)() ```
void q_plaintextedit_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)() ```
void q_plaintextedit_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, void (*slot)() ```
void q_plaintextedit_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)() ```
void q_plaintextedit_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
bool q_plaintextedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)() ```
void q_plaintextedit_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QObject* q_plaintextedit_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
QObject* q_plaintextedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QObject* (*slot)() ```
void q_plaintextedit_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self ```
int32_t q_plaintextedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)() ```
void q_plaintextedit_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* signal ```
int32_t q_plaintextedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, const char* signal ```
int32_t q_plaintextedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, int32_t (*slot)(QPlainTextEdit*, const char*) ```
void q_plaintextedit_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
bool q_plaintextedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextEdit* self, QMetaMethod* signal ```
bool q_plaintextedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextEdit* self, bool (*slot)(QPlainTextEdit*, QMetaMethod*) ```
void q_plaintextedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPlainTextEdit* self, void (*slot)(QObject*, const char*) ```
void q_plaintextedit_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextedit.html#dtor.QPlainTextEdit)
///
/// Delete this object from C++ memory.
///
/// ``` QPlainTextEdit* self ```
void q_plaintextedit_delete(void* self);

/// https://doc.qt.io/qt-6/qplaintextdocumentlayout.html

/// q_plaintextdocumentlayout_new constructs a new QPlainTextDocumentLayout object.
///
/// ``` QTextDocument* document ```
QPlainTextDocumentLayout* q_plaintextdocumentlayout_new(void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPlainTextDocumentLayout* self ```
const QMetaObject* q_plaintextdocumentlayout_meta_object(void* self);

/// ``` QPlainTextDocumentLayout* self, const char* param1 ```
void* q_plaintextdocumentlayout_metacast(void* self, const char* param1);

/// ``` QPlainTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextdocumentlayout_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, enum QMetaObject__Call, int, void*) ```
void q_plaintextdocumentlayout_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_plaintextdocumentlayout_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_plaintextdocumentlayout_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
///
/// ``` QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2 ```
void q_plaintextdocumentlayout_draw(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QPainter*, QAbstractTextDocumentLayout__PaintContext*) ```
void q_plaintextdocumentlayout_on_draw(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
///
/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2 ```
void q_plaintextdocumentlayout_qbase_draw(void* self, void* param1, void* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* param1, enum Qt__HitTestAccuracy param2 ```
int32_t q_plaintextdocumentlayout_hit_test(void* self, void* param1, int64_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, QPointF*, enum Qt__HitTestAccuracy) ```
void q_plaintextdocumentlayout_on_hit_test(void* self, int32_t (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
///
/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QPointF* param1, enum Qt__HitTestAccuracy param2 ```
int32_t q_plaintextdocumentlayout_qbase_hit_test(void* self, void* param1, int64_t param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)() ```
void q_plaintextdocumentlayout_on_page_count(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
///
/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_qbase_page_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
///
/// ``` QPlainTextDocumentLayout* self ```
QSizeF* q_plaintextdocumentlayout_document_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, QSizeF* (*slot)() ```
void q_plaintextdocumentlayout_on_document_size(void* self, QSizeF* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
///
/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self ```
QSizeF* q_plaintextdocumentlayout_qbase_document_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
///
/// ``` QPlainTextDocumentLayout* self, QTextFrame* param1 ```
QRectF* q_plaintextdocumentlayout_frame_bounding_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, QRectF* (*slot)(QPlainTextDocumentLayout*, QTextFrame*) ```
void q_plaintextdocumentlayout_on_frame_bounding_rect(void* self, QRectF* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
///
/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QTextFrame* param1 ```
QRectF* q_plaintextdocumentlayout_qbase_frame_bounding_rect(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_plaintextdocumentlayout_block_bounding_rect(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, QRectF* (*slot)(QPlainTextDocumentLayout*, QTextBlock*) ```
void q_plaintextdocumentlayout_on_block_bounding_rect(void* self, QRectF* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
///
/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
QRectF* q_plaintextdocumentlayout_qbase_block_bounding_rect(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#ensureBlockLayout)
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
void q_plaintextdocumentlayout_ensure_block_layout(void* self, void* block);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#setCursorWidth)
///
/// ``` QPlainTextDocumentLayout* self, int width ```
void q_plaintextdocumentlayout_set_cursor_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#cursorWidth)
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_cursor_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#requestUpdate)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_request_update(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
///
/// ``` QPlainTextDocumentLayout* self, int from, int param2, int charsAdded ```
void q_plaintextdocumentlayout_document_changed(void* self, int from, int param2, int charsAdded);

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
///
/// Allows for overriding the related default method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, int, int, int) ```
void q_plaintextdocumentlayout_on_document_changed(void* self, void (*slot)(void*, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
///
/// Base class method implementation
///
/// ``` QPlainTextDocumentLayout* self, int from, int param2, int charsAdded ```
void q_plaintextdocumentlayout_qbase_document_changed(void* self, int from, int param2, int charsAdded);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_plaintextdocumentlayout_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_plaintextdocumentlayout_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
const char* q_plaintextdocumentlayout_anchor_at(void* self, void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
const char* q_plaintextdocumentlayout_image_at(void* self, void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
QTextFormat* q_plaintextdocumentlayout_format_at(void* self, void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
///
/// ``` QPlainTextDocumentLayout* self, QPointF* pos ```
QTextBlock* q_plaintextdocumentlayout_block_with_marker_at(void* self, void* pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
///
/// ``` QPlainTextDocumentLayout* self, QPaintDevice* device ```
void q_plaintextdocumentlayout_set_paint_device(void* self, void* device);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
///
/// ``` QPlainTextDocumentLayout* self ```
QPaintDevice* q_plaintextdocumentlayout_paint_device(void* self);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
///
/// ``` QPlainTextDocumentLayout* self ```
QTextDocument* q_plaintextdocumentlayout_document(void* self);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
///
/// ``` QPlainTextDocumentLayout* self, int objectType, QObject* component ```
void q_plaintextdocumentlayout_register_handler(void* self, int objectType, void* component);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QPlainTextDocumentLayout* self, int objectType ```
void q_plaintextdocumentlayout_unregister_handler(void* self, int objectType);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
///
/// ``` QPlainTextDocumentLayout* self, int objectType ```
QTextObjectInterface* q_plaintextdocumentlayout_handler_for_object(void* self, int objectType);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_update(void* self);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*) ```
void q_plaintextdocumentlayout_on_update(void* self, void (*slot)(void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// ``` QPlainTextDocumentLayout* self, QTextBlock* block ```
void q_plaintextdocumentlayout_update_block(void* self, void* block);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QTextBlock*) ```
void q_plaintextdocumentlayout_on_update_block(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// ``` QPlainTextDocumentLayout* self, QSizeF* newSize ```
void q_plaintextdocumentlayout_document_size_changed(void* self, void* newSize);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QSizeF*) ```
void q_plaintextdocumentlayout_on_document_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// ``` QPlainTextDocumentLayout* self, int newPages ```
void q_plaintextdocumentlayout_page_count_changed(void* self, int newPages);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, int) ```
void q_plaintextdocumentlayout_on_page_count_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
///
/// ``` QPlainTextDocumentLayout* self, int objectType, QObject* component ```
void q_plaintextdocumentlayout_unregister_handler2(void* self, int objectType, void* component);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QPlainTextDocumentLayout* self, QRectF* param1 ```
void q_plaintextdocumentlayout_update1(void* self, void* param1);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QAbstractTextDocumentLayout*, QRectF*) ```
void q_plaintextdocumentlayout_on_update1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPlainTextDocumentLayout* self ```
const char* q_plaintextdocumentlayout_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPlainTextDocumentLayout* self, char* name ```
void q_plaintextdocumentlayout_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPlainTextDocumentLayout* self ```
bool q_plaintextdocumentlayout_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPlainTextDocumentLayout* self, bool b ```
bool q_plaintextdocumentlayout_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPlainTextDocumentLayout* self ```
QThread* q_plaintextdocumentlayout_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPlainTextDocumentLayout* self, QThread* thread ```
void q_plaintextdocumentlayout_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextDocumentLayout* self, int interval ```
int32_t q_plaintextdocumentlayout_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPlainTextDocumentLayout* self, int id ```
void q_plaintextdocumentlayout_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPlainTextDocumentLayout* self ```
libqt_list /* of QObject* */ q_plaintextdocumentlayout_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPlainTextDocumentLayout* self, QObject* parent ```
void q_plaintextdocumentlayout_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPlainTextDocumentLayout* self, QObject* filterObj ```
void q_plaintextdocumentlayout_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPlainTextDocumentLayout* self, QObject* obj ```
void q_plaintextdocumentlayout_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextDocumentLayout* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_plaintextdocumentlayout_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_plaintextdocumentlayout_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPlainTextDocumentLayout* self, const char* name, QVariant* value ```
bool q_plaintextdocumentlayout_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPlainTextDocumentLayout* self, const char* name ```
QVariant* q_plaintextdocumentlayout_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPlainTextDocumentLayout* self ```
const char** q_plaintextdocumentlayout_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPlainTextDocumentLayout* self ```
QBindingStorage* q_plaintextdocumentlayout_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPlainTextDocumentLayout* self ```
const QBindingStorage* q_plaintextdocumentlayout_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QObject*) ```
void q_plaintextdocumentlayout_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPlainTextDocumentLayout* self ```
QObject* q_plaintextdocumentlayout_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPlainTextDocumentLayout* self, const char* classname ```
bool q_plaintextdocumentlayout_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPlainTextDocumentLayout* self, int interval, enum Qt__TimerType timerType ```
int32_t q_plaintextdocumentlayout_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPlainTextDocumentLayout* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_plaintextdocumentlayout_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextDocumentLayout* self, QObject* param1 ```
void q_plaintextdocumentlayout_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QObject*, QObject*) ```
void q_plaintextdocumentlayout_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_resize_inline_object(void* self, void* item, int posInDocument, void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_qbase_resize_inline_object(void* self, void* item, int posInDocument, void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_plaintextdocumentlayout_on_resize_inline_object(void* self, void (*slot)(void*, void*, int, void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_position_inline_object(void* self, void* item, int posInDocument, void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextInlineObject* item, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_qbase_position_inline_object(void* self, void* item, int posInDocument, void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QTextInlineObject*, int, QTextFormat*) ```
void q_plaintextdocumentlayout_on_position_inline_object(void* self, void (*slot)(void*, void*, int, void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format ```
void q_plaintextdocumentlayout_qbase_draw_inline_object(void* self, void* painter, void* rect, void* object, int posInDocument, void* format);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*) ```
void q_plaintextdocumentlayout_on_draw_inline_object(void* self, void (*slot)(void*, void*, void*, void*, int, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
bool q_plaintextdocumentlayout_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
bool q_plaintextdocumentlayout_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, bool (*slot)(QPlainTextDocumentLayout*, QEvent*) ```
void q_plaintextdocumentlayout_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_plaintextdocumentlayout_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QObject* watched, QEvent* event ```
bool q_plaintextdocumentlayout_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, bool (*slot)(QPlainTextDocumentLayout*, QObject*, QEvent*) ```
void q_plaintextdocumentlayout_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTimerEvent* event ```
void q_plaintextdocumentlayout_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTimerEvent* event ```
void q_plaintextdocumentlayout_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QTimerEvent*) ```
void q_plaintextdocumentlayout_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QChildEvent* event ```
void q_plaintextdocumentlayout_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QChildEvent* event ```
void q_plaintextdocumentlayout_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QChildEvent*) ```
void q_plaintextdocumentlayout_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
void q_plaintextdocumentlayout_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QEvent* event ```
void q_plaintextdocumentlayout_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QEvent*) ```
void q_plaintextdocumentlayout_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QMetaMethod*) ```
void q_plaintextdocumentlayout_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
void q_plaintextdocumentlayout_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QPlainTextDocumentLayout*, QMetaMethod*) ```
void q_plaintextdocumentlayout_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
int32_t q_plaintextdocumentlayout_format_index(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
int32_t q_plaintextdocumentlayout_qbase_format_index(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, int) ```
void q_plaintextdocumentlayout_on_format_index(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
QTextCharFormat* q_plaintextdocumentlayout_format(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int pos ```
QTextCharFormat* q_plaintextdocumentlayout_qbase_format(void* self, int pos);

/// Inherited from QAbstractTextDocumentLayout
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QTextCharFormat* (*slot)(QPlainTextDocumentLayout*, int) ```
void q_plaintextdocumentlayout_on_format(void* self, QTextCharFormat* (*slot)(void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
QObject* q_plaintextdocumentlayout_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
QObject* q_plaintextdocumentlayout_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QObject* (*slot)() ```
void q_plaintextdocumentlayout_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self ```
int32_t q_plaintextdocumentlayout_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)() ```
void q_plaintextdocumentlayout_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, const char* signal ```
int32_t q_plaintextdocumentlayout_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, const char* signal ```
int32_t q_plaintextdocumentlayout_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, int32_t (*slot)(QPlainTextDocumentLayout*, const char*) ```
void q_plaintextdocumentlayout_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
bool q_plaintextdocumentlayout_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, QMetaMethod* signal ```
bool q_plaintextdocumentlayout_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPlainTextDocumentLayout* self, bool (*slot)(QPlainTextDocumentLayout*, QMetaMethod*) ```
void q_plaintextdocumentlayout_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPlainTextDocumentLayout* self, void (*slot)(QObject*, const char*) ```
void q_plaintextdocumentlayout_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#dtor.QPlainTextDocumentLayout)
///
/// Delete this object from C++ memory.
///
/// ``` QPlainTextDocumentLayout* self ```
void q_plaintextdocumentlayout_delete(void* self);

/// https://doc.qt.io/qt-6/qplaintextedit.html#types

typedef enum {
    QPLAINTEXTEDIT_LINEWRAPMODE_NOWRAP = 0,
    QPLAINTEXTEDIT_LINEWRAPMODE_WIDGETWIDTH = 1
} QPlainTextEdit__LineWrapMode;

#endif
