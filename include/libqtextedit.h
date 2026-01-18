#pragma once
#ifndef SRC_QT6C_LIBQTEXTEDIT_H
#define SRC_QT6C_LIBQTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html)

/// q_textedit_new constructs a new QTextEdit object.
///
/// @param parent QWidget*
///
QTextEdit* q_textedit_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html)

/// q_textedit_new2 constructs a new QTextEdit object.
///
QTextEdit* q_textedit_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html)

/// q_textedit_new3 constructs a new QTextEdit object.
///
/// @param text const char*
///
QTextEdit* q_textedit_new3(const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html)

/// q_textedit_new4 constructs a new QTextEdit object.
///
/// @param text const char*
/// @param parent QWidget*
///
QTextEdit* q_textedit_new4(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTextEdit*
///
const QMetaObject* q_textedit_meta_object(void* self);

/// @param self QTextEdit*
/// @param param1 const char*
///
void* q_textedit_metacast(void* self, const char* param1);

/// @param self QTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback int32_t func(QTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_textedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_textedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_textedit_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// @param self QTextEdit*
/// @param document QTextDocument*
///
void q_textedit_set_document(void* self, void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// @param self QTextEdit*
///
QTextDocument* q_textedit_document(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// @param self QTextEdit*
/// @param placeholderText const char*
///
void q_textedit_set_placeholder_text(void* self, const char* placeholderText);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_placeholder_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// @param self QTextEdit*
/// @param cursor QTextCursor*
///
void q_textedit_set_text_cursor(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// @param self QTextEdit*
///
QTextCursor* q_textedit_text_cursor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// @param self QTextEdit*
///
bool q_textedit_is_read_only(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
///
/// @param self QTextEdit*
/// @param ro bool
///
void q_textedit_set_read_only(void* self, bool ro);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// @param self QTextEdit*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void q_textedit_set_text_interaction_flags(void* self, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// @param self QTextEdit*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t q_textedit_text_interaction_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// @param self QTextEdit*
///
double q_textedit_font_point_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_font_family(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// @param self QTextEdit*
///
int32_t q_textedit_font_weight(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// @param self QTextEdit*
///
bool q_textedit_font_underline(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// @param self QTextEdit*
///
bool q_textedit_font_italic(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// @param self QTextEdit*
///
QColor* q_textedit_text_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// @param self QTextEdit*
///
QColor* q_textedit_text_background_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// @param self QTextEdit*
///
QFont* q_textedit_current_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// @param self QTextEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_textedit_alignment(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// @param self QTextEdit*
/// @param modifier QTextCharFormat*
///
void q_textedit_merge_current_char_format(void* self, void* modifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// @param self QTextEdit*
/// @param format QTextCharFormat*
///
void q_textedit_set_current_char_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// @param self QTextEdit*
///
QTextCharFormat* q_textedit_current_char_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// @param self QTextEdit*
///
/// @return flag of enum QTextEdit__AutoFormattingFlag
///
int32_t q_textedit_auto_formatting(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// @param self QTextEdit*
/// @param features flag of enum QTextEdit__AutoFormattingFlag
///
void q_textedit_set_auto_formatting(void* self, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// @param self QTextEdit*
///
bool q_textedit_tab_changes_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// @param self QTextEdit*
/// @param b bool
///
void q_textedit_set_tab_changes_focus(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// @param self QTextEdit*
/// @param title const char*
///
void q_textedit_set_document_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_document_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// @param self QTextEdit*
///
bool q_textedit_is_undo_redo_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// @param self QTextEdit*
/// @param enable bool
///
void q_textedit_set_undo_redo_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// @param self QTextEdit*
///
/// @return enum QTextEdit__LineWrapMode
///
int32_t q_textedit_line_wrap_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// @param self QTextEdit*
/// @param mode enum QTextEdit__LineWrapMode
///
void q_textedit_set_line_wrap_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_line_wrap_column_or_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// @param self QTextEdit*
/// @param w int
///
void q_textedit_set_line_wrap_column_or_width(void* self, int w);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// @param self QTextEdit*
///
/// @return enum QTextOption__WrapMode
///
int32_t q_textedit_word_wrap_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// @param self QTextEdit*
/// @param policy enum QTextOption__WrapMode
///
void q_textedit_set_word_wrap_mode(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextEdit*
/// @param exp const char*
///
bool q_textedit_find(void* self, const char* exp);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextEdit*
/// @param exp QRegularExpression*
///
bool q_textedit_find2(void* self, void* exp);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_to_plain_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_to_html(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_to_markdown(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// @param self QTextEdit*
///
void q_textedit_ensure_cursor_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// @param self QTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* q_textedit_load_resource(void* self, int type, void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback QVariant* func(QTextEdit* self, int type, QUrl* name)
///
void q_textedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* q_textedit_qbase_load_resource(void* self, int type, void* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self QTextEdit*
///
QMenu* q_textedit_create_standard_context_menu(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self QTextEdit*
/// @param position QPoint*
///
QMenu* q_textedit_create_standard_context_menu2(void* self, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// @param self QTextEdit*
/// @param pos QPoint*
///
QTextCursor* q_textedit_cursor_for_position(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self QTextEdit*
/// @param cursor QTextCursor*
///
QRect* q_textedit_cursor_rect(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self QTextEdit*
///
QRect* q_textedit_cursor_rect2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
/// @param pos QPoint*
///
const char* q_textedit_anchor_at(void* self, void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// @param self QTextEdit*
///
bool q_textedit_overwrite_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// @param self QTextEdit*
/// @param overwrite bool
///
void q_textedit_set_overwrite_mode(void* self, bool overwrite);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// @param self QTextEdit*
///
double q_textedit_tab_stop_distance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// @param self QTextEdit*
/// @param distance double
///
void q_textedit_set_tab_stop_distance(void* self, double distance);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_cursor_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// @param self QTextEdit*
/// @param width int
///
void q_textedit_set_cursor_width(void* self, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// @param self QTextEdit*
///
bool q_textedit_accept_rich_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// @param self QTextEdit*
/// @param accept bool
///
void q_textedit_set_accept_rich_text(void* self, bool accept);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// @param self QTextEdit*
/// @param selections libqt_list of QTextEdit__ExtraSelection*
///
void q_textedit_set_extra_selections(void* self, libqt_list /* of QTextEdit__ExtraSelection* */ selections);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// @param self QTextEdit*
///
/// @return libqt_list of QTextEdit__ExtraSelection*
///
libqt_list q_textedit_extra_selections(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self QTextEdit*
/// @param operation enum QTextCursor__MoveOperation
///
void q_textedit_move_cursor(void* self, int32_t operation);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// @param self QTextEdit*
///
bool q_textedit_can_paste(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// @param self QTextEdit*
/// @param printer QPagedPaintDevice*
///
void q_textedit_print(void* self, void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self QTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* q_textedit_input_method_query(void* self, int32_t property);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback QVariant* func(QTextEdit* self, enum Qt__InputMethodQuery property)
///
void q_textedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* q_textedit_qbase_input_method_query(void* self, int32_t property);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self QTextEdit*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* q_textedit_input_method_query2(void* self, int32_t query, void* argument);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// @param self QTextEdit*
/// @param s double
///
void q_textedit_set_font_point_size(void* self, double s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// @param self QTextEdit*
/// @param fontFamily const char*
///
void q_textedit_set_font_family(void* self, const char* fontFamily);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// @param self QTextEdit*
/// @param w int
///
void q_textedit_set_font_weight(void* self, int w);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// @param self QTextEdit*
/// @param b bool
///
void q_textedit_set_font_underline(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// @param self QTextEdit*
/// @param b bool
///
void q_textedit_set_font_italic(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// @param self QTextEdit*
/// @param c QColor*
///
void q_textedit_set_text_color(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// @param self QTextEdit*
/// @param c QColor*
///
void q_textedit_set_text_background_color(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// @param self QTextEdit*
/// @param f QFont*
///
void q_textedit_set_current_font(void* self, void* f);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// @param self QTextEdit*
/// @param a flag of enum Qt__AlignmentFlag
///
void q_textedit_set_alignment(void* self, int32_t a);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// @param self QTextEdit*
/// @param text const char*
///
void q_textedit_set_plain_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// @param self QTextEdit*
/// @param text const char*
///
void q_textedit_set_html(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// @param self QTextEdit*
/// @param markdown const char*
///
void q_textedit_set_markdown(void* self, const char* markdown);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// @param self QTextEdit*
/// @param text const char*
///
void q_textedit_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// @param self QTextEdit*
///
void q_textedit_cut(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// @param self QTextEdit*
///
void q_textedit_copy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// @param self QTextEdit*
///
void q_textedit_paste(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// @param self QTextEdit*
///
void q_textedit_undo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// @param self QTextEdit*
///
void q_textedit_redo(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// @param self QTextEdit*
///
void q_textedit_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// @param self QTextEdit*
///
void q_textedit_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// @param self QTextEdit*
/// @param text const char*
///
void q_textedit_insert_plain_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// @param self QTextEdit*
/// @param text const char*
///
void q_textedit_insert_html(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// @param self QTextEdit*
/// @param text const char*
///
void q_textedit_append(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// @param self QTextEdit*
/// @param name const char*
///
void q_textedit_scroll_to_anchor(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self QTextEdit*
///
void q_textedit_zoom_in(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self QTextEdit*
///
void q_textedit_zoom_out(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self QTextEdit*
///
void q_textedit_text_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self)
///
void q_textedit_on_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self QTextEdit*
/// @param b bool
///
void q_textedit_undo_available(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, bool b)
///
void q_textedit_on_undo_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self QTextEdit*
/// @param b bool
///
void q_textedit_redo_available(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, bool b)
///
void q_textedit_on_redo_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self QTextEdit*
/// @param format QTextCharFormat*
///
void q_textedit_current_char_format_changed(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QTextCharFormat* format)
///
void q_textedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self QTextEdit*
/// @param b bool
///
void q_textedit_copy_available(void* self, bool b);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, bool b)
///
void q_textedit_on_copy_available(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self QTextEdit*
///
void q_textedit_selection_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self)
///
void q_textedit_on_selection_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self QTextEdit*
///
void q_textedit_cursor_position_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self)
///
void q_textedit_on_cursor_position_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// @param self QTextEdit*
/// @param e QEvent*
///
bool q_textedit_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback bool func(QTextEdit* self, QEvent* e)
///
void q_textedit_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QEvent*
///
bool q_textedit_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// @param self QTextEdit*
/// @param e QTimerEvent*
///
void q_textedit_timer_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QTimerEvent* e)
///
void q_textedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QTimerEvent*
///
void q_textedit_qbase_timer_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// @param self QTextEdit*
/// @param e QKeyEvent*
///
void q_textedit_key_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QKeyEvent* e)
///
void q_textedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QKeyEvent*
///
void q_textedit_qbase_key_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// @param self QTextEdit*
/// @param e QKeyEvent*
///
void q_textedit_key_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QKeyEvent* e)
///
void q_textedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QKeyEvent*
///
void q_textedit_qbase_key_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// @param self QTextEdit*
/// @param e QResizeEvent*
///
void q_textedit_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QResizeEvent* e)
///
void q_textedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QResizeEvent*
///
void q_textedit_qbase_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// @param self QTextEdit*
/// @param e QPaintEvent*
///
void q_textedit_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QPaintEvent* e)
///
void q_textedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QPaintEvent*
///
void q_textedit_qbase_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMouseEvent* e)
///
void q_textedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_qbase_mouse_press_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMouseEvent* e)
///
void q_textedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_qbase_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMouseEvent* e)
///
void q_textedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_qbase_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_mouse_double_click_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMouseEvent* e)
///
void q_textedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QMouseEvent*
///
void q_textedit_qbase_mouse_double_click_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// @param self QTextEdit*
/// @param next bool
///
bool q_textedit_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback bool func(QTextEdit* self, bool next)
///
void q_textedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param next bool
///
bool q_textedit_qbase_focus_next_prev_child(void* self, bool next);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// @param self QTextEdit*
/// @param e QContextMenuEvent*
///
void q_textedit_context_menu_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QContextMenuEvent* e)
///
void q_textedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QContextMenuEvent*
///
void q_textedit_qbase_context_menu_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// @param self QTextEdit*
/// @param e QDragEnterEvent*
///
void q_textedit_drag_enter_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QDragEnterEvent* e)
///
void q_textedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QDragEnterEvent*
///
void q_textedit_qbase_drag_enter_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// @param self QTextEdit*
/// @param e QDragLeaveEvent*
///
void q_textedit_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QDragLeaveEvent* e)
///
void q_textedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QDragLeaveEvent*
///
void q_textedit_qbase_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// @param self QTextEdit*
/// @param e QDragMoveEvent*
///
void q_textedit_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QDragMoveEvent* e)
///
void q_textedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QDragMoveEvent*
///
void q_textedit_qbase_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// @param self QTextEdit*
/// @param e QDropEvent*
///
void q_textedit_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QDropEvent* e)
///
void q_textedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QDropEvent*
///
void q_textedit_qbase_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// @param self QTextEdit*
/// @param e QFocusEvent*
///
void q_textedit_focus_in_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QFocusEvent* e)
///
void q_textedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QFocusEvent*
///
void q_textedit_qbase_focus_in_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// @param self QTextEdit*
/// @param e QFocusEvent*
///
void q_textedit_focus_out_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QFocusEvent* e)
///
void q_textedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QFocusEvent*
///
void q_textedit_qbase_focus_out_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// @param self QTextEdit*
/// @param param1 QShowEvent*
///
void q_textedit_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QShowEvent* param1)
///
void q_textedit_on_show_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param param1 QShowEvent*
///
void q_textedit_qbase_show_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// @param self QTextEdit*
/// @param e QEvent*
///
void q_textedit_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QEvent* e)
///
void q_textedit_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QEvent*
///
void q_textedit_qbase_change_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// @param self QTextEdit*
/// @param e QWheelEvent*
///
void q_textedit_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QWheelEvent* e)
///
void q_textedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param e QWheelEvent*
///
void q_textedit_qbase_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// @param self QTextEdit*
///
QMimeData* q_textedit_create_mime_data_from_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback QMimeData* func()
///
void q_textedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Base class method implementation
///
/// @param self QTextEdit*
///
QMimeData* q_textedit_qbase_create_mime_data_from_selection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// @param self QTextEdit*
/// @param source QMimeData*
///
bool q_textedit_can_insert_from_mime_data(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback bool func(QTextEdit* self, QMimeData* source)
///
void q_textedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param source QMimeData*
///
bool q_textedit_qbase_can_insert_from_mime_data(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// @param self QTextEdit*
/// @param source QMimeData*
///
void q_textedit_insert_from_mime_data(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMimeData* source)
///
void q_textedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param source QMimeData*
///
void q_textedit_qbase_insert_from_mime_data(void* self, void* source);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// @param self QTextEdit*
/// @param param1 QInputMethodEvent*
///
void q_textedit_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QInputMethodEvent* param1)
///
void q_textedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param param1 QInputMethodEvent*
///
void q_textedit_qbase_input_method_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// @param self QTextEdit*
/// @param dx int
/// @param dy int
///
void q_textedit_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, int dx, int dy)
///
void q_textedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param dx int
/// @param dy int
///
void q_textedit_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// @param self QTextEdit*
/// @param cursor QTextCursor*
///
void q_textedit_do_set_text_cursor(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QTextCursor* cursor)
///
void q_textedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param cursor QTextCursor*
///
void q_textedit_qbase_do_set_text_cursor(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// @param self QTextEdit*
/// @param range float
///
void q_textedit_zoom_in_f(void* self, float range);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Allows for overriding the related default method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, float range)
///
void q_textedit_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Base class method implementation
///
/// @param self QTextEdit*
/// @param range float
///
void q_textedit_qbase_zoom_in_f(void* self, float range);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_textedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_textedit_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextEdit*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool q_textedit_find22(void* self, const char* exp, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self QTextEdit*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool q_textedit_find23(void* self, void* exp, int32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
const char* q_textedit_to_markdown1(void* self, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self QTextEdit*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void q_textedit_move_cursor2(void* self, int32_t operation, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self QTextEdit*
/// @param range int
///
void q_textedit_zoom_in1(void* self, int range);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self QTextEdit*
/// @param range int
///
void q_textedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_textedit_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QTextEdit*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_textedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QTextEdit*
///
QScrollBar* q_textedit_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QTextEdit*
/// @param scrollbar QScrollBar*
///
void q_textedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_textedit_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QTextEdit*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_textedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QTextEdit*
///
QScrollBar* q_textedit_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QTextEdit*
/// @param scrollbar QScrollBar*
///
void q_textedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QTextEdit*
/// @param widget QWidget*
///
void q_textedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QTextEdit*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_textedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QTextEdit*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_textedit_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QTextEdit*
/// @param widget QWidget*
///
void q_textedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QTextEdit*
///
QSize* q_textedit_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QTextEdit*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_textedit_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QTextEdit*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_textedit_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QTextEdit*
///
int32_t q_textedit_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QTextEdit*
/// @param frameStyle int
///
void q_textedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QTextEdit*
///
/// @return enum QFrame__Shape
///
int32_t q_textedit_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QTextEdit*
/// @param frameShape enum QFrame__Shape
///
void q_textedit_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QTextEdit*
///
/// @return enum QFrame__Shadow
///
int32_t q_textedit_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QTextEdit*
/// @param frameShadow enum QFrame__Shadow
///
void q_textedit_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QTextEdit*
/// @param lineWidth int
///
void q_textedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QTextEdit*
/// @param midLineWidth int
///
void q_textedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QTextEdit*
///
QRect* q_textedit_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QTextEdit*
/// @param frameRect QRect*
///
void q_textedit_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTextEdit*
///
uintptr_t q_textedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTextEdit*
///
void q_textedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTextEdit*
///
uintptr_t q_textedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTextEdit*
///
uintptr_t q_textedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTextEdit*
///
QStyle* q_textedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTextEdit*
/// @param style QStyle*
///
void q_textedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTextEdit*
///
bool q_textedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTextEdit*
///
bool q_textedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTextEdit*
///
bool q_textedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTextEdit*
///
/// @return enum Qt__WindowModality
///
int32_t q_textedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTextEdit*
/// @param windowModality enum Qt__WindowModality
///
void q_textedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTextEdit*
///
bool q_textedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTextEdit*
/// @param param1 QWidget*
///
bool q_textedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTextEdit*
/// @param enabled bool
///
void q_textedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTextEdit*
/// @param disabled bool
///
void q_textedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTextEdit*
/// @param windowModified bool
///
void q_textedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTextEdit*
///
QRect* q_textedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTextEdit*
///
const QRect* q_textedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTextEdit*
///
QRect* q_textedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTextEdit*
///
int32_t q_textedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTextEdit*
///
int32_t q_textedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTextEdit*
///
QPoint* q_textedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTextEdit*
///
QSize* q_textedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTextEdit*
///
QSize* q_textedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTextEdit*
///
int32_t q_textedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTextEdit*
///
int32_t q_textedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTextEdit*
///
QRect* q_textedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTextEdit*
///
QRect* q_textedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTextEdit*
///
QRegion* q_textedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTextEdit*
///
QSize* q_textedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTextEdit*
///
QSize* q_textedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTextEdit*
///
int32_t q_textedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTextEdit*
///
int32_t q_textedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTextEdit*
/// @param minimumSize QSize*
///
void q_textedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTextEdit*
/// @param minw int
/// @param minh int
///
void q_textedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTextEdit*
/// @param maximumSize QSize*
///
void q_textedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTextEdit*
/// @param maxw int
/// @param maxh int
///
void q_textedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTextEdit*
/// @param minw int
///
void q_textedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTextEdit*
/// @param minh int
///
void q_textedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTextEdit*
/// @param maxw int
///
void q_textedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTextEdit*
/// @param maxh int
///
void q_textedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTextEdit*
///
QSize* q_textedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTextEdit*
/// @param sizeIncrement QSize*
///
void q_textedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTextEdit*
/// @param w int
/// @param h int
///
void q_textedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTextEdit*
///
QSize* q_textedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTextEdit*
/// @param baseSize QSize*
///
void q_textedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTextEdit*
/// @param basew int
/// @param baseh int
///
void q_textedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTextEdit*
/// @param fixedSize QSize*
///
void q_textedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTextEdit*
/// @param w int
/// @param h int
///
void q_textedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTextEdit*
/// @param w int
///
void q_textedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTextEdit*
/// @param h int
///
void q_textedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTextEdit*
/// @param param1 QPointF*
///
QPointF* q_textedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTextEdit*
/// @param param1 QPoint*
///
QPoint* q_textedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTextEdit*
/// @param param1 QPointF*
///
QPointF* q_textedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTextEdit*
/// @param param1 QPoint*
///
QPoint* q_textedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTextEdit*
/// @param param1 QPointF*
///
QPointF* q_textedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTextEdit*
/// @param param1 QPoint*
///
QPoint* q_textedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTextEdit*
/// @param param1 QPointF*
///
QPointF* q_textedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTextEdit*
/// @param param1 QPoint*
///
QPoint* q_textedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_textedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_textedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_textedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_textedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTextEdit*
///
const QPalette* q_textedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTextEdit*
/// @param palette QPalette*
///
void q_textedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTextEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_textedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_textedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTextEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_textedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t q_textedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTextEdit*
///
const QFont* q_textedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTextEdit*
/// @param font QFont*
///
void q_textedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTextEdit*
///
QFontMetrics* q_textedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTextEdit*
///
QFontInfo* q_textedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTextEdit*
///
QCursor* q_textedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTextEdit*
/// @param cursor QCursor*
///
void q_textedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTextEdit*
///
void q_textedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTextEdit*
/// @param enable bool
///
void q_textedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTextEdit*
///
bool q_textedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTextEdit*
///
bool q_textedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTextEdit*
/// @param enable bool
///
void q_textedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTextEdit*
///
bool q_textedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTextEdit*
/// @param mask QBitmap*
///
void q_textedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTextEdit*
/// @param mask QRegion*
///
void q_textedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTextEdit*
///
QRegion* q_textedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTextEdit*
///
void q_textedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param target QPaintDevice*
///
void q_textedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param painter QPainter*
///
void q_textedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTextEdit*
///
QPixmap* q_textedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTextEdit*
///
QGraphicsEffect* q_textedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTextEdit*
/// @param effect QGraphicsEffect*
///
void q_textedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTextEdit*
/// @param type enum Qt__GestureType
///
void q_textedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTextEdit*
/// @param type enum Qt__GestureType
///
void q_textedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTextEdit*
/// @param windowTitle const char*
///
void q_textedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTextEdit*
/// @param styleSheet const char*
///
void q_textedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTextEdit*
/// @param icon QIcon*
///
void q_textedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTextEdit*
///
QIcon* q_textedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTextEdit*
/// @param windowIconText const char*
///
void q_textedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTextEdit*
/// @param windowRole const char*
///
void q_textedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTextEdit*
/// @param filePath const char*
///
void q_textedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTextEdit*
/// @param level double
///
void q_textedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTextEdit*
///
double q_textedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTextEdit*
///
bool q_textedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTextEdit*
/// @param toolTip const char*
///
void q_textedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTextEdit*
/// @param msec int
///
void q_textedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTextEdit*
///
int32_t q_textedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTextEdit*
/// @param statusTip const char*
///
void q_textedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTextEdit*
/// @param whatsThis const char*
///
void q_textedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTextEdit*
/// @param name const char*
///
void q_textedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTextEdit*
/// @param description const char*
///
void q_textedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTextEdit*
/// @param direction enum Qt__LayoutDirection
///
void q_textedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTextEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_textedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTextEdit*
///
void q_textedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTextEdit*
/// @param locale QLocale*
///
void q_textedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTextEdit*
///
QLocale* q_textedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTextEdit*
///
void q_textedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTextEdit*
///
bool q_textedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTextEdit*
///
bool q_textedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTextEdit*
///
void q_textedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTextEdit*
///
bool q_textedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTextEdit*
///
void q_textedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTextEdit*
///
void q_textedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTextEdit*
/// @param reason enum Qt__FocusReason
///
void q_textedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTextEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_textedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTextEdit*
/// @param policy enum Qt__FocusPolicy
///
void q_textedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTextEdit*
///
bool q_textedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_textedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTextEdit*
/// @param focusProxy QWidget*
///
void q_textedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTextEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_textedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTextEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_textedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTextEdit*
///
void q_textedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTextEdit*
/// @param param1 QCursor*
///
void q_textedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTextEdit*
///
void q_textedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTextEdit*
///
void q_textedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTextEdit*
///
void q_textedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTextEdit*
/// @param key QKeySequence*
///
int32_t q_textedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTextEdit*
/// @param id int
///
void q_textedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTextEdit*
/// @param id int
///
void q_textedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTextEdit*
/// @param id int
///
void q_textedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_textedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_textedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTextEdit*
///
bool q_textedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTextEdit*
/// @param enable bool
///
void q_textedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTextEdit*
///
QGraphicsProxyWidget* q_textedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextEdit*
///
void q_textedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextEdit*
///
void q_textedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_textedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextEdit*
/// @param param1 QRect*
///
void q_textedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTextEdit*
/// @param param1 QRegion*
///
void q_textedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_textedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextEdit*
/// @param param1 QRect*
///
void q_textedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTextEdit*
/// @param param1 QRegion*
///
void q_textedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTextEdit*
/// @param hidden bool
///
void q_textedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTextEdit*
///
void q_textedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTextEdit*
///
void q_textedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTextEdit*
///
void q_textedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTextEdit*
///
void q_textedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTextEdit*
///
void q_textedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTextEdit*
///
void q_textedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTextEdit*
///
bool q_textedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTextEdit*
///
void q_textedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTextEdit*
///
void q_textedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTextEdit*
/// @param param1 QWidget*
///
void q_textedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTextEdit*
/// @param x int
/// @param y int
///
void q_textedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTextEdit*
/// @param param1 QPoint*
///
void q_textedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTextEdit*
/// @param w int
/// @param h int
///
void q_textedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTextEdit*
/// @param param1 QSize*
///
void q_textedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_textedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTextEdit*
/// @param geometry QRect*
///
void q_textedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextEdit*
///
char* q_textedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTextEdit*
/// @param geometry const char*
///
bool q_textedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTextEdit*
///
void q_textedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTextEdit*
///
bool q_textedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTextEdit*
/// @param param1 QWidget*
///
bool q_textedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTextEdit*
///
bool q_textedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTextEdit*
///
bool q_textedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTextEdit*
///
bool q_textedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTextEdit*
///
bool q_textedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTextEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_textedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTextEdit*
/// @param state flag of enum Qt__WindowState
///
void q_textedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTextEdit*
/// @param state flag of enum Qt__WindowState
///
void q_textedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTextEdit*
///
QSizePolicy* q_textedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTextEdit*
/// @param sizePolicy QSizePolicy*
///
void q_textedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTextEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_textedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTextEdit*
///
QRegion* q_textedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_textedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTextEdit*
/// @param margins QMargins*
///
void q_textedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTextEdit*
///
QMargins* q_textedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTextEdit*
///
QRect* q_textedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTextEdit*
///
QLayout* q_textedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTextEdit*
/// @param layout QLayout*
///
void q_textedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTextEdit*
///
void q_textedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTextEdit*
/// @param parent QWidget*
///
void q_textedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTextEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_textedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTextEdit*
/// @param dx int
/// @param dy int
///
void q_textedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTextEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_textedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTextEdit*
///
bool q_textedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTextEdit*
/// @param on bool
///
void q_textedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextEdit*
/// @param action QAction*
///
void q_textedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTextEdit*
/// @param actions libqt_list of QAction*
///
void q_textedit_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTextEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_textedit_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTextEdit*
/// @param before QAction*
/// @param action QAction*
///
void q_textedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTextEdit*
/// @param action QAction*
///
void q_textedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTextEdit*
///
/// @return libqt_list of QAction*
///
libqt_list q_textedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextEdit*
/// @param text const char*
///
QAction* q_textedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_textedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_textedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTextEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_textedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTextEdit*
///
QWidget* q_textedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTextEdit*
/// @param type flag of enum Qt__WindowType
///
void q_textedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTextEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_textedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTextEdit*
/// @param param1 enum Qt__WindowType
///
void q_textedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTextEdit*
/// @param type flag of enum Qt__WindowType
///
void q_textedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTextEdit*
///
/// @return enum Qt__WindowType
///
int32_t q_textedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTextEdit*
/// @param x int
/// @param y int
///
QWidget* q_textedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTextEdit*
/// @param p QPoint*
///
QWidget* q_textedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTextEdit*
/// @param p QPointF*
///
QWidget* q_textedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void q_textedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_textedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTextEdit*
///
void q_textedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTextEdit*
/// @param child QWidget*
///
bool q_textedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTextEdit*
///
bool q_textedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTextEdit*
/// @param enabled bool
///
void q_textedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTextEdit*
///
QBackingStore* q_textedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTextEdit*
///
QWindow* q_textedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTextEdit*
///
QScreen* q_textedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTextEdit*
/// @param screen QScreen*
///
void q_textedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_textedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTextEdit*
/// @param title const char*
///
void q_textedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, const char* title)
///
void q_textedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTextEdit*
/// @param icon QIcon*
///
void q_textedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QIcon* icon)
///
void q_textedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTextEdit*
/// @param iconText const char*
///
void q_textedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, const char* iconText)
///
void q_textedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTextEdit*
/// @param pos QPoint*
///
void q_textedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QPoint* pos)
///
void q_textedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTextEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_textedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTextEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_textedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_textedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_textedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_textedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_textedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_textedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_textedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTextEdit*
/// @param rectangle QRect*
///
QPixmap* q_textedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTextEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_textedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTextEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_textedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTextEdit*
/// @param id int
/// @param enable bool
///
void q_textedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTextEdit*
/// @param id int
/// @param enable bool
///
void q_textedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTextEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_textedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTextEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_textedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_textedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_textedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextEdit*
///
const char* q_textedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextEdit*
/// @param name char*
///
void q_textedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTextEdit*
///
bool q_textedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTextEdit*
///
bool q_textedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTextEdit*
///
bool q_textedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTextEdit*
///
bool q_textedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextEdit*
/// @param b bool
///
bool q_textedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTextEdit*
///
QThread* q_textedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextEdit*
/// @param thread QThread*
///
bool q_textedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextEdit*
/// @param interval int
///
int32_t q_textedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextEdit*
/// @param id int
///
void q_textedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextEdit*
/// @param id enum Qt__TimerId
///
void q_textedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTextEdit*
///
/// @return libqt_list of QObject*
///
libqt_list q_textedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextEdit*
/// @param filterObj QObject*
///
void q_textedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextEdit*
/// @param obj QObject*
///
void q_textedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_textedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_textedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_textedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_textedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTextEdit*
///
void q_textedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTextEdit*
///
void q_textedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextEdit*
/// @param name const char*
/// @param value QVariant*
///
bool q_textedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTextEdit*
/// @param name const char*
///
QVariant* q_textedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextEdit*
///
const char** q_textedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextEdit*
///
QBindingStorage* q_textedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextEdit*
///
const QBindingStorage* q_textedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextEdit*
///
void q_textedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self)
///
void q_textedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTextEdit*
///
QObject* q_textedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTextEdit*
/// @param classname const char*
///
bool q_textedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextEdit*
///
void q_textedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextEdit*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_textedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_textedit_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_textedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_textedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextEdit*
/// @param param1 QObject*
///
void q_textedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QObject* param1)
///
void q_textedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTextEdit*
///
bool q_textedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTextEdit*
///
int32_t q_textedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTextEdit*
///
int32_t q_textedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTextEdit*
///
int32_t q_textedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTextEdit*
///
int32_t q_textedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTextEdit*
///
int32_t q_textedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTextEdit*
///
int32_t q_textedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTextEdit*
///
double q_textedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTextEdit*
///
double q_textedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTextEdit*
///
int32_t q_textedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTextEdit*
///
int32_t q_textedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_textedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_textedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
QSize* q_textedit_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
QSize* q_textedit_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QSize* func()
///
void q_textedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
QSize* q_textedit_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
QSize* q_textedit_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QSize* func()
///
void q_textedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param viewport QWidget*
///
void q_textedit_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param viewport QWidget*
///
void q_textedit_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QWidget* viewport)
///
void q_textedit_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_textedit_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool q_textedit_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback bool func(QTextEdit* self, QObject* param1, QEvent* param2)
///
void q_textedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 QEvent*
///
bool q_textedit_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 QEvent*
///
bool q_textedit_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback bool func(QTextEdit* self, QEvent* param1)
///
void q_textedit_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
QSize* q_textedit_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
QSize* q_textedit_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QSize* func()
///
void q_textedit_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param option QStyleOptionFrame*
///
void q_textedit_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param option QStyleOptionFrame*
///
void q_textedit_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QStyleOptionFrame* option)
///
void q_textedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
int32_t q_textedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
int32_t q_textedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback int32_t func()
///
void q_textedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param visible bool
///
void q_textedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param visible bool
///
void q_textedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, bool visible)
///
void q_textedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 int
///
int32_t q_textedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 int
///
int32_t q_textedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback int32_t func(QTextEdit* self, int param1)
///
void q_textedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
bool q_textedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
bool q_textedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback bool func()
///
void q_textedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
QPaintEngine* q_textedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
QPaintEngine* q_textedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QPaintEngine* func()
///
void q_textedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QEnterEvent*
///
void q_textedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QEnterEvent*
///
void q_textedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QEnterEvent* event)
///
void q_textedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QEvent*
///
void q_textedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QEvent*
///
void q_textedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QEvent* event)
///
void q_textedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QMoveEvent*
///
void q_textedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QMoveEvent*
///
void q_textedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMoveEvent* event)
///
void q_textedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QCloseEvent*
///
void q_textedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QCloseEvent*
///
void q_textedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QCloseEvent* event)
///
void q_textedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QTabletEvent*
///
void q_textedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QTabletEvent*
///
void q_textedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QTabletEvent* event)
///
void q_textedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QActionEvent*
///
void q_textedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QActionEvent*
///
void q_textedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QActionEvent* event)
///
void q_textedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QHideEvent*
///
void q_textedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QHideEvent*
///
void q_textedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QHideEvent* event)
///
void q_textedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_textedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_textedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback bool func(QTextEdit* self, const char* eventType, void* message, intptr_t* result)
///
void q_textedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_textedit_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_textedit_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback int32_t func(QTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_textedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param painter QPainter*
///
void q_textedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param painter QPainter*
///
void q_textedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QPainter* painter)
///
void q_textedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param offset QPoint*
///
QPaintDevice* q_textedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param offset QPoint*
///
QPaintDevice* q_textedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QPaintDevice* func(QTextEdit* self, QPoint* offset)
///
void q_textedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
QPainter* q_textedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
QPainter* q_textedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QPainter* func()
///
void q_textedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QChildEvent*
///
void q_textedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QChildEvent*
///
void q_textedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QChildEvent* event)
///
void q_textedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param event QEvent*
///
void q_textedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param event QEvent*
///
void q_textedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QEvent* event)
///
void q_textedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param signal QMetaMethod*
///
void q_textedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param signal QMetaMethod*
///
void q_textedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMetaMethod* signal)
///
void q_textedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param signal QMetaMethod*
///
void q_textedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param signal QMetaMethod*
///
void q_textedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QMetaMethod* signal)
///
void q_textedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_textedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_textedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, int left, int top, int right, int bottom)
///
void q_textedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
QMargins* q_textedit_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
QMargins* q_textedit_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QMargins* func()
///
void q_textedit_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 QPainter*
///
void q_textedit_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param param1 QPainter*
///
void q_textedit_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, QPainter* param1)
///
void q_textedit_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
void q_textedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
void q_textedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func()
///
void q_textedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
void q_textedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
void q_textedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func()
///
void q_textedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
void q_textedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
void q_textedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback void func()
///
void q_textedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
bool q_textedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
bool q_textedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback bool func()
///
void q_textedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
bool q_textedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
bool q_textedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback bool func()
///
void q_textedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
QObject* q_textedit_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
QObject* q_textedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback QObject* func()
///
void q_textedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
///
int32_t q_textedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
///
int32_t q_textedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback int32_t func()
///
void q_textedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param signal const char*
///
int32_t q_textedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param signal const char*
///
int32_t q_textedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback int32_t func(QTextEdit* self, const char* signal)
///
void q_textedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param signal QMetaMethod*
///
bool q_textedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param signal QMetaMethod*
///
bool q_textedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback bool func(QTextEdit* self, QMetaMethod* signal)
///
void q_textedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_textedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_textedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextEdit*
/// @param callback double func(QTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_textedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextEdit*
/// @param callback void func(QTextEdit* self, const char* objectName)
///
void q_textedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dtor.QTextEdit)
///
/// Delete this object from C++ memory.
///
/// @param self QTextEdit*
///
void q_textedit_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit-extraselection.html)

/// q_textedit__extraselection_new constructs a new QTextEdit::ExtraSelection object.
///
/// @param param1 QTextEdit__ExtraSelection*
///
QTextEdit__ExtraSelection* q_textedit__extraselection_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit-extraselection.html#cursor-var)
///
/// @param self QTextEdit__ExtraSelection*
///
QTextCursor* q_textedit__extraselection_cursor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit-extraselection.html#cursor-var)
///
/// @param self QTextEdit__ExtraSelection*
/// @param cursor QTextCursor*
///
void q_textedit__extraselection_set_cursor(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit-extraselection.html#format-var)
///
/// @param self QTextEdit__ExtraSelection*
///
QTextCharFormat* q_textedit__extraselection_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit-extraselection.html#format-var)
///
/// @param self QTextEdit__ExtraSelection*
/// @param format QTextCharFormat*
///
void q_textedit__extraselection_set_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit-extraselection.html#operator-eq)
///
/// @param self QTextEdit__ExtraSelection*
/// @param param1 QTextEdit__ExtraSelection*
///
void q_textedit__extraselection_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QTextEdit__ExtraSelection*
///
void q_textedit__extraselection_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#public-types)

typedef enum {
    QTEXTEDIT_LINEWRAPMODE_NOWRAP = 0,
    QTEXTEDIT_LINEWRAPMODE_WIDGETWIDTH = 1,
    QTEXTEDIT_LINEWRAPMODE_FIXEDPIXELWIDTH = 2,
    QTEXTEDIT_LINEWRAPMODE_FIXEDCOLUMNWIDTH = 3
} QTextEdit__LineWrapMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#public-types)

typedef enum {
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTONONE = 0,
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTOBULLETLIST = 1,
    QTEXTEDIT_AUTOFORMATTINGFLAG_AUTOALL = -1
} QTextEdit__AutoFormattingFlag;

#endif
