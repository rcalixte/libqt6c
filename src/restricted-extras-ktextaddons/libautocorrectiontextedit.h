#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONTEXTEDIT_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBAUTOCORRECTIONTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)

/// k_textautocorrectionwidgets__autocorrectiontextedit_new constructs a new TextAutoCorrectionWidgets::AutoCorrectionTextEdit object.
///
/// @param parent QWidget*
///
TextAutoCorrectionWidgets__AutoCorrectionTextEdit* k_textautocorrectionwidgets__autocorrectiontextedit_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)

/// k_textautocorrectionwidgets__autocorrectiontextedit_new2 constructs a new TextAutoCorrectionWidgets::AutoCorrectionTextEdit object.
///
TextAutoCorrectionWidgets__AutoCorrectionTextEdit* k_textautocorrectionwidgets__autocorrectiontextedit_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const QMetaObject* k_textautocorrectionwidgets__autocorrectiontextedit_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback const QMetaObject* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_meta_object` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_meta_object k_textautocorrectionwidgets__autocorrectiontextedit_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const QMetaObject* k_textautocorrectionwidgets__autocorrectiontextedit_super_meta_object(void* self);

/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 const char*
///
void* k_textautocorrectionwidgets__autocorrectiontextedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void* func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_metacast` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_metacast k_textautocorrectionwidgets__autocorrectiontextedit_super_metacast

/// Base class method implementation
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 const char*
///
void* k_textautocorrectionwidgets__autocorrectiontextedit_super_metacast(void* self, const char* param1);

/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_metacall` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_metacall k_textautocorrectionwidgets__autocorrectiontextedit_super_metacall

/// Base class method implementation
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
TextAutoCorrectionCore__AutoCorrection* k_textautocorrectionwidgets__autocorrectiontextedit_autocorrection(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param autocorrect TextAutoCorrectionCore__AutoCorrection*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_autocorrection(void* self, void* autocorrect);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param language const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_autocorrection_language(void* self, const char* language);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_key_press_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_key_press_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_key_press_event k_textautocorrectionwidgets__autocorrectiontextedit_super_key_press_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_key_press_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_tr3(const char* s, const char* c, int n);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param document QTextDocument*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_document(void* self, void* document);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QTextDocument* k_textautocorrectionwidgets__autocorrectiontextedit_document(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param placeholderText const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_placeholder_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param cursor QTextCursor*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QTextCursor* k_textautocorrectionwidgets__autocorrectiontextedit_text_cursor(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_read_only(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param ro bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_read_only(void* self, bool ro);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_text_interaction_flags(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
double k_textautocorrectionwidgets__autocorrectiontextedit_font_point_size(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_font_family(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_font_weight(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_font_underline(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_font_italic(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QColor* k_textautocorrectionwidgets__autocorrectiontextedit_text_color(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QColor* k_textautocorrectionwidgets__autocorrectiontextedit_text_background_color(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QFont* k_textautocorrectionwidgets__autocorrectiontextedit_current_font(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_alignment(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param modifier QTextCharFormat*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_merge_current_char_format(void* self, void* modifier);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param format QTextCharFormat*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_current_char_format(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QTextCharFormat* k_textautocorrectionwidgets__autocorrectiontextedit_current_char_format(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return flag of enum QTextEdit__AutoFormattingFlag
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_auto_formatting(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param features flag of enum QTextEdit__AutoFormattingFlag
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_auto_formatting(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_tab_changes_focus(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param b bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_tab_changes_focus(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param title const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_document_title(void* self, const char* title);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_document_title(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_undo_redo_enabled(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum QTextEdit__LineWrapMode
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_line_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param mode enum QTextEdit__LineWrapMode
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_line_wrap_column_or_width(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param w int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_line_wrap_column_or_width(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum QTextOption__WrapMode
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_word_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param policy enum QTextOption__WrapMode
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param exp const char*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_find(void* self, const char* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param exp QRegularExpression*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_find2(void* self, void* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_plain_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_html(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_markdown(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_ensure_cursor_visible(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QMenu* k_textautocorrectionwidgets__autocorrectiontextedit_create_standard_context_menu(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param position QPoint*
///
QMenu* k_textautocorrectionwidgets__autocorrectiontextedit_create_standard_context_menu2(void* self, void* position);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param pos QPoint*
///
QTextCursor* k_textautocorrectionwidgets__autocorrectiontextedit_cursor_for_position(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param cursor QTextCursor*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_cursor_rect(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_cursor_rect2(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param pos QPoint*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_anchor_at(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_overwrite_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param overwrite bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
double k_textautocorrectionwidgets__autocorrectiontextedit_tab_stop_distance(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param distance double
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_tab_stop_distance(void* self, double distance);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_cursor_width(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param width int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_cursor_width(void* self, int width);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_accept_rich_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param accept bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_accept_rich_text(void* self, bool accept);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param selections libqt_list of QTextEdit__ExtraSelection*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return libqt_list of QTextEdit__ExtraSelection*
///
libqt_list k_textautocorrectionwidgets__autocorrectiontextedit_extra_selections(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param operation enum QTextCursor__MoveOperation
///
void k_textautocorrectionwidgets__autocorrectiontextedit_move_cursor(void* self, int32_t operation);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_can_paste(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param printer QPagedPaintDevice*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_print(void* self, void* printer);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_input_method_query2(void* self, int32_t query, void* argument);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param s double
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_point_size(void* self, double s);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param fontFamily const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_family(void* self, const char* fontFamily);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param w int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_weight(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param b bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_underline(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param b bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_font_italic(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param c QColor*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param c QColor*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_text_background_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param f QFont*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_current_font(void* self, void* f);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param a flag of enum Qt__AlignmentFlag
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_alignment(void* self, int32_t a);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param markdown const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_markdown(void* self, const char* markdown);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_cut(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_copy(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_paste(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_undo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_redo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_clear(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_select_all(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_insert_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_insert_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_append(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param name const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_scroll_to_anchor(void* self, const char* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_in(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_out(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_text_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param b bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_undo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool b)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param b bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_redo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool b)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param format QTextCharFormat*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_current_char_format_changed(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTextCharFormat* format)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param b bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_copy_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool b)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_selection_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_cursor_position_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_find22(void* self, const char* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_find23(void* self, void* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_to_markdown1(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void k_textautocorrectionwidgets__autocorrectiontextedit_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param range int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_in1(void* self, int range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param range int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QScrollBar* k_textautocorrectionwidgets__autocorrectiontextedit_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param scrollbar QScrollBar*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QScrollBar* k_textautocorrectionwidgets__autocorrectiontextedit_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param scrollbar QScrollBar*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param widget QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_textautocorrectionwidgets__autocorrectiontextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list k_textautocorrectionwidgets__autocorrectiontextedit_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param widget QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param frameStyle int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum QFrame__Shape
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param frameShape enum QFrame__Shape
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum QFrame__Shadow
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param frameShadow enum QFrame__Shadow
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param lineWidth int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param midLineWidth int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param frameRect QRect*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
uintptr_t k_textautocorrectionwidgets__autocorrectiontextedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
uintptr_t k_textautocorrectionwidgets__autocorrectiontextedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
uintptr_t k_textautocorrectionwidgets__autocorrectiontextedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QStyle* k_textautocorrectionwidgets__autocorrectiontextedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param style QStyle*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum Qt__WindowModality
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param windowModality enum Qt__WindowModality
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QWidget*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param enabled bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param disabled bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param windowModified bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const QRect* k_textautocorrectionwidgets__autocorrectiontextedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRegion* k_textautocorrectionwidgets__autocorrectiontextedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param minimumSize QSize*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param minw int
/// @param minh int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param maximumSize QSize*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param maxw int
/// @param maxh int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param minw int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param minh int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param maxw int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param maxh int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param sizeIncrement QSize*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param baseSize QSize*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param basew int
/// @param baseh int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param fixedSize QSize*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param w int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textautocorrectionwidgets__autocorrectiontextedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textautocorrectionwidgets__autocorrectiontextedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const QPalette* k_textautocorrectionwidgets__autocorrectiontextedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param palette QPalette*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const QFont* k_textautocorrectionwidgets__autocorrectiontextedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param font QFont*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QFontMetrics* k_textautocorrectionwidgets__autocorrectiontextedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QFontInfo* k_textautocorrectionwidgets__autocorrectiontextedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QCursor* k_textautocorrectionwidgets__autocorrectiontextedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param cursor QCursor*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param mask QBitmap*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param mask QRegion*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRegion* k_textautocorrectionwidgets__autocorrectiontextedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param target QPaintDevice*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param painter QPainter*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QPixmap* k_textautocorrectionwidgets__autocorrectiontextedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QGraphicsEffect* k_textautocorrectionwidgets__autocorrectiontextedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param effect QGraphicsEffect*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param type enum Qt__GestureType
///
void k_textautocorrectionwidgets__autocorrectiontextedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param type enum Qt__GestureType
///
void k_textautocorrectionwidgets__autocorrectiontextedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param windowTitle const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param styleSheet const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param icon QIcon*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QIcon* k_textautocorrectionwidgets__autocorrectiontextedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param windowIconText const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param windowRole const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param filePath const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param level double
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
double k_textautocorrectionwidgets__autocorrectiontextedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param toolTip const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param msec int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param statusTip const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param whatsThis const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param name const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param description const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param direction enum Qt__LayoutDirection
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param locale QLocale*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QLocale* k_textautocorrectionwidgets__autocorrectiontextedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param reason enum Qt__FocusReason
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param policy enum Qt__FocusPolicy
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param focusProxy QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QCursor*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param key QKeySequence*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QGraphicsProxyWidget* k_textautocorrectionwidgets__autocorrectiontextedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QRect*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QRegion*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QRect*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QRegion*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param hidden bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param x int
/// @param y int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPoint*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QSize*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param geometry QRect*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
char* k_textautocorrectionwidgets__autocorrectiontextedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param geometry char*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QWidget*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_textautocorrectionwidgets__autocorrectiontextedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSizePolicy* k_textautocorrectionwidgets__autocorrectiontextedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param sizePolicy QSizePolicy*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRegion* k_textautocorrectionwidgets__autocorrectiontextedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param margins QMargins*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QMargins* k_textautocorrectionwidgets__autocorrectiontextedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QRect* k_textautocorrectionwidgets__autocorrectiontextedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QLayout* k_textautocorrectionwidgets__autocorrectiontextedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param layout QLayout*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param parent QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param dx int
/// @param dy int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param on bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param action QAction*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param actions libqt_list of QAction*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param before QAction*
/// @param action QAction*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param action QAction*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return libqt_list of QAction*
///
libqt_list k_textautocorrectionwidgets__autocorrectiontextedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
///
QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textautocorrectionwidgets__autocorrectiontextedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_textautocorrectionwidgets__autocorrectiontextedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return enum Qt__WindowType
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param x int
/// @param y int
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param p QPoint*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param p QPointF*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param child QWidget*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param enabled bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QBackingStore* k_textautocorrectionwidgets__autocorrectiontextedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QWindow* k_textautocorrectionwidgets__autocorrectiontextedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QScreen* k_textautocorrectionwidgets__autocorrectiontextedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param screen QScreen*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param title const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* title)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param icon QIcon*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QIcon* icon)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param iconText const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* iconText)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param pos QPoint*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPoint* pos)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textautocorrectionwidgets__autocorrectiontextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param rectangle QRect*
///
QPixmap* k_textautocorrectionwidgets__autocorrectiontextedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textautocorrectionwidgets__autocorrectiontextedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param id int
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param id int
/// @param enable bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textautocorrectionwidgets__autocorrectiontextedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char* k_textautocorrectionwidgets__autocorrectiontextedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param name const char*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param b bool
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QThread* k_textautocorrectionwidgets__autocorrectiontextedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param thread QThread*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param interval int
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param time int64_t of nanoseconds
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param id int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param id enum Qt__TimerId
///
void k_textautocorrectionwidgets__autocorrectiontextedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
/// @return libqt_list of QObject*
///
libqt_list k_textautocorrectionwidgets__autocorrectiontextedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param filterObj QObject*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param obj QObject*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param receiver QObject*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param name const char*
/// @param value QVariant*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param name const char*
///
QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const char** k_textautocorrectionwidgets__autocorrectiontextedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QBindingStorage* k_textautocorrectionwidgets__autocorrectiontextedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
const QBindingStorage* k_textautocorrectionwidgets__autocorrectiontextedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QObject* k_textautocorrectionwidgets__autocorrectiontextedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param classname const char*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textautocorrectionwidgets__autocorrectiontextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal const char*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QObject*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QObject* param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
double k_textautocorrectionwidgets__autocorrectiontextedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
double k_textautocorrectionwidgets__autocorrectiontextedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textautocorrectionwidgets__autocorrectiontextedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_load_resource(void* self, int type, void* name);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_load_resource` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_load_resource k_textautocorrectionwidgets__autocorrectiontextedit_super_load_resource

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_super_load_resource(void* self, int type, void* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QVariant* func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int type, QUrl* name)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_input_method_query(void* self, int32_t property);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_query` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_input_method_query k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_query

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_query(void* self, int32_t property);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QVariant* func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, enum Qt__InputMethodQuery property)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QEvent*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_event k_textautocorrectionwidgets__autocorrectiontextedit_super_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QEvent*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QTimerEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_timer_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_timer_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_timer_event k_textautocorrectionwidgets__autocorrectiontextedit_super_timer_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QTimerEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTimerEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_key_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_key_release_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_key_release_event k_textautocorrectionwidgets__autocorrectiontextedit_super_key_release_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QKeyEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QKeyEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QResizeEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_resize_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_resize_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_resize_event k_textautocorrectionwidgets__autocorrectiontextedit_super_resize_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QResizeEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QResizeEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QPaintEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_paint_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_paint_event k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QPaintEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPaintEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_press_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_mouse_press_event k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_press_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_move_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_mouse_move_event k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_move_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_release_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_mouse_release_event k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_release_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_mouse_double_click_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_double_click_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_mouse_double_click_event k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_double_click_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QMouseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMouseEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param next bool
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_prev_child` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_focus_next_prev_child k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_prev_child

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param next bool
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool next)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QContextMenuEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_context_menu_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_context_menu_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_context_menu_event k_textautocorrectionwidgets__autocorrectiontextedit_super_context_menu_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QContextMenuEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_context_menu_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QContextMenuEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDragEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_drag_enter_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_enter_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_drag_enter_event k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_enter_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDragEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragEnterEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDragLeaveEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_drag_leave_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_leave_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_drag_leave_event k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_leave_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDragLeaveEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragLeaveEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDragMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_drag_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_move_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_drag_move_event k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_move_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDragMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDragMoveEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDropEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_drop_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_drop_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_drop_event k_textautocorrectionwidgets__autocorrectiontextedit_super_drop_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QDropEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QDropEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_focus_in_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_in_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_focus_in_event k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_in_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_in_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_focus_out_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_out_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_focus_out_event k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_out_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QFocusEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QFocusEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QShowEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_show_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_show_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_show_event k_textautocorrectionwidgets__autocorrectiontextedit_super_show_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QShowEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QShowEvent* param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_change_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_change_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_change_event k_textautocorrectionwidgets__autocorrectiontextedit_super_change_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QWheelEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_wheel_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_wheel_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_wheel_event k_textautocorrectionwidgets__autocorrectiontextedit_super_wheel_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param e QWheelEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWheelEvent* e)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QMimeData* k_textautocorrectionwidgets__autocorrectiontextedit_create_mime_data_from_selection(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_create_mime_data_from_selection` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_create_mime_data_from_selection k_textautocorrectionwidgets__autocorrectiontextedit_super_create_mime_data_from_selection

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QMimeData* k_textautocorrectionwidgets__autocorrectiontextedit_super_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QMimeData* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param source QMimeData*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_can_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_can_insert_from_mime_data` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_can_insert_from_mime_data k_textautocorrectionwidgets__autocorrectiontextedit_super_can_insert_from_mime_data

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param source QMimeData*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMimeData* source)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param source QMimeData*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_insert_from_mime_data` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_insert_from_mime_data k_textautocorrectionwidgets__autocorrectiontextedit_super_insert_from_mime_data

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param source QMimeData*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMimeData* source)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_input_method_event k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QInputMethodEvent* param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param dx int
/// @param dy int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_scroll_contents_by(void* self, int dx, int dy);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_scroll_contents_by` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_scroll_contents_by k_textautocorrectionwidgets__autocorrectiontextedit_super_scroll_contents_by

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param dx int
/// @param dy int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int dx, int dy)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param cursor QTextCursor*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_do_set_text_cursor(void* self, void* cursor);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_do_set_text_cursor` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_do_set_text_cursor k_textautocorrectionwidgets__autocorrectiontextedit_super_do_set_text_cursor

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param cursor QTextCursor*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTextCursor* cursor)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_minimum_size_hint` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_minimum_size_hint k_textautocorrectionwidgets__autocorrectiontextedit_super_minimum_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_super_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QSize* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_size_hint` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_size_hint k_textautocorrectionwidgets__autocorrectiontextedit_super_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_super_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QSize* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param viewport QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_setup_viewport(void* self, void* viewport);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_setup_viewport` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_setup_viewport k_textautocorrectionwidgets__autocorrectiontextedit_super_setup_viewport

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param viewport QWidget*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QWidget* viewport)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_event_filter(void* self, void* param1, void* param2);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_event_filter` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_event_filter k_textautocorrectionwidgets__autocorrectiontextedit_super_event_filter

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QObject* param1, QEvent* param2)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QEvent*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_viewport_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_viewport_event k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_event

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QEvent*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_viewport_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_size_hint` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_viewport_size_hint k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QSize* k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QSize* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param option QStyleOptionFrame*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_init_style_option` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_init_style_option k_textautocorrectionwidgets__autocorrectiontextedit_super_init_style_option

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param option QStyleOptionFrame*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QStyleOptionFrame* option)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_dev_type` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_dev_type k_textautocorrectionwidgets__autocorrectiontextedit_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback int32_t func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param visible bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_set_visible` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_set_visible k_textautocorrectionwidgets__autocorrectiontextedit_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param visible bool
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, bool visible)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 int
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_height_for_width` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_height_for_width k_textautocorrectionwidgets__autocorrectiontextedit_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 int
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_has_height_for_width` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_has_height_for_width k_textautocorrectionwidgets__autocorrectiontextedit_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QPaintEngine* k_textautocorrectionwidgets__autocorrectiontextedit_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_engine` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_paint_engine k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QPaintEngine* k_textautocorrectionwidgets__autocorrectiontextedit_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QPaintEngine* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_enter_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_enter_event k_textautocorrectionwidgets__autocorrectiontextedit_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QEnterEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEnterEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_leave_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_leave_event k_textautocorrectionwidgets__autocorrectiontextedit_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_move_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_move_event k_textautocorrectionwidgets__autocorrectiontextedit_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QMoveEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMoveEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QCloseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_close_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_close_event k_textautocorrectionwidgets__autocorrectiontextedit_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QCloseEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QCloseEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QTabletEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_tablet_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_tablet_event k_textautocorrectionwidgets__autocorrectiontextedit_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QTabletEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QTabletEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QActionEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_action_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_action_event k_textautocorrectionwidgets__autocorrectiontextedit_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QActionEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QActionEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QHideEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_hide_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_hide_event k_textautocorrectionwidgets__autocorrectiontextedit_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QHideEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QHideEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_native_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_native_event k_textautocorrectionwidgets__autocorrectiontextedit_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_metric` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_metric k_textautocorrectionwidgets__autocorrectiontextedit_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param painter QPainter*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_init_painter` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_init_painter k_textautocorrectionwidgets__autocorrectiontextedit_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param painter QPainter*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* painter)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_textautocorrectionwidgets__autocorrectiontextedit_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_redirected` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_redirected k_textautocorrectionwidgets__autocorrectiontextedit_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_textautocorrectionwidgets__autocorrectiontextedit_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QPaintDevice* func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPoint* offset)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QPainter* k_textautocorrectionwidgets__autocorrectiontextedit_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_shared_painter` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_shared_painter k_textautocorrectionwidgets__autocorrectiontextedit_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QPainter* k_textautocorrectionwidgets__autocorrectiontextedit_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QPainter* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QChildEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_child_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_child_event k_textautocorrectionwidgets__autocorrectiontextedit_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QChildEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QChildEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_custom_event` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_custom_event k_textautocorrectionwidgets__autocorrectiontextedit_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param event QEvent*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QEvent* event)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_connect_notify` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_connect_notify k_textautocorrectionwidgets__autocorrectiontextedit_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMetaMethod* signal)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_disconnect_notify` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_disconnect_notify k_textautocorrectionwidgets__autocorrectiontextedit_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal QMetaMethod*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMetaMethod* signal)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param range float
///
void k_textautocorrectionwidgets__autocorrectiontextedit_zoom_in_f(void* self, float range);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_zoom_in_f` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_zoom_in_f k_textautocorrectionwidgets__autocorrectiontextedit_super_zoom_in_f

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param range float
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, float range)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_set_viewport_margins` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_set_viewport_margins k_textautocorrectionwidgets__autocorrectiontextedit_super_set_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, int left, int top, int right, int bottom)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QMargins* k_textautocorrectionwidgets__autocorrectiontextedit_viewport_margins(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_margins` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_viewport_margins k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QMargins* k_textautocorrectionwidgets__autocorrectiontextedit_super_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QMargins* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPainter*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_draw_frame(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_draw_frame` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_draw_frame k_textautocorrectionwidgets__autocorrectiontextedit_super_draw_frame

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param param1 QPainter*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QPainter* param1)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_update_micro_focus` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_update_micro_focus k_textautocorrectionwidgets__autocorrectiontextedit_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_create(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_create` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_create k_textautocorrectionwidgets__autocorrectiontextedit_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_destroy(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_destroy` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_destroy k_textautocorrectionwidgets__autocorrectiontextedit_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_child` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_focus_next_child k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_previous_child` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_focus_previous_child k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QObject* k_textautocorrectionwidgets__autocorrectiontextedit_sender(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_sender` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_sender k_textautocorrectionwidgets__autocorrectiontextedit_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
QObject* k_textautocorrectionwidgets__autocorrectiontextedit_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback QObject* func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_sender_signal_index` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_sender_signal_index k_textautocorrectionwidgets__autocorrectiontextedit_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback int32_t func()
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal const char*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_receivers` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_receivers k_textautocorrectionwidgets__autocorrectiontextedit_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal const char*
///
int32_t k_textautocorrectionwidgets__autocorrectiontextedit_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback int32_t func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* signal)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal QMetaMethod*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_is_signal_connected` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_is_signal_connected k_textautocorrectionwidgets__autocorrectiontextedit_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param signal QMetaMethod*
///
bool k_textautocorrectionwidgets__autocorrectiontextedit_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback bool func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, QMetaMethod* signal)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textautocorrectionwidgets__autocorrectiontextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textautocorrectionwidgets__autocorrectiontextedit_super_get_decoded_metric_f` instead
///
#define k_textautocorrectionwidgets__autocorrectiontextedit_qbase_get_decoded_metric_f k_textautocorrectionwidgets__autocorrectiontextedit_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textautocorrectionwidgets__autocorrectiontextedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback double func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
/// @param callback void func(TextAutoCorrectionWidgets__AutoCorrectionTextEdit* self, const char* objectName)
///
void k_textautocorrectionwidgets__autocorrectiontextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAutoCorrectionWidgets_1_1AutoCorrectionTextEdit.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextAutoCorrectionWidgets__AutoCorrectionTextEdit*
///
void k_textautocorrectionwidgets__autocorrectiontextedit_delete(void* self);

#endif
