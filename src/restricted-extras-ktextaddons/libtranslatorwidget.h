#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORWIDGET_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBTRANSLATORWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)

/// k_texttranslator__translatortextedit_new constructs a new TextTranslator::TranslatorTextEdit object.
///
/// @param parent QWidget*
///
TextTranslator__TranslatorTextEdit* k_texttranslator__translatortextedit_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)

/// k_texttranslator__translatortextedit_new2 constructs a new TextTranslator::TranslatorTextEdit object.
///
TextTranslator__TranslatorTextEdit* k_texttranslator__translatortextedit_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const QMetaObject* k_texttranslator__translatortextedit_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback const QMetaObject* func()
///
void k_texttranslator__translatortextedit_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_meta_object` instead
///
#define k_texttranslator__translatortextedit_qbase_meta_object k_texttranslator__translatortextedit_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const QMetaObject* k_texttranslator__translatortextedit_super_meta_object(void* self);

/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 const char*
///
void* k_texttranslator__translatortextedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void* func(TextTranslator__TranslatorTextEdit* self, const char* param1)
///
void k_texttranslator__translatortextedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_metacast` instead
///
#define k_texttranslator__translatortextedit_qbase_metacast k_texttranslator__translatortextedit_super_metacast

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 const char*
///
void* k_texttranslator__translatortextedit_super_metacast(void* self, const char* param1);

/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatortextedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback int32_t func(TextTranslator__TranslatorTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texttranslator__translatortextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_metacall` instead
///
#define k_texttranslator__translatortextedit_qbase_metacall k_texttranslator__translatortextedit_super_metacall

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatortextedit_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texttranslator__translatortextedit_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_translate_text(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self)
///
void k_texttranslator__translatortextedit_on_translate_text(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QDropEvent*
///
void k_texttranslator__translatortextedit_drop_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QDropEvent* param1)
///
void k_texttranslator__translatortextedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_drop_event` instead
///
#define k_texttranslator__translatortextedit_qbase_drop_event k_texttranslator__translatortextedit_super_drop_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QDropEvent*
///
void k_texttranslator__translatortextedit_super_drop_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texttranslator__translatortextedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texttranslator__translatortextedit_tr3(const char* s, const char* c, int n);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param document QTextDocument*
///
void k_texttranslator__translatortextedit_set_document(void* self, void* document);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#document)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QTextDocument* k_texttranslator__translatortextedit_document(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param placeholderText const char*
///
void k_texttranslator__translatortextedit_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_placeholder_text(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param cursor QTextCursor*
///
void k_texttranslator__translatortextedit_set_text_cursor(void* self, void* cursor);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QTextCursor* k_texttranslator__translatortextedit_text_cursor(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_read_only(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param ro bool
///
void k_texttranslator__translatortextedit_set_read_only(void* self, bool ro);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void k_texttranslator__translatortextedit_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t k_texttranslator__translatortextedit_text_interaction_flags(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param modifier QTextCharFormat*
///
void k_texttranslator__translatortextedit_merge_current_char_format(void* self, void* modifier);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param format QTextCharFormat*
///
void k_texttranslator__translatortextedit_set_current_char_format(void* self, void* format);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QTextCharFormat* k_texttranslator__translatortextedit_current_char_format(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_tab_changes_focus(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param b bool
///
void k_texttranslator__translatortextedit_set_tab_changes_focus(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param title const char*
///
void k_texttranslator__translatortextedit_set_document_title(void* self, const char* title);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_document_title(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_undo_redo_enabled(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param enable bool
///
void k_texttranslator__translatortextedit_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param maximum int
///
void k_texttranslator__translatortextedit_set_maximum_block_count(void* self, int maximum);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_maximum_block_count(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum QPlainTextEdit__LineWrapMode
///
int32_t k_texttranslator__translatortextedit_line_wrap_mode(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param mode enum QPlainTextEdit__LineWrapMode
///
void k_texttranslator__translatortextedit_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum QTextOption__WrapMode
///
int32_t k_texttranslator__translatortextedit_word_wrap_mode(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param policy enum QTextOption__WrapMode
///
void k_texttranslator__translatortextedit_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param visible bool
///
void k_texttranslator__translatortextedit_set_background_visible(void* self, bool visible);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_background_visible(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param enabled bool
///
void k_texttranslator__translatortextedit_set_center_on_scroll(void* self, bool enabled);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_center_on_scroll(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param exp const char*
///
bool k_texttranslator__translatortextedit_find(void* self, const char* exp);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param exp QRegularExpression*
///
bool k_texttranslator__translatortextedit_find2(void* self, void* exp);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_to_plain_text(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_ensure_cursor_visible(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QMenu* k_texttranslator__translatortextedit_create_standard_context_menu(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param position QPoint*
///
QMenu* k_texttranslator__translatortextedit_create_standard_context_menu2(void* self, void* position);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param pos QPoint*
///
QTextCursor* k_texttranslator__translatortextedit_cursor_for_position(void* self, void* pos);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param cursor QTextCursor*
///
QRect* k_texttranslator__translatortextedit_cursor_rect(void* self, void* cursor);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRect* k_texttranslator__translatortextedit_cursor_rect2(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param pos QPoint*
///
const char* k_texttranslator__translatortextedit_anchor_at(void* self, void* pos);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_overwrite_mode(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param overwrite bool
///
void k_texttranslator__translatortextedit_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
double k_texttranslator__translatortextedit_tab_stop_distance(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param distance double
///
void k_texttranslator__translatortextedit_set_tab_stop_distance(void* self, double distance);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_cursor_width(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param width int
///
void k_texttranslator__translatortextedit_set_cursor_width(void* self, int width);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param selections libqt_list of QTextEdit__ExtraSelection*
///
void k_texttranslator__translatortextedit_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return libqt_list of QTextEdit__ExtraSelection*
///
libqt_list k_texttranslator__translatortextedit_extra_selections(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param operation enum QTextCursor__MoveOperation
///
void k_texttranslator__translatortextedit_move_cursor(void* self, int32_t operation);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_can_paste(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#print)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param printer QPagedPaintDevice*
///
void k_texttranslator__translatortextedit_print(void* self, void* printer);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_block_count(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_texttranslator__translatortextedit_input_method_query2(void* self, int32_t query, void* argument);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param text const char*
///
void k_texttranslator__translatortextedit_set_plain_text(void* self, const char* text);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_cut(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_copy(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_paste(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_undo(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_redo(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_clear(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_select_all(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param text const char*
///
void k_texttranslator__translatortextedit_insert_plain_text(void* self, const char* text);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param text const char*
///
void k_texttranslator__translatortextedit_append_plain_text(void* self, const char* text);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param html const char*
///
void k_texttranslator__translatortextedit_append_html(void* self, const char* html);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_center_cursor(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_zoom_in(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_zoom_out(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_text_changed(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self)
///
void k_texttranslator__translatortextedit_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param b bool
///
void k_texttranslator__translatortextedit_undo_available(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, bool b)
///
void k_texttranslator__translatortextedit_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param b bool
///
void k_texttranslator__translatortextedit_redo_available(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, bool b)
///
void k_texttranslator__translatortextedit_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param b bool
///
void k_texttranslator__translatortextedit_copy_available(void* self, bool b);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, bool b)
///
void k_texttranslator__translatortextedit_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_selection_changed(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self)
///
void k_texttranslator__translatortextedit_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_cursor_position_changed(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self)
///
void k_texttranslator__translatortextedit_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param rect QRect*
/// @param dy int
///
void k_texttranslator__translatortextedit_update_request(void* self, void* rect, int dy);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QRect* rect, int dy)
///
void k_texttranslator__translatortextedit_on_update_request(void* self, void (*callback)(void*, void*, int));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param newBlockCount int
///
void k_texttranslator__translatortextedit_block_count_changed(void* self, int newBlockCount);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, int newBlockCount)
///
void k_texttranslator__translatortextedit_on_block_count_changed(void* self, void (*callback)(void*, int));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 bool
///
void k_texttranslator__translatortextedit_modification_changed(void* self, bool param1);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, bool param1)
///
void k_texttranslator__translatortextedit_on_modification_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_texttranslator__translatortextedit_find22(void* self, const char* exp, int32_t options);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_texttranslator__translatortextedit_find23(void* self, void* exp, int32_t options);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void k_texttranslator__translatortextedit_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param range int
///
void k_texttranslator__translatortextedit_zoom_in1(void* self, int range);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param range int
///
void k_texttranslator__translatortextedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_texttranslator__translatortextedit_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_texttranslator__translatortextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QScrollBar* k_texttranslator__translatortextedit_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param scrollbar QScrollBar*
///
void k_texttranslator__translatortextedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_texttranslator__translatortextedit_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_texttranslator__translatortextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QScrollBar* k_texttranslator__translatortextedit_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param scrollbar QScrollBar*
///
void k_texttranslator__translatortextedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param widget QWidget*
///
void k_texttranslator__translatortextedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_texttranslator__translatortextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list k_texttranslator__translatortextedit_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param widget QWidget*
///
void k_texttranslator__translatortextedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t k_texttranslator__translatortextedit_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void k_texttranslator__translatortextedit_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param frameStyle int
///
void k_texttranslator__translatortextedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum QFrame__Shape
///
int32_t k_texttranslator__translatortextedit_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param frameShape enum QFrame__Shape
///
void k_texttranslator__translatortextedit_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum QFrame__Shadow
///
int32_t k_texttranslator__translatortextedit_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param frameShadow enum QFrame__Shadow
///
void k_texttranslator__translatortextedit_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param lineWidth int
///
void k_texttranslator__translatortextedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param midLineWidth int
///
void k_texttranslator__translatortextedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRect* k_texttranslator__translatortextedit_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param frameRect QRect*
///
void k_texttranslator__translatortextedit_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
uintptr_t k_texttranslator__translatortextedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
uintptr_t k_texttranslator__translatortextedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
uintptr_t k_texttranslator__translatortextedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QStyle* k_texttranslator__translatortextedit_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param style QStyle*
///
void k_texttranslator__translatortextedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum Qt__WindowModality
///
int32_t k_texttranslator__translatortextedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param windowModality enum Qt__WindowModality
///
void k_texttranslator__translatortextedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QWidget*
///
bool k_texttranslator__translatortextedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param enabled bool
///
void k_texttranslator__translatortextedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param disabled bool
///
void k_texttranslator__translatortextedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param windowModified bool
///
void k_texttranslator__translatortextedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRect* k_texttranslator__translatortextedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const QRect* k_texttranslator__translatortextedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRect* k_texttranslator__translatortextedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPoint* k_texttranslator__translatortextedit_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRect* k_texttranslator__translatortextedit_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRect* k_texttranslator__translatortextedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRegion* k_texttranslator__translatortextedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param minimumSize QSize*
///
void k_texttranslator__translatortextedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param minw int
/// @param minh int
///
void k_texttranslator__translatortextedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param maximumSize QSize*
///
void k_texttranslator__translatortextedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param maxw int
/// @param maxh int
///
void k_texttranslator__translatortextedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param minw int
///
void k_texttranslator__translatortextedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param minh int
///
void k_texttranslator__translatortextedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param maxw int
///
void k_texttranslator__translatortextedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param maxh int
///
void k_texttranslator__translatortextedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param sizeIncrement QSize*
///
void k_texttranslator__translatortextedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param w int
/// @param h int
///
void k_texttranslator__translatortextedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param baseSize QSize*
///
void k_texttranslator__translatortextedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param basew int
/// @param baseh int
///
void k_texttranslator__translatortextedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param fixedSize QSize*
///
void k_texttranslator__translatortextedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param w int
/// @param h int
///
void k_texttranslator__translatortextedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param w int
///
void k_texttranslator__translatortextedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param h int
///
void k_texttranslator__translatortextedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatortextedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatortextedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatortextedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatortextedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatortextedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatortextedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatortextedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatortextedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_texttranslator__translatortextedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_texttranslator__translatortextedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_texttranslator__translatortextedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_texttranslator__translatortextedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const QPalette* k_texttranslator__translatortextedit_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param palette QPalette*
///
void k_texttranslator__translatortextedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_texttranslator__translatortextedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_texttranslator__translatortextedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_texttranslator__translatortextedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_texttranslator__translatortextedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const QFont* k_texttranslator__translatortextedit_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param font QFont*
///
void k_texttranslator__translatortextedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QFontMetrics* k_texttranslator__translatortextedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QFontInfo* k_texttranslator__translatortextedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QCursor* k_texttranslator__translatortextedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param cursor QCursor*
///
void k_texttranslator__translatortextedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param enable bool
///
void k_texttranslator__translatortextedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param enable bool
///
void k_texttranslator__translatortextedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param mask QBitmap*
///
void k_texttranslator__translatortextedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param mask QRegion*
///
void k_texttranslator__translatortextedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRegion* k_texttranslator__translatortextedit_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param target QPaintDevice*
///
void k_texttranslator__translatortextedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param painter QPainter*
///
void k_texttranslator__translatortextedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPixmap* k_texttranslator__translatortextedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QGraphicsEffect* k_texttranslator__translatortextedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param effect QGraphicsEffect*
///
void k_texttranslator__translatortextedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param type enum Qt__GestureType
///
void k_texttranslator__translatortextedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param type enum Qt__GestureType
///
void k_texttranslator__translatortextedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param windowTitle const char*
///
void k_texttranslator__translatortextedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param styleSheet const char*
///
void k_texttranslator__translatortextedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param icon QIcon*
///
void k_texttranslator__translatortextedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QIcon* k_texttranslator__translatortextedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param windowIconText const char*
///
void k_texttranslator__translatortextedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param windowRole const char*
///
void k_texttranslator__translatortextedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param filePath const char*
///
void k_texttranslator__translatortextedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param level double
///
void k_texttranslator__translatortextedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
double k_texttranslator__translatortextedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param toolTip const char*
///
void k_texttranslator__translatortextedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param msec int
///
void k_texttranslator__translatortextedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param statusTip const char*
///
void k_texttranslator__translatortextedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param whatsThis const char*
///
void k_texttranslator__translatortextedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param name const char*
///
void k_texttranslator__translatortextedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param description const char*
///
void k_texttranslator__translatortextedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param direction enum Qt__LayoutDirection
///
void k_texttranslator__translatortextedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_texttranslator__translatortextedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param locale QLocale*
///
void k_texttranslator__translatortextedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QLocale* k_texttranslator__translatortextedit_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param reason enum Qt__FocusReason
///
void k_texttranslator__translatortextedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_texttranslator__translatortextedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param policy enum Qt__FocusPolicy
///
void k_texttranslator__translatortextedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_texttranslator__translatortextedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param focusProxy QWidget*
///
void k_texttranslator__translatortextedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_texttranslator__translatortextedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_texttranslator__translatortextedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QCursor*
///
void k_texttranslator__translatortextedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param key QKeySequence*
///
int32_t k_texttranslator__translatortextedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param id int
///
void k_texttranslator__translatortextedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param id int
///
void k_texttranslator__translatortextedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param id int
///
void k_texttranslator__translatortextedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_texttranslator__translatortextedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_texttranslator__translatortextedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param enable bool
///
void k_texttranslator__translatortextedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QGraphicsProxyWidget* k_texttranslator__translatortextedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texttranslator__translatortextedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QRect*
///
void k_texttranslator__translatortextedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QRegion*
///
void k_texttranslator__translatortextedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texttranslator__translatortextedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QRect*
///
void k_texttranslator__translatortextedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QRegion*
///
void k_texttranslator__translatortextedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param hidden bool
///
void k_texttranslator__translatortextedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QWidget*
///
void k_texttranslator__translatortextedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param x int
/// @param y int
///
void k_texttranslator__translatortextedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPoint*
///
void k_texttranslator__translatortextedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param w int
/// @param h int
///
void k_texttranslator__translatortextedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QSize*
///
void k_texttranslator__translatortextedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texttranslator__translatortextedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param geometry QRect*
///
void k_texttranslator__translatortextedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
char* k_texttranslator__translatortextedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param geometry char*
///
bool k_texttranslator__translatortextedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QWidget*
///
bool k_texttranslator__translatortextedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_texttranslator__translatortextedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_texttranslator__translatortextedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_texttranslator__translatortextedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSizePolicy* k_texttranslator__translatortextedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param sizePolicy QSizePolicy*
///
void k_texttranslator__translatortextedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_texttranslator__translatortextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRegion* k_texttranslator__translatortextedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_texttranslator__translatortextedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param margins QMargins*
///
void k_texttranslator__translatortextedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QMargins* k_texttranslator__translatortextedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QRect* k_texttranslator__translatortextedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QLayout* k_texttranslator__translatortextedit_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param layout QLayout*
///
void k_texttranslator__translatortextedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param parent QWidget*
///
void k_texttranslator__translatortextedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_texttranslator__translatortextedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param dx int
/// @param dy int
///
void k_texttranslator__translatortextedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_texttranslator__translatortextedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param on bool
///
void k_texttranslator__translatortextedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param action QAction*
///
void k_texttranslator__translatortextedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param actions libqt_list of QAction*
///
void k_texttranslator__translatortextedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_texttranslator__translatortextedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param before QAction*
/// @param action QAction*
///
void k_texttranslator__translatortextedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param action QAction*
///
void k_texttranslator__translatortextedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return libqt_list of QAction*
///
libqt_list k_texttranslator__translatortextedit_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param text const char*
///
QAction* k_texttranslator__translatortextedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_texttranslator__translatortextedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_texttranslator__translatortextedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_texttranslator__translatortextedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWidget* k_texttranslator__translatortextedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_texttranslator__translatortextedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_texttranslator__translatortextedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum Qt__WindowType
///
void k_texttranslator__translatortextedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_texttranslator__translatortextedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return enum Qt__WindowType
///
int32_t k_texttranslator__translatortextedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param x int
/// @param y int
///
QWidget* k_texttranslator__translatortextedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param p QPoint*
///
QWidget* k_texttranslator__translatortextedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param p QPointF*
///
QWidget* k_texttranslator__translatortextedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void k_texttranslator__translatortextedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_texttranslator__translatortextedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param child QWidget*
///
bool k_texttranslator__translatortextedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param enabled bool
///
void k_texttranslator__translatortextedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QBackingStore* k_texttranslator__translatortextedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QWindow* k_texttranslator__translatortextedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QScreen* k_texttranslator__translatortextedit_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param screen QScreen*
///
void k_texttranslator__translatortextedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_texttranslator__translatortextedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param title const char*
///
void k_texttranslator__translatortextedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, const char* title)
///
void k_texttranslator__translatortextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param icon QIcon*
///
void k_texttranslator__translatortextedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QIcon* icon)
///
void k_texttranslator__translatortextedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param iconText const char*
///
void k_texttranslator__translatortextedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, const char* iconText)
///
void k_texttranslator__translatortextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param pos QPoint*
///
void k_texttranslator__translatortextedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QPoint* pos)
///
void k_texttranslator__translatortextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_texttranslator__translatortextedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_texttranslator__translatortextedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_texttranslator__translatortextedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_texttranslator__translatortextedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_texttranslator__translatortextedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_texttranslator__translatortextedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_texttranslator__translatortextedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_texttranslator__translatortextedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param rectangle QRect*
///
QPixmap* k_texttranslator__translatortextedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_texttranslator__translatortextedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_texttranslator__translatortextedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param id int
/// @param enable bool
///
void k_texttranslator__translatortextedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param id int
/// @param enable bool
///
void k_texttranslator__translatortextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_texttranslator__translatortextedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_texttranslator__translatortextedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_texttranslator__translatortextedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_texttranslator__translatortextedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char* k_texttranslator__translatortextedit_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param name const char*
///
void k_texttranslator__translatortextedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param b bool
///
bool k_texttranslator__translatortextedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QThread* k_texttranslator__translatortextedit_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param thread QThread*
///
bool k_texttranslator__translatortextedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param interval int
///
int32_t k_texttranslator__translatortextedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param time int64_t of nanoseconds
///
int32_t k_texttranslator__translatortextedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param id int
///
void k_texttranslator__translatortextedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param id enum Qt__TimerId
///
void k_texttranslator__translatortextedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
/// @return libqt_list of QObject*
///
libqt_list k_texttranslator__translatortextedit_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param filterObj QObject*
///
void k_texttranslator__translatortextedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param obj QObject*
///
void k_texttranslator__translatortextedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatortextedit_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texttranslator__translatortextedit_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatortextedit_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatortextedit_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texttranslator__translatortextedit_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param receiver QObject*
///
bool k_texttranslator__translatortextedit_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texttranslator__translatortextedit_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param name const char*
/// @param value QVariant*
///
bool k_texttranslator__translatortextedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param name const char*
///
QVariant* k_texttranslator__translatortextedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const char** k_texttranslator__translatortextedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QBindingStorage* k_texttranslator__translatortextedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
const QBindingStorage* k_texttranslator__translatortextedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self)
///
void k_texttranslator__translatortextedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QObject* k_texttranslator__translatortextedit_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param classname const char*
///
bool k_texttranslator__translatortextedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatortextedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatortextedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texttranslator__translatortextedit_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texttranslator__translatortextedit_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texttranslator__translatortextedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal const char*
///
bool k_texttranslator__translatortextedit_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texttranslator__translatortextedit_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatortextedit_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatortextedit_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QObject*
///
void k_texttranslator__translatortextedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QObject* param1)
///
void k_texttranslator__translatortextedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
double k_texttranslator__translatortextedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
double k_texttranslator__translatortextedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_texttranslator__translatortextedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_texttranslator__translatortextedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_texttranslator__translatortextedit_load_resource(void* self, int type, void* name);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_load_resource` instead
///
#define k_texttranslator__translatortextedit_qbase_load_resource k_texttranslator__translatortextedit_super_load_resource

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_texttranslator__translatortextedit_super_load_resource(void* self, int type, void* name);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QVariant* func(TextTranslator__TranslatorTextEdit* self, int type, QUrl* name)
///
void k_texttranslator__translatortextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_texttranslator__translatortextedit_input_method_query(void* self, int32_t property);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_input_method_query` instead
///
#define k_texttranslator__translatortextedit_qbase_input_method_query k_texttranslator__translatortextedit_super_input_method_query

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_texttranslator__translatortextedit_super_input_method_query(void* self, int32_t property);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QVariant* func(TextTranslator__TranslatorTextEdit* self, enum Qt__InputMethodQuery property)
///
void k_texttranslator__translatortextedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QEvent*
///
bool k_texttranslator__translatortextedit_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_event` instead
///
#define k_texttranslator__translatortextedit_qbase_event k_texttranslator__translatortextedit_super_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QEvent*
///
bool k_texttranslator__translatortextedit_super_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func(TextTranslator__TranslatorTextEdit* self, QEvent* e)
///
void k_texttranslator__translatortextedit_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QTimerEvent*
///
void k_texttranslator__translatortextedit_timer_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_timer_event` instead
///
#define k_texttranslator__translatortextedit_qbase_timer_event k_texttranslator__translatortextedit_super_timer_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QTimerEvent*
///
void k_texttranslator__translatortextedit_super_timer_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QTimerEvent* e)
///
void k_texttranslator__translatortextedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QKeyEvent*
///
void k_texttranslator__translatortextedit_key_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_key_press_event` instead
///
#define k_texttranslator__translatortextedit_qbase_key_press_event k_texttranslator__translatortextedit_super_key_press_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QKeyEvent*
///
void k_texttranslator__translatortextedit_super_key_press_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e)
///
void k_texttranslator__translatortextedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QKeyEvent*
///
void k_texttranslator__translatortextedit_key_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_key_release_event` instead
///
#define k_texttranslator__translatortextedit_qbase_key_release_event k_texttranslator__translatortextedit_super_key_release_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QKeyEvent*
///
void k_texttranslator__translatortextedit_super_key_release_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QKeyEvent* e)
///
void k_texttranslator__translatortextedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QResizeEvent*
///
void k_texttranslator__translatortextedit_resize_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_resize_event` instead
///
#define k_texttranslator__translatortextedit_qbase_resize_event k_texttranslator__translatortextedit_super_resize_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QResizeEvent*
///
void k_texttranslator__translatortextedit_super_resize_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QResizeEvent* e)
///
void k_texttranslator__translatortextedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QPaintEvent*
///
void k_texttranslator__translatortextedit_paint_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_paint_event` instead
///
#define k_texttranslator__translatortextedit_qbase_paint_event k_texttranslator__translatortextedit_super_paint_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QPaintEvent*
///
void k_texttranslator__translatortextedit_super_paint_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QPaintEvent* e)
///
void k_texttranslator__translatortextedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_mouse_press_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_mouse_press_event` instead
///
#define k_texttranslator__translatortextedit_qbase_mouse_press_event k_texttranslator__translatortextedit_super_mouse_press_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_super_mouse_press_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e)
///
void k_texttranslator__translatortextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_mouse_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_mouse_move_event` instead
///
#define k_texttranslator__translatortextedit_qbase_mouse_move_event k_texttranslator__translatortextedit_super_mouse_move_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_super_mouse_move_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e)
///
void k_texttranslator__translatortextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_mouse_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_mouse_release_event` instead
///
#define k_texttranslator__translatortextedit_qbase_mouse_release_event k_texttranslator__translatortextedit_super_mouse_release_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_super_mouse_release_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e)
///
void k_texttranslator__translatortextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_mouse_double_click_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_mouse_double_click_event` instead
///
#define k_texttranslator__translatortextedit_qbase_mouse_double_click_event k_texttranslator__translatortextedit_super_mouse_double_click_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QMouseEvent*
///
void k_texttranslator__translatortextedit_super_mouse_double_click_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMouseEvent* e)
///
void k_texttranslator__translatortextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param next bool
///
bool k_texttranslator__translatortextedit_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_focus_next_prev_child` instead
///
#define k_texttranslator__translatortextedit_qbase_focus_next_prev_child k_texttranslator__translatortextedit_super_focus_next_prev_child

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param next bool
///
bool k_texttranslator__translatortextedit_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func(TextTranslator__TranslatorTextEdit* self, bool next)
///
void k_texttranslator__translatortextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QContextMenuEvent*
///
void k_texttranslator__translatortextedit_context_menu_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_context_menu_event` instead
///
#define k_texttranslator__translatortextedit_qbase_context_menu_event k_texttranslator__translatortextedit_super_context_menu_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QContextMenuEvent*
///
void k_texttranslator__translatortextedit_super_context_menu_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QContextMenuEvent* e)
///
void k_texttranslator__translatortextedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QDragEnterEvent*
///
void k_texttranslator__translatortextedit_drag_enter_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_drag_enter_event` instead
///
#define k_texttranslator__translatortextedit_qbase_drag_enter_event k_texttranslator__translatortextedit_super_drag_enter_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QDragEnterEvent*
///
void k_texttranslator__translatortextedit_super_drag_enter_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QDragEnterEvent* e)
///
void k_texttranslator__translatortextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QDragLeaveEvent*
///
void k_texttranslator__translatortextedit_drag_leave_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_drag_leave_event` instead
///
#define k_texttranslator__translatortextedit_qbase_drag_leave_event k_texttranslator__translatortextedit_super_drag_leave_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QDragLeaveEvent*
///
void k_texttranslator__translatortextedit_super_drag_leave_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QDragLeaveEvent* e)
///
void k_texttranslator__translatortextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QDragMoveEvent*
///
void k_texttranslator__translatortextedit_drag_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_drag_move_event` instead
///
#define k_texttranslator__translatortextedit_qbase_drag_move_event k_texttranslator__translatortextedit_super_drag_move_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QDragMoveEvent*
///
void k_texttranslator__translatortextedit_super_drag_move_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QDragMoveEvent* e)
///
void k_texttranslator__translatortextedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QFocusEvent*
///
void k_texttranslator__translatortextedit_focus_in_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_focus_in_event` instead
///
#define k_texttranslator__translatortextedit_qbase_focus_in_event k_texttranslator__translatortextedit_super_focus_in_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QFocusEvent*
///
void k_texttranslator__translatortextedit_super_focus_in_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e)
///
void k_texttranslator__translatortextedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QFocusEvent*
///
void k_texttranslator__translatortextedit_focus_out_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_focus_out_event` instead
///
#define k_texttranslator__translatortextedit_qbase_focus_out_event k_texttranslator__translatortextedit_super_focus_out_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QFocusEvent*
///
void k_texttranslator__translatortextedit_super_focus_out_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QFocusEvent* e)
///
void k_texttranslator__translatortextedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QShowEvent*
///
void k_texttranslator__translatortextedit_show_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_show_event` instead
///
#define k_texttranslator__translatortextedit_qbase_show_event k_texttranslator__translatortextedit_super_show_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QShowEvent*
///
void k_texttranslator__translatortextedit_super_show_event(void* self, void* param1);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QShowEvent* param1)
///
void k_texttranslator__translatortextedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QEvent*
///
void k_texttranslator__translatortextedit_change_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_change_event` instead
///
#define k_texttranslator__translatortextedit_qbase_change_event k_texttranslator__translatortextedit_super_change_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QEvent*
///
void k_texttranslator__translatortextedit_super_change_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QEvent* e)
///
void k_texttranslator__translatortextedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QWheelEvent*
///
void k_texttranslator__translatortextedit_wheel_event(void* self, void* e);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_wheel_event` instead
///
#define k_texttranslator__translatortextedit_qbase_wheel_event k_texttranslator__translatortextedit_super_wheel_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param e QWheelEvent*
///
void k_texttranslator__translatortextedit_super_wheel_event(void* self, void* e);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QWheelEvent* e)
///
void k_texttranslator__translatortextedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QMimeData* k_texttranslator__translatortextedit_create_mime_data_from_selection(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_create_mime_data_from_selection` instead
///
#define k_texttranslator__translatortextedit_qbase_create_mime_data_from_selection k_texttranslator__translatortextedit_super_create_mime_data_from_selection

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QMimeData* k_texttranslator__translatortextedit_super_create_mime_data_from_selection(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QMimeData* func()
///
void k_texttranslator__translatortextedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param source QMimeData*
///
bool k_texttranslator__translatortextedit_can_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_can_insert_from_mime_data` instead
///
#define k_texttranslator__translatortextedit_qbase_can_insert_from_mime_data k_texttranslator__translatortextedit_super_can_insert_from_mime_data

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param source QMimeData*
///
bool k_texttranslator__translatortextedit_super_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func(TextTranslator__TranslatorTextEdit* self, QMimeData* source)
///
void k_texttranslator__translatortextedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param source QMimeData*
///
void k_texttranslator__translatortextedit_insert_from_mime_data(void* self, void* source);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_insert_from_mime_data` instead
///
#define k_texttranslator__translatortextedit_qbase_insert_from_mime_data k_texttranslator__translatortextedit_super_insert_from_mime_data

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param source QMimeData*
///
void k_texttranslator__translatortextedit_super_insert_from_mime_data(void* self, void* source);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMimeData* source)
///
void k_texttranslator__translatortextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_texttranslator__translatortextedit_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_input_method_event` instead
///
#define k_texttranslator__translatortextedit_qbase_input_method_event k_texttranslator__translatortextedit_super_input_method_event

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_texttranslator__translatortextedit_super_input_method_event(void* self, void* param1);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QInputMethodEvent* param1)
///
void k_texttranslator__translatortextedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param dx int
/// @param dy int
///
void k_texttranslator__translatortextedit_scroll_contents_by(void* self, int dx, int dy);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_scroll_contents_by` instead
///
#define k_texttranslator__translatortextedit_qbase_scroll_contents_by k_texttranslator__translatortextedit_super_scroll_contents_by

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param dx int
/// @param dy int
///
void k_texttranslator__translatortextedit_super_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, int dx, int dy)
///
void k_texttranslator__translatortextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param cursor QTextCursor*
///
void k_texttranslator__translatortextedit_do_set_text_cursor(void* self, void* cursor);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_do_set_text_cursor` instead
///
#define k_texttranslator__translatortextedit_qbase_do_set_text_cursor k_texttranslator__translatortextedit_super_do_set_text_cursor

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param cursor QTextCursor*
///
void k_texttranslator__translatortextedit_super_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QTextCursor* cursor)
///
void k_texttranslator__translatortextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_minimum_size_hint` instead
///
#define k_texttranslator__translatortextedit_qbase_minimum_size_hint k_texttranslator__translatortextedit_super_minimum_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_super_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QSize* func()
///
void k_texttranslator__translatortextedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_size_hint(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_size_hint` instead
///
#define k_texttranslator__translatortextedit_qbase_size_hint k_texttranslator__translatortextedit_super_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_super_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QSize* func()
///
void k_texttranslator__translatortextedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param viewport QWidget*
///
void k_texttranslator__translatortextedit_setup_viewport(void* self, void* viewport);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_setup_viewport` instead
///
#define k_texttranslator__translatortextedit_qbase_setup_viewport k_texttranslator__translatortextedit_super_setup_viewport

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param viewport QWidget*
///
void k_texttranslator__translatortextedit_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QWidget* viewport)
///
void k_texttranslator__translatortextedit_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_texttranslator__translatortextedit_event_filter(void* self, void* param1, void* param2);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_event_filter` instead
///
#define k_texttranslator__translatortextedit_qbase_event_filter k_texttranslator__translatortextedit_super_event_filter

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_texttranslator__translatortextedit_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func(TextTranslator__TranslatorTextEdit* self, QObject* param1, QEvent* param2)
///
void k_texttranslator__translatortextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QEvent*
///
bool k_texttranslator__translatortextedit_viewport_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_viewport_event` instead
///
#define k_texttranslator__translatortextedit_qbase_viewport_event k_texttranslator__translatortextedit_super_viewport_event

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QEvent*
///
bool k_texttranslator__translatortextedit_super_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func(TextTranslator__TranslatorTextEdit* self, QEvent* param1)
///
void k_texttranslator__translatortextedit_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_viewport_size_hint(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_viewport_size_hint` instead
///
#define k_texttranslator__translatortextedit_qbase_viewport_size_hint k_texttranslator__translatortextedit_super_viewport_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QSize* k_texttranslator__translatortextedit_super_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QSize* func()
///
void k_texttranslator__translatortextedit_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param option QStyleOptionFrame*
///
void k_texttranslator__translatortextedit_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_init_style_option` instead
///
#define k_texttranslator__translatortextedit_qbase_init_style_option k_texttranslator__translatortextedit_super_init_style_option

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param option QStyleOptionFrame*
///
void k_texttranslator__translatortextedit_super_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QStyleOptionFrame* option)
///
void k_texttranslator__translatortextedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_dev_type(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_dev_type` instead
///
#define k_texttranslator__translatortextedit_qbase_dev_type k_texttranslator__translatortextedit_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback int32_t func()
///
void k_texttranslator__translatortextedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param visible bool
///
void k_texttranslator__translatortextedit_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_set_visible` instead
///
#define k_texttranslator__translatortextedit_qbase_set_visible k_texttranslator__translatortextedit_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param visible bool
///
void k_texttranslator__translatortextedit_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, bool visible)
///
void k_texttranslator__translatortextedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 int
///
int32_t k_texttranslator__translatortextedit_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_height_for_width` instead
///
#define k_texttranslator__translatortextedit_qbase_height_for_width k_texttranslator__translatortextedit_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 int
///
int32_t k_texttranslator__translatortextedit_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback int32_t func(TextTranslator__TranslatorTextEdit* self, int param1)
///
void k_texttranslator__translatortextedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_has_height_for_width` instead
///
#define k_texttranslator__translatortextedit_qbase_has_height_for_width k_texttranslator__translatortextedit_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func()
///
void k_texttranslator__translatortextedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPaintEngine* k_texttranslator__translatortextedit_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_paint_engine` instead
///
#define k_texttranslator__translatortextedit_qbase_paint_engine k_texttranslator__translatortextedit_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPaintEngine* k_texttranslator__translatortextedit_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QPaintEngine* func()
///
void k_texttranslator__translatortextedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QEnterEvent*
///
void k_texttranslator__translatortextedit_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_enter_event` instead
///
#define k_texttranslator__translatortextedit_qbase_enter_event k_texttranslator__translatortextedit_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QEnterEvent*
///
void k_texttranslator__translatortextedit_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QEnterEvent* event)
///
void k_texttranslator__translatortextedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QEvent*
///
void k_texttranslator__translatortextedit_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_leave_event` instead
///
#define k_texttranslator__translatortextedit_qbase_leave_event k_texttranslator__translatortextedit_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QEvent*
///
void k_texttranslator__translatortextedit_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QEvent* event)
///
void k_texttranslator__translatortextedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QMoveEvent*
///
void k_texttranslator__translatortextedit_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_move_event` instead
///
#define k_texttranslator__translatortextedit_qbase_move_event k_texttranslator__translatortextedit_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QMoveEvent*
///
void k_texttranslator__translatortextedit_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMoveEvent* event)
///
void k_texttranslator__translatortextedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QCloseEvent*
///
void k_texttranslator__translatortextedit_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_close_event` instead
///
#define k_texttranslator__translatortextedit_qbase_close_event k_texttranslator__translatortextedit_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QCloseEvent*
///
void k_texttranslator__translatortextedit_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QCloseEvent* event)
///
void k_texttranslator__translatortextedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QTabletEvent*
///
void k_texttranslator__translatortextedit_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_tablet_event` instead
///
#define k_texttranslator__translatortextedit_qbase_tablet_event k_texttranslator__translatortextedit_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QTabletEvent*
///
void k_texttranslator__translatortextedit_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QTabletEvent* event)
///
void k_texttranslator__translatortextedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QActionEvent*
///
void k_texttranslator__translatortextedit_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_action_event` instead
///
#define k_texttranslator__translatortextedit_qbase_action_event k_texttranslator__translatortextedit_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QActionEvent*
///
void k_texttranslator__translatortextedit_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QActionEvent* event)
///
void k_texttranslator__translatortextedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QHideEvent*
///
void k_texttranslator__translatortextedit_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_hide_event` instead
///
#define k_texttranslator__translatortextedit_qbase_hide_event k_texttranslator__translatortextedit_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QHideEvent*
///
void k_texttranslator__translatortextedit_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QHideEvent* event)
///
void k_texttranslator__translatortextedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_texttranslator__translatortextedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_native_event` instead
///
#define k_texttranslator__translatortextedit_qbase_native_event k_texttranslator__translatortextedit_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_texttranslator__translatortextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func(TextTranslator__TranslatorTextEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_texttranslator__translatortextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_texttranslator__translatortextedit_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_metric` instead
///
#define k_texttranslator__translatortextedit_qbase_metric k_texttranslator__translatortextedit_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_texttranslator__translatortextedit_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback int32_t func(TextTranslator__TranslatorTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_texttranslator__translatortextedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param painter QPainter*
///
void k_texttranslator__translatortextedit_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_init_painter` instead
///
#define k_texttranslator__translatortextedit_qbase_init_painter k_texttranslator__translatortextedit_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param painter QPainter*
///
void k_texttranslator__translatortextedit_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QPainter* painter)
///
void k_texttranslator__translatortextedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_texttranslator__translatortextedit_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_redirected` instead
///
#define k_texttranslator__translatortextedit_qbase_redirected k_texttranslator__translatortextedit_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_texttranslator__translatortextedit_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QPaintDevice* func(TextTranslator__TranslatorTextEdit* self, QPoint* offset)
///
void k_texttranslator__translatortextedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPainter* k_texttranslator__translatortextedit_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_shared_painter` instead
///
#define k_texttranslator__translatortextedit_qbase_shared_painter k_texttranslator__translatortextedit_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPainter* k_texttranslator__translatortextedit_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QPainter* func()
///
void k_texttranslator__translatortextedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QChildEvent*
///
void k_texttranslator__translatortextedit_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_child_event` instead
///
#define k_texttranslator__translatortextedit_qbase_child_event k_texttranslator__translatortextedit_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QChildEvent*
///
void k_texttranslator__translatortextedit_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QChildEvent* event)
///
void k_texttranslator__translatortextedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QEvent*
///
void k_texttranslator__translatortextedit_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_custom_event` instead
///
#define k_texttranslator__translatortextedit_qbase_custom_event k_texttranslator__translatortextedit_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param event QEvent*
///
void k_texttranslator__translatortextedit_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QEvent* event)
///
void k_texttranslator__translatortextedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatortextedit_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_connect_notify` instead
///
#define k_texttranslator__translatortextedit_qbase_connect_notify k_texttranslator__translatortextedit_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatortextedit_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMetaMethod* signal)
///
void k_texttranslator__translatortextedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatortextedit_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_disconnect_notify` instead
///
#define k_texttranslator__translatortextedit_qbase_disconnect_notify k_texttranslator__translatortextedit_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatortextedit_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QMetaMethod* signal)
///
void k_texttranslator__translatortextedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QTextBlock* k_texttranslator__translatortextedit_first_visible_block(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_first_visible_block` instead
///
#define k_texttranslator__translatortextedit_qbase_first_visible_block k_texttranslator__translatortextedit_super_first_visible_block

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QTextBlock* k_texttranslator__translatortextedit_super_first_visible_block(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QTextBlock* func()
///
void k_texttranslator__translatortextedit_on_first_visible_block(void* self, QTextBlock* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPointF* k_texttranslator__translatortextedit_content_offset(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_content_offset` instead
///
#define k_texttranslator__translatortextedit_qbase_content_offset k_texttranslator__translatortextedit_super_content_offset

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QPointF* k_texttranslator__translatortextedit_super_content_offset(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QPointF* func()
///
void k_texttranslator__translatortextedit_on_content_offset(void* self, QPointF* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param block QTextBlock*
///
QRectF* k_texttranslator__translatortextedit_block_bounding_rect(void* self, void* block);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_block_bounding_rect` instead
///
#define k_texttranslator__translatortextedit_qbase_block_bounding_rect k_texttranslator__translatortextedit_super_block_bounding_rect

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param block QTextBlock*
///
QRectF* k_texttranslator__translatortextedit_super_block_bounding_rect(void* self, void* block);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QRectF* func(TextTranslator__TranslatorTextEdit* self, QTextBlock* block)
///
void k_texttranslator__translatortextedit_on_block_bounding_rect(void* self, QRectF* (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param block QTextBlock*
///
QRectF* k_texttranslator__translatortextedit_block_bounding_geometry(void* self, void* block);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_block_bounding_geometry` instead
///
#define k_texttranslator__translatortextedit_qbase_block_bounding_geometry k_texttranslator__translatortextedit_super_block_bounding_geometry

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param block QTextBlock*
///
QRectF* k_texttranslator__translatortextedit_super_block_bounding_geometry(void* self, void* block);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QRectF* func(TextTranslator__TranslatorTextEdit* self, QTextBlock* block)
///
void k_texttranslator__translatortextedit_on_block_bounding_geometry(void* self, QRectF* (*callback)(void*, void*));

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QAbstractTextDocumentLayout__PaintContext* k_texttranslator__translatortextedit_get_paint_context(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_get_paint_context` instead
///
#define k_texttranslator__translatortextedit_qbase_get_paint_context k_texttranslator__translatortextedit_super_get_paint_context

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QAbstractTextDocumentLayout__PaintContext* k_texttranslator__translatortextedit_super_get_paint_context(void* self);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QAbstractTextDocumentLayout__PaintContext* func()
///
void k_texttranslator__translatortextedit_on_get_paint_context(void* self, QAbstractTextDocumentLayout__PaintContext* (*callback)());

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param range float
///
void k_texttranslator__translatortextedit_zoom_in_f(void* self, float range);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_zoom_in_f` instead
///
#define k_texttranslator__translatortextedit_qbase_zoom_in_f k_texttranslator__translatortextedit_super_zoom_in_f

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param range float
///
void k_texttranslator__translatortextedit_super_zoom_in_f(void* self, float range);

/// Inherited from QPlainTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, float range)
///
void k_texttranslator__translatortextedit_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_texttranslator__translatortextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_set_viewport_margins` instead
///
#define k_texttranslator__translatortextedit_qbase_set_viewport_margins k_texttranslator__translatortextedit_super_set_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_texttranslator__translatortextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, int left, int top, int right, int bottom)
///
void k_texttranslator__translatortextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QMargins* k_texttranslator__translatortextedit_viewport_margins(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_viewport_margins` instead
///
#define k_texttranslator__translatortextedit_qbase_viewport_margins k_texttranslator__translatortextedit_super_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QMargins* k_texttranslator__translatortextedit_super_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QMargins* func()
///
void k_texttranslator__translatortextedit_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPainter*
///
void k_texttranslator__translatortextedit_draw_frame(void* self, void* param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_draw_frame` instead
///
#define k_texttranslator__translatortextedit_qbase_draw_frame k_texttranslator__translatortextedit_super_draw_frame

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param param1 QPainter*
///
void k_texttranslator__translatortextedit_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, QPainter* param1)
///
void k_texttranslator__translatortextedit_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_update_micro_focus` instead
///
#define k_texttranslator__translatortextedit_qbase_update_micro_focus k_texttranslator__translatortextedit_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func()
///
void k_texttranslator__translatortextedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_create(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_create` instead
///
#define k_texttranslator__translatortextedit_qbase_create k_texttranslator__translatortextedit_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func()
///
void k_texttranslator__translatortextedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_destroy(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_destroy` instead
///
#define k_texttranslator__translatortextedit_qbase_destroy k_texttranslator__translatortextedit_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func()
///
void k_texttranslator__translatortextedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_focus_next_child` instead
///
#define k_texttranslator__translatortextedit_qbase_focus_next_child k_texttranslator__translatortextedit_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func()
///
void k_texttranslator__translatortextedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_focus_previous_child` instead
///
#define k_texttranslator__translatortextedit_qbase_focus_previous_child k_texttranslator__translatortextedit_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
bool k_texttranslator__translatortextedit_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func()
///
void k_texttranslator__translatortextedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QObject* k_texttranslator__translatortextedit_sender(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_sender` instead
///
#define k_texttranslator__translatortextedit_qbase_sender k_texttranslator__translatortextedit_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
QObject* k_texttranslator__translatortextedit_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback QObject* func()
///
void k_texttranslator__translatortextedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_sender_signal_index` instead
///
#define k_texttranslator__translatortextedit_qbase_sender_signal_index k_texttranslator__translatortextedit_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
///
int32_t k_texttranslator__translatortextedit_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback int32_t func()
///
void k_texttranslator__translatortextedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal const char*
///
int32_t k_texttranslator__translatortextedit_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_receivers` instead
///
#define k_texttranslator__translatortextedit_qbase_receivers k_texttranslator__translatortextedit_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal const char*
///
int32_t k_texttranslator__translatortextedit_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback int32_t func(TextTranslator__TranslatorTextEdit* self, const char* signal)
///
void k_texttranslator__translatortextedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatortextedit_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_is_signal_connected` instead
///
#define k_texttranslator__translatortextedit_qbase_is_signal_connected k_texttranslator__translatortextedit_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatortextedit_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback bool func(TextTranslator__TranslatorTextEdit* self, QMetaMethod* signal)
///
void k_texttranslator__translatortextedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_texttranslator__translatortextedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_texttranslator__translatortextedit_super_get_decoded_metric_f` instead
///
#define k_texttranslator__translatortextedit_qbase_get_decoded_metric_f k_texttranslator__translatortextedit_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_texttranslator__translatortextedit_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback double func(TextTranslator__TranslatorTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_texttranslator__translatortextedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextTranslator__TranslatorTextEdit*
/// @param callback void func(TextTranslator__TranslatorTextEdit* self, const char* objectName)
///
void k_texttranslator__translatortextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextTranslator__TranslatorTextEdit*
///
void k_texttranslator__translatortextedit_delete(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)

/// k_texttranslator__translatorwidget_new constructs a new TextTranslator::TranslatorWidget object.
///
/// @param parent QWidget*
///
TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)

/// k_texttranslator__translatorwidget_new2 constructs a new TextTranslator::TranslatorWidget object.
///
TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new2();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)

/// k_texttranslator__translatorwidget_new3 constructs a new TextTranslator::TranslatorWidget object.
///
/// @param text const char*
///
TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new3(const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)

/// k_texttranslator__translatorwidget_new4 constructs a new TextTranslator::TranslatorWidget object.
///
/// @param text const char*
/// @param parent QWidget*
///
TextTranslator__TranslatorWidget* k_texttranslator__translatorwidget_new4(const char* text, void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
///
const QMetaObject* k_texttranslator__translatorwidget_meta_object(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback const QMetaObject* func()
///
void k_texttranslator__translatorwidget_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_meta_object` instead
///
#define k_texttranslator__translatorwidget_qbase_meta_object k_texttranslator__translatorwidget_super_meta_object

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorWidget*
///
const QMetaObject* k_texttranslator__translatorwidget_super_meta_object(void* self);

/// @param self TextTranslator__TranslatorWidget*
/// @param param1 const char*
///
void* k_texttranslator__translatorwidget_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void* func(TextTranslator__TranslatorWidget* self, const char* param1)
///
void k_texttranslator__translatorwidget_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_metacast` instead
///
#define k_texttranslator__translatorwidget_qbase_metacast k_texttranslator__translatorwidget_super_metacast

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 const char*
///
void* k_texttranslator__translatorwidget_super_metacast(void* self, const char* param1);

/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback int32_t func(TextTranslator__TranslatorWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_texttranslator__translatorwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_metacall` instead
///
#define k_texttranslator__translatorwidget_qbase_metacall k_texttranslator__translatorwidget_super_metacall

/// Base class method implementation
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_texttranslator__translatorwidget_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_texttranslator__translatorwidget_tr(const char* s);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param textToTranslate const char*
///
void k_texttranslator__translatorwidget_set_text_to_translate(void* self, const char* textToTranslate);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_write_config(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_read_config(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param b bool
///
void k_texttranslator__translatorwidget_set_standalone(void* self, bool b);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_slot_translate(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_slot_close_widget(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param e QEvent*
///
bool k_texttranslator__translatorwidget_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// Allows for overriding the related default method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func(TextTranslator__TranslatorWidget* self, QEvent* e)
///
void k_texttranslator__translatorwidget_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_event` instead
///
#define k_texttranslator__translatorwidget_qbase_event k_texttranslator__translatorwidget_super_event

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// Base class method implementation
///
/// @param self TextTranslator__TranslatorWidget*
/// @param e QEvent*
///
bool k_texttranslator__translatorwidget_super_event(void* self, void* e);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_tools_was_closed(void* self);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self)
///
void k_texttranslator__translatorwidget_on_tools_was_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_texttranslator__translatorwidget_tr2(const char* s, const char* c);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_texttranslator__translatorwidget_tr3(const char* s, const char* c, int n);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self TextTranslator__TranslatorWidget*
///
uintptr_t k_texttranslator__translatorwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self TextTranslator__TranslatorWidget*
///
uintptr_t k_texttranslator__translatorwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self TextTranslator__TranslatorWidget*
///
uintptr_t k_texttranslator__translatorwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self TextTranslator__TranslatorWidget*
///
QStyle* k_texttranslator__translatorwidget_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param style QStyle*
///
void k_texttranslator__translatorwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return enum Qt__WindowModality
///
int32_t k_texttranslator__translatorwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param windowModality enum Qt__WindowModality
///
void k_texttranslator__translatorwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QWidget*
///
bool k_texttranslator__translatorwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param enabled bool
///
void k_texttranslator__translatorwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param disabled bool
///
void k_texttranslator__translatorwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param windowModified bool
///
void k_texttranslator__translatorwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRect* k_texttranslator__translatorwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self TextTranslator__TranslatorWidget*
///
const QRect* k_texttranslator__translatorwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRect* k_texttranslator__translatorwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self TextTranslator__TranslatorWidget*
///
QPoint* k_texttranslator__translatorwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRect* k_texttranslator__translatorwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRect* k_texttranslator__translatorwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRegion* k_texttranslator__translatorwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param minimumSize QSize*
///
void k_texttranslator__translatorwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param minw int
/// @param minh int
///
void k_texttranslator__translatorwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param maximumSize QSize*
///
void k_texttranslator__translatorwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param maxw int
/// @param maxh int
///
void k_texttranslator__translatorwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param minw int
///
void k_texttranslator__translatorwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param minh int
///
void k_texttranslator__translatorwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param maxw int
///
void k_texttranslator__translatorwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param maxh int
///
void k_texttranslator__translatorwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param sizeIncrement QSize*
///
void k_texttranslator__translatorwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param w int
/// @param h int
///
void k_texttranslator__translatorwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param baseSize QSize*
///
void k_texttranslator__translatorwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param basew int
/// @param baseh int
///
void k_texttranslator__translatorwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param fixedSize QSize*
///
void k_texttranslator__translatorwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param w int
/// @param h int
///
void k_texttranslator__translatorwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param w int
///
void k_texttranslator__translatorwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param h int
///
void k_texttranslator__translatorwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatorwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatorwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatorwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatorwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatorwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatorwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPointF*
///
QPointF* k_texttranslator__translatorwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPoint*
///
QPoint* k_texttranslator__translatorwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_texttranslator__translatorwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_texttranslator__translatorwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_texttranslator__translatorwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_texttranslator__translatorwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self TextTranslator__TranslatorWidget*
///
const QPalette* k_texttranslator__translatorwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param palette QPalette*
///
void k_texttranslator__translatorwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_texttranslator__translatorwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_texttranslator__translatorwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_texttranslator__translatorwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return enum QPalette__ColorRole
///
int32_t k_texttranslator__translatorwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self TextTranslator__TranslatorWidget*
///
const QFont* k_texttranslator__translatorwidget_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param font QFont*
///
void k_texttranslator__translatorwidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self TextTranslator__TranslatorWidget*
///
QFontMetrics* k_texttranslator__translatorwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self TextTranslator__TranslatorWidget*
///
QFontInfo* k_texttranslator__translatorwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self TextTranslator__TranslatorWidget*
///
QCursor* k_texttranslator__translatorwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param cursor QCursor*
///
void k_texttranslator__translatorwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param enable bool
///
void k_texttranslator__translatorwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param enable bool
///
void k_texttranslator__translatorwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param mask QBitmap*
///
void k_texttranslator__translatorwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param mask QRegion*
///
void k_texttranslator__translatorwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRegion* k_texttranslator__translatorwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param target QPaintDevice*
///
void k_texttranslator__translatorwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param painter QPainter*
///
void k_texttranslator__translatorwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextTranslator__TranslatorWidget*
///
QPixmap* k_texttranslator__translatorwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self TextTranslator__TranslatorWidget*
///
QGraphicsEffect* k_texttranslator__translatorwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param effect QGraphicsEffect*
///
void k_texttranslator__translatorwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param type enum Qt__GestureType
///
void k_texttranslator__translatorwidget_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param type enum Qt__GestureType
///
void k_texttranslator__translatorwidget_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param windowTitle const char*
///
void k_texttranslator__translatorwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param styleSheet const char*
///
void k_texttranslator__translatorwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param icon QIcon*
///
void k_texttranslator__translatorwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self TextTranslator__TranslatorWidget*
///
QIcon* k_texttranslator__translatorwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param windowIconText const char*
///
void k_texttranslator__translatorwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param windowRole const char*
///
void k_texttranslator__translatorwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param filePath const char*
///
void k_texttranslator__translatorwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param level double
///
void k_texttranslator__translatorwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self TextTranslator__TranslatorWidget*
///
double k_texttranslator__translatorwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param toolTip const char*
///
void k_texttranslator__translatorwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param msec int
///
void k_texttranslator__translatorwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param statusTip const char*
///
void k_texttranslator__translatorwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param whatsThis const char*
///
void k_texttranslator__translatorwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param name const char*
///
void k_texttranslator__translatorwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param description const char*
///
void k_texttranslator__translatorwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param direction enum Qt__LayoutDirection
///
void k_texttranslator__translatorwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_texttranslator__translatorwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param locale QLocale*
///
void k_texttranslator__translatorwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self TextTranslator__TranslatorWidget*
///
QLocale* k_texttranslator__translatorwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param reason enum Qt__FocusReason
///
void k_texttranslator__translatorwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_texttranslator__translatorwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param policy enum Qt__FocusPolicy
///
void k_texttranslator__translatorwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_texttranslator__translatorwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param focusProxy QWidget*
///
void k_texttranslator__translatorwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_texttranslator__translatorwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_texttranslator__translatorwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QCursor*
///
void k_texttranslator__translatorwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param key QKeySequence*
///
int32_t k_texttranslator__translatorwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param id int
///
void k_texttranslator__translatorwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param id int
///
void k_texttranslator__translatorwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param id int
///
void k_texttranslator__translatorwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_texttranslator__translatorwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_texttranslator__translatorwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param enable bool
///
void k_texttranslator__translatorwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self TextTranslator__TranslatorWidget*
///
QGraphicsProxyWidget* k_texttranslator__translatorwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texttranslator__translatorwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QRect*
///
void k_texttranslator__translatorwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QRegion*
///
void k_texttranslator__translatorwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texttranslator__translatorwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QRect*
///
void k_texttranslator__translatorwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QRegion*
///
void k_texttranslator__translatorwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param hidden bool
///
void k_texttranslator__translatorwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QWidget*
///
void k_texttranslator__translatorwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param x int
/// @param y int
///
void k_texttranslator__translatorwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QPoint*
///
void k_texttranslator__translatorwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param w int
/// @param h int
///
void k_texttranslator__translatorwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QSize*
///
void k_texttranslator__translatorwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_texttranslator__translatorwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param geometry QRect*
///
void k_texttranslator__translatorwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
char* k_texttranslator__translatorwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param geometry char*
///
bool k_texttranslator__translatorwidget_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QWidget*
///
bool k_texttranslator__translatorwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_texttranslator__translatorwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param state flag of enum Qt__WindowState
///
void k_texttranslator__translatorwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param state flag of enum Qt__WindowState
///
void k_texttranslator__translatorwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self TextTranslator__TranslatorWidget*
///
QSizePolicy* k_texttranslator__translatorwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param sizePolicy QSizePolicy*
///
void k_texttranslator__translatorwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_texttranslator__translatorwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRegion* k_texttranslator__translatorwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_texttranslator__translatorwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param margins QMargins*
///
void k_texttranslator__translatorwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self TextTranslator__TranslatorWidget*
///
QMargins* k_texttranslator__translatorwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self TextTranslator__TranslatorWidget*
///
QRect* k_texttranslator__translatorwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self TextTranslator__TranslatorWidget*
///
QLayout* k_texttranslator__translatorwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param layout QLayout*
///
void k_texttranslator__translatorwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param parent QWidget*
///
void k_texttranslator__translatorwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_texttranslator__translatorwidget_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param dx int
/// @param dy int
///
void k_texttranslator__translatorwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_texttranslator__translatorwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param on bool
///
void k_texttranslator__translatorwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param action QAction*
///
void k_texttranslator__translatorwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param actions libqt_list of QAction*
///
void k_texttranslator__translatorwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_texttranslator__translatorwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param before QAction*
/// @param action QAction*
///
void k_texttranslator__translatorwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param action QAction*
///
void k_texttranslator__translatorwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return libqt_list of QAction*
///
libqt_list k_texttranslator__translatorwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param text const char*
///
QAction* k_texttranslator__translatorwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_texttranslator__translatorwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_texttranslator__translatorwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_texttranslator__translatorwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWidget* k_texttranslator__translatorwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param type flag of enum Qt__WindowType
///
void k_texttranslator__translatorwidget_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_texttranslator__translatorwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum Qt__WindowType
///
void k_texttranslator__translatorwidget_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param type flag of enum Qt__WindowType
///
void k_texttranslator__translatorwidget_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return enum Qt__WindowType
///
int32_t k_texttranslator__translatorwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_texttranslator__translatorwidget_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param x int
/// @param y int
///
QWidget* k_texttranslator__translatorwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param p QPoint*
///
QWidget* k_texttranslator__translatorwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param p QPointF*
///
QWidget* k_texttranslator__translatorwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum Qt__WidgetAttribute
///
void k_texttranslator__translatorwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_texttranslator__translatorwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param child QWidget*
///
bool k_texttranslator__translatorwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param enabled bool
///
void k_texttranslator__translatorwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self TextTranslator__TranslatorWidget*
///
QBackingStore* k_texttranslator__translatorwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self TextTranslator__TranslatorWidget*
///
QWindow* k_texttranslator__translatorwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self TextTranslator__TranslatorWidget*
///
QScreen* k_texttranslator__translatorwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param screen QScreen*
///
void k_texttranslator__translatorwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_texttranslator__translatorwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param title const char*
///
void k_texttranslator__translatorwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, const char* title)
///
void k_texttranslator__translatorwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param icon QIcon*
///
void k_texttranslator__translatorwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QIcon* icon)
///
void k_texttranslator__translatorwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param iconText const char*
///
void k_texttranslator__translatorwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, const char* iconText)
///
void k_texttranslator__translatorwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param pos QPoint*
///
void k_texttranslator__translatorwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QPoint* pos)
///
void k_texttranslator__translatorwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_texttranslator__translatorwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_texttranslator__translatorwidget_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_texttranslator__translatorwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_texttranslator__translatorwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_texttranslator__translatorwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_texttranslator__translatorwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_texttranslator__translatorwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_texttranslator__translatorwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param rectangle QRect*
///
QPixmap* k_texttranslator__translatorwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_texttranslator__translatorwidget_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_texttranslator__translatorwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param id int
/// @param enable bool
///
void k_texttranslator__translatorwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param id int
/// @param enable bool
///
void k_texttranslator__translatorwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_texttranslator__translatorwidget_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_texttranslator__translatorwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_texttranslator__translatorwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_texttranslator__translatorwidget_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char* k_texttranslator__translatorwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param name const char*
///
void k_texttranslator__translatorwidget_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param b bool
///
bool k_texttranslator__translatorwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextTranslator__TranslatorWidget*
///
QThread* k_texttranslator__translatorwidget_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param thread QThread*
///
bool k_texttranslator__translatorwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param interval int
///
int32_t k_texttranslator__translatorwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param time int64_t of nanoseconds
///
int32_t k_texttranslator__translatorwidget_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param id int
///
void k_texttranslator__translatorwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param id enum Qt__TimerId
///
void k_texttranslator__translatorwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextTranslator__TranslatorWidget*
///
/// @return libqt_list of QObject*
///
libqt_list k_texttranslator__translatorwidget_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param filterObj QObject*
///
void k_texttranslator__translatorwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param obj QObject*
///
void k_texttranslator__translatorwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorwidget_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_texttranslator__translatorwidget_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_texttranslator__translatorwidget_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorwidget_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_texttranslator__translatorwidget_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param receiver QObject*
///
bool k_texttranslator__translatorwidget_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_texttranslator__translatorwidget_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param name const char*
/// @param value QVariant*
///
bool k_texttranslator__translatorwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param name const char*
///
QVariant* k_texttranslator__translatorwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextTranslator__TranslatorWidget*
///
const char** k_texttranslator__translatorwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorWidget*
///
QBindingStorage* k_texttranslator__translatorwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextTranslator__TranslatorWidget*
///
const QBindingStorage* k_texttranslator__translatorwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self)
///
void k_texttranslator__translatorwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextTranslator__TranslatorWidget*
///
QObject* k_texttranslator__translatorwidget_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param classname const char*
///
bool k_texttranslator__translatorwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_texttranslator__translatorwidget_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_texttranslator__translatorwidget_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_texttranslator__translatorwidget_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_texttranslator__translatorwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal const char*
///
bool k_texttranslator__translatorwidget_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_texttranslator__translatorwidget_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorwidget_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param receiver QObject*
/// @param member const char*
///
bool k_texttranslator__translatorwidget_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QObject*
///
void k_texttranslator__translatorwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QObject* param1)
///
void k_texttranslator__translatorwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self TextTranslator__TranslatorWidget*
///
double k_texttranslator__translatorwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self TextTranslator__TranslatorWidget*
///
double k_texttranslator__translatorwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_texttranslator__translatorwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_texttranslator__translatorwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_dev_type(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_dev_type` instead
///
#define k_texttranslator__translatorwidget_qbase_dev_type k_texttranslator__translatorwidget_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback int32_t func()
///
void k_texttranslator__translatorwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param visible bool
///
void k_texttranslator__translatorwidget_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_set_visible` instead
///
#define k_texttranslator__translatorwidget_qbase_set_visible k_texttranslator__translatorwidget_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param visible bool
///
void k_texttranslator__translatorwidget_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, bool visible)
///
void k_texttranslator__translatorwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_size_hint(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_size_hint` instead
///
#define k_texttranslator__translatorwidget_qbase_size_hint k_texttranslator__translatorwidget_super_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_super_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback QSize* func()
///
void k_texttranslator__translatorwidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_minimum_size_hint` instead
///
#define k_texttranslator__translatorwidget_qbase_minimum_size_hint k_texttranslator__translatorwidget_super_minimum_size_hint

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QSize* k_texttranslator__translatorwidget_super_minimum_size_hint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback QSize* func()
///
void k_texttranslator__translatorwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 int
///
int32_t k_texttranslator__translatorwidget_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_height_for_width` instead
///
#define k_texttranslator__translatorwidget_qbase_height_for_width k_texttranslator__translatorwidget_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 int
///
int32_t k_texttranslator__translatorwidget_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback int32_t func(TextTranslator__TranslatorWidget* self, int param1)
///
void k_texttranslator__translatorwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_has_height_for_width` instead
///
#define k_texttranslator__translatorwidget_qbase_has_height_for_width k_texttranslator__translatorwidget_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func()
///
void k_texttranslator__translatorwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QPaintEngine* k_texttranslator__translatorwidget_paint_engine(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_paint_engine` instead
///
#define k_texttranslator__translatorwidget_qbase_paint_engine k_texttranslator__translatorwidget_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QPaintEngine* k_texttranslator__translatorwidget_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback QPaintEngine* func()
///
void k_texttranslator__translatorwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_mouse_press_event` instead
///
#define k_texttranslator__translatorwidget_qbase_mouse_press_event k_texttranslator__translatorwidget_super_mouse_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_super_mouse_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QMouseEvent* event)
///
void k_texttranslator__translatorwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_mouse_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_mouse_release_event` instead
///
#define k_texttranslator__translatorwidget_qbase_mouse_release_event k_texttranslator__translatorwidget_super_mouse_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_super_mouse_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QMouseEvent* event)
///
void k_texttranslator__translatorwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_mouse_double_click_event` instead
///
#define k_texttranslator__translatorwidget_qbase_mouse_double_click_event k_texttranslator__translatorwidget_super_mouse_double_click_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QMouseEvent* event)
///
void k_texttranslator__translatorwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_mouse_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_mouse_move_event` instead
///
#define k_texttranslator__translatorwidget_qbase_mouse_move_event k_texttranslator__translatorwidget_super_mouse_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMouseEvent*
///
void k_texttranslator__translatorwidget_super_mouse_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QMouseEvent* event)
///
void k_texttranslator__translatorwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QWheelEvent*
///
void k_texttranslator__translatorwidget_wheel_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_wheel_event` instead
///
#define k_texttranslator__translatorwidget_qbase_wheel_event k_texttranslator__translatorwidget_super_wheel_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QWheelEvent*
///
void k_texttranslator__translatorwidget_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QWheelEvent* event)
///
void k_texttranslator__translatorwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QKeyEvent*
///
void k_texttranslator__translatorwidget_key_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_key_press_event` instead
///
#define k_texttranslator__translatorwidget_qbase_key_press_event k_texttranslator__translatorwidget_super_key_press_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QKeyEvent*
///
void k_texttranslator__translatorwidget_super_key_press_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QKeyEvent* event)
///
void k_texttranslator__translatorwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QKeyEvent*
///
void k_texttranslator__translatorwidget_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_key_release_event` instead
///
#define k_texttranslator__translatorwidget_qbase_key_release_event k_texttranslator__translatorwidget_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QKeyEvent*
///
void k_texttranslator__translatorwidget_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QKeyEvent* event)
///
void k_texttranslator__translatorwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QFocusEvent*
///
void k_texttranslator__translatorwidget_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_focus_in_event` instead
///
#define k_texttranslator__translatorwidget_qbase_focus_in_event k_texttranslator__translatorwidget_super_focus_in_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QFocusEvent*
///
void k_texttranslator__translatorwidget_super_focus_in_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QFocusEvent* event)
///
void k_texttranslator__translatorwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QFocusEvent*
///
void k_texttranslator__translatorwidget_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_focus_out_event` instead
///
#define k_texttranslator__translatorwidget_qbase_focus_out_event k_texttranslator__translatorwidget_super_focus_out_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QFocusEvent*
///
void k_texttranslator__translatorwidget_super_focus_out_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QFocusEvent* event)
///
void k_texttranslator__translatorwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QEnterEvent*
///
void k_texttranslator__translatorwidget_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_enter_event` instead
///
#define k_texttranslator__translatorwidget_qbase_enter_event k_texttranslator__translatorwidget_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QEnterEvent*
///
void k_texttranslator__translatorwidget_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QEnterEvent* event)
///
void k_texttranslator__translatorwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QEvent*
///
void k_texttranslator__translatorwidget_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_leave_event` instead
///
#define k_texttranslator__translatorwidget_qbase_leave_event k_texttranslator__translatorwidget_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QEvent*
///
void k_texttranslator__translatorwidget_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QEvent* event)
///
void k_texttranslator__translatorwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QPaintEvent*
///
void k_texttranslator__translatorwidget_paint_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_paint_event` instead
///
#define k_texttranslator__translatorwidget_qbase_paint_event k_texttranslator__translatorwidget_super_paint_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QPaintEvent*
///
void k_texttranslator__translatorwidget_super_paint_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QPaintEvent* event)
///
void k_texttranslator__translatorwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMoveEvent*
///
void k_texttranslator__translatorwidget_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_move_event` instead
///
#define k_texttranslator__translatorwidget_qbase_move_event k_texttranslator__translatorwidget_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QMoveEvent*
///
void k_texttranslator__translatorwidget_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QMoveEvent* event)
///
void k_texttranslator__translatorwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QResizeEvent*
///
void k_texttranslator__translatorwidget_resize_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_resize_event` instead
///
#define k_texttranslator__translatorwidget_qbase_resize_event k_texttranslator__translatorwidget_super_resize_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QResizeEvent*
///
void k_texttranslator__translatorwidget_super_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QResizeEvent* event)
///
void k_texttranslator__translatorwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QCloseEvent*
///
void k_texttranslator__translatorwidget_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_close_event` instead
///
#define k_texttranslator__translatorwidget_qbase_close_event k_texttranslator__translatorwidget_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QCloseEvent*
///
void k_texttranslator__translatorwidget_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QCloseEvent* event)
///
void k_texttranslator__translatorwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QContextMenuEvent*
///
void k_texttranslator__translatorwidget_context_menu_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_context_menu_event` instead
///
#define k_texttranslator__translatorwidget_qbase_context_menu_event k_texttranslator__translatorwidget_super_context_menu_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QContextMenuEvent*
///
void k_texttranslator__translatorwidget_super_context_menu_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QContextMenuEvent* event)
///
void k_texttranslator__translatorwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QTabletEvent*
///
void k_texttranslator__translatorwidget_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_tablet_event` instead
///
#define k_texttranslator__translatorwidget_qbase_tablet_event k_texttranslator__translatorwidget_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QTabletEvent*
///
void k_texttranslator__translatorwidget_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QTabletEvent* event)
///
void k_texttranslator__translatorwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QActionEvent*
///
void k_texttranslator__translatorwidget_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_action_event` instead
///
#define k_texttranslator__translatorwidget_qbase_action_event k_texttranslator__translatorwidget_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QActionEvent*
///
void k_texttranslator__translatorwidget_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QActionEvent* event)
///
void k_texttranslator__translatorwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDragEnterEvent*
///
void k_texttranslator__translatorwidget_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_drag_enter_event` instead
///
#define k_texttranslator__translatorwidget_qbase_drag_enter_event k_texttranslator__translatorwidget_super_drag_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDragEnterEvent*
///
void k_texttranslator__translatorwidget_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QDragEnterEvent* event)
///
void k_texttranslator__translatorwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDragMoveEvent*
///
void k_texttranslator__translatorwidget_drag_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_drag_move_event` instead
///
#define k_texttranslator__translatorwidget_qbase_drag_move_event k_texttranslator__translatorwidget_super_drag_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDragMoveEvent*
///
void k_texttranslator__translatorwidget_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QDragMoveEvent* event)
///
void k_texttranslator__translatorwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDragLeaveEvent*
///
void k_texttranslator__translatorwidget_drag_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_drag_leave_event` instead
///
#define k_texttranslator__translatorwidget_qbase_drag_leave_event k_texttranslator__translatorwidget_super_drag_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDragLeaveEvent*
///
void k_texttranslator__translatorwidget_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QDragLeaveEvent* event)
///
void k_texttranslator__translatorwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDropEvent*
///
void k_texttranslator__translatorwidget_drop_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_drop_event` instead
///
#define k_texttranslator__translatorwidget_qbase_drop_event k_texttranslator__translatorwidget_super_drop_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QDropEvent*
///
void k_texttranslator__translatorwidget_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QDropEvent* event)
///
void k_texttranslator__translatorwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QShowEvent*
///
void k_texttranslator__translatorwidget_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_show_event` instead
///
#define k_texttranslator__translatorwidget_qbase_show_event k_texttranslator__translatorwidget_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QShowEvent*
///
void k_texttranslator__translatorwidget_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QShowEvent* event)
///
void k_texttranslator__translatorwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QHideEvent*
///
void k_texttranslator__translatorwidget_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_hide_event` instead
///
#define k_texttranslator__translatorwidget_qbase_hide_event k_texttranslator__translatorwidget_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QHideEvent*
///
void k_texttranslator__translatorwidget_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QHideEvent* event)
///
void k_texttranslator__translatorwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_texttranslator__translatorwidget_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_native_event` instead
///
#define k_texttranslator__translatorwidget_qbase_native_event k_texttranslator__translatorwidget_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_texttranslator__translatorwidget_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func(TextTranslator__TranslatorWidget* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_texttranslator__translatorwidget_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QEvent*
///
void k_texttranslator__translatorwidget_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_change_event` instead
///
#define k_texttranslator__translatorwidget_qbase_change_event k_texttranslator__translatorwidget_super_change_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QEvent*
///
void k_texttranslator__translatorwidget_super_change_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QEvent* param1)
///
void k_texttranslator__translatorwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_texttranslator__translatorwidget_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_metric` instead
///
#define k_texttranslator__translatorwidget_qbase_metric k_texttranslator__translatorwidget_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_texttranslator__translatorwidget_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback int32_t func(TextTranslator__TranslatorWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_texttranslator__translatorwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param painter QPainter*
///
void k_texttranslator__translatorwidget_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_init_painter` instead
///
#define k_texttranslator__translatorwidget_qbase_init_painter k_texttranslator__translatorwidget_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param painter QPainter*
///
void k_texttranslator__translatorwidget_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QPainter* painter)
///
void k_texttranslator__translatorwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param offset QPoint*
///
QPaintDevice* k_texttranslator__translatorwidget_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_redirected` instead
///
#define k_texttranslator__translatorwidget_qbase_redirected k_texttranslator__translatorwidget_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param offset QPoint*
///
QPaintDevice* k_texttranslator__translatorwidget_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback QPaintDevice* func(TextTranslator__TranslatorWidget* self, QPoint* offset)
///
void k_texttranslator__translatorwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QPainter* k_texttranslator__translatorwidget_shared_painter(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_shared_painter` instead
///
#define k_texttranslator__translatorwidget_qbase_shared_painter k_texttranslator__translatorwidget_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QPainter* k_texttranslator__translatorwidget_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback QPainter* func()
///
void k_texttranslator__translatorwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QInputMethodEvent*
///
void k_texttranslator__translatorwidget_input_method_event(void* self, void* param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_input_method_event` instead
///
#define k_texttranslator__translatorwidget_qbase_input_method_event k_texttranslator__translatorwidget_super_input_method_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 QInputMethodEvent*
///
void k_texttranslator__translatorwidget_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QInputMethodEvent* param1)
///
void k_texttranslator__translatorwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_texttranslator__translatorwidget_input_method_query(void* self, int32_t param1);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_input_method_query` instead
///
#define k_texttranslator__translatorwidget_qbase_input_method_query k_texttranslator__translatorwidget_super_input_method_query

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_texttranslator__translatorwidget_super_input_method_query(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback QVariant* func(TextTranslator__TranslatorWidget* self, enum Qt__InputMethodQuery param1)
///
void k_texttranslator__translatorwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param next bool
///
bool k_texttranslator__translatorwidget_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_focus_next_prev_child` instead
///
#define k_texttranslator__translatorwidget_qbase_focus_next_prev_child k_texttranslator__translatorwidget_super_focus_next_prev_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param next bool
///
bool k_texttranslator__translatorwidget_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func(TextTranslator__TranslatorWidget* self, bool next)
///
void k_texttranslator__translatorwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorwidget_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_event_filter` instead
///
#define k_texttranslator__translatorwidget_qbase_event_filter k_texttranslator__translatorwidget_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_texttranslator__translatorwidget_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func(TextTranslator__TranslatorWidget* self, QObject* watched, QEvent* event)
///
void k_texttranslator__translatorwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorwidget_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_timer_event` instead
///
#define k_texttranslator__translatorwidget_qbase_timer_event k_texttranslator__translatorwidget_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QTimerEvent*
///
void k_texttranslator__translatorwidget_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QTimerEvent* event)
///
void k_texttranslator__translatorwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QChildEvent*
///
void k_texttranslator__translatorwidget_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_child_event` instead
///
#define k_texttranslator__translatorwidget_qbase_child_event k_texttranslator__translatorwidget_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QChildEvent*
///
void k_texttranslator__translatorwidget_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QChildEvent* event)
///
void k_texttranslator__translatorwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QEvent*
///
void k_texttranslator__translatorwidget_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_custom_event` instead
///
#define k_texttranslator__translatorwidget_qbase_custom_event k_texttranslator__translatorwidget_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param event QEvent*
///
void k_texttranslator__translatorwidget_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QEvent* event)
///
void k_texttranslator__translatorwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorwidget_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_connect_notify` instead
///
#define k_texttranslator__translatorwidget_qbase_connect_notify k_texttranslator__translatorwidget_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorwidget_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QMetaMethod* signal)
///
void k_texttranslator__translatorwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorwidget_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_disconnect_notify` instead
///
#define k_texttranslator__translatorwidget_qbase_disconnect_notify k_texttranslator__translatorwidget_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal QMetaMethod*
///
void k_texttranslator__translatorwidget_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, QMetaMethod* signal)
///
void k_texttranslator__translatorwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_update_micro_focus` instead
///
#define k_texttranslator__translatorwidget_qbase_update_micro_focus k_texttranslator__translatorwidget_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func()
///
void k_texttranslator__translatorwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_create(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_create` instead
///
#define k_texttranslator__translatorwidget_qbase_create k_texttranslator__translatorwidget_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func()
///
void k_texttranslator__translatorwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_destroy(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_destroy` instead
///
#define k_texttranslator__translatorwidget_qbase_destroy k_texttranslator__translatorwidget_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func()
///
void k_texttranslator__translatorwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_focus_next_child(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_focus_next_child` instead
///
#define k_texttranslator__translatorwidget_qbase_focus_next_child k_texttranslator__translatorwidget_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func()
///
void k_texttranslator__translatorwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_focus_previous_child` instead
///
#define k_texttranslator__translatorwidget_qbase_focus_previous_child k_texttranslator__translatorwidget_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
bool k_texttranslator__translatorwidget_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func()
///
void k_texttranslator__translatorwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QObject* k_texttranslator__translatorwidget_sender(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_sender` instead
///
#define k_texttranslator__translatorwidget_qbase_sender k_texttranslator__translatorwidget_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
QObject* k_texttranslator__translatorwidget_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback QObject* func()
///
void k_texttranslator__translatorwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_sender_signal_index` instead
///
#define k_texttranslator__translatorwidget_qbase_sender_signal_index k_texttranslator__translatorwidget_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
///
int32_t k_texttranslator__translatorwidget_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback int32_t func()
///
void k_texttranslator__translatorwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal const char*
///
int32_t k_texttranslator__translatorwidget_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_receivers` instead
///
#define k_texttranslator__translatorwidget_qbase_receivers k_texttranslator__translatorwidget_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal const char*
///
int32_t k_texttranslator__translatorwidget_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback int32_t func(TextTranslator__TranslatorWidget* self, const char* signal)
///
void k_texttranslator__translatorwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorwidget_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_is_signal_connected` instead
///
#define k_texttranslator__translatorwidget_qbase_is_signal_connected k_texttranslator__translatorwidget_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param signal QMetaMethod*
///
bool k_texttranslator__translatorwidget_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback bool func(TextTranslator__TranslatorWidget* self, QMetaMethod* signal)
///
void k_texttranslator__translatorwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_texttranslator__translatorwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `k_texttranslator__translatorwidget_super_get_decoded_metric_f` instead
///
#define k_texttranslator__translatorwidget_qbase_get_decoded_metric_f k_texttranslator__translatorwidget_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_texttranslator__translatorwidget_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback double func(TextTranslator__TranslatorWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_texttranslator__translatorwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextTranslator__TranslatorWidget*
/// @param callback void func(TextTranslator__TranslatorWidget* self, const char* objectName)
///
void k_texttranslator__translatorwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextTranslator__TranslatorWidget*
///
void k_texttranslator__translatorwidget_delete(void* self);

#endif
