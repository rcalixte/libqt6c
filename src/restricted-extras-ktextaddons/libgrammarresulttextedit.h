#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARRESULTTEXTEDIT_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBGRAMMARRESULTTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)

/// k_textgrammarcheck__grammarresulttextedit_new constructs a new TextGrammarCheck::GrammarResultTextEdit object.
///
/// @param parent QWidget*
///
TextGrammarCheck__GrammarResultTextEdit* k_textgrammarcheck__grammarresulttextedit_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)

/// k_textgrammarcheck__grammarresulttextedit_new2 constructs a new TextGrammarCheck::GrammarResultTextEdit object.
///
TextGrammarCheck__GrammarResultTextEdit* k_textgrammarcheck__grammarresulttextedit_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const QMetaObject* k_textgrammarcheck__grammarresulttextedit_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback const QMetaObject* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_meta_object` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_meta_object k_textgrammarcheck__grammarresulttextedit_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const QMetaObject* k_textgrammarcheck__grammarresulttextedit_super_meta_object(void* self);

/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 const char*
///
void* k_textgrammarcheck__grammarresulttextedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void* func(TextGrammarCheck__GrammarResultTextEdit* self, const char* param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_metacast` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_metacast k_textgrammarcheck__grammarresulttextedit_super_metacast

/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 const char*
///
void* k_textgrammarcheck__grammarresulttextedit_super_metacast(void* self, const char* param1);

/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__grammarresulttextedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textgrammarcheck__grammarresulttextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_metacall` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_metacall k_textgrammarcheck__grammarresulttextedit_super_metacall

/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textgrammarcheck__grammarresulttextedit_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textgrammarcheck__grammarresulttextedit_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param infos libqt_list of TextGrammarCheck__GrammarError*
///
void k_textgrammarcheck__grammarresulttextedit_apply_grammar_result(void* self, libqt_list infos);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QContextMenuEvent*
///
void k_textgrammarcheck__grammarresulttextedit_context_menu_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QContextMenuEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_context_menu_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_context_menu_event k_textgrammarcheck__grammarresulttextedit_super_context_menu_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QContextMenuEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_context_menu_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QPaintEvent*
///
void k_textgrammarcheck__grammarresulttextedit_paint_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QPaintEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_paint_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_paint_event k_textgrammarcheck__grammarresulttextedit_super_paint_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QPaintEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_paint_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param ev QEvent*
///
bool k_textgrammarcheck__grammarresulttextedit_event(void* self, void* ev);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* ev)
///
void k_textgrammarcheck__grammarresulttextedit_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_event k_textgrammarcheck__grammarresulttextedit_super_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param ev QEvent*
///
bool k_textgrammarcheck__grammarresulttextedit_super_event(void* self, void* ev);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param act TextGrammarCheck__GrammarAction*
///
void k_textgrammarcheck__grammarresulttextedit_replace_text(void* self, void* act);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, TextGrammarCheck__GrammarAction* act)
///
void k_textgrammarcheck__grammarresulttextedit_on_replace_text(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_check_again(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self)
///
void k_textgrammarcheck__grammarresulttextedit_on_check_again(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_close_checker(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self)
///
void k_textgrammarcheck__grammarresulttextedit_on_close_checker(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_configure(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self)
///
void k_textgrammarcheck__grammarresulttextedit_on_configure(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textgrammarcheck__grammarresulttextedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textgrammarcheck__grammarresulttextedit_tr3(const char* s, const char* c, int n);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param document QTextDocument*
///
void k_textgrammarcheck__grammarresulttextedit_set_document(void* self, void* document);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QTextDocument* k_textgrammarcheck__grammarresulttextedit_document(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param placeholderText const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_placeholder_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param cursor QTextCursor*
///
void k_textgrammarcheck__grammarresulttextedit_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QTextCursor* k_textgrammarcheck__grammarresulttextedit_text_cursor(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_read_only(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param ro bool
///
void k_textgrammarcheck__grammarresulttextedit_set_read_only(void* self, bool ro);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void k_textgrammarcheck__grammarresulttextedit_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t k_textgrammarcheck__grammarresulttextedit_text_interaction_flags(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
double k_textgrammarcheck__grammarresulttextedit_font_point_size(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_font_family(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_font_weight(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_font_underline(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_font_italic(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QColor* k_textgrammarcheck__grammarresulttextedit_text_color(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QColor* k_textgrammarcheck__grammarresulttextedit_text_background_color(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QFont* k_textgrammarcheck__grammarresulttextedit_current_font(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_textgrammarcheck__grammarresulttextedit_alignment(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param modifier QTextCharFormat*
///
void k_textgrammarcheck__grammarresulttextedit_merge_current_char_format(void* self, void* modifier);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param format QTextCharFormat*
///
void k_textgrammarcheck__grammarresulttextedit_set_current_char_format(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QTextCharFormat* k_textgrammarcheck__grammarresulttextedit_current_char_format(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return flag of enum QTextEdit__AutoFormattingFlag
///
int32_t k_textgrammarcheck__grammarresulttextedit_auto_formatting(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param features flag of enum QTextEdit__AutoFormattingFlag
///
void k_textgrammarcheck__grammarresulttextedit_set_auto_formatting(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_tab_changes_focus(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param b bool
///
void k_textgrammarcheck__grammarresulttextedit_set_tab_changes_focus(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param title const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_document_title(void* self, const char* title);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_document_title(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_undo_redo_enabled(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param enable bool
///
void k_textgrammarcheck__grammarresulttextedit_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum QTextEdit__LineWrapMode
///
int32_t k_textgrammarcheck__grammarresulttextedit_line_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param mode enum QTextEdit__LineWrapMode
///
void k_textgrammarcheck__grammarresulttextedit_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_line_wrap_column_or_width(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param w int
///
void k_textgrammarcheck__grammarresulttextedit_set_line_wrap_column_or_width(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum QTextOption__WrapMode
///
int32_t k_textgrammarcheck__grammarresulttextedit_word_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param policy enum QTextOption__WrapMode
///
void k_textgrammarcheck__grammarresulttextedit_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param exp const char*
///
bool k_textgrammarcheck__grammarresulttextedit_find(void* self, const char* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param exp QRegularExpression*
///
bool k_textgrammarcheck__grammarresulttextedit_find2(void* self, void* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_to_plain_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_to_html(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_to_markdown(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_ensure_cursor_visible(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QMenu* k_textgrammarcheck__grammarresulttextedit_create_standard_context_menu(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param position QPoint*
///
QMenu* k_textgrammarcheck__grammarresulttextedit_create_standard_context_menu2(void* self, void* position);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param pos QPoint*
///
QTextCursor* k_textgrammarcheck__grammarresulttextedit_cursor_for_position(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param cursor QTextCursor*
///
QRect* k_textgrammarcheck__grammarresulttextedit_cursor_rect(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRect* k_textgrammarcheck__grammarresulttextedit_cursor_rect2(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param pos QPoint*
///
const char* k_textgrammarcheck__grammarresulttextedit_anchor_at(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_overwrite_mode(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param overwrite bool
///
void k_textgrammarcheck__grammarresulttextedit_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
double k_textgrammarcheck__grammarresulttextedit_tab_stop_distance(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param distance double
///
void k_textgrammarcheck__grammarresulttextedit_set_tab_stop_distance(void* self, double distance);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_cursor_width(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param width int
///
void k_textgrammarcheck__grammarresulttextedit_set_cursor_width(void* self, int width);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_accept_rich_text(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param accept bool
///
void k_textgrammarcheck__grammarresulttextedit_set_accept_rich_text(void* self, bool accept);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param selections libqt_list of QTextEdit__ExtraSelection*
///
void k_textgrammarcheck__grammarresulttextedit_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return libqt_list of QTextEdit__ExtraSelection*
///
libqt_list k_textgrammarcheck__grammarresulttextedit_extra_selections(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param operation enum QTextCursor__MoveOperation
///
void k_textgrammarcheck__grammarresulttextedit_move_cursor(void* self, int32_t operation);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_can_paste(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param printer QPagedPaintDevice*
///
void k_textgrammarcheck__grammarresulttextedit_print(void* self, void* printer);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_textgrammarcheck__grammarresulttextedit_input_method_query2(void* self, int32_t query, void* argument);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param s double
///
void k_textgrammarcheck__grammarresulttextedit_set_font_point_size(void* self, double s);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param fontFamily const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_font_family(void* self, const char* fontFamily);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param w int
///
void k_textgrammarcheck__grammarresulttextedit_set_font_weight(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param b bool
///
void k_textgrammarcheck__grammarresulttextedit_set_font_underline(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param b bool
///
void k_textgrammarcheck__grammarresulttextedit_set_font_italic(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param c QColor*
///
void k_textgrammarcheck__grammarresulttextedit_set_text_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param c QColor*
///
void k_textgrammarcheck__grammarresulttextedit_set_text_background_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param f QFont*
///
void k_textgrammarcheck__grammarresulttextedit_set_current_font(void* self, void* f);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param a flag of enum Qt__AlignmentFlag
///
void k_textgrammarcheck__grammarresulttextedit_set_alignment(void* self, int32_t a);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param markdown const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_markdown(void* self, const char* markdown);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_cut(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_copy(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_paste(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_undo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_redo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_clear(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_select_all(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
///
void k_textgrammarcheck__grammarresulttextedit_insert_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
///
void k_textgrammarcheck__grammarresulttextedit_insert_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
///
void k_textgrammarcheck__grammarresulttextedit_append(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param name const char*
///
void k_textgrammarcheck__grammarresulttextedit_scroll_to_anchor(void* self, const char* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_zoom_in(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_zoom_out(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_text_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self)
///
void k_textgrammarcheck__grammarresulttextedit_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param b bool
///
void k_textgrammarcheck__grammarresulttextedit_undo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, bool b)
///
void k_textgrammarcheck__grammarresulttextedit_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param b bool
///
void k_textgrammarcheck__grammarresulttextedit_redo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, bool b)
///
void k_textgrammarcheck__grammarresulttextedit_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param format QTextCharFormat*
///
void k_textgrammarcheck__grammarresulttextedit_current_char_format_changed(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QTextCharFormat* format)
///
void k_textgrammarcheck__grammarresulttextedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param b bool
///
void k_textgrammarcheck__grammarresulttextedit_copy_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, bool b)
///
void k_textgrammarcheck__grammarresulttextedit_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_selection_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self)
///
void k_textgrammarcheck__grammarresulttextedit_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_cursor_position_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self)
///
void k_textgrammarcheck__grammarresulttextedit_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_textgrammarcheck__grammarresulttextedit_find22(void* self, const char* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_textgrammarcheck__grammarresulttextedit_find23(void* self, void* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
const char* k_textgrammarcheck__grammarresulttextedit_to_markdown1(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void k_textgrammarcheck__grammarresulttextedit_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param range int
///
void k_textgrammarcheck__grammarresulttextedit_zoom_in1(void* self, int range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param range int
///
void k_textgrammarcheck__grammarresulttextedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_textgrammarcheck__grammarresulttextedit_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_textgrammarcheck__grammarresulttextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QScrollBar* k_textgrammarcheck__grammarresulttextedit_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param scrollbar QScrollBar*
///
void k_textgrammarcheck__grammarresulttextedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_textgrammarcheck__grammarresulttextedit_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_textgrammarcheck__grammarresulttextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QScrollBar* k_textgrammarcheck__grammarresulttextedit_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param scrollbar QScrollBar*
///
void k_textgrammarcheck__grammarresulttextedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param widget QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_textgrammarcheck__grammarresulttextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list k_textgrammarcheck__grammarresulttextedit_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param widget QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t k_textgrammarcheck__grammarresulttextedit_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void k_textgrammarcheck__grammarresulttextedit_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param frameStyle int
///
void k_textgrammarcheck__grammarresulttextedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum QFrame__Shape
///
int32_t k_textgrammarcheck__grammarresulttextedit_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param frameShape enum QFrame__Shape
///
void k_textgrammarcheck__grammarresulttextedit_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum QFrame__Shadow
///
int32_t k_textgrammarcheck__grammarresulttextedit_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param frameShadow enum QFrame__Shadow
///
void k_textgrammarcheck__grammarresulttextedit_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param lineWidth int
///
void k_textgrammarcheck__grammarresulttextedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param midLineWidth int
///
void k_textgrammarcheck__grammarresulttextedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRect* k_textgrammarcheck__grammarresulttextedit_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param frameRect QRect*
///
void k_textgrammarcheck__grammarresulttextedit_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
uintptr_t k_textgrammarcheck__grammarresulttextedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
uintptr_t k_textgrammarcheck__grammarresulttextedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
uintptr_t k_textgrammarcheck__grammarresulttextedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QStyle* k_textgrammarcheck__grammarresulttextedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param style QStyle*
///
void k_textgrammarcheck__grammarresulttextedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum Qt__WindowModality
///
int32_t k_textgrammarcheck__grammarresulttextedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param windowModality enum Qt__WindowModality
///
void k_textgrammarcheck__grammarresulttextedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QWidget*
///
bool k_textgrammarcheck__grammarresulttextedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param enabled bool
///
void k_textgrammarcheck__grammarresulttextedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param disabled bool
///
void k_textgrammarcheck__grammarresulttextedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param windowModified bool
///
void k_textgrammarcheck__grammarresulttextedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRect* k_textgrammarcheck__grammarresulttextedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const QRect* k_textgrammarcheck__grammarresulttextedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRect* k_textgrammarcheck__grammarresulttextedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QPoint* k_textgrammarcheck__grammarresulttextedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRect* k_textgrammarcheck__grammarresulttextedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRect* k_textgrammarcheck__grammarresulttextedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRegion* k_textgrammarcheck__grammarresulttextedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param minimumSize QSize*
///
void k_textgrammarcheck__grammarresulttextedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param minw int
/// @param minh int
///
void k_textgrammarcheck__grammarresulttextedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param maximumSize QSize*
///
void k_textgrammarcheck__grammarresulttextedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param maxw int
/// @param maxh int
///
void k_textgrammarcheck__grammarresulttextedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param minw int
///
void k_textgrammarcheck__grammarresulttextedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param minh int
///
void k_textgrammarcheck__grammarresulttextedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param maxw int
///
void k_textgrammarcheck__grammarresulttextedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param maxh int
///
void k_textgrammarcheck__grammarresulttextedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param sizeIncrement QSize*
///
void k_textgrammarcheck__grammarresulttextedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresulttextedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param baseSize QSize*
///
void k_textgrammarcheck__grammarresulttextedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param basew int
/// @param baseh int
///
void k_textgrammarcheck__grammarresulttextedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param fixedSize QSize*
///
void k_textgrammarcheck__grammarresulttextedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresulttextedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param w int
///
void k_textgrammarcheck__grammarresulttextedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param h int
///
void k_textgrammarcheck__grammarresulttextedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresulttextedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresulttextedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresulttextedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresulttextedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresulttextedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresulttextedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPointF*
///
QPointF* k_textgrammarcheck__grammarresulttextedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPoint*
///
QPoint* k_textgrammarcheck__grammarresulttextedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textgrammarcheck__grammarresulttextedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textgrammarcheck__grammarresulttextedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_textgrammarcheck__grammarresulttextedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_textgrammarcheck__grammarresulttextedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const QPalette* k_textgrammarcheck__grammarresulttextedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param palette QPalette*
///
void k_textgrammarcheck__grammarresulttextedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_textgrammarcheck__grammarresulttextedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textgrammarcheck__grammarresulttextedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_textgrammarcheck__grammarresulttextedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_textgrammarcheck__grammarresulttextedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const QFont* k_textgrammarcheck__grammarresulttextedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param font QFont*
///
void k_textgrammarcheck__grammarresulttextedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QFontMetrics* k_textgrammarcheck__grammarresulttextedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QFontInfo* k_textgrammarcheck__grammarresulttextedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QCursor* k_textgrammarcheck__grammarresulttextedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param cursor QCursor*
///
void k_textgrammarcheck__grammarresulttextedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param enable bool
///
void k_textgrammarcheck__grammarresulttextedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param enable bool
///
void k_textgrammarcheck__grammarresulttextedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param mask QBitmap*
///
void k_textgrammarcheck__grammarresulttextedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param mask QRegion*
///
void k_textgrammarcheck__grammarresulttextedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRegion* k_textgrammarcheck__grammarresulttextedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param target QPaintDevice*
///
void k_textgrammarcheck__grammarresulttextedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param painter QPainter*
///
void k_textgrammarcheck__grammarresulttextedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QPixmap* k_textgrammarcheck__grammarresulttextedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QGraphicsEffect* k_textgrammarcheck__grammarresulttextedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param effect QGraphicsEffect*
///
void k_textgrammarcheck__grammarresulttextedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param type enum Qt__GestureType
///
void k_textgrammarcheck__grammarresulttextedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param type enum Qt__GestureType
///
void k_textgrammarcheck__grammarresulttextedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param windowTitle const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param styleSheet const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param icon QIcon*
///
void k_textgrammarcheck__grammarresulttextedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QIcon* k_textgrammarcheck__grammarresulttextedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param windowIconText const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param windowRole const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param filePath const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param level double
///
void k_textgrammarcheck__grammarresulttextedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
double k_textgrammarcheck__grammarresulttextedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param toolTip const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param msec int
///
void k_textgrammarcheck__grammarresulttextedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param statusTip const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param whatsThis const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param name const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param description const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param direction enum Qt__LayoutDirection
///
void k_textgrammarcheck__grammarresulttextedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_textgrammarcheck__grammarresulttextedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param locale QLocale*
///
void k_textgrammarcheck__grammarresulttextedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QLocale* k_textgrammarcheck__grammarresulttextedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param reason enum Qt__FocusReason
///
void k_textgrammarcheck__grammarresulttextedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_textgrammarcheck__grammarresulttextedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param policy enum Qt__FocusPolicy
///
void k_textgrammarcheck__grammarresulttextedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param focusProxy QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_textgrammarcheck__grammarresulttextedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_textgrammarcheck__grammarresulttextedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QCursor*
///
void k_textgrammarcheck__grammarresulttextedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param key QKeySequence*
///
int32_t k_textgrammarcheck__grammarresulttextedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param id int
///
void k_textgrammarcheck__grammarresulttextedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param id int
///
void k_textgrammarcheck__grammarresulttextedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param id int
///
void k_textgrammarcheck__grammarresulttextedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textgrammarcheck__grammarresulttextedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textgrammarcheck__grammarresulttextedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param enable bool
///
void k_textgrammarcheck__grammarresulttextedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QGraphicsProxyWidget* k_textgrammarcheck__grammarresulttextedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresulttextedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QRect*
///
void k_textgrammarcheck__grammarresulttextedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QRegion*
///
void k_textgrammarcheck__grammarresulttextedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresulttextedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QRect*
///
void k_textgrammarcheck__grammarresulttextedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QRegion*
///
void k_textgrammarcheck__grammarresulttextedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param hidden bool
///
void k_textgrammarcheck__grammarresulttextedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param x int
/// @param y int
///
void k_textgrammarcheck__grammarresulttextedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPoint*
///
void k_textgrammarcheck__grammarresulttextedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresulttextedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QSize*
///
void k_textgrammarcheck__grammarresulttextedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_textgrammarcheck__grammarresulttextedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param geometry QRect*
///
void k_textgrammarcheck__grammarresulttextedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
char* k_textgrammarcheck__grammarresulttextedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param geometry char*
///
bool k_textgrammarcheck__grammarresulttextedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QWidget*
///
bool k_textgrammarcheck__grammarresulttextedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_textgrammarcheck__grammarresulttextedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_textgrammarcheck__grammarresulttextedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_textgrammarcheck__grammarresulttextedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSizePolicy* k_textgrammarcheck__grammarresulttextedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param sizePolicy QSizePolicy*
///
void k_textgrammarcheck__grammarresulttextedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_textgrammarcheck__grammarresulttextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRegion* k_textgrammarcheck__grammarresulttextedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textgrammarcheck__grammarresulttextedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param margins QMargins*
///
void k_textgrammarcheck__grammarresulttextedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QMargins* k_textgrammarcheck__grammarresulttextedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QRect* k_textgrammarcheck__grammarresulttextedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QLayout* k_textgrammarcheck__grammarresulttextedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param layout QLayout*
///
void k_textgrammarcheck__grammarresulttextedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param parent QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_textgrammarcheck__grammarresulttextedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param dx int
/// @param dy int
///
void k_textgrammarcheck__grammarresulttextedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_textgrammarcheck__grammarresulttextedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param on bool
///
void k_textgrammarcheck__grammarresulttextedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param action QAction*
///
void k_textgrammarcheck__grammarresulttextedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param actions libqt_list of QAction*
///
void k_textgrammarcheck__grammarresulttextedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_textgrammarcheck__grammarresulttextedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param before QAction*
/// @param action QAction*
///
void k_textgrammarcheck__grammarresulttextedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param action QAction*
///
void k_textgrammarcheck__grammarresulttextedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return libqt_list of QAction*
///
libqt_list k_textgrammarcheck__grammarresulttextedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
///
QAction* k_textgrammarcheck__grammarresulttextedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_textgrammarcheck__grammarresulttextedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textgrammarcheck__grammarresulttextedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_textgrammarcheck__grammarresulttextedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_textgrammarcheck__grammarresulttextedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_textgrammarcheck__grammarresulttextedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum Qt__WindowType
///
void k_textgrammarcheck__grammarresulttextedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_textgrammarcheck__grammarresulttextedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return enum Qt__WindowType
///
int32_t k_textgrammarcheck__grammarresulttextedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param x int
/// @param y int
///
QWidget* k_textgrammarcheck__grammarresulttextedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param p QPoint*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param p QPointF*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void k_textgrammarcheck__grammarresulttextedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_textgrammarcheck__grammarresulttextedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param child QWidget*
///
bool k_textgrammarcheck__grammarresulttextedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param enabled bool
///
void k_textgrammarcheck__grammarresulttextedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QBackingStore* k_textgrammarcheck__grammarresulttextedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QWindow* k_textgrammarcheck__grammarresulttextedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QScreen* k_textgrammarcheck__grammarresulttextedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param screen QScreen*
///
void k_textgrammarcheck__grammarresulttextedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param title const char*
///
void k_textgrammarcheck__grammarresulttextedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, const char* title)
///
void k_textgrammarcheck__grammarresulttextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param icon QIcon*
///
void k_textgrammarcheck__grammarresulttextedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QIcon* icon)
///
void k_textgrammarcheck__grammarresulttextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param iconText const char*
///
void k_textgrammarcheck__grammarresulttextedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, const char* iconText)
///
void k_textgrammarcheck__grammarresulttextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param pos QPoint*
///
void k_textgrammarcheck__grammarresulttextedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QPoint* pos)
///
void k_textgrammarcheck__grammarresulttextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_textgrammarcheck__grammarresulttextedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_textgrammarcheck__grammarresulttextedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_textgrammarcheck__grammarresulttextedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textgrammarcheck__grammarresulttextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textgrammarcheck__grammarresulttextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_textgrammarcheck__grammarresulttextedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_textgrammarcheck__grammarresulttextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_textgrammarcheck__grammarresulttextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param rectangle QRect*
///
QPixmap* k_textgrammarcheck__grammarresulttextedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_textgrammarcheck__grammarresulttextedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_textgrammarcheck__grammarresulttextedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param id int
/// @param enable bool
///
void k_textgrammarcheck__grammarresulttextedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param id int
/// @param enable bool
///
void k_textgrammarcheck__grammarresulttextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_textgrammarcheck__grammarresulttextedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_textgrammarcheck__grammarresulttextedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_textgrammarcheck__grammarresulttextedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_textgrammarcheck__grammarresulttextedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char* k_textgrammarcheck__grammarresulttextedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param name const char*
///
void k_textgrammarcheck__grammarresulttextedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param b bool
///
bool k_textgrammarcheck__grammarresulttextedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QThread* k_textgrammarcheck__grammarresulttextedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param thread QThread*
///
bool k_textgrammarcheck__grammarresulttextedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param interval int
///
int32_t k_textgrammarcheck__grammarresulttextedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param time int64_t of nanoseconds
///
int32_t k_textgrammarcheck__grammarresulttextedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param id int
///
void k_textgrammarcheck__grammarresulttextedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param id enum Qt__TimerId
///
void k_textgrammarcheck__grammarresulttextedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
/// @return libqt_list of QObject*
///
libqt_list k_textgrammarcheck__grammarresulttextedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param filterObj QObject*
///
void k_textgrammarcheck__grammarresulttextedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param obj QObject*
///
void k_textgrammarcheck__grammarresulttextedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param receiver QObject*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param name const char*
/// @param value QVariant*
///
bool k_textgrammarcheck__grammarresulttextedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param name const char*
///
QVariant* k_textgrammarcheck__grammarresulttextedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const char** k_textgrammarcheck__grammarresulttextedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QBindingStorage* k_textgrammarcheck__grammarresulttextedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
const QBindingStorage* k_textgrammarcheck__grammarresulttextedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self)
///
void k_textgrammarcheck__grammarresulttextedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QObject* k_textgrammarcheck__grammarresulttextedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param classname const char*
///
bool k_textgrammarcheck__grammarresulttextedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__grammarresulttextedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textgrammarcheck__grammarresulttextedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textgrammarcheck__grammarresulttextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal const char*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textgrammarcheck__grammarresulttextedit_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QObject*
///
void k_textgrammarcheck__grammarresulttextedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QObject* param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
double k_textgrammarcheck__grammarresulttextedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
double k_textgrammarcheck__grammarresulttextedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textgrammarcheck__grammarresulttextedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_textgrammarcheck__grammarresulttextedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_textgrammarcheck__grammarresulttextedit_load_resource(void* self, int type, void* name);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_load_resource` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_load_resource k_textgrammarcheck__grammarresulttextedit_super_load_resource

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_textgrammarcheck__grammarresulttextedit_super_load_resource(void* self, int type, void* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QVariant* func(TextGrammarCheck__GrammarResultTextEdit* self, int type, QUrl* name)
///
void k_textgrammarcheck__grammarresulttextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_textgrammarcheck__grammarresulttextedit_input_method_query(void* self, int32_t property);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_input_method_query` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_input_method_query k_textgrammarcheck__grammarresulttextedit_super_input_method_query

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_textgrammarcheck__grammarresulttextedit_super_input_method_query(void* self, int32_t property);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QVariant* func(TextGrammarCheck__GrammarResultTextEdit* self, enum Qt__InputMethodQuery property)
///
void k_textgrammarcheck__grammarresulttextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QTimerEvent*
///
void k_textgrammarcheck__grammarresulttextedit_timer_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_timer_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_timer_event k_textgrammarcheck__grammarresulttextedit_super_timer_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QTimerEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QTimerEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QKeyEvent*
///
void k_textgrammarcheck__grammarresulttextedit_key_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_key_press_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_key_press_event k_textgrammarcheck__grammarresulttextedit_super_key_press_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QKeyEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_key_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QKeyEvent*
///
void k_textgrammarcheck__grammarresulttextedit_key_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_key_release_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_key_release_event k_textgrammarcheck__grammarresulttextedit_super_key_release_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QKeyEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QKeyEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QResizeEvent*
///
void k_textgrammarcheck__grammarresulttextedit_resize_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_resize_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_resize_event k_textgrammarcheck__grammarresulttextedit_super_resize_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QResizeEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QResizeEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_mouse_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_mouse_press_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_mouse_press_event k_textgrammarcheck__grammarresulttextedit_super_mouse_press_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_mouse_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_mouse_move_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_mouse_move_event k_textgrammarcheck__grammarresulttextedit_super_mouse_move_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_mouse_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_mouse_release_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_mouse_release_event k_textgrammarcheck__grammarresulttextedit_super_mouse_release_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_mouse_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_mouse_double_click_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_mouse_double_click_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_mouse_double_click_event k_textgrammarcheck__grammarresulttextedit_super_mouse_double_click_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QMouseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMouseEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param next bool
///
bool k_textgrammarcheck__grammarresulttextedit_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_focus_next_prev_child` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_focus_next_prev_child k_textgrammarcheck__grammarresulttextedit_super_focus_next_prev_child

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param next bool
///
bool k_textgrammarcheck__grammarresulttextedit_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func(TextGrammarCheck__GrammarResultTextEdit* self, bool next)
///
void k_textgrammarcheck__grammarresulttextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDragEnterEvent*
///
void k_textgrammarcheck__grammarresulttextedit_drag_enter_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_drag_enter_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_drag_enter_event k_textgrammarcheck__grammarresulttextedit_super_drag_enter_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDragEnterEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QDragEnterEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDragLeaveEvent*
///
void k_textgrammarcheck__grammarresulttextedit_drag_leave_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_drag_leave_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_drag_leave_event k_textgrammarcheck__grammarresulttextedit_super_drag_leave_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDragLeaveEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QDragLeaveEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDragMoveEvent*
///
void k_textgrammarcheck__grammarresulttextedit_drag_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_drag_move_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_drag_move_event k_textgrammarcheck__grammarresulttextedit_super_drag_move_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDragMoveEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QDragMoveEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDropEvent*
///
void k_textgrammarcheck__grammarresulttextedit_drop_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_drop_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_drop_event k_textgrammarcheck__grammarresulttextedit_super_drop_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QDropEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QDropEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QFocusEvent*
///
void k_textgrammarcheck__grammarresulttextedit_focus_in_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_focus_in_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_focus_in_event k_textgrammarcheck__grammarresulttextedit_super_focus_in_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QFocusEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_focus_in_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QFocusEvent*
///
void k_textgrammarcheck__grammarresulttextedit_focus_out_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_focus_out_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_focus_out_event k_textgrammarcheck__grammarresulttextedit_super_focus_out_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QFocusEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QFocusEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QShowEvent*
///
void k_textgrammarcheck__grammarresulttextedit_show_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_show_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_show_event k_textgrammarcheck__grammarresulttextedit_super_show_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QShowEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QShowEvent* param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QEvent*
///
void k_textgrammarcheck__grammarresulttextedit_change_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_change_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_change_event k_textgrammarcheck__grammarresulttextedit_super_change_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QWheelEvent*
///
void k_textgrammarcheck__grammarresulttextedit_wheel_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_wheel_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_wheel_event k_textgrammarcheck__grammarresulttextedit_super_wheel_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param e QWheelEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QWheelEvent* e)
///
void k_textgrammarcheck__grammarresulttextedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QMimeData* k_textgrammarcheck__grammarresulttextedit_create_mime_data_from_selection(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_create_mime_data_from_selection` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_create_mime_data_from_selection k_textgrammarcheck__grammarresulttextedit_super_create_mime_data_from_selection

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QMimeData* k_textgrammarcheck__grammarresulttextedit_super_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QMimeData* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param source QMimeData*
///
bool k_textgrammarcheck__grammarresulttextedit_can_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_can_insert_from_mime_data` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_can_insert_from_mime_data k_textgrammarcheck__grammarresulttextedit_super_can_insert_from_mime_data

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param source QMimeData*
///
bool k_textgrammarcheck__grammarresulttextedit_super_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func(TextGrammarCheck__GrammarResultTextEdit* self, QMimeData* source)
///
void k_textgrammarcheck__grammarresulttextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param source QMimeData*
///
void k_textgrammarcheck__grammarresulttextedit_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_insert_from_mime_data` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_insert_from_mime_data k_textgrammarcheck__grammarresulttextedit_super_insert_from_mime_data

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param source QMimeData*
///
void k_textgrammarcheck__grammarresulttextedit_super_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMimeData* source)
///
void k_textgrammarcheck__grammarresulttextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_textgrammarcheck__grammarresulttextedit_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_input_method_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_input_method_event k_textgrammarcheck__grammarresulttextedit_super_input_method_event

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QInputMethodEvent* param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param dx int
/// @param dy int
///
void k_textgrammarcheck__grammarresulttextedit_scroll_contents_by(void* self, int dx, int dy);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_scroll_contents_by` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_scroll_contents_by k_textgrammarcheck__grammarresulttextedit_super_scroll_contents_by

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param dx int
/// @param dy int
///
void k_textgrammarcheck__grammarresulttextedit_super_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, int dx, int dy)
///
void k_textgrammarcheck__grammarresulttextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param cursor QTextCursor*
///
void k_textgrammarcheck__grammarresulttextedit_do_set_text_cursor(void* self, void* cursor);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_do_set_text_cursor` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_do_set_text_cursor k_textgrammarcheck__grammarresulttextedit_super_do_set_text_cursor

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param cursor QTextCursor*
///
void k_textgrammarcheck__grammarresulttextedit_super_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QTextCursor* cursor)
///
void k_textgrammarcheck__grammarresulttextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_minimum_size_hint` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_minimum_size_hint k_textgrammarcheck__grammarresulttextedit_super_minimum_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_super_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QSize* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_size_hint` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_size_hint k_textgrammarcheck__grammarresulttextedit_super_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_super_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QSize* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param viewport QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_setup_viewport(void* self, void* viewport);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_setup_viewport` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_setup_viewport k_textgrammarcheck__grammarresulttextedit_super_setup_viewport

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param viewport QWidget*
///
void k_textgrammarcheck__grammarresulttextedit_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QWidget* viewport)
///
void k_textgrammarcheck__grammarresulttextedit_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textgrammarcheck__grammarresulttextedit_event_filter(void* self, void* param1, void* param2);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_event_filter` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_event_filter k_textgrammarcheck__grammarresulttextedit_super_event_filter

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_textgrammarcheck__grammarresulttextedit_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func(TextGrammarCheck__GrammarResultTextEdit* self, QObject* param1, QEvent* param2)
///
void k_textgrammarcheck__grammarresulttextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QEvent*
///
bool k_textgrammarcheck__grammarresulttextedit_viewport_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_viewport_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_viewport_event k_textgrammarcheck__grammarresulttextedit_super_viewport_event

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QEvent*
///
bool k_textgrammarcheck__grammarresulttextedit_super_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_viewport_size_hint(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_viewport_size_hint` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_viewport_size_hint k_textgrammarcheck__grammarresulttextedit_super_viewport_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QSize* k_textgrammarcheck__grammarresulttextedit_super_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QSize* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param option QStyleOptionFrame*
///
void k_textgrammarcheck__grammarresulttextedit_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_init_style_option` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_init_style_option k_textgrammarcheck__grammarresulttextedit_super_init_style_option

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param option QStyleOptionFrame*
///
void k_textgrammarcheck__grammarresulttextedit_super_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QStyleOptionFrame* option)
///
void k_textgrammarcheck__grammarresulttextedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_dev_type(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_dev_type` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_dev_type k_textgrammarcheck__grammarresulttextedit_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback int32_t func()
///
void k_textgrammarcheck__grammarresulttextedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param visible bool
///
void k_textgrammarcheck__grammarresulttextedit_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_set_visible` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_set_visible k_textgrammarcheck__grammarresulttextedit_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param visible bool
///
void k_textgrammarcheck__grammarresulttextedit_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, bool visible)
///
void k_textgrammarcheck__grammarresulttextedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 int
///
int32_t k_textgrammarcheck__grammarresulttextedit_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_height_for_width` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_height_for_width k_textgrammarcheck__grammarresulttextedit_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 int
///
int32_t k_textgrammarcheck__grammarresulttextedit_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultTextEdit* self, int param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_has_height_for_width` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_has_height_for_width k_textgrammarcheck__grammarresulttextedit_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func()
///
void k_textgrammarcheck__grammarresulttextedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QPaintEngine* k_textgrammarcheck__grammarresulttextedit_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_paint_engine` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_paint_engine k_textgrammarcheck__grammarresulttextedit_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QPaintEngine* k_textgrammarcheck__grammarresulttextedit_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QPaintEngine* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QEnterEvent*
///
void k_textgrammarcheck__grammarresulttextedit_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_enter_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_enter_event k_textgrammarcheck__grammarresulttextedit_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QEnterEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QEnterEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresulttextedit_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_leave_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_leave_event k_textgrammarcheck__grammarresulttextedit_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QMoveEvent*
///
void k_textgrammarcheck__grammarresulttextedit_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_move_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_move_event k_textgrammarcheck__grammarresulttextedit_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QMoveEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMoveEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QCloseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_close_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_close_event k_textgrammarcheck__grammarresulttextedit_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QCloseEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QCloseEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QTabletEvent*
///
void k_textgrammarcheck__grammarresulttextedit_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_tablet_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_tablet_event k_textgrammarcheck__grammarresulttextedit_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QTabletEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QTabletEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QActionEvent*
///
void k_textgrammarcheck__grammarresulttextedit_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_action_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_action_event k_textgrammarcheck__grammarresulttextedit_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QActionEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QActionEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QHideEvent*
///
void k_textgrammarcheck__grammarresulttextedit_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_hide_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_hide_event k_textgrammarcheck__grammarresulttextedit_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QHideEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QHideEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textgrammarcheck__grammarresulttextedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_native_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_native_event k_textgrammarcheck__grammarresulttextedit_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_textgrammarcheck__grammarresulttextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func(TextGrammarCheck__GrammarResultTextEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_textgrammarcheck__grammarresulttextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textgrammarcheck__grammarresulttextedit_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_metric` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_metric k_textgrammarcheck__grammarresulttextedit_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_textgrammarcheck__grammarresulttextedit_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param painter QPainter*
///
void k_textgrammarcheck__grammarresulttextedit_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_init_painter` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_init_painter k_textgrammarcheck__grammarresulttextedit_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param painter QPainter*
///
void k_textgrammarcheck__grammarresulttextedit_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QPainter* painter)
///
void k_textgrammarcheck__grammarresulttextedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_textgrammarcheck__grammarresulttextedit_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_redirected` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_redirected k_textgrammarcheck__grammarresulttextedit_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_textgrammarcheck__grammarresulttextedit_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QPaintDevice* func(TextGrammarCheck__GrammarResultTextEdit* self, QPoint* offset)
///
void k_textgrammarcheck__grammarresulttextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QPainter* k_textgrammarcheck__grammarresulttextedit_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_shared_painter` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_shared_painter k_textgrammarcheck__grammarresulttextedit_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QPainter* k_textgrammarcheck__grammarresulttextedit_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QPainter* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QChildEvent*
///
void k_textgrammarcheck__grammarresulttextedit_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_child_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_child_event k_textgrammarcheck__grammarresulttextedit_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QChildEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QChildEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresulttextedit_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_custom_event` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_custom_event k_textgrammarcheck__grammarresulttextedit_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param event QEvent*
///
void k_textgrammarcheck__grammarresulttextedit_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QEvent* event)
///
void k_textgrammarcheck__grammarresulttextedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresulttextedit_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_connect_notify` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_connect_notify k_textgrammarcheck__grammarresulttextedit_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresulttextedit_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammarresulttextedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresulttextedit_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_disconnect_notify` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_disconnect_notify k_textgrammarcheck__grammarresulttextedit_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal QMetaMethod*
///
void k_textgrammarcheck__grammarresulttextedit_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammarresulttextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param range float
///
void k_textgrammarcheck__grammarresulttextedit_zoom_in_f(void* self, float range);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_zoom_in_f` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_zoom_in_f k_textgrammarcheck__grammarresulttextedit_super_zoom_in_f

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param range float
///
void k_textgrammarcheck__grammarresulttextedit_super_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, float range)
///
void k_textgrammarcheck__grammarresulttextedit_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textgrammarcheck__grammarresulttextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_set_viewport_margins` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_set_viewport_margins k_textgrammarcheck__grammarresulttextedit_super_set_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_textgrammarcheck__grammarresulttextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, int left, int top, int right, int bottom)
///
void k_textgrammarcheck__grammarresulttextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QMargins* k_textgrammarcheck__grammarresulttextedit_viewport_margins(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_viewport_margins` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_viewport_margins k_textgrammarcheck__grammarresulttextedit_super_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QMargins* k_textgrammarcheck__grammarresulttextedit_super_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QMargins* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPainter*
///
void k_textgrammarcheck__grammarresulttextedit_draw_frame(void* self, void* param1);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_draw_frame` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_draw_frame k_textgrammarcheck__grammarresulttextedit_super_draw_frame

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param param1 QPainter*
///
void k_textgrammarcheck__grammarresulttextedit_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, QPainter* param1)
///
void k_textgrammarcheck__grammarresulttextedit_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_update_micro_focus` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_update_micro_focus k_textgrammarcheck__grammarresulttextedit_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresulttextedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_create(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_create` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_create k_textgrammarcheck__grammarresulttextedit_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresulttextedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_destroy(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_destroy` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_destroy k_textgrammarcheck__grammarresulttextedit_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func()
///
void k_textgrammarcheck__grammarresulttextedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_focus_next_child` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_focus_next_child k_textgrammarcheck__grammarresulttextedit_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func()
///
void k_textgrammarcheck__grammarresulttextedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_focus_previous_child` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_focus_previous_child k_textgrammarcheck__grammarresulttextedit_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
bool k_textgrammarcheck__grammarresulttextedit_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func()
///
void k_textgrammarcheck__grammarresulttextedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QObject* k_textgrammarcheck__grammarresulttextedit_sender(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_sender` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_sender k_textgrammarcheck__grammarresulttextedit_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
QObject* k_textgrammarcheck__grammarresulttextedit_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback QObject* func()
///
void k_textgrammarcheck__grammarresulttextedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_sender_signal_index` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_sender_signal_index k_textgrammarcheck__grammarresulttextedit_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
int32_t k_textgrammarcheck__grammarresulttextedit_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback int32_t func()
///
void k_textgrammarcheck__grammarresulttextedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal const char*
///
int32_t k_textgrammarcheck__grammarresulttextedit_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_receivers` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_receivers k_textgrammarcheck__grammarresulttextedit_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal const char*
///
int32_t k_textgrammarcheck__grammarresulttextedit_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback int32_t func(TextGrammarCheck__GrammarResultTextEdit* self, const char* signal)
///
void k_textgrammarcheck__grammarresulttextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__grammarresulttextedit_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_is_signal_connected` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_is_signal_connected k_textgrammarcheck__grammarresulttextedit_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param signal QMetaMethod*
///
bool k_textgrammarcheck__grammarresulttextedit_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback bool func(TextGrammarCheck__GrammarResultTextEdit* self, QMetaMethod* signal)
///
void k_textgrammarcheck__grammarresulttextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textgrammarcheck__grammarresulttextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_textgrammarcheck__grammarresulttextedit_super_get_decoded_metric_f` instead
///
#define k_textgrammarcheck__grammarresulttextedit_qbase_get_decoded_metric_f k_textgrammarcheck__grammarresulttextedit_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_textgrammarcheck__grammarresulttextedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback double func(TextGrammarCheck__GrammarResultTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_textgrammarcheck__grammarresulttextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
/// @param callback void func(TextGrammarCheck__GrammarResultTextEdit* self, const char* objectName)
///
void k_textgrammarcheck__grammarresulttextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextGrammarCheck__GrammarResultTextEdit*
///
void k_textgrammarcheck__grammarresulttextedit_delete(void* self);

#endif
