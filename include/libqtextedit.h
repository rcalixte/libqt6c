#pragma once
#ifndef SRCQT6C_LIBQTEXTEDIT_H
#define SRCQT6C_LIBQTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextedit.html

/// q_textedit_new constructs a new QTextEdit object.
///
/// ``` QWidget* parent ```
QTextEdit* q_textedit_new(void* parent);

/// q_textedit_new2 constructs a new QTextEdit object.
///
///
QTextEdit* q_textedit_new2();

/// q_textedit_new3 constructs a new QTextEdit object.
///
/// ``` const char* text ```
QTextEdit* q_textedit_new3(const char* text);

/// q_textedit_new4 constructs a new QTextEdit object.
///
/// ``` const char* text, QWidget* parent ```
QTextEdit* q_textedit_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextEdit* self ```
const QMetaObject* q_textedit_meta_object(void* self);

/// ``` QTextEdit* self, const char* param1 ```
void* q_textedit_metacast(void* self, const char* param1);

/// ``` QTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textedit_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, enum QMetaObject__Call, int, void*) ```
void q_textedit_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_textedit_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_textedit_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// ``` QTextEdit* self, QTextDocument* document ```
void q_textedit_set_document(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// ``` QTextEdit* self ```
QTextDocument* q_textedit_document(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// ``` QTextEdit* self, const char* placeholderText ```
void q_textedit_set_placeholder_text(void* self, const char* placeholderText);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// ``` QTextEdit* self ```
const char* q_textedit_placeholder_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
void q_textedit_set_text_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// ``` QTextEdit* self ```
QTextCursor* q_textedit_text_cursor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_read_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
///
/// ``` QTextEdit* self, bool ro ```
void q_textedit_set_read_only(void* self, bool ro);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// ``` QTextEdit* self, int flags ```
void q_textedit_set_text_interaction_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_text_interaction_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// ``` QTextEdit* self ```
double q_textedit_font_point_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// ``` QTextEdit* self ```
const char* q_textedit_font_family(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_font_weight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// ``` QTextEdit* self ```
bool q_textedit_font_underline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// ``` QTextEdit* self ```
bool q_textedit_font_italic(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// ``` QTextEdit* self ```
QColor* q_textedit_text_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// ``` QTextEdit* self ```
QColor* q_textedit_text_background_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// ``` QTextEdit* self ```
QFont* q_textedit_current_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// ``` QTextEdit* self, QTextCharFormat* modifier ```
void q_textedit_merge_current_char_format(void* self, void* modifier);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// ``` QTextEdit* self, QTextCharFormat* format ```
void q_textedit_set_current_char_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// ``` QTextEdit* self ```
QTextCharFormat* q_textedit_current_char_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_auto_formatting(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// ``` QTextEdit* self, int features ```
void q_textedit_set_auto_formatting(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// ``` QTextEdit* self ```
bool q_textedit_tab_changes_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_set_tab_changes_focus(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// ``` QTextEdit* self, const char* title ```
void q_textedit_set_document_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// ``` QTextEdit* self ```
const char* q_textedit_document_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_undo_redo_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_undo_redo_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_line_wrap_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// ``` QTextEdit* self, enum QTextEdit__LineWrapMode mode ```
void q_textedit_set_line_wrap_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_line_wrap_column_or_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// ``` QTextEdit* self, int w ```
void q_textedit_set_line_wrap_column_or_width(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_word_wrap_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// ``` QTextEdit* self, enum QTextOption__WrapMode policy ```
void q_textedit_set_word_wrap_mode(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, const char* exp ```
bool q_textedit_find(void* self, const char* exp);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, QRegularExpression* exp ```
bool q_textedit_find_with_exp(void* self, void* exp);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// ``` QTextEdit* self ```
const char* q_textedit_to_plain_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// ``` QTextEdit* self ```
const char* q_textedit_to_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// ``` QTextEdit* self ```
const char* q_textedit_to_markdown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// ``` QTextEdit* self ```
void q_textedit_ensure_cursor_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// ``` QTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_textedit_load_resource(void* self, int typeVal, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, QVariant* (*slot)(QTextEdit*, int, QUrl*) ```
void q_textedit_on_load_resource(void* self, QVariant* (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, int typeVal, QUrl* name ```
QVariant* q_textedit_qbase_load_resource(void* self, int typeVal, void* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// ``` QTextEdit* self ```
QMenu* q_textedit_create_standard_context_menu(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// ``` QTextEdit* self, QPoint* position ```
QMenu* q_textedit_create_standard_context_menu_with_position(void* self, void* position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// ``` QTextEdit* self, QPoint* pos ```
QTextCursor* q_textedit_cursor_for_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
QRect* q_textedit_cursor_rect(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_cursor_rect2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// ``` QTextEdit* self, QPoint* pos ```
const char* q_textedit_anchor_at(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// ``` QTextEdit* self ```
bool q_textedit_overwrite_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// ``` QTextEdit* self, bool overwrite ```
void q_textedit_set_overwrite_mode(void* self, bool overwrite);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// ``` QTextEdit* self ```
double q_textedit_tab_stop_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// ``` QTextEdit* self, double distance ```
void q_textedit_set_tab_stop_distance(void* self, double distance);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_cursor_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// ``` QTextEdit* self, int width ```
void q_textedit_set_cursor_width(void* self, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// ``` QTextEdit* self ```
bool q_textedit_accept_rich_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// ``` QTextEdit* self, bool accept ```
void q_textedit_set_accept_rich_text(void* self, bool accept);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// ``` QTextEdit* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections ```
void q_textedit_set_extra_selections(void* self, libqt_list selections);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// ``` QTextEdit* self ```
libqt_list /* of QTextEdit__ExtraSelection* */ q_textedit_extra_selections(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// ``` QTextEdit* self, enum QTextCursor__MoveOperation operation ```
void q_textedit_move_cursor(void* self, int64_t operation);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// ``` QTextEdit* self ```
bool q_textedit_can_paste(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// ``` QTextEdit* self, QPagedPaintDevice* printer ```
void q_textedit_print(void* self, void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// ``` QTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_textedit_input_method_query(void* self, int64_t property);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, QVariant* (*slot)(QTextEdit*, enum Qt__InputMethodQuery) ```
void q_textedit_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, enum Qt__InputMethodQuery property ```
QVariant* q_textedit_qbase_input_method_query(void* self, int64_t property);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// ``` QTextEdit* self, enum Qt__InputMethodQuery query, QVariant* argument ```
QVariant* q_textedit_input_method_query2(void* self, int64_t query, void* argument);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// ``` QTextEdit* self, double s ```
void q_textedit_set_font_point_size(void* self, double s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// ``` QTextEdit* self, const char* fontFamily ```
void q_textedit_set_font_family(void* self, const char* fontFamily);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// ``` QTextEdit* self, int w ```
void q_textedit_set_font_weight(void* self, int w);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_set_font_underline(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_set_font_italic(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// ``` QTextEdit* self, QColor* c ```
void q_textedit_set_text_color(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// ``` QTextEdit* self, QColor* c ```
void q_textedit_set_text_background_color(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// ``` QTextEdit* self, QFont* f ```
void q_textedit_set_current_font(void* self, void* f);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// ``` QTextEdit* self, int a ```
void q_textedit_set_alignment(void* self, int64_t a);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_set_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_set_html(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// ``` QTextEdit* self, const char* markdown ```
void q_textedit_set_markdown(void* self, const char* markdown);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// ``` QTextEdit* self ```
void q_textedit_cut(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// ``` QTextEdit* self ```
void q_textedit_copy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// ``` QTextEdit* self ```
void q_textedit_paste(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// ``` QTextEdit* self ```
void q_textedit_undo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// ``` QTextEdit* self ```
void q_textedit_redo(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// ``` QTextEdit* self ```
void q_textedit_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// ``` QTextEdit* self ```
void q_textedit_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_insert_plain_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_insert_html(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// ``` QTextEdit* self, const char* text ```
void q_textedit_append(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// ``` QTextEdit* self, const char* name ```
void q_textedit_scroll_to_anchor(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// ``` QTextEdit* self ```
void q_textedit_zoom_in(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// ``` QTextEdit* self ```
void q_textedit_zoom_out(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// ``` QTextEdit* self ```
void q_textedit_text_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*) ```
void q_textedit_on_text_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_undo_available(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_undo_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_redo_available(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_redo_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// ``` QTextEdit* self, QTextCharFormat* format ```
void q_textedit_current_char_format_changed(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTextCharFormat*) ```
void q_textedit_on_current_char_format_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// ``` QTextEdit* self, bool b ```
void q_textedit_copy_available(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_copy_available(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// ``` QTextEdit* self ```
void q_textedit_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*) ```
void q_textedit_on_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// ``` QTextEdit* self ```
void q_textedit_cursor_position_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*) ```
void q_textedit_on_cursor_position_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// ``` QTextEdit* self, QEvent* e ```
bool q_textedit_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QEvent* e ```
bool q_textedit_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// ``` QTextEdit* self, QTimerEvent* e ```
void q_textedit_timer_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTimerEvent*) ```
void q_textedit_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QTimerEvent* e ```
void q_textedit_qbase_timer_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_key_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QKeyEvent*) ```
void q_textedit_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_qbase_key_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_key_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QKeyEvent*) ```
void q_textedit_on_key_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QKeyEvent* e ```
void q_textedit_qbase_key_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// ``` QTextEdit* self, QResizeEvent* e ```
void q_textedit_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QResizeEvent*) ```
void q_textedit_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QResizeEvent* e ```
void q_textedit_qbase_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// ``` QTextEdit* self, QPaintEvent* e ```
void q_textedit_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QPaintEvent*) ```
void q_textedit_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QPaintEvent* e ```
void q_textedit_qbase_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_press_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMouseEvent*) ```
void q_textedit_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QMouseEvent* e ```
void q_textedit_qbase_mouse_double_click_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// ``` QTextEdit* self, bool next ```
bool q_textedit_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, bool) ```
void q_textedit_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, bool next ```
bool q_textedit_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// ``` QTextEdit* self, QContextMenuEvent* e ```
void q_textedit_context_menu_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QContextMenuEvent*) ```
void q_textedit_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QContextMenuEvent* e ```
void q_textedit_qbase_context_menu_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// ``` QTextEdit* self, QDragEnterEvent* e ```
void q_textedit_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDragEnterEvent*) ```
void q_textedit_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QDragEnterEvent* e ```
void q_textedit_qbase_drag_enter_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// ``` QTextEdit* self, QDragLeaveEvent* e ```
void q_textedit_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDragLeaveEvent*) ```
void q_textedit_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QDragLeaveEvent* e ```
void q_textedit_qbase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// ``` QTextEdit* self, QDragMoveEvent* e ```
void q_textedit_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDragMoveEvent*) ```
void q_textedit_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QDragMoveEvent* e ```
void q_textedit_qbase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// ``` QTextEdit* self, QDropEvent* e ```
void q_textedit_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QDropEvent*) ```
void q_textedit_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QDropEvent* e ```
void q_textedit_qbase_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_focus_in_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QFocusEvent*) ```
void q_textedit_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_qbase_focus_in_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_focus_out_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QFocusEvent*) ```
void q_textedit_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QFocusEvent* e ```
void q_textedit_qbase_focus_out_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// ``` QTextEdit* self, QShowEvent* param1 ```
void q_textedit_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QShowEvent*) ```
void q_textedit_on_show_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QShowEvent* param1 ```
void q_textedit_qbase_show_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// ``` QTextEdit* self, QEvent* e ```
void q_textedit_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QEvent* e ```
void q_textedit_qbase_change_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// ``` QTextEdit* self, QWheelEvent* e ```
void q_textedit_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QWheelEvent*) ```
void q_textedit_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QWheelEvent* e ```
void q_textedit_qbase_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// ``` QTextEdit* self ```
QMimeData* q_textedit_create_mime_data_from_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, QMimeData* (*slot)() ```
void q_textedit_on_create_mime_data_from_selection(void* self, QMimeData* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Base class method implementation
///
/// ``` QTextEdit* self ```
QMimeData* q_textedit_qbase_create_mime_data_from_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// ``` QTextEdit* self, QMimeData* source ```
bool q_textedit_can_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QMimeData*) ```
void q_textedit_on_can_insert_from_mime_data(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QMimeData* source ```
bool q_textedit_qbase_can_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// ``` QTextEdit* self, QMimeData* source ```
void q_textedit_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMimeData*) ```
void q_textedit_on_insert_from_mime_data(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QMimeData* source ```
void q_textedit_qbase_insert_from_mime_data(void* self, void* source);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// ``` QTextEdit* self, QInputMethodEvent* param1 ```
void q_textedit_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QInputMethodEvent*) ```
void q_textedit_on_input_method_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QInputMethodEvent* param1 ```
void q_textedit_qbase_input_method_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// ``` QTextEdit* self, int dx, int dy ```
void q_textedit_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, int, int) ```
void q_textedit_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, int dx, int dy ```
void q_textedit_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
void q_textedit_do_set_text_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTextCursor*) ```
void q_textedit_on_do_set_text_cursor(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, QTextCursor* cursor ```
void q_textedit_qbase_do_set_text_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// ``` QTextEdit* self, float range ```
void q_textedit_zoom_in_f(void* self, float range);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Allows for overriding the related default method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, float) ```
void q_textedit_on_zoom_in_f(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Base class method implementation
///
/// ``` QTextEdit* self, float range ```
void q_textedit_qbase_zoom_in_f(void* self, float range);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_textedit_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_textedit_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, const char* exp, int options ```
bool q_textedit_find2(void* self, const char* exp, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// ``` QTextEdit* self, QRegularExpression* exp, int options ```
bool q_textedit_find22(void* self, void* exp, int64_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// ``` QTextEdit* self, int features ```
const char* q_textedit_to_markdown1(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// ``` QTextEdit* self, enum QTextCursor__MoveOperation operation, enum QTextCursor__MoveMode mode ```
void q_textedit_move_cursor2(void* self, int64_t operation, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// ``` QTextEdit* self, int range ```
void q_textedit_zoom_in1(void* self, int range);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// ``` QTextEdit* self, int range ```
void q_textedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTextEdit* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_textedit_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTextEdit* self ```
QScrollBar* q_textedit_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTextEdit* self, QScrollBar* scrollbar ```
void q_textedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTextEdit* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_textedit_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTextEdit* self ```
QScrollBar* q_textedit_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTextEdit* self, QScrollBar* scrollbar ```
void q_textedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTextEdit* self, QWidget* widget ```
void q_textedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTextEdit* self, QWidget* widget, int alignment ```
void q_textedit_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTextEdit* self, int alignment ```
libqt_list /* of QWidget* */ q_textedit_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTextEdit* self, QWidget* widget ```
void q_textedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTextEdit* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_textedit_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTextEdit* self, int frameStyle ```
void q_textedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTextEdit* self, enum QFrame__Shape frameShape ```
void q_textedit_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTextEdit* self, enum QFrame__Shadow frameShadow ```
void q_textedit_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTextEdit* self, int lineWidth ```
void q_textedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTextEdit* self, int midLineWidth ```
void q_textedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTextEdit* self, QRect* frameRect ```
void q_textedit_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTextEdit* self ```
uintptr_t q_textedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTextEdit* self ```
void q_textedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTextEdit* self ```
uintptr_t q_textedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTextEdit* self ```
uintptr_t q_textedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTextEdit* self ```
QStyle* q_textedit_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTextEdit* self, QStyle* style ```
void q_textedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTextEdit* self, enum Qt__WindowModality windowModality ```
void q_textedit_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTextEdit* self, QWidget* param1 ```
bool q_textedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTextEdit* self, bool enabled ```
void q_textedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTextEdit* self, bool disabled ```
void q_textedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTextEdit* self, bool windowModified ```
void q_textedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTextEdit* self ```
const QRect* q_textedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTextEdit* self ```
QPoint* q_textedit_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTextEdit* self ```
QRegion* q_textedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTextEdit* self, QSize* minimumSize ```
void q_textedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTextEdit* self, int minw, int minh ```
void q_textedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTextEdit* self, QSize* maximumSize ```
void q_textedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTextEdit* self, int maxw, int maxh ```
void q_textedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTextEdit* self, int minw ```
void q_textedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTextEdit* self, int minh ```
void q_textedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTextEdit* self, int maxw ```
void q_textedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTextEdit* self, int maxh ```
void q_textedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTextEdit* self, QSize* sizeIncrement ```
void q_textedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTextEdit* self, int w, int h ```
void q_textedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTextEdit* self ```
QSize* q_textedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTextEdit* self, QSize* baseSize ```
void q_textedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTextEdit* self, int basew, int baseh ```
void q_textedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTextEdit* self, QSize* fixedSize ```
void q_textedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTextEdit* self, int w, int h ```
void q_textedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTextEdit* self, int w ```
void q_textedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTextEdit* self, int h ```
void q_textedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTextEdit* self, QPointF* param1 ```
QPointF* q_textedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTextEdit* self, QPoint* param1 ```
QPoint* q_textedit_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_textedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_textedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTextEdit* self, QWidget* param1, QPointF* param2 ```
QPointF* q_textedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTextEdit* self, QWidget* param1, QPoint* param2 ```
QPoint* q_textedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTextEdit* self ```
const QPalette* q_textedit_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTextEdit* self, QPalette* palette ```
void q_textedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTextEdit* self, enum QPalette__ColorRole backgroundRole ```
void q_textedit_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTextEdit* self, enum QPalette__ColorRole foregroundRole ```
void q_textedit_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTextEdit* self ```
const QFont* q_textedit_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTextEdit* self, QFont* font ```
void q_textedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTextEdit* self ```
QFontMetrics* q_textedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTextEdit* self ```
QFontInfo* q_textedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTextEdit* self ```
QCursor* q_textedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTextEdit* self, QCursor* cursor ```
void q_textedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTextEdit* self ```
void q_textedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTextEdit* self ```
bool q_textedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTextEdit* self ```
bool q_textedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTextEdit* self ```
bool q_textedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTextEdit* self, QBitmap* mask ```
void q_textedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTextEdit* self, QRegion* mask ```
void q_textedit_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTextEdit* self ```
QRegion* q_textedit_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTextEdit* self ```
void q_textedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target ```
void q_textedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter ```
void q_textedit_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTextEdit* self ```
QPixmap* q_textedit_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTextEdit* self ```
QGraphicsEffect* q_textedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTextEdit* self, QGraphicsEffect* effect ```
void q_textedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTextEdit* self, enum Qt__GestureType typeVal ```
void q_textedit_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTextEdit* self, enum Qt__GestureType typeVal ```
void q_textedit_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTextEdit* self, const char* windowTitle ```
void q_textedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTextEdit* self, const char* styleSheet ```
void q_textedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTextEdit* self ```
const char* q_textedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTextEdit* self, QIcon* icon ```
void q_textedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTextEdit* self ```
QIcon* q_textedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTextEdit* self, const char* windowIconText ```
void q_textedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTextEdit* self, const char* windowRole ```
void q_textedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTextEdit* self, const char* filePath ```
void q_textedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTextEdit* self ```
const char* q_textedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTextEdit* self, double level ```
void q_textedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTextEdit* self ```
double q_textedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTextEdit* self, const char* toolTip ```
void q_textedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTextEdit* self ```
const char* q_textedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTextEdit* self, int msec ```
void q_textedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTextEdit* self, const char* statusTip ```
void q_textedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTextEdit* self ```
const char* q_textedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTextEdit* self, const char* whatsThis ```
void q_textedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTextEdit* self ```
const char* q_textedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTextEdit* self ```
const char* q_textedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTextEdit* self, const char* name ```
void q_textedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTextEdit* self ```
const char* q_textedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTextEdit* self, const char* description ```
void q_textedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTextEdit* self, enum Qt__LayoutDirection direction ```
void q_textedit_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTextEdit* self ```
void q_textedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTextEdit* self, QLocale* locale ```
void q_textedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTextEdit* self ```
QLocale* q_textedit_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTextEdit* self ```
void q_textedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTextEdit* self ```
void q_textedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTextEdit* self ```
void q_textedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTextEdit* self ```
void q_textedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTextEdit* self, enum Qt__FocusReason reason ```
void q_textedit_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTextEdit* self, enum Qt__FocusPolicy policy ```
void q_textedit_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTextEdit* self ```
bool q_textedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_textedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTextEdit* self, QWidget* focusProxy ```
void q_textedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTextEdit* self, enum Qt__ContextMenuPolicy policy ```
void q_textedit_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTextEdit* self ```
void q_textedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTextEdit* self, QCursor* param1 ```
void q_textedit_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTextEdit* self ```
void q_textedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTextEdit* self ```
void q_textedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTextEdit* self ```
void q_textedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTextEdit* self, QKeySequence* key ```
int32_t q_textedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_textedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_textedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTextEdit* self ```
bool q_textedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTextEdit* self, bool enable ```
void q_textedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTextEdit* self ```
QGraphicsProxyWidget* q_textedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self ```
void q_textedit_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self ```
void q_textedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self, int x, int y, int w, int h ```
void q_textedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self, QRect* param1 ```
void q_textedit_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTextEdit* self, QRegion* param1 ```
void q_textedit_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self, int x, int y, int w, int h ```
void q_textedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self, QRect* param1 ```
void q_textedit_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTextEdit* self, QRegion* param1 ```
void q_textedit_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTextEdit* self, bool hidden ```
void q_textedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTextEdit* self ```
void q_textedit_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTextEdit* self ```
void q_textedit_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTextEdit* self ```
void q_textedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTextEdit* self ```
void q_textedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTextEdit* self ```
void q_textedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTextEdit* self ```
void q_textedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTextEdit* self ```
bool q_textedit_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTextEdit* self ```
void q_textedit_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTextEdit* self ```
void q_textedit_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTextEdit* self, QWidget* param1 ```
void q_textedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTextEdit* self, int x, int y ```
void q_textedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTextEdit* self, QPoint* param1 ```
void q_textedit_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTextEdit* self, int w, int h ```
void q_textedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTextEdit* self, QSize* param1 ```
void q_textedit_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTextEdit* self, int x, int y, int w, int h ```
void q_textedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTextEdit* self, QRect* geometry ```
void q_textedit_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTextEdit* self ```
char* q_textedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTextEdit* self, const char* geometry ```
bool q_textedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTextEdit* self ```
void q_textedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTextEdit* self, QWidget* param1 ```
bool q_textedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTextEdit* self, int state ```
void q_textedit_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTextEdit* self, int state ```
void q_textedit_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTextEdit* self ```
QSizePolicy* q_textedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTextEdit* self, QSizePolicy* sizePolicy ```
void q_textedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTextEdit* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_textedit_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTextEdit* self ```
QRegion* q_textedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTextEdit* self, int left, int top, int right, int bottom ```
void q_textedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTextEdit* self, QMargins* margins ```
void q_textedit_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTextEdit* self ```
QMargins* q_textedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTextEdit* self ```
QRect* q_textedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTextEdit* self ```
QLayout* q_textedit_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTextEdit* self, QLayout* layout ```
void q_textedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTextEdit* self ```
void q_textedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTextEdit* self, QWidget* parent ```
void q_textedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTextEdit* self, QWidget* parent, int f ```
void q_textedit_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTextEdit* self, int dx, int dy ```
void q_textedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTextEdit* self, int dx, int dy, QRect* param3 ```
void q_textedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTextEdit* self ```
bool q_textedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTextEdit* self, bool on ```
void q_textedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, QAction* action ```
void q_textedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTextEdit* self, libqt_list /* of QAction* */ actions ```
void q_textedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTextEdit* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_textedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTextEdit* self, QAction* before, QAction* action ```
void q_textedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTextEdit* self, QAction* action ```
void q_textedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTextEdit* self ```
libqt_list /* of QAction* */ q_textedit_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, const char* text ```
QAction* q_textedit_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, QIcon* icon, const char* text ```
QAction* q_textedit_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, const char* text, QKeySequence* shortcut ```
QAction* q_textedit_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTextEdit* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_textedit_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTextEdit* self ```
QWidget* q_textedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTextEdit* self, int typeVal ```
void q_textedit_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTextEdit* self, enum Qt__WindowType param1 ```
void q_textedit_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTextEdit* self, int typeVal ```
void q_textedit_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTextEdit* self, int x, int y ```
QWidget* q_textedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTextEdit* self, QPoint* p ```
QWidget* q_textedit_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTextEdit* self, QPointF* p ```
QWidget* q_textedit_child_at_with_q_point_f(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTextEdit* self, enum Qt__WidgetAttribute param1 ```
void q_textedit_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTextEdit* self, enum Qt__WidgetAttribute param1 ```
bool q_textedit_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTextEdit* self ```
void q_textedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTextEdit* self, QWidget* child ```
bool q_textedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTextEdit* self ```
bool q_textedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTextEdit* self, bool enabled ```
void q_textedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTextEdit* self ```
QBackingStore* q_textedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTextEdit* self ```
QWindow* q_textedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTextEdit* self ```
QScreen* q_textedit_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTextEdit* self, QScreen* screen ```
void q_textedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_textedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTextEdit* self, const char* title ```
void q_textedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_textedit_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTextEdit* self, QIcon* icon ```
void q_textedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, QIcon*) ```
void q_textedit_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTextEdit* self, const char* iconText ```
void q_textedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, const char*) ```
void q_textedit_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTextEdit* self, QPoint* pos ```
void q_textedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTextEdit* self, void (*slot)(QWidget*, QPoint*) ```
void q_textedit_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTextEdit* self ```
int64_t q_textedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTextEdit* self, int hints ```
void q_textedit_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target, QPoint* targetOffset ```
void q_textedit_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_textedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_textedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter, QPoint* targetOffset ```
void q_textedit_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_textedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTextEdit* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_textedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTextEdit* self, QRect* rectangle ```
QPixmap* q_textedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTextEdit* self, enum Qt__GestureType typeVal, int flags ```
void q_textedit_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTextEdit* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_textedit_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTextEdit* self, int id, bool enable ```
void q_textedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTextEdit* self, int id, bool enable ```
void q_textedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTextEdit* self, enum Qt__WindowType param1, bool on ```
void q_textedit_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTextEdit* self, enum Qt__WidgetAttribute param1, bool on ```
void q_textedit_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_textedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_textedit_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextEdit* self ```
const char* q_textedit_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextEdit* self, char* name ```
void q_textedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextEdit* self ```
bool q_textedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextEdit* self ```
bool q_textedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextEdit* self, bool b ```
bool q_textedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextEdit* self ```
QThread* q_textedit_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextEdit* self, QThread* thread ```
bool q_textedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextEdit* self, int interval ```
int32_t q_textedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextEdit* self, int id ```
void q_textedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextEdit* self, enum Qt__TimerId id ```
void q_textedit_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextEdit* self ```
libqt_list /* of QObject* */ q_textedit_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextEdit* self, QObject* filterObj ```
void q_textedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextEdit* self, QObject* obj ```
void q_textedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_textedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextEdit* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_textedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_textedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_textedit_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextEdit* self ```
void q_textedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextEdit* self ```
void q_textedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextEdit* self, const char* name, QVariant* value ```
bool q_textedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextEdit* self, const char* name ```
QVariant* q_textedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextEdit* self ```
const char** q_textedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextEdit* self ```
QBindingStorage* q_textedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextEdit* self ```
const QBindingStorage* q_textedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextEdit* self ```
void q_textedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextEdit* self, void (*slot)(QObject*) ```
void q_textedit_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextEdit* self ```
QObject* q_textedit_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextEdit* self, const char* classname ```
bool q_textedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextEdit* self ```
void q_textedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextEdit* self, QThread* thread, Disambiguated_t* param2 ```
bool q_textedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextEdit* self, int interval, enum Qt__TimerType timerType ```
int32_t q_textedit_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textedit_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextEdit* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_textedit_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextEdit* self, QObject* param1 ```
void q_textedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextEdit* self, void (*slot)(QObject*, QObject*) ```
void q_textedit_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTextEdit* self ```
bool q_textedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTextEdit* self ```
double q_textedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTextEdit* self ```
double q_textedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTextEdit* self ```
int32_t q_textedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_textedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_textedit_encode_metric_f(int64_t metric, double value);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QSize* (*slot)() ```
void q_textedit_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QSize* (*slot)() ```
void q_textedit_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QWidget* viewport ```
void q_textedit_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QWidget* viewport ```
void q_textedit_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QWidget*) ```
void q_textedit_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_textedit_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QObject* param1, QEvent* param2 ```
bool q_textedit_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QObject*, QEvent*) ```
void q_textedit_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEvent* param1 ```
bool q_textedit_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEvent* param1 ```
bool q_textedit_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QSize* q_textedit_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QSize* (*slot)() ```
void q_textedit_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QStyleOptionFrame* option ```
void q_textedit_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QStyleOptionFrame* option ```
void q_textedit_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QStyleOptionFrame*) ```
void q_textedit_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)() ```
void q_textedit_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, bool visible ```
void q_textedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, bool visible ```
void q_textedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, bool) ```
void q_textedit_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, int param1 ```
int32_t q_textedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, int param1 ```
int32_t q_textedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, int) ```
void q_textedit_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)() ```
void q_textedit_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QPaintEngine* q_textedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QPaintEngine* q_textedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QPaintEngine* (*slot)() ```
void q_textedit_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEnterEvent* event ```
void q_textedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEnterEvent* event ```
void q_textedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEnterEvent*) ```
void q_textedit_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMoveEvent* event ```
void q_textedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMoveEvent* event ```
void q_textedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMoveEvent*) ```
void q_textedit_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QCloseEvent* event ```
void q_textedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QCloseEvent* event ```
void q_textedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QCloseEvent*) ```
void q_textedit_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QTabletEvent* event ```
void q_textedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QTabletEvent* event ```
void q_textedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QTabletEvent*) ```
void q_textedit_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QActionEvent* event ```
void q_textedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QActionEvent* event ```
void q_textedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QActionEvent*) ```
void q_textedit_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QHideEvent* event ```
void q_textedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QHideEvent* event ```
void q_textedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QHideEvent*) ```
void q_textedit_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_textedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, const char* eventType, void* message, intptr_t* result ```
bool q_textedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, const char*, void*, intptr_t*) ```
void q_textedit_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_textedit_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_textedit_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, enum QPaintDevice__PaintDeviceMetric) ```
void q_textedit_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QPainter* painter ```
void q_textedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QPainter* painter ```
void q_textedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QPainter*) ```
void q_textedit_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QPoint* offset ```
QPaintDevice* q_textedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QPoint* offset ```
QPaintDevice* q_textedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QPaintDevice* (*slot)(QTextEdit*, QPoint*) ```
void q_textedit_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QPainter* q_textedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QPainter* q_textedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QPainter* (*slot)() ```
void q_textedit_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QChildEvent* event ```
void q_textedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QChildEvent* event ```
void q_textedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QChildEvent*) ```
void q_textedit_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QEvent* event ```
void q_textedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QEvent*) ```
void q_textedit_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMetaMethod*) ```
void q_textedit_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
void q_textedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QMetaMethod*) ```
void q_textedit_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, int left, int top, int right, int bottom ```
void q_textedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, int left, int top, int right, int bottom ```
void q_textedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, int, int, int, int) ```
void q_textedit_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QMargins* q_textedit_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QMargins* q_textedit_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QMargins* (*slot)() ```
void q_textedit_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QPainter* param1 ```
void q_textedit_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QPainter* param1 ```
void q_textedit_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)(QTextEdit*, QPainter*) ```
void q_textedit_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)() ```
void q_textedit_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)() ```
void q_textedit_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
void q_textedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, void (*slot)() ```
void q_textedit_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)() ```
void q_textedit_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
bool q_textedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)() ```
void q_textedit_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
QObject* q_textedit_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
QObject* q_textedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, QObject* (*slot)() ```
void q_textedit_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self ```
int32_t q_textedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)() ```
void q_textedit_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, const char* signal ```
int32_t q_textedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, const char* signal ```
int32_t q_textedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, int32_t (*slot)(QTextEdit*, const char*) ```
void q_textedit_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
bool q_textedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, QMetaMethod* signal ```
bool q_textedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, bool (*slot)(QTextEdit*, QMetaMethod*) ```
void q_textedit_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_textedit_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_textedit_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextEdit* self, double (*slot)(QTextEdit*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_textedit_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTextEdit* self, void (*slot)(QObject*, const char*) ```
void q_textedit_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dtor.QTextEdit)
///
/// Delete this object from C++ memory.
///
/// ``` QTextEdit* self ```
void q_textedit_delete(void* self);

/// https://doc.qt.io/qt-6/qtextedit-extraselection.html

/// q_textedit__extraselection_new constructs a new QTextEdit::ExtraSelection object.
///
/// ``` QTextEdit__ExtraSelection* param1 ```
QTextEdit__ExtraSelection* q_textedit__extraselection_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit__extraselection.html#operator=)
///
/// ``` QTextEdit__ExtraSelection* self, QTextEdit__ExtraSelection* param1 ```
void q_textedit__extraselection_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit::extraselection.html#dtor.QTextEdit::ExtraSelection)
///
/// Delete this object from C++ memory.
///
/// ``` QTextEdit__ExtraSelection* self ```
void q_textedit__extraselection_delete(void* self);

/// https://doc.qt.io/qt-6/qtextedit.html#types

typedef enum {
    QTEXTEDIT_LINEWRAPMODE_NOWRAP = 0,
    QTEXTEDIT_LINEWRAPMODE_WIDGETWIDTH = 1,
    QTEXTEDIT_LINEWRAPMODE_FIXEDPIXELWIDTH = 2,
    QTEXTEDIT_LINEWRAPMODE_FIXEDCOLUMNWIDTH = 3
} QTextEdit__LineWrapMode;

typedef enum {
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTONONE = 0,
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTOBULLETLIST = 1,
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTOALL = 4294967295
} QTextEdit__AutoFormattingFlag;

#endif
