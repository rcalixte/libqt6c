#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKRICHTEXTWIDGET_H
#define SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKRICHTEXTWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/krichtextwidget.html

/// k_richtextwidget_new constructs a new KRichTextWidget object.
///
/// @param parent QWidget*
KRichTextWidget* k_richtextwidget_new(void* parent);

/// k_richtextwidget_new2 constructs a new KRichTextWidget object.
///
/// @param text const char*
KRichTextWidget* k_richtextwidget_new2(const char* text);

/// k_richtextwidget_new3 constructs a new KRichTextWidget object.
///
/// @param text const char*
/// @param parent QWidget*
KRichTextWidget* k_richtextwidget_new3(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KRichTextWidget*
const QMetaObject* k_richtextwidget_meta_object(void* self);

/// @param self KRichTextWidget*
/// @param param1 const char*
void* k_richtextwidget_metacast(void* self, const char* param1);

/// @param self KRichTextWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_richtextwidget_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KRichTextWidget*
/// @param callback int32_t func(KRichTextWidget* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_richtextwidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KRichTextWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_richtextwidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_richtextwidget_tr(const char* s);

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#createActions)
///
/// @param self KRichTextWidget*
libqt_list /* of QAction* */ k_richtextwidget_create_actions(void* self);

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#createActions)
///
/// Allows for overriding the related default method
///
/// @param self KRichTextWidget*
/// @param callback QAction** func()
void k_richtextwidget_on_create_actions(void* self, QAction** (*callback)());

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#createActions)
///
/// Base class method implementation
///
/// @param self KRichTextWidget*
libqt_list /* of QAction* */ k_richtextwidget_qbase_create_actions(void* self);

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#richTextSupport)
///
/// @param self KRichTextWidget*
///
/// @return flag of enum KRichTextWidget__RichTextSupportValues
int64_t k_richtextwidget_rich_text_support(void* self);

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#updateActionStates)
///
/// @param self KRichTextWidget*
void k_richtextwidget_update_action_states(void* self);

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#setActionsEnabled)
///
/// @param self KRichTextWidget*
/// @param enabled bool
void k_richtextwidget_set_actions_enabled(void* self, bool enabled);

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#mouseReleaseEvent)
///
/// @param self KRichTextWidget*
/// @param event QMouseEvent*
void k_richtextwidget_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMouseEvent* event)
void k_richtextwidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KRichTextWidget*
/// @param event QMouseEvent*
void k_richtextwidget_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_richtextwidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_richtextwidget_tr3(const char* s, const char* c, int n);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#enableRichTextMode)
///
/// @param self KRichTextWidget*
void k_richtextwidget_enable_rich_text_mode(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#textMode)
///
/// @param self KRichTextWidget*
///
/// @return enum KRichTextEdit__Mode
int32_t k_richtextwidget_text_mode(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#textOrHtml)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_text_or_html(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextOrHtml)
///
/// @param self KRichTextWidget*
/// @param text const char*
void k_richtextwidget_set_text_or_html(void* self, const char* text);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#currentLinkText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_current_link_text(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#currentLinkUrl)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_current_link_url(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#selectLinkText)
///
/// @param self KRichTextWidget*
/// @param cursor QTextCursor*
void k_richtextwidget_select_link_text(void* self, void* cursor);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#selectLinkText)
///
/// @param self KRichTextWidget*
void k_richtextwidget_select_link_text2(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#updateLink)
///
/// @param self KRichTextWidget*
/// @param linkUrl const char*
/// @param linkText const char*
void k_richtextwidget_update_link(void* self, const char* linkUrl, const char* linkText);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#canIndentList)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_can_indent_list(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#canDedentList)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_can_dedent_list(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#alignLeft)
///
/// @param self KRichTextWidget*
void k_richtextwidget_align_left(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#alignCenter)
///
/// @param self KRichTextWidget*
void k_richtextwidget_align_center(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#alignRight)
///
/// @param self KRichTextWidget*
void k_richtextwidget_align_right(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#alignJustify)
///
/// @param self KRichTextWidget*
void k_richtextwidget_align_justify(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#makeRightToLeft)
///
/// @param self KRichTextWidget*
void k_richtextwidget_make_right_to_left(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#makeLeftToRight)
///
/// @param self KRichTextWidget*
void k_richtextwidget_make_left_to_right(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setListStyle)
///
/// @param self KRichTextWidget*
/// @param _styleIndex int
void k_richtextwidget_set_list_style(void* self, int _styleIndex);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#indentListMore)
///
/// @param self KRichTextWidget*
void k_richtextwidget_indent_list_more(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#indentListLess)
///
/// @param self KRichTextWidget*
void k_richtextwidget_indent_list_less(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setFontFamily)
///
/// @param self KRichTextWidget*
/// @param fontFamily const char*
void k_richtextwidget_set_font_family(void* self, const char* fontFamily);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setFontSize)
///
/// @param self KRichTextWidget*
/// @param size int
void k_richtextwidget_set_font_size(void* self, int size);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setFont)
///
/// @param self KRichTextWidget*
/// @param font QFont*
void k_richtextwidget_set_font(void* self, void* font);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextBold)
///
/// @param self KRichTextWidget*
/// @param bold bool
void k_richtextwidget_set_text_bold(void* self, bool bold);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextItalic)
///
/// @param self KRichTextWidget*
/// @param italic bool
void k_richtextwidget_set_text_italic(void* self, bool italic);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextUnderline)
///
/// @param self KRichTextWidget*
/// @param underline bool
void k_richtextwidget_set_text_underline(void* self, bool underline);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextStrikeOut)
///
/// @param self KRichTextWidget*
/// @param strikeOut bool
void k_richtextwidget_set_text_strike_out(void* self, bool strikeOut);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextForegroundColor)
///
/// @param self KRichTextWidget*
/// @param color QColor*
void k_richtextwidget_set_text_foreground_color(void* self, void* color);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextBackgroundColor)
///
/// @param self KRichTextWidget*
/// @param color QColor*
void k_richtextwidget_set_text_background_color(void* self, void* color);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#insertHorizontalRule)
///
/// @param self KRichTextWidget*
void k_richtextwidget_insert_horizontal_rule(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#switchToPlainText)
///
/// @param self KRichTextWidget*
void k_richtextwidget_switch_to_plain_text(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#toCleanHtml)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_to_clean_html(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextSuperScript)
///
/// @param self KRichTextWidget*
/// @param superscript bool
void k_richtextwidget_set_text_super_script(void* self, bool superscript);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setTextSubScript)
///
/// @param self KRichTextWidget*
/// @param subscript bool
void k_richtextwidget_set_text_sub_script(void* self, bool subscript);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#setHeadingLevel)
///
/// @param self KRichTextWidget*
/// @param level int
void k_richtextwidget_set_heading_level(void* self, int level);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#insertPlainTextImplementation)
///
/// @param self KRichTextWidget*
void k_richtextwidget_insert_plain_text_implementation(void* self);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#textModeChanged)
///
/// @param self KRichTextWidget*
/// @param mode enum KRichTextEdit__Mode
void k_richtextwidget_text_mode_changed(void* self, int32_t mode);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#textModeChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, enum KRichTextEdit__Mode mode)
void k_richtextwidget_on_text_mode_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#highlightWord)
///
/// @param self KRichTextWidget*
/// @param length int
/// @param pos int
void k_richtextwidget_highlight_word(void* self, int length, int pos);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#highlighter)
///
/// @param self KRichTextWidget*
Sonnet__Highlighter* k_richtextwidget_highlighter(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setHighlighter)
///
/// @param self KRichTextWidget*
/// @param _highLighter Sonnet__Highlighter*
void k_richtextwidget_set_highlighter(void* self, void* _highLighter);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#enableFindReplace)
///
/// @param self KRichTextWidget*
/// @param enabled bool
void k_richtextwidget_enable_find_replace(void* self, bool enabled);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingLanguage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_spell_checking_language(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#showTabAction)
///
/// @param self KRichTextWidget*
/// @param show bool
void k_richtextwidget_show_tab_action(void* self, bool show);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#showAutoCorrectButton)
///
/// @param self KRichTextWidget*
/// @param show bool
void k_richtextwidget_show_auto_correct_button(void* self, bool show);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#forceSpellChecking)
///
/// @param self KRichTextWidget*
void k_richtextwidget_force_spell_checking(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingChanged)
///
/// @param self KRichTextWidget*
/// @param param1 bool
void k_richtextwidget_check_spelling_changed(void* self, bool param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, bool param1)
void k_richtextwidget_on_check_spelling_changed(void* self, void (*callback)(void*, bool));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckStatus)
///
/// @param self KRichTextWidget*
/// @param param1 const char*
void k_richtextwidget_spell_check_status(void* self, const char* param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckStatus)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, const char* param1)
void k_richtextwidget_on_spell_check_status(void* self, void (*callback)(void*, const char*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#languageChanged)
///
/// @param self KRichTextWidget*
/// @param language const char*
void k_richtextwidget_language_changed(void* self, const char* language);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#languageChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, const char* language)
void k_richtextwidget_on_language_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
///
/// @param self KRichTextWidget*
/// @param menu QMenu*
void k_richtextwidget_about_to_show_context_menu(void* self, void* menu);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMenu* menu)
void k_richtextwidget_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
///
/// @param self KRichTextWidget*
/// @param currentWord const char*
/// @param autoCorrectWord const char*
void k_richtextwidget_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, const char* currentWord, const char* autoCorrectWord)
void k_richtextwidget_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingFinished)
///
/// @param self KRichTextWidget*
void k_richtextwidget_spell_checking_finished(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingFinished)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self)
void k_richtextwidget_on_spell_checking_finished(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
///
/// @param self KRichTextWidget*
void k_richtextwidget_spell_checking_canceled(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self)
void k_richtextwidget_on_spell_checking_canceled(void* self, void (*callback)(void*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setSpellCheckingLanguage)
///
/// @param self KRichTextWidget*
/// @param language const char*
void k_richtextwidget_set_spell_checking_language(void* self, const char* language);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpelling)
///
/// @param self KRichTextWidget*
void k_richtextwidget_check_spelling(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
///
/// @param self KRichTextWidget*
void k_richtextwidget_show_spell_config_dialog(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#replace)
///
/// @param self KRichTextWidget*
void k_richtextwidget_replace(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#addTextDecorator)
///
/// @param self KRichTextWidget*
/// @param decorator Sonnet__SpellCheckDecorator*
void k_richtextwidget_add_text_decorator(void* self, void* decorator);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#clearDecorator)
///
/// @param self KRichTextWidget*
void k_richtextwidget_clear_decorator(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
///
/// @param self KRichTextWidget*
/// @param windowIcon const char*
void k_richtextwidget_show_spell_config_dialog1(void* self, const char* windowIcon);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// @param self KRichTextWidget*
/// @param document QTextDocument*
void k_richtextwidget_set_document(void* self, void* document);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// @param self KRichTextWidget*
QTextDocument* k_richtextwidget_document(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// @param self KRichTextWidget*
/// @param placeholderText const char*
void k_richtextwidget_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_placeholder_text(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// @param self KRichTextWidget*
/// @param cursor QTextCursor*
void k_richtextwidget_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// @param self KRichTextWidget*
QTextCursor* k_richtextwidget_text_cursor(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_read_only(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// @param self KRichTextWidget*
/// @param flags flag of enum Qt__TextInteractionFlag
void k_richtextwidget_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// @param self KRichTextWidget*
///
/// @return flag of enum Qt__TextInteractionFlag
int32_t k_richtextwidget_text_interaction_flags(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// @param self KRichTextWidget*
double k_richtextwidget_font_point_size(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_font_family(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_font_weight(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_font_underline(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_font_italic(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// @param self KRichTextWidget*
QColor* k_richtextwidget_text_color(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// @param self KRichTextWidget*
QColor* k_richtextwidget_text_background_color(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// @param self KRichTextWidget*
QFont* k_richtextwidget_current_font(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// @param self KRichTextWidget*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t k_richtextwidget_alignment(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// @param self KRichTextWidget*
/// @param modifier QTextCharFormat*
void k_richtextwidget_merge_current_char_format(void* self, void* modifier);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// @param self KRichTextWidget*
/// @param format QTextCharFormat*
void k_richtextwidget_set_current_char_format(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// @param self KRichTextWidget*
QTextCharFormat* k_richtextwidget_current_char_format(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// @param self KRichTextWidget*
///
/// @return flag of enum QTextEdit__AutoFormattingFlag
int64_t k_richtextwidget_auto_formatting(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// @param self KRichTextWidget*
/// @param features flag of enum QTextEdit__AutoFormattingFlag
void k_richtextwidget_set_auto_formatting(void* self, int64_t features);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_tab_changes_focus(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// @param self KRichTextWidget*
/// @param b bool
void k_richtextwidget_set_tab_changes_focus(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// @param self KRichTextWidget*
/// @param title const char*
void k_richtextwidget_set_document_title(void* self, const char* title);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_document_title(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_undo_redo_enabled(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// @param self KRichTextWidget*
/// @param enable bool
void k_richtextwidget_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// @param self KRichTextWidget*
///
/// @return enum QTextEdit__LineWrapMode
int32_t k_richtextwidget_line_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// @param self KRichTextWidget*
/// @param mode enum QTextEdit__LineWrapMode
void k_richtextwidget_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_line_wrap_column_or_width(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// @param self KRichTextWidget*
/// @param w int
void k_richtextwidget_set_line_wrap_column_or_width(void* self, int w);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// @param self KRichTextWidget*
///
/// @return enum QTextOption__WrapMode
int32_t k_richtextwidget_word_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// @param self KRichTextWidget*
/// @param policy enum QTextOption__WrapMode
void k_richtextwidget_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextWidget*
/// @param exp const char*
bool k_richtextwidget_find(void* self, const char* exp);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextWidget*
/// @param exp QRegularExpression*
bool k_richtextwidget_find2(void* self, void* exp);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_to_plain_text(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_to_html(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_to_markdown(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// @param self KRichTextWidget*
void k_richtextwidget_ensure_cursor_visible(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self KRichTextWidget*
QMenu* k_richtextwidget_create_standard_context_menu(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self KRichTextWidget*
/// @param position QPoint*
QMenu* k_richtextwidget_create_standard_context_menu2(void* self, void* position);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// @param self KRichTextWidget*
/// @param pos QPoint*
QTextCursor* k_richtextwidget_cursor_for_position(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self KRichTextWidget*
/// @param cursor QTextCursor*
QRect* k_richtextwidget_cursor_rect(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self KRichTextWidget*
QRect* k_richtextwidget_cursor_rect2(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
/// @param pos QPoint*
const char* k_richtextwidget_anchor_at(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_overwrite_mode(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// @param self KRichTextWidget*
/// @param overwrite bool
void k_richtextwidget_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// @param self KRichTextWidget*
double k_richtextwidget_tab_stop_distance(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// @param self KRichTextWidget*
/// @param distance double
void k_richtextwidget_set_tab_stop_distance(void* self, double distance);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_cursor_width(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// @param self KRichTextWidget*
/// @param width int
void k_richtextwidget_set_cursor_width(void* self, int width);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_accept_rich_text(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// @param self KRichTextWidget*
/// @param accept bool
void k_richtextwidget_set_accept_rich_text(void* self, bool accept);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// @param self KRichTextWidget*
/// @param selections libqt_list /* of QTextEdit__ExtraSelection* */
void k_richtextwidget_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// @param self KRichTextWidget*
libqt_list /* of QTextEdit__ExtraSelection* */ k_richtextwidget_extra_selections(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self KRichTextWidget*
/// @param operation enum QTextCursor__MoveOperation
void k_richtextwidget_move_cursor(void* self, int32_t operation);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_can_paste(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// @param self KRichTextWidget*
/// @param printer QPagedPaintDevice*
void k_richtextwidget_print(void* self, void* printer);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self KRichTextWidget*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
QVariant* k_richtextwidget_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// @param self KRichTextWidget*
/// @param s double
void k_richtextwidget_set_font_point_size(void* self, double s);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// @param self KRichTextWidget*
/// @param w int
void k_richtextwidget_set_font_weight(void* self, int w);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// @param self KRichTextWidget*
/// @param b bool
void k_richtextwidget_set_font_underline(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// @param self KRichTextWidget*
/// @param b bool
void k_richtextwidget_set_font_italic(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// @param self KRichTextWidget*
/// @param c QColor*
void k_richtextwidget_set_text_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// @param self KRichTextWidget*
/// @param f QFont*
void k_richtextwidget_set_current_font(void* self, void* f);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// @param self KRichTextWidget*
/// @param a flag of enum Qt__AlignmentFlag
void k_richtextwidget_set_alignment(void* self, int32_t a);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// @param self KRichTextWidget*
/// @param text const char*
void k_richtextwidget_set_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// @param self KRichTextWidget*
/// @param text const char*
void k_richtextwidget_set_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// @param self KRichTextWidget*
/// @param markdown const char*
void k_richtextwidget_set_markdown(void* self, const char* markdown);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// @param self KRichTextWidget*
/// @param text const char*
void k_richtextwidget_set_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// @param self KRichTextWidget*
void k_richtextwidget_cut(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// @param self KRichTextWidget*
void k_richtextwidget_copy(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// @param self KRichTextWidget*
void k_richtextwidget_paste(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// @param self KRichTextWidget*
void k_richtextwidget_undo(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// @param self KRichTextWidget*
void k_richtextwidget_redo(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// @param self KRichTextWidget*
void k_richtextwidget_clear(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// @param self KRichTextWidget*
void k_richtextwidget_select_all(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// @param self KRichTextWidget*
/// @param text const char*
void k_richtextwidget_insert_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// @param self KRichTextWidget*
/// @param text const char*
void k_richtextwidget_insert_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// @param self KRichTextWidget*
/// @param text const char*
void k_richtextwidget_append(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// @param self KRichTextWidget*
/// @param name const char*
void k_richtextwidget_scroll_to_anchor(void* self, const char* name);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self KRichTextWidget*
void k_richtextwidget_zoom_in(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self KRichTextWidget*
void k_richtextwidget_zoom_out(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self KRichTextWidget*
void k_richtextwidget_text_changed(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self)
void k_richtextwidget_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self KRichTextWidget*
/// @param b bool
void k_richtextwidget_undo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, bool b)
void k_richtextwidget_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self KRichTextWidget*
/// @param b bool
void k_richtextwidget_redo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, bool b)
void k_richtextwidget_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self KRichTextWidget*
/// @param format QTextCharFormat*
void k_richtextwidget_current_char_format_changed(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QTextCharFormat* format)
void k_richtextwidget_on_current_char_format_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self KRichTextWidget*
/// @param b bool
void k_richtextwidget_copy_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, bool b)
void k_richtextwidget_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self KRichTextWidget*
void k_richtextwidget_selection_changed(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self)
void k_richtextwidget_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self KRichTextWidget*
void k_richtextwidget_cursor_position_changed(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self)
void k_richtextwidget_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextWidget*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
bool k_richtextwidget_find22(void* self, const char* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KRichTextWidget*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
bool k_richtextwidget_find23(void* self, void* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
/// @param features flag of enum QTextDocument__MarkdownFeature
const char* k_richtextwidget_to_markdown1(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self KRichTextWidget*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
void k_richtextwidget_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self KRichTextWidget*
/// @param range int
void k_richtextwidget_zoom_in1(void* self, int range);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self KRichTextWidget*
/// @param range int
void k_richtextwidget_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self KRichTextWidget*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_richtextwidget_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self KRichTextWidget*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_richtextwidget_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self KRichTextWidget*
QScrollBar* k_richtextwidget_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self KRichTextWidget*
/// @param scrollbar QScrollBar*
void k_richtextwidget_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self KRichTextWidget*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_richtextwidget_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self KRichTextWidget*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_richtextwidget_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self KRichTextWidget*
QScrollBar* k_richtextwidget_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self KRichTextWidget*
/// @param scrollbar QScrollBar*
void k_richtextwidget_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self KRichTextWidget*
/// @param widget QWidget*
void k_richtextwidget_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self KRichTextWidget*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void k_richtextwidget_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self KRichTextWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ k_richtextwidget_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self KRichTextWidget*
/// @param widget QWidget*
void k_richtextwidget_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self KRichTextWidget*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t k_richtextwidget_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self KRichTextWidget*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void k_richtextwidget_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KRichTextWidget*
/// @param frameStyle int
void k_richtextwidget_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KRichTextWidget*
///
/// @return enum QFrame__Shape
int32_t k_richtextwidget_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KRichTextWidget*
/// @param frameShape enum QFrame__Shape
void k_richtextwidget_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KRichTextWidget*
///
/// @return enum QFrame__Shadow
int32_t k_richtextwidget_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KRichTextWidget*
/// @param frameShadow enum QFrame__Shadow
void k_richtextwidget_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KRichTextWidget*
/// @param lineWidth int
void k_richtextwidget_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KRichTextWidget*
/// @param midLineWidth int
void k_richtextwidget_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KRichTextWidget*
QRect* k_richtextwidget_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KRichTextWidget*
/// @param frameRect QRect*
void k_richtextwidget_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KRichTextWidget*
uintptr_t k_richtextwidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KRichTextWidget*
void k_richtextwidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KRichTextWidget*
uintptr_t k_richtextwidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KRichTextWidget*
uintptr_t k_richtextwidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KRichTextWidget*
QStyle* k_richtextwidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KRichTextWidget*
/// @param style QStyle*
void k_richtextwidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KRichTextWidget*
///
/// @return enum Qt__WindowModality
int32_t k_richtextwidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KRichTextWidget*
/// @param windowModality enum Qt__WindowModality
void k_richtextwidget_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KRichTextWidget*
/// @param param1 QWidget*
bool k_richtextwidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KRichTextWidget*
/// @param enabled bool
void k_richtextwidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KRichTextWidget*
/// @param disabled bool
void k_richtextwidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KRichTextWidget*
/// @param windowModified bool
void k_richtextwidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KRichTextWidget*
QRect* k_richtextwidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KRichTextWidget*
const QRect* k_richtextwidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KRichTextWidget*
QRect* k_richtextwidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KRichTextWidget*
QPoint* k_richtextwidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KRichTextWidget*
QRect* k_richtextwidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KRichTextWidget*
QRect* k_richtextwidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KRichTextWidget*
QRegion* k_richtextwidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KRichTextWidget*
/// @param minimumSize QSize*
void k_richtextwidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KRichTextWidget*
/// @param minw int
/// @param minh int
void k_richtextwidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KRichTextWidget*
/// @param maximumSize QSize*
void k_richtextwidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KRichTextWidget*
/// @param maxw int
/// @param maxh int
void k_richtextwidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KRichTextWidget*
/// @param minw int
void k_richtextwidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KRichTextWidget*
/// @param minh int
void k_richtextwidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KRichTextWidget*
/// @param maxw int
void k_richtextwidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KRichTextWidget*
/// @param maxh int
void k_richtextwidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KRichTextWidget*
/// @param sizeIncrement QSize*
void k_richtextwidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KRichTextWidget*
/// @param w int
/// @param h int
void k_richtextwidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KRichTextWidget*
/// @param baseSize QSize*
void k_richtextwidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KRichTextWidget*
/// @param basew int
/// @param baseh int
void k_richtextwidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KRichTextWidget*
/// @param fixedSize QSize*
void k_richtextwidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KRichTextWidget*
/// @param w int
/// @param h int
void k_richtextwidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KRichTextWidget*
/// @param w int
void k_richtextwidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KRichTextWidget*
/// @param h int
void k_richtextwidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KRichTextWidget*
/// @param param1 QPointF*
QPointF* k_richtextwidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KRichTextWidget*
/// @param param1 QPoint*
QPoint* k_richtextwidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KRichTextWidget*
/// @param param1 QPointF*
QPointF* k_richtextwidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KRichTextWidget*
/// @param param1 QPoint*
QPoint* k_richtextwidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KRichTextWidget*
/// @param param1 QPointF*
QPointF* k_richtextwidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KRichTextWidget*
/// @param param1 QPoint*
QPoint* k_richtextwidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KRichTextWidget*
/// @param param1 QPointF*
QPointF* k_richtextwidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KRichTextWidget*
/// @param param1 QPoint*
QPoint* k_richtextwidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KRichTextWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_richtextwidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KRichTextWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_richtextwidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KRichTextWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_richtextwidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KRichTextWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_richtextwidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KRichTextWidget*
const QPalette* k_richtextwidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KRichTextWidget*
/// @param palette QPalette*
void k_richtextwidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KRichTextWidget*
/// @param backgroundRole enum QPalette__ColorRole
void k_richtextwidget_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KRichTextWidget*
///
/// @return enum QPalette__ColorRole
int32_t k_richtextwidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KRichTextWidget*
/// @param foregroundRole enum QPalette__ColorRole
void k_richtextwidget_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KRichTextWidget*
///
/// @return enum QPalette__ColorRole
int32_t k_richtextwidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KRichTextWidget*
const QFont* k_richtextwidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KRichTextWidget*
QFontMetrics* k_richtextwidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KRichTextWidget*
QFontInfo* k_richtextwidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KRichTextWidget*
QCursor* k_richtextwidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KRichTextWidget*
/// @param cursor QCursor*
void k_richtextwidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KRichTextWidget*
void k_richtextwidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KRichTextWidget*
/// @param enable bool
void k_richtextwidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KRichTextWidget*
/// @param enable bool
void k_richtextwidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KRichTextWidget*
/// @param mask QBitmap*
void k_richtextwidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KRichTextWidget*
/// @param mask QRegion*
void k_richtextwidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KRichTextWidget*
QRegion* k_richtextwidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KRichTextWidget*
void k_richtextwidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param target QPaintDevice*
void k_richtextwidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param painter QPainter*
void k_richtextwidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KRichTextWidget*
QPixmap* k_richtextwidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KRichTextWidget*
QGraphicsEffect* k_richtextwidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KRichTextWidget*
/// @param effect QGraphicsEffect*
void k_richtextwidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KRichTextWidget*
/// @param type enum Qt__GestureType
void k_richtextwidget_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KRichTextWidget*
/// @param type enum Qt__GestureType
void k_richtextwidget_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KRichTextWidget*
/// @param windowTitle const char*
void k_richtextwidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KRichTextWidget*
/// @param styleSheet const char*
void k_richtextwidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KRichTextWidget*
/// @param icon QIcon*
void k_richtextwidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KRichTextWidget*
QIcon* k_richtextwidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KRichTextWidget*
/// @param windowIconText const char*
void k_richtextwidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KRichTextWidget*
/// @param windowRole const char*
void k_richtextwidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KRichTextWidget*
/// @param filePath const char*
void k_richtextwidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KRichTextWidget*
/// @param level double
void k_richtextwidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KRichTextWidget*
double k_richtextwidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KRichTextWidget*
/// @param toolTip const char*
void k_richtextwidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KRichTextWidget*
/// @param msec int
void k_richtextwidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KRichTextWidget*
/// @param statusTip const char*
void k_richtextwidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KRichTextWidget*
/// @param whatsThis const char*
void k_richtextwidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KRichTextWidget*
/// @param name const char*
void k_richtextwidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KRichTextWidget*
/// @param description const char*
void k_richtextwidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KRichTextWidget*
/// @param direction enum Qt__LayoutDirection
void k_richtextwidget_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KRichTextWidget*
///
/// @return enum Qt__LayoutDirection
int32_t k_richtextwidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KRichTextWidget*
void k_richtextwidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KRichTextWidget*
/// @param locale QLocale*
void k_richtextwidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KRichTextWidget*
QLocale* k_richtextwidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KRichTextWidget*
void k_richtextwidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KRichTextWidget*
void k_richtextwidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KRichTextWidget*
void k_richtextwidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KRichTextWidget*
void k_richtextwidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KRichTextWidget*
/// @param reason enum Qt__FocusReason
void k_richtextwidget_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KRichTextWidget*
///
/// @return enum Qt__FocusPolicy
int32_t k_richtextwidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KRichTextWidget*
/// @param policy enum Qt__FocusPolicy
void k_richtextwidget_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_richtextwidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KRichTextWidget*
/// @param focusProxy QWidget*
void k_richtextwidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KRichTextWidget*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_richtextwidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KRichTextWidget*
/// @param policy enum Qt__ContextMenuPolicy
void k_richtextwidget_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KRichTextWidget*
void k_richtextwidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KRichTextWidget*
/// @param param1 QCursor*
void k_richtextwidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KRichTextWidget*
void k_richtextwidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KRichTextWidget*
void k_richtextwidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KRichTextWidget*
void k_richtextwidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KRichTextWidget*
/// @param key QKeySequence*
int32_t k_richtextwidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KRichTextWidget*
/// @param id int
void k_richtextwidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KRichTextWidget*
/// @param id int
void k_richtextwidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KRichTextWidget*
/// @param id int
void k_richtextwidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_richtextwidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_richtextwidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KRichTextWidget*
/// @param enable bool
void k_richtextwidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KRichTextWidget*
QGraphicsProxyWidget* k_richtextwidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextWidget*
void k_richtextwidget_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextWidget*
void k_richtextwidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_richtextwidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextWidget*
/// @param param1 QRect*
void k_richtextwidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KRichTextWidget*
/// @param param1 QRegion*
void k_richtextwidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_richtextwidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextWidget*
/// @param param1 QRect*
void k_richtextwidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KRichTextWidget*
/// @param param1 QRegion*
void k_richtextwidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KRichTextWidget*
/// @param hidden bool
void k_richtextwidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KRichTextWidget*
void k_richtextwidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KRichTextWidget*
void k_richtextwidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KRichTextWidget*
void k_richtextwidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KRichTextWidget*
void k_richtextwidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KRichTextWidget*
void k_richtextwidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KRichTextWidget*
void k_richtextwidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KRichTextWidget*
void k_richtextwidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KRichTextWidget*
void k_richtextwidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KRichTextWidget*
/// @param param1 QWidget*
void k_richtextwidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KRichTextWidget*
/// @param x int
/// @param y int
void k_richtextwidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KRichTextWidget*
/// @param param1 QPoint*
void k_richtextwidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KRichTextWidget*
/// @param w int
/// @param h int
void k_richtextwidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KRichTextWidget*
/// @param param1 QSize*
void k_richtextwidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KRichTextWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_richtextwidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KRichTextWidget*
/// @param geometry QRect*
void k_richtextwidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
char* k_richtextwidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KRichTextWidget*
/// @param geometry const char*
bool k_richtextwidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KRichTextWidget*
void k_richtextwidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KRichTextWidget*
/// @param param1 QWidget*
bool k_richtextwidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KRichTextWidget*
///
/// @return flag of enum Qt__WindowState
int32_t k_richtextwidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KRichTextWidget*
/// @param state flag of enum Qt__WindowState
void k_richtextwidget_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KRichTextWidget*
/// @param state flag of enum Qt__WindowState
void k_richtextwidget_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KRichTextWidget*
QSizePolicy* k_richtextwidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KRichTextWidget*
/// @param sizePolicy QSizePolicy*
void k_richtextwidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KRichTextWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_richtextwidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KRichTextWidget*
QRegion* k_richtextwidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KRichTextWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_richtextwidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KRichTextWidget*
/// @param margins QMargins*
void k_richtextwidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KRichTextWidget*
QMargins* k_richtextwidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KRichTextWidget*
QRect* k_richtextwidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KRichTextWidget*
QLayout* k_richtextwidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KRichTextWidget*
/// @param layout QLayout*
void k_richtextwidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KRichTextWidget*
void k_richtextwidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KRichTextWidget*
/// @param parent QWidget*
void k_richtextwidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KRichTextWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_richtextwidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KRichTextWidget*
/// @param dx int
/// @param dy int
void k_richtextwidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KRichTextWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_richtextwidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KRichTextWidget*
/// @param on bool
void k_richtextwidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextWidget*
/// @param action QAction*
void k_richtextwidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KRichTextWidget*
/// @param actions libqt_list /* of QAction* */
void k_richtextwidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KRichTextWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_richtextwidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KRichTextWidget*
/// @param before QAction*
/// @param action QAction*
void k_richtextwidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KRichTextWidget*
/// @param action QAction*
void k_richtextwidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KRichTextWidget*
libqt_list /* of QAction* */ k_richtextwidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextWidget*
/// @param text const char*
QAction* k_richtextwidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextWidget*
/// @param icon QIcon*
/// @param text const char*
QAction* k_richtextwidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_richtextwidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KRichTextWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_richtextwidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KRichTextWidget*
QWidget* k_richtextwidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KRichTextWidget*
/// @param type flag of enum Qt__WindowType
void k_richtextwidget_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KRichTextWidget*
///
/// @return flag of enum Qt__WindowType
int64_t k_richtextwidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KRichTextWidget*
/// @param param1 enum Qt__WindowType
void k_richtextwidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KRichTextWidget*
/// @param type flag of enum Qt__WindowType
void k_richtextwidget_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KRichTextWidget*
///
/// @return enum Qt__WindowType
int64_t k_richtextwidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KRichTextWidget*
/// @param x int
/// @param y int
QWidget* k_richtextwidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KRichTextWidget*
/// @param p QPoint*
QWidget* k_richtextwidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KRichTextWidget*
/// @param p QPointF*
QWidget* k_richtextwidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KRichTextWidget*
/// @param param1 enum Qt__WidgetAttribute
void k_richtextwidget_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KRichTextWidget*
/// @param param1 enum Qt__WidgetAttribute
bool k_richtextwidget_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KRichTextWidget*
void k_richtextwidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KRichTextWidget*
/// @param child QWidget*
bool k_richtextwidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KRichTextWidget*
/// @param enabled bool
void k_richtextwidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KRichTextWidget*
QBackingStore* k_richtextwidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KRichTextWidget*
QWindow* k_richtextwidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KRichTextWidget*
QScreen* k_richtextwidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KRichTextWidget*
/// @param screen QScreen*
void k_richtextwidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_richtextwidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KRichTextWidget*
/// @param title const char*
void k_richtextwidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, const char* title)
void k_richtextwidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KRichTextWidget*
/// @param icon QIcon*
void k_richtextwidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QIcon* icon)
void k_richtextwidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KRichTextWidget*
/// @param iconText const char*
void k_richtextwidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, const char* iconText)
void k_richtextwidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KRichTextWidget*
/// @param pos QPoint*
void k_richtextwidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QPoint* pos)
void k_richtextwidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KRichTextWidget*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_richtextwidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KRichTextWidget*
/// @param hints flag of enum Qt__InputMethodHint
void k_richtextwidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_richtextwidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_richtextwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_richtextwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_richtextwidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_richtextwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KRichTextWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_richtextwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KRichTextWidget*
/// @param rectangle QRect*
QPixmap* k_richtextwidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KRichTextWidget*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_richtextwidget_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KRichTextWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_richtextwidget_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KRichTextWidget*
/// @param id int
/// @param enable bool
void k_richtextwidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KRichTextWidget*
/// @param id int
/// @param enable bool
void k_richtextwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KRichTextWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_richtextwidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KRichTextWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_richtextwidget_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_richtextwidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_richtextwidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char* k_richtextwidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KRichTextWidget*
/// @param name char*
void k_richtextwidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KRichTextWidget*
/// @param b bool
bool k_richtextwidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KRichTextWidget*
QThread* k_richtextwidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRichTextWidget*
/// @param thread QThread*
bool k_richtextwidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRichTextWidget*
/// @param interval int
int32_t k_richtextwidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRichTextWidget*
/// @param id int
void k_richtextwidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KRichTextWidget*
/// @param id enum Qt__TimerId
void k_richtextwidget_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KRichTextWidget*
libqt_list /* of QObject* */ k_richtextwidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KRichTextWidget*
/// @param filterObj QObject*
void k_richtextwidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KRichTextWidget*
/// @param obj QObject*
void k_richtextwidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_richtextwidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRichTextWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_richtextwidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_richtextwidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_richtextwidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KRichTextWidget*
void k_richtextwidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KRichTextWidget*
void k_richtextwidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KRichTextWidget*
/// @param name const char*
/// @param value QVariant*
bool k_richtextwidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KRichTextWidget*
/// @param name const char*
QVariant* k_richtextwidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KRichTextWidget*
const char** k_richtextwidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRichTextWidget*
QBindingStorage* k_richtextwidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KRichTextWidget*
const QBindingStorage* k_richtextwidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextWidget*
void k_richtextwidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self)
void k_richtextwidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KRichTextWidget*
QObject* k_richtextwidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KRichTextWidget*
/// @param classname const char*
bool k_richtextwidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KRichTextWidget*
void k_richtextwidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KRichTextWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_richtextwidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KRichTextWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_richtextwidget_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_richtextwidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KRichTextWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_richtextwidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextWidget*
/// @param param1 QObject*
void k_richtextwidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QObject* param1)
void k_richtextwidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KRichTextWidget*
bool k_richtextwidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KRichTextWidget*
double k_richtextwidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KRichTextWidget*
double k_richtextwidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_richtextwidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_richtextwidget_encode_metric_f(int32_t metric, double value);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QKeyEvent*
void k_richtextwidget_key_press_event(void* self, void* event);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QKeyEvent*
void k_richtextwidget_qbase_key_press_event(void* self, void* event);

/// Inherited from KRichTextEdit
///
/// [Qt documentation](https://api.kde.org/krichtextedit.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QKeyEvent* event)
void k_richtextwidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param readOnly bool
void k_richtextwidget_set_read_only(void* self, bool readOnly);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param readOnly bool
void k_richtextwidget_qbase_set_read_only(void* self, bool readOnly);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, bool readOnly)
void k_richtextwidget_on_set_read_only(void* self, void (*callback)(void*, bool));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param check bool
void k_richtextwidget_set_check_spelling_enabled(void* self, bool check);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param check bool
void k_richtextwidget_qbase_set_check_spelling_enabled(void* self, bool check);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, bool check)
void k_richtextwidget_on_set_check_spelling_enabled(void* self, void (*callback)(void*, bool));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_check_spelling_enabled(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_qbase_check_spelling_enabled(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func()
void k_richtextwidget_on_check_spelling_enabled(void* self, bool (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param block const char*
bool k_richtextwidget_should_block_be_spell_checked(void* self, const char* block);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param block const char*
bool k_richtextwidget_qbase_should_block_be_spell_checked(void* self, const char* block);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, const char* block)
void k_richtextwidget_on_should_block_be_spell_checked(void* self, bool (*callback)(void*, const char*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_create_highlighter(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_create_highlighter(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_create_highlighter(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QMenu* k_richtextwidget_mouse_popup_menu(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QMenu* k_richtextwidget_qbase_mouse_popup_menu(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QMenu* func()
void k_richtextwidget_on_mouse_popup_menu(void* self, QMenu* (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QEvent*
bool k_richtextwidget_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QEvent*
bool k_richtextwidget_qbase_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, QEvent* param1)
void k_richtextwidget_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QFocusEvent*
void k_richtextwidget_focus_in_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QFocusEvent*
void k_richtextwidget_qbase_focus_in_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QFocusEvent* param1)
void k_richtextwidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_delete_word_back(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_delete_word_back(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_delete_word_back(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_delete_word_forward(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_delete_word_forward(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_delete_word_forward(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QContextMenuEvent*
void k_richtextwidget_context_menu_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QContextMenuEvent*
void k_richtextwidget_qbase_context_menu_event(void* self, void* param1);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QContextMenuEvent* param1)
void k_richtextwidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param type int
/// @param name QUrl*
QVariant* k_richtextwidget_load_resource(void* self, int type, void* name);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param type int
/// @param name QUrl*
QVariant* k_richtextwidget_qbase_load_resource(void* self, int type, void* name);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QVariant* func(KRichTextWidget* self, int type, QUrl* name)
void k_richtextwidget_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param property enum Qt__InputMethodQuery
QVariant* k_richtextwidget_input_method_query(void* self, int64_t property);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param property enum Qt__InputMethodQuery
QVariant* k_richtextwidget_qbase_input_method_query(void* self, int64_t property);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QVariant* func(KRichTextWidget* self, enum Qt__InputMethodQuery property)
void k_richtextwidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QTimerEvent*
void k_richtextwidget_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QTimerEvent*
void k_richtextwidget_qbase_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QTimerEvent* e)
void k_richtextwidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QKeyEvent*
void k_richtextwidget_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QKeyEvent*
void k_richtextwidget_qbase_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QKeyEvent* e)
void k_richtextwidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QResizeEvent*
void k_richtextwidget_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QResizeEvent*
void k_richtextwidget_qbase_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QResizeEvent* e)
void k_richtextwidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QPaintEvent*
void k_richtextwidget_paint_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QPaintEvent*
void k_richtextwidget_qbase_paint_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QPaintEvent* e)
void k_richtextwidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QMouseEvent*
void k_richtextwidget_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QMouseEvent*
void k_richtextwidget_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMouseEvent* e)
void k_richtextwidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QMouseEvent*
void k_richtextwidget_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QMouseEvent*
void k_richtextwidget_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMouseEvent* e)
void k_richtextwidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QMouseEvent*
void k_richtextwidget_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QMouseEvent*
void k_richtextwidget_qbase_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMouseEvent* e)
void k_richtextwidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param next bool
bool k_richtextwidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param next bool
bool k_richtextwidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, bool next)
void k_richtextwidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDragEnterEvent*
void k_richtextwidget_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDragEnterEvent*
void k_richtextwidget_qbase_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QDragEnterEvent* e)
void k_richtextwidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDragLeaveEvent*
void k_richtextwidget_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDragLeaveEvent*
void k_richtextwidget_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QDragLeaveEvent* e)
void k_richtextwidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDragMoveEvent*
void k_richtextwidget_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDragMoveEvent*
void k_richtextwidget_qbase_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QDragMoveEvent* e)
void k_richtextwidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDropEvent*
void k_richtextwidget_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QDropEvent*
void k_richtextwidget_qbase_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QDropEvent* e)
void k_richtextwidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QFocusEvent*
void k_richtextwidget_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QFocusEvent*
void k_richtextwidget_qbase_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QFocusEvent* e)
void k_richtextwidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QShowEvent*
void k_richtextwidget_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QShowEvent*
void k_richtextwidget_qbase_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QShowEvent* param1)
void k_richtextwidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QEvent*
void k_richtextwidget_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QEvent*
void k_richtextwidget_qbase_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QEvent* e)
void k_richtextwidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QWheelEvent*
void k_richtextwidget_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param e QWheelEvent*
void k_richtextwidget_qbase_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QWheelEvent* e)
void k_richtextwidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QMimeData* k_richtextwidget_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QMimeData* k_richtextwidget_qbase_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QMimeData* func()
void k_richtextwidget_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param source QMimeData*
bool k_richtextwidget_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param source QMimeData*
bool k_richtextwidget_qbase_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, QMimeData* source)
void k_richtextwidget_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param source QMimeData*
void k_richtextwidget_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param source QMimeData*
void k_richtextwidget_qbase_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMimeData* source)
void k_richtextwidget_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QInputMethodEvent*
void k_richtextwidget_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QInputMethodEvent*
void k_richtextwidget_qbase_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QInputMethodEvent* param1)
void k_richtextwidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param dx int
/// @param dy int
void k_richtextwidget_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param dx int
/// @param dy int
void k_richtextwidget_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, int dx, int dy)
void k_richtextwidget_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param cursor QTextCursor*
void k_richtextwidget_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param cursor QTextCursor*
void k_richtextwidget_qbase_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QTextCursor* cursor)
void k_richtextwidget_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QSize* func()
void k_richtextwidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QSize* func()
void k_richtextwidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param viewport QWidget*
void k_richtextwidget_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param viewport QWidget*
void k_richtextwidget_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QWidget* viewport)
void k_richtextwidget_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_richtextwidget_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_richtextwidget_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, QObject* param1, QEvent* param2)
void k_richtextwidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QEvent*
bool k_richtextwidget_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QEvent*
bool k_richtextwidget_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, QEvent* param1)
void k_richtextwidget_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QSize* k_richtextwidget_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QSize* func()
void k_richtextwidget_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param option QStyleOptionFrame*
void k_richtextwidget_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param option QStyleOptionFrame*
void k_richtextwidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QStyleOptionFrame* option)
void k_richtextwidget_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback int32_t func()
void k_richtextwidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param visible bool
void k_richtextwidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param visible bool
void k_richtextwidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, bool visible)
void k_richtextwidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 int
int32_t k_richtextwidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 int
int32_t k_richtextwidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback int32_t func(KRichTextWidget* self, int param1)
void k_richtextwidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func()
void k_richtextwidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QPaintEngine* k_richtextwidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QPaintEngine* k_richtextwidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QPaintEngine* func()
void k_richtextwidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QEnterEvent*
void k_richtextwidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QEnterEvent*
void k_richtextwidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QEnterEvent* event)
void k_richtextwidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QEvent*
void k_richtextwidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QEvent*
void k_richtextwidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QEvent* event)
void k_richtextwidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QMoveEvent*
void k_richtextwidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QMoveEvent*
void k_richtextwidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMoveEvent* event)
void k_richtextwidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QCloseEvent*
void k_richtextwidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QCloseEvent*
void k_richtextwidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QCloseEvent* event)
void k_richtextwidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QTabletEvent*
void k_richtextwidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QTabletEvent*
void k_richtextwidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QTabletEvent* event)
void k_richtextwidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QActionEvent*
void k_richtextwidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QActionEvent*
void k_richtextwidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QActionEvent* event)
void k_richtextwidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QHideEvent*
void k_richtextwidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QHideEvent*
void k_richtextwidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QHideEvent* event)
void k_richtextwidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_richtextwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_richtextwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, const char* eventType, void* message, intptr_t* result)
void k_richtextwidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_richtextwidget_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_richtextwidget_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback int32_t func(KRichTextWidget* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_richtextwidget_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param painter QPainter*
void k_richtextwidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param painter QPainter*
void k_richtextwidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QPainter* painter)
void k_richtextwidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param offset QPoint*
QPaintDevice* k_richtextwidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param offset QPoint*
QPaintDevice* k_richtextwidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QPaintDevice* func(KRichTextWidget* self, QPoint* offset)
void k_richtextwidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QPainter* k_richtextwidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QPainter* k_richtextwidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QPainter* func()
void k_richtextwidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QChildEvent*
void k_richtextwidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QChildEvent*
void k_richtextwidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QChildEvent* event)
void k_richtextwidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QEvent*
void k_richtextwidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param event QEvent*
void k_richtextwidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QEvent* event)
void k_richtextwidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal QMetaMethod*
void k_richtextwidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal QMetaMethod*
void k_richtextwidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMetaMethod* signal)
void k_richtextwidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal QMetaMethod*
void k_richtextwidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal QMetaMethod*
void k_richtextwidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QMetaMethod* signal)
void k_richtextwidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_do_replace(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_do_replace(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_do_replace(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_replace_next(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_replace_next(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_replace_next(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_do_find(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_do_find(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_do_find(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFind)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_find(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFind)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_find(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFind)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_find(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_find_next(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_find_next(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_find_next(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_find_previous(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_find_previous(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_find_previous(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_replace(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_replace(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_replace(void* self, void (*callback)());

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_slot_speak_text(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_slot_speak_text(void* self);

/// Inherited from KTextEdit
///
/// [Qt documentation](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_slot_speak_text(void* self, void (*callback)());

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param range float
void k_richtextwidget_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param range float
void k_richtextwidget_qbase_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, float range)
void k_richtextwidget_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_richtextwidget_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_richtextwidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, int left, int top, int right, int bottom)
void k_richtextwidget_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QMargins* k_richtextwidget_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QMargins* k_richtextwidget_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QMargins* func()
void k_richtextwidget_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QPainter*
void k_richtextwidget_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param param1 QPainter*
void k_richtextwidget_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, QPainter* param1)
void k_richtextwidget_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
void k_richtextwidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback void func()
void k_richtextwidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func()
void k_richtextwidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
bool k_richtextwidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func()
void k_richtextwidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
QObject* k_richtextwidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
QObject* k_richtextwidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback QObject* func()
void k_richtextwidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
int32_t k_richtextwidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback int32_t func()
void k_richtextwidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal const char*
int32_t k_richtextwidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal const char*
int32_t k_richtextwidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback int32_t func(KRichTextWidget* self, const char* signal)
void k_richtextwidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal QMetaMethod*
bool k_richtextwidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param signal QMetaMethod*
bool k_richtextwidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback bool func(KRichTextWidget* self, QMetaMethod* signal)
void k_richtextwidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KRichTextWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_richtextwidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_richtextwidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KRichTextWidget*
/// @param callback double func(KRichTextWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_richtextwidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KRichTextWidget*
/// @param callback void func(KRichTextWidget* self, const char* objectName)
void k_richtextwidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/krichtextwidget.html#dtor.KRichTextWidget)
///
/// Delete this object from C++ memory.
///
/// @param self KRichTextWidget*
void k_richtextwidget_delete(void* self);

/// https://api.kde.org/krichtextwidget.html#types

typedef enum {
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_DISABLERICHTEXT = 0,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTBOLD = 1,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTITALIC = 2,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTUNDERLINE = 4,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTSTRIKEOUT = 8,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTFONTFAMILY = 16,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTFONTSIZE = 32,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTTEXTFOREGROUNDCOLOR = 64,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTTEXTBACKGROUNDCOLOR = 128,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_FULLTEXTFORMATTINGSUPPORT = 255,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTCHANGELISTSTYLE = 256,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTINDENTLISTS = 512,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTDEDENTLISTS = 1024,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_FULLLISTSUPPORT = 3840,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTALIGNMENT = 1048576,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTRULELINE = 4194304,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTHYPERLINKS = 8388608,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTFORMATPAINTING = 16777216,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTTOPLAINTEXT = 33554432,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTSUPERSCRIPTANDSUBSCRIPT = 67108864,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTDIRECTION = 134217728,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_SUPPORTHEADING = 268435456,
    KRICHTEXTWIDGET_RICHTEXTSUPPORTVALUES_FULLSUPPORT = 4294967295
} KRichTextWidget__RichTextSupportValues;

#endif
