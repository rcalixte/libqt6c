#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKRICHTEXTEDIT_H
#define EXTRAS_KTEXTWIDGETS_LIBKRICHTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/krichtextedit.html)

/// k_richtextedit_new constructs a new KRichTextEdit object.
///
/// @param parent QWidget*
///
KRichTextEdit* k_richtextedit_new(void* parent);

/// [Upstream resources](https://api.kde.org/krichtextedit.html)

/// k_richtextedit_new2 constructs a new KRichTextEdit object.
///
/// @param text const char*
///
KRichTextEdit* k_richtextedit_new2(const char* text);

/// [Upstream resources](https://api.kde.org/krichtextedit.html)

/// k_richtextedit_new3 constructs a new KRichTextEdit object.
///
KRichTextEdit* k_richtextedit_new3();

/// [Upstream resources](https://api.kde.org/krichtextedit.html)

/// k_richtextedit_new4 constructs a new KRichTextEdit object.
///
/// @param text const char*
/// @param parent QWidget*
///
KRichTextEdit* k_richtextedit_new4(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KRichTextEdit*
///
const QMetaObject* k_richtextedit_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KRichTextEdit*
/// @param callback const QMetaObject* func(const KRichTextEdit* self)
///
void k_richtextedit_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KRichTextEdit*
///
const QMetaObject* k_richtextedit_super_meta_object(const void* self);

/// @param self KRichTextEdit*
/// @param param1 const char*
///
void* k_richtextedit_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KRichTextEdit*
/// @param callback void* func(KRichTextEdit* self, const char* param1)
///
void k_richtextedit_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KRichTextEdit*
/// @param param1 const char*
///
void* k_richtextedit_super_metacast(void* self, const char* param1);

/// @param self KRichTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_richtextedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KRichTextEdit*
/// @param callback int32_t func(KRichTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_richtextedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KRichTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_richtextedit_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_richtextedit_tr(const char* s);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#enableRichTextMode)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_enable_rich_text_mode(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#textMode)
///
/// @param self const KRichTextEdit*
///
/// @return enum KRichTextEdit__Mode
///
int32_t k_richtextedit_text_mode(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#textOrHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_text_or_html(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextOrHtml)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
void k_richtextedit_set_text_or_html(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#currentLinkText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_current_link_text(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#currentLinkUrl)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_current_link_url(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#selectLinkText)
///
/// @param self const KRichTextEdit*
/// @param cursor QTextCursor*
///
void k_richtextedit_select_link_text(const void* self, void* cursor);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#selectLinkText)
///
/// @param self const KRichTextEdit*
///
void k_richtextedit_select_link_text2(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#updateLink)
///
/// @param self KRichTextEdit*
/// @param linkUrl const char*
/// @param linkText const char*
///
void k_richtextedit_update_link(void* self, const char* linkUrl, const char* linkText);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#canIndentList)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_can_indent_list(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#canDedentList)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_can_dedent_list(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#alignLeft)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_align_left(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#alignCenter)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_align_center(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#alignRight)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_align_right(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#alignJustify)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_align_justify(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#makeRightToLeft)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_make_right_to_left(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#makeLeftToRight)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_make_left_to_right(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setListStyle)
///
/// @param self KRichTextEdit*
/// @param _styleIndex int
///
void k_richtextedit_set_list_style(void* self, int _styleIndex);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#indentListMore)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_indent_list_more(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#indentListLess)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_indent_list_less(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setFontFamily)
///
/// @param self KRichTextEdit*
/// @param fontFamily const char*
///
void k_richtextedit_set_font_family(void* self, const char* fontFamily);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setFontSize)
///
/// @param self KRichTextEdit*
/// @param size int
///
void k_richtextedit_set_font_size(void* self, int size);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setFont)
///
/// @param self KRichTextEdit*
/// @param font QFont*
///
void k_richtextedit_set_font(void* self, const void* font);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextBold)
///
/// @param self KRichTextEdit*
/// @param bold bool
///
void k_richtextedit_set_text_bold(void* self, bool bold);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextItalic)
///
/// @param self KRichTextEdit*
/// @param italic bool
///
void k_richtextedit_set_text_italic(void* self, bool italic);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextUnderline)
///
/// @param self KRichTextEdit*
/// @param underline bool
///
void k_richtextedit_set_text_underline(void* self, bool underline);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextStrikeOut)
///
/// @param self KRichTextEdit*
/// @param strikeOut bool
///
void k_richtextedit_set_text_strike_out(void* self, bool strikeOut);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextForegroundColor)
///
/// @param self KRichTextEdit*
/// @param color QColor*
///
void k_richtextedit_set_text_foreground_color(void* self, const void* color);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextBackgroundColor)
///
/// @param self KRichTextEdit*
/// @param color QColor*
///
void k_richtextedit_set_text_background_color(void* self, const void* color);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#insertHorizontalRule)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_insert_horizontal_rule(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#switchToPlainText)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_switch_to_plain_text(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#toCleanHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_to_clean_html(const void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextSuperScript)
///
/// @param self KRichTextEdit*
/// @param superscript bool
///
void k_richtextedit_set_text_super_script(void* self, bool superscript);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setTextSubScript)
///
/// @param self KRichTextEdit*
/// @param subscript bool
///
void k_richtextedit_set_text_sub_script(void* self, bool subscript);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#setHeadingLevel)
///
/// @param self KRichTextEdit*
/// @param level int
///
void k_richtextedit_set_heading_level(void* self, int level);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#insertPlainTextImplementation)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_insert_plain_text_implementation(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#textModeChanged)
///
/// @param self KRichTextEdit*
/// @param mode enum KRichTextEdit__Mode
///
void k_richtextedit_text_mode_changed(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#textModeChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, enum KRichTextEdit__Mode mode)
///
void k_richtextedit_on_text_mode_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/krichtextedit.html#keyPressEvent)
///
/// @param self KRichTextEdit*
/// @param event QKeyEvent*
///
void k_richtextedit_key_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QKeyEvent* event)
///
void k_richtextedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/krichtextedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KRichTextEdit*
/// @param event QKeyEvent*
///
void k_richtextedit_super_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_richtextedit_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_richtextedit_tr3(const char* s, const char* c, int n);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#highlightWord)
///
/// @param self KRichTextEdit*
/// @param length int
/// @param pos int
///
void k_richtextedit_highlight_word(void* self, int length, int pos);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#highlighter)
///
/// @param self const KRichTextEdit*
///
Sonnet__Highlighter* k_richtextedit_highlighter(const void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setHighlighter)
///
/// @param self KRichTextEdit*
/// @param _highLighter Sonnet__Highlighter*
///
void k_richtextedit_set_highlighter(void* self, void* _highLighter);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#enableFindReplace)
///
/// @param self KRichTextEdit*
/// @param enabled bool
///
void k_richtextedit_enable_find_replace(void* self, bool enabled);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_spell_checking_language(const void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#showTabAction)
///
/// @param self KRichTextEdit*
/// @param show bool
///
void k_richtextedit_show_tab_action(void* self, bool show);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#showAutoCorrectButton)
///
/// @param self KRichTextEdit*
/// @param show bool
///
void k_richtextedit_show_auto_correct_button(void* self, bool show);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#forceSpellChecking)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_force_spell_checking(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingChanged)
///
/// @param self KRichTextEdit*
/// @param param1 bool
///
void k_richtextedit_check_spelling_changed(void* self, bool param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, bool param1)
///
void k_richtextedit_on_check_spelling_changed(void* self, void (*callback)(void*, bool));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckStatus)
///
/// @param self KRichTextEdit*
/// @param param1 const char*
///
void k_richtextedit_spell_check_status(void* self, const char* param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckStatus)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, const char* param1)
///
void k_richtextedit_on_spell_check_status(void* self, void (*callback)(void*, const char*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#languageChanged)
///
/// @param self KRichTextEdit*
/// @param language const char*
///
void k_richtextedit_language_changed(void* self, const char* language);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#languageChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, const char* language)
///
void k_richtextedit_on_language_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
///
/// @param self KRichTextEdit*
/// @param menu QMenu*
///
void k_richtextedit_about_to_show_context_menu(void* self, void* menu);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMenu* menu)
///
void k_richtextedit_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
///
/// @param self KRichTextEdit*
/// @param currentWord const char*
/// @param autoCorrectWord const char*
///
void k_richtextedit_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, const char* currentWord, const char* autoCorrectWord)
///
void k_richtextedit_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingFinished)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_spell_checking_finished(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingFinished)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_spell_checking_finished(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_spell_checking_canceled(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_spell_checking_canceled(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setSpellCheckingLanguage)
///
/// @param self KRichTextEdit*
/// @param language const char*
///
void k_richtextedit_set_spell_checking_language(void* self, const char* language);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#checkSpelling)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_check_spelling(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_show_spell_config_dialog(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#replace)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_replace(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#addTextDecorator)
///
/// @param self KRichTextEdit*
/// @param decorator Sonnet__SpellCheckDecorator*
///
void k_richtextedit_add_text_decorator(void* self, void* decorator);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#clearDecorator)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_clear_decorator(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
///
/// @param self KRichTextEdit*
/// @param windowIcon const char*
///
void k_richtextedit_show_spell_config_dialog1(void* self, const char* windowIcon);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// @param self KRichTextEdit*
/// @param document QTextDocument*
///
void k_richtextedit_set_document(void* self, void* document);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// @param self const KRichTextEdit*
///
QTextDocument* k_richtextedit_document(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// @param self KRichTextEdit*
/// @param placeholderText const char*
///
void k_richtextedit_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_placeholder_text(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// @param self KRichTextEdit*
/// @param cursor QTextCursor*
///
void k_richtextedit_set_text_cursor(void* self, const void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// @param self const KRichTextEdit*
///
QTextCursor* k_richtextedit_text_cursor(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_read_only(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// @param self KRichTextEdit*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void k_richtextedit_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// @param self const KRichTextEdit*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t k_richtextedit_text_interaction_flags(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// @param self const KRichTextEdit*
///
double k_richtextedit_font_point_size(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_font_family(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_font_weight(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_font_underline(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_font_italic(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// @param self const KRichTextEdit*
///
QColor* k_richtextedit_text_color(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// @param self const KRichTextEdit*
///
QColor* k_richtextedit_text_background_color(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// @param self const KRichTextEdit*
///
QFont* k_richtextedit_current_font(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// @param self const KRichTextEdit*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_richtextedit_alignment(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// @param self KRichTextEdit*
/// @param modifier QTextCharFormat*
///
void k_richtextedit_merge_current_char_format(void* self, const void* modifier);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// @param self KRichTextEdit*
/// @param format QTextCharFormat*
///
void k_richtextedit_set_current_char_format(void* self, const void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// @param self const KRichTextEdit*
///
QTextCharFormat* k_richtextedit_current_char_format(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// @param self const KRichTextEdit*
///
/// @return flag of enum QTextEdit__AutoFormattingFlag
///
int32_t k_richtextedit_auto_formatting(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// @param self KRichTextEdit*
/// @param features flag of enum QTextEdit__AutoFormattingFlag
///
void k_richtextedit_set_auto_formatting(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_tab_changes_focus(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// @param self KRichTextEdit*
/// @param b bool
///
void k_richtextedit_set_tab_changes_focus(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// @param self KRichTextEdit*
/// @param title const char*
///
void k_richtextedit_set_document_title(void* self, const char* title);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_document_title(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_undo_redo_enabled(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// @param self KRichTextEdit*
/// @param enable bool
///
void k_richtextedit_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// @param self const KRichTextEdit*
///
/// @return enum QTextEdit__LineWrapMode
///
int32_t k_richtextedit_line_wrap_mode(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// @param self KRichTextEdit*
/// @param mode enum QTextEdit__LineWrapMode
///
void k_richtextedit_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_line_wrap_column_or_width(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// @param self KRichTextEdit*
/// @param w int
///
void k_richtextedit_set_line_wrap_column_or_width(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// @param self const KRichTextEdit*
///
/// @return enum QTextOption__WrapMode
///
int32_t k_richtextedit_word_wrap_mode(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// @param self KRichTextEdit*
/// @param policy enum QTextOption__WrapMode
///
void k_richtextedit_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextEdit*
/// @param exp const char*
///
bool k_richtextedit_find(void* self, const char* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextEdit*
/// @param exp QRegularExpression*
///
bool k_richtextedit_find2(void* self, const void* exp);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_to_plain_text(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_to_html(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_to_markdown(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_ensure_cursor_visible(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self KRichTextEdit*
///
QMenu* k_richtextedit_create_standard_context_menu(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self KRichTextEdit*
/// @param position QPoint*
///
QMenu* k_richtextedit_create_standard_context_menu2(void* self, const void* position);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// @param self const KRichTextEdit*
/// @param pos QPoint*
///
QTextCursor* k_richtextedit_cursor_for_position(const void* self, const void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self const KRichTextEdit*
/// @param cursor QTextCursor*
///
QRect* k_richtextedit_cursor_rect(const void* self, const void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self const KRichTextEdit*
///
QRect* k_richtextedit_cursor_rect2(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
/// @param pos QPoint*
///
const char* k_richtextedit_anchor_at(const void* self, const void* pos);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_overwrite_mode(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// @param self KRichTextEdit*
/// @param overwrite bool
///
void k_richtextedit_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// @param self const KRichTextEdit*
///
double k_richtextedit_tab_stop_distance(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// @param self KRichTextEdit*
/// @param distance double
///
void k_richtextedit_set_tab_stop_distance(void* self, double distance);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_cursor_width(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// @param self KRichTextEdit*
/// @param width int
///
void k_richtextedit_set_cursor_width(void* self, int width);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_accept_rich_text(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// @param self KRichTextEdit*
/// @param accept bool
///
void k_richtextedit_set_accept_rich_text(void* self, bool accept);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// @param self KRichTextEdit*
/// @param selections libqt_list of QTextEdit__ExtraSelection*
///
void k_richtextedit_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// @param self const KRichTextEdit*
///
/// @return libqt_list of QTextEdit__ExtraSelection*
///
libqt_list k_richtextedit_extra_selections(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self KRichTextEdit*
/// @param operation enum QTextCursor__MoveOperation
///
void k_richtextedit_move_cursor(void* self, int32_t operation);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_can_paste(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// @param self const KRichTextEdit*
/// @param printer QPagedPaintDevice*
///
void k_richtextedit_print(const void* self, void* printer);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self const KRichTextEdit*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
///
QVariant* k_richtextedit_input_method_query2(const void* self, int32_t query, void* argument);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// @param self KRichTextEdit*
/// @param s double
///
void k_richtextedit_set_font_point_size(void* self, double s);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// @param self KRichTextEdit*
/// @param w int
///
void k_richtextedit_set_font_weight(void* self, int w);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// @param self KRichTextEdit*
/// @param b bool
///
void k_richtextedit_set_font_underline(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// @param self KRichTextEdit*
/// @param b bool
///
void k_richtextedit_set_font_italic(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// @param self KRichTextEdit*
/// @param c QColor*
///
void k_richtextedit_set_text_color(void* self, const void* c);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// @param self KRichTextEdit*
/// @param f QFont*
///
void k_richtextedit_set_current_font(void* self, const void* f);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// @param self KRichTextEdit*
/// @param a flag of enum Qt__AlignmentFlag
///
void k_richtextedit_set_alignment(void* self, int32_t a);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
void k_richtextedit_set_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
void k_richtextedit_set_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// @param self KRichTextEdit*
/// @param markdown const char*
///
void k_richtextedit_set_markdown(void* self, const char* markdown);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
void k_richtextedit_set_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_cut(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_copy(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_paste(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_undo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_redo(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_clear(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_select_all(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
void k_richtextedit_insert_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
void k_richtextedit_insert_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
void k_richtextedit_append(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// @param self KRichTextEdit*
/// @param name const char*
///
void k_richtextedit_scroll_to_anchor(void* self, const char* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_zoom_in(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_zoom_out(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_text_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self KRichTextEdit*
/// @param b bool
///
void k_richtextedit_undo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, bool b)
///
void k_richtextedit_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self KRichTextEdit*
/// @param b bool
///
void k_richtextedit_redo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, bool b)
///
void k_richtextedit_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self KRichTextEdit*
/// @param format QTextCharFormat*
///
void k_richtextedit_current_char_format_changed(void* self, const void* format);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QTextCharFormat* format)
///
void k_richtextedit_on_current_char_format_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self KRichTextEdit*
/// @param b bool
///
void k_richtextedit_copy_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, bool b)
///
void k_richtextedit_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_selection_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_cursor_position_changed(void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextEdit*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_richtextedit_find22(void* self, const char* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextEdit*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
///
bool k_richtextedit_find23(void* self, const void* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
const char* k_richtextedit_to_markdown1(const void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self KRichTextEdit*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
///
void k_richtextedit_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self KRichTextEdit*
/// @param range int
///
void k_richtextedit_zoom_in1(void* self, int range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self KRichTextEdit*
/// @param range int
///
void k_richtextedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self const KRichTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_richtextedit_vertical_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self KRichTextEdit*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_richtextedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self const KRichTextEdit*
///
QScrollBar* k_richtextedit_vertical_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self KRichTextEdit*
/// @param scrollbar QScrollBar*
///
void k_richtextedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self const KRichTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_richtextedit_horizontal_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self KRichTextEdit*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_richtextedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self const KRichTextEdit*
///
QScrollBar* k_richtextedit_horizontal_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self KRichTextEdit*
/// @param scrollbar QScrollBar*
///
void k_richtextedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_corner_widget(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self KRichTextEdit*
/// @param widget QWidget*
///
void k_richtextedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self KRichTextEdit*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_richtextedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self KRichTextEdit*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list k_richtextedit_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_viewport(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self KRichTextEdit*
/// @param widget QWidget*
///
void k_richtextedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_maximum_viewport_size(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self const KRichTextEdit*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t k_richtextedit_size_adjust_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self KRichTextEdit*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void k_richtextedit_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KRichTextEdit*
/// @param frameStyle int
///
void k_richtextedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const KRichTextEdit*
///
/// @return enum QFrame__Shape
///
int32_t k_richtextedit_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KRichTextEdit*
/// @param frameShape enum QFrame__Shape
///
void k_richtextedit_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const KRichTextEdit*
///
/// @return enum QFrame__Shadow
///
int32_t k_richtextedit_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KRichTextEdit*
/// @param frameShadow enum QFrame__Shadow
///
void k_richtextedit_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KRichTextEdit*
/// @param lineWidth int
///
void k_richtextedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KRichTextEdit*
/// @param midLineWidth int
///
void k_richtextedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const KRichTextEdit*
///
QRect* k_richtextedit_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KRichTextEdit*
/// @param frameRect QRect*
///
void k_richtextedit_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self KRichTextEdit*
///
QPaintDevice* k_richtextedit_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a KRichTextEdit object
///
/// @param _qpaintdevice QPaintDevice*
///
KRichTextEdit* k_richtextedit_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KRichTextEdit*
///
uintptr_t k_richtextedit_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KRichTextEdit*
///
uintptr_t k_richtextedit_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KRichTextEdit*
///
uintptr_t k_richtextedit_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KRichTextEdit*
///
QStyle* k_richtextedit_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KRichTextEdit*
/// @param style QStyle*
///
void k_richtextedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KRichTextEdit*
///
/// @return enum Qt__WindowModality
///
int32_t k_richtextedit_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KRichTextEdit*
/// @param windowModality enum Qt__WindowModality
///
void k_richtextedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KRichTextEdit*
/// @param param1 QWidget*
///
bool k_richtextedit_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KRichTextEdit*
/// @param enabled bool
///
void k_richtextedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KRichTextEdit*
/// @param disabled bool
///
void k_richtextedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KRichTextEdit*
/// @param windowModified bool
///
void k_richtextedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KRichTextEdit*
///
QRect* k_richtextedit_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KRichTextEdit*
///
const QRect* k_richtextedit_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KRichTextEdit*
///
QRect* k_richtextedit_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KRichTextEdit*
///
QPoint* k_richtextedit_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KRichTextEdit*
///
QRect* k_richtextedit_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KRichTextEdit*
///
QRect* k_richtextedit_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KRichTextEdit*
///
QRegion* k_richtextedit_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KRichTextEdit*
/// @param minimumSize QSize*
///
void k_richtextedit_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KRichTextEdit*
/// @param minw int
/// @param minh int
///
void k_richtextedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KRichTextEdit*
/// @param maximumSize QSize*
///
void k_richtextedit_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KRichTextEdit*
/// @param maxw int
/// @param maxh int
///
void k_richtextedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KRichTextEdit*
/// @param minw int
///
void k_richtextedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KRichTextEdit*
/// @param minh int
///
void k_richtextedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KRichTextEdit*
/// @param maxw int
///
void k_richtextedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KRichTextEdit*
/// @param maxh int
///
void k_richtextedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KRichTextEdit*
/// @param sizeIncrement QSize*
///
void k_richtextedit_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KRichTextEdit*
/// @param w int
/// @param h int
///
void k_richtextedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KRichTextEdit*
/// @param baseSize QSize*
///
void k_richtextedit_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KRichTextEdit*
/// @param basew int
/// @param baseh int
///
void k_richtextedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KRichTextEdit*
/// @param fixedSize QSize*
///
void k_richtextedit_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KRichTextEdit*
/// @param w int
/// @param h int
///
void k_richtextedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KRichTextEdit*
/// @param w int
///
void k_richtextedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KRichTextEdit*
/// @param h int
///
void k_richtextedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KRichTextEdit*
/// @param param1 QPointF*
///
QPointF* k_richtextedit_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KRichTextEdit*
/// @param param1 QPoint*
///
QPoint* k_richtextedit_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KRichTextEdit*
/// @param param1 QPointF*
///
QPointF* k_richtextedit_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KRichTextEdit*
/// @param param1 QPoint*
///
QPoint* k_richtextedit_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KRichTextEdit*
/// @param param1 QPointF*
///
QPointF* k_richtextedit_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KRichTextEdit*
/// @param param1 QPoint*
///
QPoint* k_richtextedit_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KRichTextEdit*
/// @param param1 QPointF*
///
QPointF* k_richtextedit_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KRichTextEdit*
/// @param param1 QPoint*
///
QPoint* k_richtextedit_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KRichTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_richtextedit_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KRichTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_richtextedit_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KRichTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_richtextedit_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KRichTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_richtextedit_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KRichTextEdit*
///
const QPalette* k_richtextedit_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KRichTextEdit*
/// @param palette QPalette*
///
void k_richtextedit_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KRichTextEdit*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_richtextedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KRichTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_richtextedit_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KRichTextEdit*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_richtextedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KRichTextEdit*
///
/// @return enum QPalette__ColorRole
///
int32_t k_richtextedit_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KRichTextEdit*
///
const QFont* k_richtextedit_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KRichTextEdit*
///
QFontMetrics* k_richtextedit_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KRichTextEdit*
///
QFontInfo* k_richtextedit_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KRichTextEdit*
///
QCursor* k_richtextedit_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KRichTextEdit*
/// @param cursor QCursor*
///
void k_richtextedit_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KRichTextEdit*
/// @param enable bool
///
void k_richtextedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KRichTextEdit*
/// @param enable bool
///
void k_richtextedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KRichTextEdit*
/// @param mask QBitmap*
///
void k_richtextedit_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KRichTextEdit*
/// @param mask QRegion*
///
void k_richtextedit_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KRichTextEdit*
///
QRegion* k_richtextedit_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param target QPaintDevice*
///
void k_richtextedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param painter QPainter*
///
void k_richtextedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KRichTextEdit*
///
QPixmap* k_richtextedit_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KRichTextEdit*
///
QGraphicsEffect* k_richtextedit_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KRichTextEdit*
/// @param effect QGraphicsEffect*
///
void k_richtextedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KRichTextEdit*
/// @param type enum Qt__GestureType
///
void k_richtextedit_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KRichTextEdit*
/// @param type enum Qt__GestureType
///
void k_richtextedit_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KRichTextEdit*
/// @param windowTitle const char*
///
void k_richtextedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KRichTextEdit*
/// @param styleSheet const char*
///
void k_richtextedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KRichTextEdit*
/// @param icon QIcon*
///
void k_richtextedit_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KRichTextEdit*
///
QIcon* k_richtextedit_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KRichTextEdit*
/// @param windowIconText const char*
///
void k_richtextedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KRichTextEdit*
/// @param windowRole const char*
///
void k_richtextedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KRichTextEdit*
/// @param filePath const char*
///
void k_richtextedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KRichTextEdit*
/// @param level double
///
void k_richtextedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KRichTextEdit*
///
double k_richtextedit_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KRichTextEdit*
/// @param toolTip const char*
///
void k_richtextedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KRichTextEdit*
/// @param msec int
///
void k_richtextedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KRichTextEdit*
/// @param statusTip const char*
///
void k_richtextedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KRichTextEdit*
/// @param whatsThis const char*
///
void k_richtextedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KRichTextEdit*
/// @param name const char*
///
void k_richtextedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KRichTextEdit*
/// @param description const char*
///
void k_richtextedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KRichTextEdit*
/// @param direction enum Qt__LayoutDirection
///
void k_richtextedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KRichTextEdit*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_richtextedit_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KRichTextEdit*
/// @param locale QLocale*
///
void k_richtextedit_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KRichTextEdit*
///
QLocale* k_richtextedit_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KRichTextEdit*
/// @param reason enum Qt__FocusReason
///
void k_richtextedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KRichTextEdit*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_richtextedit_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KRichTextEdit*
/// @param policy enum Qt__FocusPolicy
///
void k_richtextedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_richtextedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KRichTextEdit*
/// @param focusProxy QWidget*
///
void k_richtextedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KRichTextEdit*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_richtextedit_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KRichTextEdit*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_richtextedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KRichTextEdit*
/// @param param1 QCursor*
///
void k_richtextedit_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KRichTextEdit*
/// @param key QKeySequence*
///
int32_t k_richtextedit_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KRichTextEdit*
/// @param id int
///
void k_richtextedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KRichTextEdit*
/// @param id int
///
void k_richtextedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KRichTextEdit*
/// @param id int
///
void k_richtextedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_richtextedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_richtextedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KRichTextEdit*
/// @param enable bool
///
void k_richtextedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KRichTextEdit*
///
QGraphicsProxyWidget* k_richtextedit_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_richtextedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextEdit*
/// @param param1 QRect*
///
void k_richtextedit_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextEdit*
/// @param param1 QRegion*
///
void k_richtextedit_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_richtextedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextEdit*
/// @param param1 QRect*
///
void k_richtextedit_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextEdit*
/// @param param1 QRegion*
///
void k_richtextedit_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KRichTextEdit*
/// @param hidden bool
///
void k_richtextedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KRichTextEdit*
///
bool k_richtextedit_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KRichTextEdit*
/// @param param1 QWidget*
///
void k_richtextedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KRichTextEdit*
/// @param x int
/// @param y int
///
void k_richtextedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KRichTextEdit*
/// @param param1 QPoint*
///
void k_richtextedit_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KRichTextEdit*
/// @param w int
/// @param h int
///
void k_richtextedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KRichTextEdit*
/// @param param1 QSize*
///
void k_richtextedit_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KRichTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_richtextedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KRichTextEdit*
/// @param geometry QRect*
///
void k_richtextedit_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KRichTextEdit*
///
char* k_richtextedit_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KRichTextEdit*
/// @param geometry char*
///
bool k_richtextedit_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KRichTextEdit*
/// @param param1 QWidget*
///
bool k_richtextedit_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KRichTextEdit*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_richtextedit_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KRichTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_richtextedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KRichTextEdit*
/// @param state flag of enum Qt__WindowState
///
void k_richtextedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KRichTextEdit*
///
QSizePolicy* k_richtextedit_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KRichTextEdit*
/// @param sizePolicy QSizePolicy*
///
void k_richtextedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KRichTextEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_richtextedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KRichTextEdit*
///
QRegion* k_richtextedit_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KRichTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_richtextedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KRichTextEdit*
/// @param margins QMargins*
///
void k_richtextedit_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KRichTextEdit*
///
QMargins* k_richtextedit_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const KRichTextEdit*
///
QRect* k_richtextedit_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KRichTextEdit*
///
QLayout* k_richtextedit_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KRichTextEdit*
/// @param layout QLayout*
///
void k_richtextedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KRichTextEdit*
/// @param parent QWidget*
///
void k_richtextedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KRichTextEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_richtextedit_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KRichTextEdit*
/// @param dx int
/// @param dy int
///
void k_richtextedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KRichTextEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_richtextedit_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KRichTextEdit*
/// @param on bool
///
void k_richtextedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextEdit*
/// @param action QAction*
///
void k_richtextedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KRichTextEdit*
/// @param actions libqt_list of QAction*
///
void k_richtextedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KRichTextEdit*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_richtextedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KRichTextEdit*
/// @param before QAction*
/// @param action QAction*
///
void k_richtextedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KRichTextEdit*
/// @param action QAction*
///
void k_richtextedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KRichTextEdit*
///
/// @return libqt_list of QAction*
///
libqt_list k_richtextedit_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextEdit*
/// @param text const char*
///
QAction* k_richtextedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextEdit*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_richtextedit_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_richtextedit_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_richtextedit_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KRichTextEdit*
///
QWidget* k_richtextedit_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KRichTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_richtextedit_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KRichTextEdit*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_richtextedit_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KRichTextEdit*
/// @param param1 enum Qt__WindowType
///
void k_richtextedit_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KRichTextEdit*
/// @param type flag of enum Qt__WindowType
///
void k_richtextedit_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KRichTextEdit*
///
/// @return enum Qt__WindowType
///
int32_t k_richtextedit_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KRichTextEdit*
/// @param x int
/// @param y int
///
QWidget* k_richtextedit_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KRichTextEdit*
/// @param p QPoint*
///
QWidget* k_richtextedit_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KRichTextEdit*
/// @param p QPointF*
///
QWidget* k_richtextedit_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KRichTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
void k_richtextedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KRichTextEdit*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_richtextedit_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KRichTextEdit*
///
void k_richtextedit_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KRichTextEdit*
/// @param child QWidget*
///
bool k_richtextedit_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KRichTextEdit*
/// @param enabled bool
///
void k_richtextedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KRichTextEdit*
///
QBackingStore* k_richtextedit_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KRichTextEdit*
///
QWindow* k_richtextedit_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KRichTextEdit*
///
QScreen* k_richtextedit_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KRichTextEdit*
/// @param screen QScreen*
///
void k_richtextedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_richtextedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KRichTextEdit*
/// @param title const char*
///
void k_richtextedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, const char* title)
///
void k_richtextedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KRichTextEdit*
/// @param icon QIcon*
///
void k_richtextedit_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QIcon* icon)
///
void k_richtextedit_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KRichTextEdit*
/// @param iconText const char*
///
void k_richtextedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, const char* iconText)
///
void k_richtextedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KRichTextEdit*
/// @param pos QPoint*
///
void k_richtextedit_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QPoint* pos)
///
void k_richtextedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KRichTextEdit*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_richtextedit_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KRichTextEdit*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_richtextedit_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_richtextedit_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_richtextedit_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_richtextedit_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_richtextedit_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_richtextedit_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_richtextedit_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KRichTextEdit*
/// @param rectangle QRect*
///
QPixmap* k_richtextedit_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KRichTextEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_richtextedit_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KRichTextEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_richtextedit_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KRichTextEdit*
/// @param id int
/// @param enable bool
///
void k_richtextedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KRichTextEdit*
/// @param id int
/// @param enable bool
///
void k_richtextedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KRichTextEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_richtextedit_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KRichTextEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_richtextedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_richtextedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_richtextedit_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KRichTextEdit*
///
const char* k_richtextedit_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KRichTextEdit*
/// @param name const char*
///
void k_richtextedit_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KRichTextEdit*
/// @param b bool
///
bool k_richtextedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KRichTextEdit*
///
QThread* k_richtextedit_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRichTextEdit*
/// @param thread QThread*
///
bool k_richtextedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRichTextEdit*
/// @param interval int
///
int32_t k_richtextedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRichTextEdit*
/// @param time int64_t of nanoseconds
///
int32_t k_richtextedit_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRichTextEdit*
/// @param id int
///
void k_richtextedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRichTextEdit*
/// @param id enum Qt__TimerId
///
void k_richtextedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KRichTextEdit*
///
/// @return libqt_list of QObject*
///
libqt_list k_richtextedit_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KRichTextEdit*
/// @param filterObj QObject*
///
void k_richtextedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KRichTextEdit*
/// @param obj QObject*
///
void k_richtextedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_richtextedit_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_richtextedit_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KRichTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_richtextedit_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_richtextedit_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_richtextedit_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KRichTextEdit*
/// @param receiver QObject*
///
bool k_richtextedit_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_richtextedit_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KRichTextEdit*
///
void k_richtextedit_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KRichTextEdit*
///
void k_richtextedit_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KRichTextEdit*
/// @param name const char*
/// @param value QVariant*
///
bool k_richtextedit_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KRichTextEdit*
/// @param name const char*
///
QVariant* k_richtextedit_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KRichTextEdit*
///
const char** k_richtextedit_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRichTextEdit*
///
QBindingStorage* k_richtextedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KRichTextEdit*
///
const QBindingStorage* k_richtextedit_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KRichTextEdit*
///
QObject* k_richtextedit_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KRichTextEdit*
/// @param classname const char*
///
bool k_richtextedit_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KRichTextEdit*
///
void k_richtextedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRichTextEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_richtextedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRichTextEdit*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_richtextedit_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_richtextedit_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_richtextedit_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KRichTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_richtextedit_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KRichTextEdit*
/// @param signal const char*
///
bool k_richtextedit_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KRichTextEdit*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_richtextedit_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KRichTextEdit*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_richtextedit_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KRichTextEdit*
/// @param receiver QObject*
/// @param member const char*
///
bool k_richtextedit_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextEdit*
/// @param param1 QObject*
///
void k_richtextedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QObject* param1)
///
void k_richtextedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KRichTextEdit*
///
double k_richtextedit_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KRichTextEdit*
///
double k_richtextedit_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_richtextedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_richtextedit_encode_metric_f(int32_t metric, double value);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param readOnly bool
///
void k_richtextedit_set_read_only(void* self, bool readOnly);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param readOnly bool
///
void k_richtextedit_super_set_read_only(void* self, bool readOnly);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, bool readOnly)
///
void k_richtextedit_on_set_read_only(void* self, void (*callback)(void*, bool));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param check bool
///
void k_richtextedit_set_check_spelling_enabled(void* self, bool check);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param check bool
///
void k_richtextedit_super_set_check_spelling_enabled(void* self, bool check);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, bool check)
///
void k_richtextedit_on_set_check_spelling_enabled(void* self, void (*callback)(void*, bool));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_check_spelling_enabled(const void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_super_check_spelling_enabled(const void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self)
///
void k_richtextedit_on_check_spelling_enabled(const void* self, bool (*callback)(const void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param block const char*
///
bool k_richtextedit_should_block_be_spell_checked(const void* self, const char* block);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param block const char*
///
bool k_richtextedit_super_should_block_be_spell_checked(const void* self, const char* block);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, const char* block)
///
void k_richtextedit_on_should_block_be_spell_checked(const void* self, bool (*callback)(const void*, const char*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_create_highlighter(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_create_highlighter(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_create_highlighter(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
QMenu* k_richtextedit_mouse_popup_menu(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
QMenu* k_richtextedit_super_mouse_popup_menu(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback QMenu* func(KRichTextEdit* self)
///
void k_richtextedit_on_mouse_popup_menu(void* self, QMenu* (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QEvent*
///
bool k_richtextedit_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QEvent*
///
bool k_richtextedit_super_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, QEvent* param1)
///
void k_richtextedit_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QFocusEvent*
///
void k_richtextedit_focus_in_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QFocusEvent*
///
void k_richtextedit_super_focus_in_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QFocusEvent* param1)
///
void k_richtextedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_delete_word_back(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_delete_word_back(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_delete_word_back(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_delete_word_forward(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_delete_word_forward(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_delete_word_forward(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QContextMenuEvent*
///
void k_richtextedit_context_menu_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QContextMenuEvent*
///
void k_richtextedit_super_context_menu_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QContextMenuEvent* param1)
///
void k_richtextedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_richtextedit_load_resource(void* self, int type, const void* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param type int
/// @param name QUrl*
///
QVariant* k_richtextedit_super_load_resource(void* self, int type, const void* name);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback QVariant* func(KRichTextEdit* self, int type, QUrl* name)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_richtextedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, const void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_richtextedit_input_method_query(const void* self, int32_t property);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param property enum Qt__InputMethodQuery
///
QVariant* k_richtextedit_super_input_method_query(const void* self, int32_t property);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QVariant* func(KRichTextEdit* self, enum Qt__InputMethodQuery property)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_richtextedit_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QTimerEvent*
///
void k_richtextedit_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QTimerEvent*
///
void k_richtextedit_super_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QTimerEvent* e)
///
void k_richtextedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QKeyEvent*
///
void k_richtextedit_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QKeyEvent*
///
void k_richtextedit_super_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QKeyEvent* e)
///
void k_richtextedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QResizeEvent*
///
void k_richtextedit_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QResizeEvent*
///
void k_richtextedit_super_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QResizeEvent* e)
///
void k_richtextedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QPaintEvent*
///
void k_richtextedit_paint_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QPaintEvent*
///
void k_richtextedit_super_paint_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QPaintEvent* e)
///
void k_richtextedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_super_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMouseEvent* e)
///
void k_richtextedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_super_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMouseEvent* e)
///
void k_richtextedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_mouse_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_super_mouse_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMouseEvent* e)
///
void k_richtextedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QMouseEvent*
///
void k_richtextedit_super_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMouseEvent* e)
///
void k_richtextedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param next bool
///
bool k_richtextedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param next bool
///
bool k_richtextedit_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, bool next)
///
void k_richtextedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDragEnterEvent*
///
void k_richtextedit_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDragEnterEvent*
///
void k_richtextedit_super_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QDragEnterEvent* e)
///
void k_richtextedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDragLeaveEvent*
///
void k_richtextedit_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDragLeaveEvent*
///
void k_richtextedit_super_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QDragLeaveEvent* e)
///
void k_richtextedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDragMoveEvent*
///
void k_richtextedit_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDragMoveEvent*
///
void k_richtextedit_super_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QDragMoveEvent* e)
///
void k_richtextedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDropEvent*
///
void k_richtextedit_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QDropEvent*
///
void k_richtextedit_super_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QDropEvent* e)
///
void k_richtextedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QFocusEvent*
///
void k_richtextedit_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QFocusEvent*
///
void k_richtextedit_super_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QFocusEvent* e)
///
void k_richtextedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QShowEvent*
///
void k_richtextedit_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QShowEvent*
///
void k_richtextedit_super_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QShowEvent* param1)
///
void k_richtextedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QEvent*
///
void k_richtextedit_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QEvent*
///
void k_richtextedit_super_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QEvent* e)
///
void k_richtextedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QWheelEvent*
///
void k_richtextedit_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param e QWheelEvent*
///
void k_richtextedit_super_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QWheelEvent* e)
///
void k_richtextedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QMimeData* k_richtextedit_create_mime_data_from_selection(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QMimeData* k_richtextedit_super_create_mime_data_from_selection(const void* self);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QMimeData* func(KRichTextEdit* self)
///
void k_richtextedit_on_create_mime_data_from_selection(const void* self, QMimeData* (*callback)(const void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param source QMimeData*
///
bool k_richtextedit_can_insert_from_mime_data(const void* self, const void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param source QMimeData*
///
bool k_richtextedit_super_can_insert_from_mime_data(const void* self, const void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, QMimeData* source)
///
void k_richtextedit_on_can_insert_from_mime_data(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param source QMimeData*
///
void k_richtextedit_insert_from_mime_data(void* self, const void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param source QMimeData*
///
void k_richtextedit_super_insert_from_mime_data(void* self, const void* source);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMimeData* source)
///
void k_richtextedit_on_insert_from_mime_data(void* self, void (*callback)(void*, const void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_richtextedit_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QInputMethodEvent*
///
void k_richtextedit_super_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QInputMethodEvent* param1)
///
void k_richtextedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param dx int
/// @param dy int
///
void k_richtextedit_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param dx int
/// @param dy int
///
void k_richtextedit_super_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, int dx, int dy)
///
void k_richtextedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param cursor QTextCursor*
///
void k_richtextedit_do_set_text_cursor(void* self, const void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param cursor QTextCursor*
///
void k_richtextedit_super_do_set_text_cursor(void* self, const void* cursor);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QTextCursor* cursor)
///
void k_richtextedit_on_do_set_text_cursor(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_minimum_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_super_minimum_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QSize* func(KRichTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_richtextedit_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_super_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QSize* func(KRichTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_richtextedit_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param viewport QWidget*
///
void k_richtextedit_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param viewport QWidget*
///
void k_richtextedit_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QWidget* viewport)
///
void k_richtextedit_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_richtextedit_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
///
bool k_richtextedit_super_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, QObject* param1, QEvent* param2)
///
void k_richtextedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QEvent*
///
bool k_richtextedit_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QEvent*
///
bool k_richtextedit_super_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, QEvent* param1)
///
void k_richtextedit_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_viewport_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QSize* k_richtextedit_super_viewport_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QSize* func(KRichTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_richtextedit_on_viewport_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param option QStyleOptionFrame*
///
void k_richtextedit_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param option QStyleOptionFrame*
///
void k_richtextedit_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QStyleOptionFrame* option)
///
void k_richtextedit_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback int32_t func(KRichTextEdit* self)
///
void k_richtextedit_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param visible bool
///
void k_richtextedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param visible bool
///
void k_richtextedit_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, bool visible)
///
void k_richtextedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param param1 int
///
int32_t k_richtextedit_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param param1 int
///
int32_t k_richtextedit_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback int32_t func(KRichTextEdit* self, int param1)
///
void k_richtextedit_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
bool k_richtextedit_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self)
///
void k_richtextedit_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QPaintEngine* k_richtextedit_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QPaintEngine* k_richtextedit_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QPaintEngine* func(KRichTextEdit* self)
///
void k_richtextedit_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QEnterEvent*
///
void k_richtextedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QEnterEvent*
///
void k_richtextedit_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QEnterEvent* event)
///
void k_richtextedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QEvent*
///
void k_richtextedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QEvent*
///
void k_richtextedit_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QEvent* event)
///
void k_richtextedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QMoveEvent*
///
void k_richtextedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QMoveEvent*
///
void k_richtextedit_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMoveEvent* event)
///
void k_richtextedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QCloseEvent*
///
void k_richtextedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QCloseEvent*
///
void k_richtextedit_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QCloseEvent* event)
///
void k_richtextedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QTabletEvent*
///
void k_richtextedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QTabletEvent*
///
void k_richtextedit_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QTabletEvent* event)
///
void k_richtextedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QActionEvent*
///
void k_richtextedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QActionEvent*
///
void k_richtextedit_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QActionEvent* event)
///
void k_richtextedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QHideEvent*
///
void k_richtextedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QHideEvent*
///
void k_richtextedit_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QHideEvent* event)
///
void k_richtextedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_richtextedit_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_richtextedit_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_richtextedit_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_richtextedit_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_richtextedit_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback int32_t func(KRichTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_richtextedit_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param painter QPainter*
///
void k_richtextedit_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param painter QPainter*
///
void k_richtextedit_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QPainter* painter)
///
void k_richtextedit_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_richtextedit_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param offset QPoint*
///
QPaintDevice* k_richtextedit_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QPaintDevice* func(KRichTextEdit* self, QPoint* offset)
///
void k_richtextedit_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QPainter* k_richtextedit_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QPainter* k_richtextedit_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QPainter* func(KRichTextEdit* self)
///
void k_richtextedit_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QChildEvent*
///
void k_richtextedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QChildEvent*
///
void k_richtextedit_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QChildEvent* event)
///
void k_richtextedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QEvent*
///
void k_richtextedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param event QEvent*
///
void k_richtextedit_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QEvent* event)
///
void k_richtextedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param signal QMetaMethod*
///
void k_richtextedit_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param signal QMetaMethod*
///
void k_richtextedit_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMetaMethod* signal)
///
void k_richtextedit_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param signal QMetaMethod*
///
void k_richtextedit_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param signal QMetaMethod*
///
void k_richtextedit_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QMetaMethod* signal)
///
void k_richtextedit_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_do_replace(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_do_replace(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_do_replace(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_replace_next(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_replace_next(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_replace_next(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_do_find(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_do_find(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_do_find(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFind)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_find(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFind)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_find(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFind)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_find(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_find_next(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_find_next(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_find_next(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_find_previous(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_find_previous(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_find_previous(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_replace(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_replace(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_replace(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_slot_speak_text(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_slot_speak_text(void* self);

/// Inherited from KTextEdit
///
/// [Upstream resources](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_slot_speak_text(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param range float
///
void k_richtextedit_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param range float
///
void k_richtextedit_super_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, float range)
///
void k_richtextedit_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_richtextedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_richtextedit_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, int left, int top, int right, int bottom)
///
void k_richtextedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QMargins* k_richtextedit_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QMargins* k_richtextedit_super_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QMargins* func(KRichTextEdit* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_richtextedit_on_viewport_margins(const void* self, QMargins* (*callback)(const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QPainter*
///
void k_richtextedit_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param param1 QPainter*
///
void k_richtextedit_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, QPainter* param1)
///
void k_richtextedit_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
void k_richtextedit_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self)
///
void k_richtextedit_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
bool k_richtextedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
bool k_richtextedit_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self)
///
void k_richtextedit_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextEdit*
///
bool k_richtextedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextEdit*
///
bool k_richtextedit_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self)
///
void k_richtextedit_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
QObject* k_richtextedit_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
QObject* k_richtextedit_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback QObject* func(KRichTextEdit* self)
///
void k_richtextedit_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
///
int32_t k_richtextedit_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback int32_t func(KRichTextEdit* self)
///
void k_richtextedit_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param signal const char*
///
int32_t k_richtextedit_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param signal const char*
///
int32_t k_richtextedit_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback int32_t func(KRichTextEdit* self, const char* signal)
///
void k_richtextedit_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param signal QMetaMethod*
///
bool k_richtextedit_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param signal QMetaMethod*
///
bool k_richtextedit_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback bool func(KRichTextEdit* self, QMetaMethod* signal)
///
void k_richtextedit_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_richtextedit_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_richtextedit_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KRichTextEdit*
/// @param callback double func(KRichTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_richtextedit_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KRichTextEdit*
/// @param callback void func(KRichTextEdit* self, const char* objectName)
///
void k_richtextedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/krichtextedit.html#dtor.KRichTextEdit)
///
/// Delete this object from C++ memory.
///
/// @param self KRichTextEdit*
///
void k_richtextedit_delete(void* self);

/// [Upstream resources](https://api.kde.org/krichtextedit.html#public-types)

typedef enum {
    KRICHTEXTEDIT_MODE_PLAIN = 0,
    KRICHTEXTEDIT_MODE_RICH = 1
} KRichTextEdit__Mode;

#endif
