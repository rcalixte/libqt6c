#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETSQT6C_LIBKTEXTEDIT_H
#define SRC_EXTRAS_KTEXTWIDGETSQT6C_LIBKTEXTEDIT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktextedit.html

/// k_textedit_new constructs a new KTextEdit object.
///
/// @param parent QWidget*
KTextEdit* k_textedit_new(void* parent);

/// k_textedit_new2 constructs a new KTextEdit object.
///
/// @param text const char*
KTextEdit* k_textedit_new2(const char* text);

/// k_textedit_new3 constructs a new KTextEdit object.
///
KTextEdit* k_textedit_new3();

/// k_textedit_new4 constructs a new KTextEdit object.
///
/// @param text const char*
/// @param parent QWidget*
KTextEdit* k_textedit_new4(const char* text, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEdit*
const QMetaObject* k_textedit_meta_object(void* self);

/// @param self KTextEdit*
/// @param param1 const char*
void* k_textedit_metacast(void* self, const char* param1);

/// @param self KTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_textedit_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback int32_t func(KTextEdit* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_textedit_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEdit*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_textedit_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_textedit_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// @param self KTextEdit*
/// @param readOnly bool
void k_textedit_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, bool readOnly)
void k_textedit_on_set_read_only(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/ktextedit.html#setReadOnly)
///
/// Base class method implementation
///
/// @param self KTextEdit*
/// @param readOnly bool
void k_textedit_qbase_set_read_only(void* self, bool readOnly);

/// [Qt documentation](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// @param self KTextEdit*
/// @param check bool
void k_textedit_set_check_spelling_enabled(void* self, bool check);

/// [Qt documentation](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, bool check)
void k_textedit_on_set_check_spelling_enabled(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/ktextedit.html#setCheckSpellingEnabled)
///
/// Base class method implementation
///
/// @param self KTextEdit*
/// @param check bool
void k_textedit_qbase_set_check_spelling_enabled(void* self, bool check);

/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// @param self KTextEdit*
bool k_textedit_check_spelling_enabled(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback bool func()
void k_textedit_on_check_spelling_enabled(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingEnabled)
///
/// Base class method implementation
///
/// @param self KTextEdit*
bool k_textedit_qbase_check_spelling_enabled(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// @param self KTextEdit*
/// @param block const char*
bool k_textedit_should_block_be_spell_checked(void* self, const char* block);

/// [Qt documentation](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, const char* block)
void k_textedit_on_should_block_be_spell_checked(void* self, bool (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#shouldBlockBeSpellChecked)
///
/// Base class method implementation
///
/// @param self KTextEdit*
/// @param block const char*
bool k_textedit_qbase_should_block_be_spell_checked(void* self, const char* block);

/// [Qt documentation](https://api.kde.org/ktextedit.html#highlightWord)
///
/// @param self KTextEdit*
/// @param length int
/// @param pos int
void k_textedit_highlight_word(void* self, int length, int pos);

/// [Qt documentation](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// @param self KTextEdit*
void k_textedit_create_highlighter(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_create_highlighter(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#createHighlighter)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_create_highlighter(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#highlighter)
///
/// @param self KTextEdit*
Sonnet__Highlighter* k_textedit_highlighter(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#setHighlighter)
///
/// @param self KTextEdit*
/// @param _highLighter Sonnet__Highlighter*
void k_textedit_set_highlighter(void* self, void* _highLighter);

/// [Qt documentation](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// @param self KTextEdit*
QMenu* k_textedit_mouse_popup_menu(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback QMenu* func()
void k_textedit_on_mouse_popup_menu(void* self, QMenu* (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#mousePopupMenu)
///
/// Base class method implementation
///
/// @param self KTextEdit*
QMenu* k_textedit_qbase_mouse_popup_menu(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#enableFindReplace)
///
/// @param self KTextEdit*
/// @param enabled bool
void k_textedit_enable_find_replace(void* self, bool enabled);

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingLanguage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_spell_checking_language(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#showTabAction)
///
/// @param self KTextEdit*
/// @param show bool
void k_textedit_show_tab_action(void* self, bool show);

/// [Qt documentation](https://api.kde.org/ktextedit.html#showAutoCorrectButton)
///
/// @param self KTextEdit*
/// @param show bool
void k_textedit_show_auto_correct_button(void* self, bool show);

/// [Qt documentation](https://api.kde.org/ktextedit.html#forceSpellChecking)
///
/// @param self KTextEdit*
void k_textedit_force_spell_checking(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingChanged)
///
/// @param self KTextEdit*
/// @param param1 bool
void k_textedit_check_spelling_changed(void* self, bool param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpellingChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, bool param1)
void k_textedit_on_check_spelling_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckStatus)
///
/// @param self KTextEdit*
/// @param param1 const char*
void k_textedit_spell_check_status(void* self, const char* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckStatus)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, const char* param1)
void k_textedit_on_spell_check_status(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#languageChanged)
///
/// @param self KTextEdit*
/// @param language const char*
void k_textedit_language_changed(void* self, const char* language);

/// [Qt documentation](https://api.kde.org/ktextedit.html#languageChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, const char* language)
void k_textedit_on_language_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
///
/// @param self KTextEdit*
/// @param menu QMenu*
void k_textedit_about_to_show_context_menu(void* self, void* menu);

/// [Qt documentation](https://api.kde.org/ktextedit.html#aboutToShowContextMenu)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMenu* menu)
void k_textedit_on_about_to_show_context_menu(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
///
/// @param self KTextEdit*
/// @param currentWord const char*
/// @param autoCorrectWord const char*
void k_textedit_spell_checker_auto_correct(void* self, const char* currentWord, const char* autoCorrectWord);

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckerAutoCorrect)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, const char* currentWord, const char* autoCorrectWord)
void k_textedit_on_spell_checker_auto_correct(void* self, void (*callback)(void*, const char*, const char*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingFinished)
///
/// @param self KTextEdit*
void k_textedit_spell_checking_finished(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingFinished)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self)
void k_textedit_on_spell_checking_finished(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
///
/// @param self KTextEdit*
void k_textedit_spell_checking_canceled(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#spellCheckingCanceled)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self)
void k_textedit_on_spell_checking_canceled(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#setSpellCheckingLanguage)
///
/// @param self KTextEdit*
/// @param language const char*
void k_textedit_set_spell_checking_language(void* self, const char* language);

/// [Qt documentation](https://api.kde.org/ktextedit.html#checkSpelling)
///
/// @param self KTextEdit*
void k_textedit_check_spelling(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
///
/// @param self KTextEdit*
void k_textedit_show_spell_config_dialog(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#replace)
///
/// @param self KTextEdit*
void k_textedit_replace(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#addTextDecorator)
///
/// @param self KTextEdit*
/// @param decorator Sonnet__SpellCheckDecorator*
void k_textedit_add_text_decorator(void* self, void* decorator);

/// [Qt documentation](https://api.kde.org/ktextedit.html#clearDecorator)
///
/// @param self KTextEdit*
void k_textedit_clear_decorator(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// @param self KTextEdit*
void k_textedit_slot_do_replace(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_do_replace(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoReplace)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_do_replace(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// @param self KTextEdit*
void k_textedit_slot_replace_next(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_replace_next(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplaceNext)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_replace_next(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// @param self KTextEdit*
void k_textedit_slot_do_find(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_do_find(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotDoFind)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_do_find(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFind)
///
/// @param self KTextEdit*
void k_textedit_slot_find(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFind)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_find(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFind)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_find(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// @param self KTextEdit*
void k_textedit_slot_find_next(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_find_next(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindNext)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_find_next(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// @param self KTextEdit*
void k_textedit_slot_find_previous(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_find_previous(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotFindPrevious)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_find_previous(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplace)
///
/// @param self KTextEdit*
void k_textedit_slot_replace(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_replace(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotReplace)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_replace(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// @param self KTextEdit*
void k_textedit_slot_speak_text(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_slot_speak_text(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#slotSpeakText)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_slot_speak_text(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#event)
///
/// @param self KTextEdit*
/// @param param1 QEvent*
bool k_textedit_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, QEvent* param1)
void k_textedit_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#event)
///
/// Base class method implementation
///
/// @param self KTextEdit*
/// @param param1 QEvent*
bool k_textedit_qbase_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#keyPressEvent)
///
/// @param self KTextEdit*
/// @param param1 QKeyEvent*
void k_textedit_key_press_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QKeyEvent* param1)
void k_textedit_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self KTextEdit*
/// @param param1 QKeyEvent*
void k_textedit_qbase_key_press_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// @param self KTextEdit*
/// @param param1 QFocusEvent*
void k_textedit_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QFocusEvent* param1)
void k_textedit_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self KTextEdit*
/// @param param1 QFocusEvent*
void k_textedit_qbase_focus_in_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// @param self KTextEdit*
void k_textedit_delete_word_back(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_delete_word_back(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordBack)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_delete_word_back(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// @param self KTextEdit*
void k_textedit_delete_word_forward(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_delete_word_forward(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/ktextedit.html#deleteWordForward)
///
/// Base class method implementation
///
/// @param self KTextEdit*
void k_textedit_qbase_delete_word_forward(void* self);

/// [Qt documentation](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// @param self KTextEdit*
/// @param param1 QContextMenuEvent*
void k_textedit_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QContextMenuEvent* param1)
void k_textedit_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self KTextEdit*
/// @param param1 QContextMenuEvent*
void k_textedit_qbase_context_menu_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_textedit_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_textedit_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/ktextedit.html#showSpellConfigDialog)
///
/// @param self KTextEdit*
/// @param windowIcon const char*
void k_textedit_show_spell_config_dialog1(void* self, const char* windowIcon);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
///
/// @param self KTextEdit*
/// @param document QTextDocument*
void k_textedit_set_document(void* self, void* document);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#document)
///
/// @param self KTextEdit*
QTextDocument* k_textedit_document(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
///
/// @param self KTextEdit*
/// @param placeholderText const char*
void k_textedit_set_placeholder_text(void* self, const char* placeholderText);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_placeholder_text(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
///
/// @param self KTextEdit*
/// @param cursor QTextCursor*
void k_textedit_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
///
/// @param self KTextEdit*
QTextCursor* k_textedit_text_cursor(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
///
/// @param self KTextEdit*
bool k_textedit_is_read_only(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
///
/// @param self KTextEdit*
/// @param flags flag of enum Qt__TextInteractionFlag
void k_textedit_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
///
/// @param self KTextEdit*
///
/// @return flag of enum Qt__TextInteractionFlag
int32_t k_textedit_text_interaction_flags(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
///
/// @param self KTextEdit*
double k_textedit_font_point_size(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_font_family(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
///
/// @param self KTextEdit*
int32_t k_textedit_font_weight(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
///
/// @param self KTextEdit*
bool k_textedit_font_underline(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
///
/// @param self KTextEdit*
bool k_textedit_font_italic(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textColor)
///
/// @param self KTextEdit*
QColor* k_textedit_text_color(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
///
/// @param self KTextEdit*
QColor* k_textedit_text_background_color(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
///
/// @param self KTextEdit*
QFont* k_textedit_current_font(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#alignment)
///
/// @param self KTextEdit*
///
/// @return flag of enum Qt__AlignmentFlag
int32_t k_textedit_alignment(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
///
/// @param self KTextEdit*
/// @param modifier QTextCharFormat*
void k_textedit_merge_current_char_format(void* self, void* modifier);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
///
/// @param self KTextEdit*
/// @param format QTextCharFormat*
void k_textedit_set_current_char_format(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
///
/// @param self KTextEdit*
QTextCharFormat* k_textedit_current_char_format(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
///
/// @param self KTextEdit*
///
/// @return flag of enum QTextEdit__AutoFormattingFlag
int64_t k_textedit_auto_formatting(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
///
/// @param self KTextEdit*
/// @param features flag of enum QTextEdit__AutoFormattingFlag
void k_textedit_set_auto_formatting(void* self, int64_t features);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
///
/// @param self KTextEdit*
bool k_textedit_tab_changes_focus(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
///
/// @param self KTextEdit*
/// @param b bool
void k_textedit_set_tab_changes_focus(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
///
/// @param self KTextEdit*
/// @param title const char*
void k_textedit_set_document_title(void* self, const char* title);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_document_title(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
///
/// @param self KTextEdit*
bool k_textedit_is_undo_redo_enabled(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
///
/// @param self KTextEdit*
/// @param enable bool
void k_textedit_set_undo_redo_enabled(void* self, bool enable);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
///
/// @param self KTextEdit*
///
/// @return enum QTextEdit__LineWrapMode
int32_t k_textedit_line_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
///
/// @param self KTextEdit*
/// @param mode enum QTextEdit__LineWrapMode
void k_textedit_set_line_wrap_mode(void* self, int32_t mode);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
///
/// @param self KTextEdit*
int32_t k_textedit_line_wrap_column_or_width(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
///
/// @param self KTextEdit*
/// @param w int
void k_textedit_set_line_wrap_column_or_width(void* self, int w);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
///
/// @param self KTextEdit*
///
/// @return enum QTextOption__WrapMode
int32_t k_textedit_word_wrap_mode(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
///
/// @param self KTextEdit*
/// @param policy enum QTextOption__WrapMode
void k_textedit_set_word_wrap_mode(void* self, int32_t policy);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KTextEdit*
/// @param exp const char*
bool k_textedit_find(void* self, const char* exp);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KTextEdit*
/// @param exp QRegularExpression*
bool k_textedit_find2(void* self, void* exp);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_to_plain_text(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_to_html(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_to_markdown(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
///
/// @param self KTextEdit*
void k_textedit_ensure_cursor_visible(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self KTextEdit*
QMenu* k_textedit_create_standard_context_menu(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
///
/// @param self KTextEdit*
/// @param position QPoint*
QMenu* k_textedit_create_standard_context_menu2(void* self, void* position);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
///
/// @param self KTextEdit*
/// @param pos QPoint*
QTextCursor* k_textedit_cursor_for_position(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self KTextEdit*
/// @param cursor QTextCursor*
QRect* k_textedit_cursor_rect(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
///
/// @param self KTextEdit*
QRect* k_textedit_cursor_rect2(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
/// @param pos QPoint*
const char* k_textedit_anchor_at(void* self, void* pos);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
///
/// @param self KTextEdit*
bool k_textedit_overwrite_mode(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
///
/// @param self KTextEdit*
/// @param overwrite bool
void k_textedit_set_overwrite_mode(void* self, bool overwrite);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
///
/// @param self KTextEdit*
double k_textedit_tab_stop_distance(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
///
/// @param self KTextEdit*
/// @param distance double
void k_textedit_set_tab_stop_distance(void* self, double distance);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
///
/// @param self KTextEdit*
int32_t k_textedit_cursor_width(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
///
/// @param self KTextEdit*
/// @param width int
void k_textedit_set_cursor_width(void* self, int width);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
///
/// @param self KTextEdit*
bool k_textedit_accept_rich_text(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
///
/// @param self KTextEdit*
/// @param accept bool
void k_textedit_set_accept_rich_text(void* self, bool accept);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
///
/// @param self KTextEdit*
/// @param selections libqt_list /* of QTextEdit__ExtraSelection* */
void k_textedit_set_extra_selections(void* self, libqt_list selections);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
///
/// @param self KTextEdit*
libqt_list /* of QTextEdit__ExtraSelection* */ k_textedit_extra_selections(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self KTextEdit*
/// @param operation enum QTextCursor__MoveOperation
void k_textedit_move_cursor(void* self, int32_t operation);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
///
/// @param self KTextEdit*
bool k_textedit_can_paste(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#print)
///
/// @param self KTextEdit*
/// @param printer QPagedPaintDevice*
void k_textedit_print(void* self, void* printer);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// @param self KTextEdit*
/// @param query enum Qt__InputMethodQuery
/// @param argument QVariant*
QVariant* k_textedit_input_method_query2(void* self, int64_t query, void* argument);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
///
/// @param self KTextEdit*
/// @param s double
void k_textedit_set_font_point_size(void* self, double s);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
///
/// @param self KTextEdit*
/// @param fontFamily const char*
void k_textedit_set_font_family(void* self, const char* fontFamily);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
///
/// @param self KTextEdit*
/// @param w int
void k_textedit_set_font_weight(void* self, int w);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
///
/// @param self KTextEdit*
/// @param b bool
void k_textedit_set_font_underline(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
///
/// @param self KTextEdit*
/// @param b bool
void k_textedit_set_font_italic(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
///
/// @param self KTextEdit*
/// @param c QColor*
void k_textedit_set_text_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
///
/// @param self KTextEdit*
/// @param c QColor*
void k_textedit_set_text_background_color(void* self, void* c);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
///
/// @param self KTextEdit*
/// @param f QFont*
void k_textedit_set_current_font(void* self, void* f);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
///
/// @param self KTextEdit*
/// @param a flag of enum Qt__AlignmentFlag
void k_textedit_set_alignment(void* self, int32_t a);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
///
/// @param self KTextEdit*
/// @param text const char*
void k_textedit_set_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
///
/// @param self KTextEdit*
/// @param text const char*
void k_textedit_set_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
///
/// @param self KTextEdit*
/// @param markdown const char*
void k_textedit_set_markdown(void* self, const char* markdown);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#setText)
///
/// @param self KTextEdit*
/// @param text const char*
void k_textedit_set_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cut)
///
/// @param self KTextEdit*
void k_textedit_cut(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copy)
///
/// @param self KTextEdit*
void k_textedit_copy(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paste)
///
/// @param self KTextEdit*
void k_textedit_paste(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undo)
///
/// @param self KTextEdit*
void k_textedit_undo(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redo)
///
/// @param self KTextEdit*
void k_textedit_redo(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#clear)
///
/// @param self KTextEdit*
void k_textedit_clear(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
///
/// @param self KTextEdit*
void k_textedit_select_all(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
///
/// @param self KTextEdit*
/// @param text const char*
void k_textedit_insert_plain_text(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
///
/// @param self KTextEdit*
/// @param text const char*
void k_textedit_insert_html(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#append)
///
/// @param self KTextEdit*
/// @param text const char*
void k_textedit_append(void* self, const char* text);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
///
/// @param self KTextEdit*
/// @param name const char*
void k_textedit_scroll_to_anchor(void* self, const char* name);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self KTextEdit*
void k_textedit_zoom_in(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self KTextEdit*
void k_textedit_zoom_out(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self KTextEdit*
void k_textedit_text_changed(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self)
void k_textedit_on_text_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self KTextEdit*
/// @param b bool
void k_textedit_undo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, bool b)
void k_textedit_on_undo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self KTextEdit*
/// @param b bool
void k_textedit_redo_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, bool b)
void k_textedit_on_redo_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self KTextEdit*
/// @param format QTextCharFormat*
void k_textedit_current_char_format_changed(void* self, void* format);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QTextCharFormat* format)
void k_textedit_on_current_char_format_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self KTextEdit*
/// @param b bool
void k_textedit_copy_available(void* self, bool b);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, bool b)
void k_textedit_on_copy_available(void* self, void (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self KTextEdit*
void k_textedit_selection_changed(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self)
void k_textedit_on_selection_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self KTextEdit*
void k_textedit_cursor_position_changed(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self)
void k_textedit_on_cursor_position_changed(void* self, void (*callback)(void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KTextEdit*
/// @param exp const char*
/// @param options flag of enum QTextDocument__FindFlag
bool k_textedit_find22(void* self, const char* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#find)
///
/// @param self KTextEdit*
/// @param exp QRegularExpression*
/// @param options flag of enum QTextDocument__FindFlag
bool k_textedit_find23(void* self, void* exp, int32_t options);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
/// @param features flag of enum QTextDocument__MarkdownFeature
const char* k_textedit_to_markdown1(void* self, int32_t features);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
///
/// @param self KTextEdit*
/// @param operation enum QTextCursor__MoveOperation
/// @param mode enum QTextCursor__MoveMode
void k_textedit_move_cursor2(void* self, int32_t operation, int32_t mode);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
///
/// @param self KTextEdit*
/// @param range int
void k_textedit_zoom_in1(void* self, int range);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
///
/// @param self KTextEdit*
/// @param range int
void k_textedit_zoom_out1(void* self, int range);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self KTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_textedit_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self KTextEdit*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_textedit_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self KTextEdit*
QScrollBar* k_textedit_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self KTextEdit*
/// @param scrollbar QScrollBar*
void k_textedit_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self KTextEdit*
///
/// @return enum Qt__ScrollBarPolicy
int32_t k_textedit_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self KTextEdit*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void k_textedit_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self KTextEdit*
QScrollBar* k_textedit_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self KTextEdit*
/// @param scrollbar QScrollBar*
void k_textedit_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self KTextEdit*
QWidget* k_textedit_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self KTextEdit*
/// @param widget QWidget*
void k_textedit_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self KTextEdit*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void k_textedit_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self KTextEdit*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ k_textedit_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self KTextEdit*
QWidget* k_textedit_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self KTextEdit*
/// @param widget QWidget*
void k_textedit_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self KTextEdit*
QSize* k_textedit_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self KTextEdit*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t k_textedit_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self KTextEdit*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void k_textedit_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KTextEdit*
int32_t k_textedit_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KTextEdit*
/// @param frameStyle int
void k_textedit_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KTextEdit*
int32_t k_textedit_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KTextEdit*
///
/// @return enum QFrame__Shape
int32_t k_textedit_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KTextEdit*
/// @param frameShape enum QFrame__Shape
void k_textedit_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KTextEdit*
///
/// @return enum QFrame__Shadow
int32_t k_textedit_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KTextEdit*
/// @param frameShadow enum QFrame__Shadow
void k_textedit_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KTextEdit*
int32_t k_textedit_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KTextEdit*
/// @param lineWidth int
void k_textedit_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KTextEdit*
int32_t k_textedit_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KTextEdit*
/// @param midLineWidth int
void k_textedit_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KTextEdit*
QRect* k_textedit_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KTextEdit*
/// @param frameRect QRect*
void k_textedit_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KTextEdit*
uintptr_t k_textedit_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KTextEdit*
void k_textedit_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KTextEdit*
uintptr_t k_textedit_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KTextEdit*
uintptr_t k_textedit_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KTextEdit*
QStyle* k_textedit_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KTextEdit*
/// @param style QStyle*
void k_textedit_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KTextEdit*
bool k_textedit_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KTextEdit*
bool k_textedit_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KTextEdit*
bool k_textedit_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KTextEdit*
///
/// @return enum Qt__WindowModality
int32_t k_textedit_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KTextEdit*
/// @param windowModality enum Qt__WindowModality
void k_textedit_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KTextEdit*
bool k_textedit_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KTextEdit*
/// @param param1 QWidget*
bool k_textedit_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KTextEdit*
/// @param enabled bool
void k_textedit_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KTextEdit*
/// @param disabled bool
void k_textedit_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KTextEdit*
/// @param windowModified bool
void k_textedit_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KTextEdit*
QRect* k_textedit_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KTextEdit*
const QRect* k_textedit_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KTextEdit*
QRect* k_textedit_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KTextEdit*
int32_t k_textedit_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KTextEdit*
int32_t k_textedit_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KTextEdit*
QPoint* k_textedit_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KTextEdit*
QSize* k_textedit_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KTextEdit*
QSize* k_textedit_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KTextEdit*
int32_t k_textedit_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KTextEdit*
int32_t k_textedit_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KTextEdit*
QRect* k_textedit_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KTextEdit*
QRect* k_textedit_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KTextEdit*
QRegion* k_textedit_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KTextEdit*
QSize* k_textedit_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KTextEdit*
QSize* k_textedit_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KTextEdit*
int32_t k_textedit_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KTextEdit*
int32_t k_textedit_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KTextEdit*
int32_t k_textedit_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KTextEdit*
int32_t k_textedit_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTextEdit*
/// @param minimumSize QSize*
void k_textedit_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KTextEdit*
/// @param minw int
/// @param minh int
void k_textedit_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTextEdit*
/// @param maximumSize QSize*
void k_textedit_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KTextEdit*
/// @param maxw int
/// @param maxh int
void k_textedit_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KTextEdit*
/// @param minw int
void k_textedit_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KTextEdit*
/// @param minh int
void k_textedit_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KTextEdit*
/// @param maxw int
void k_textedit_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KTextEdit*
/// @param maxh int
void k_textedit_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KTextEdit*
QSize* k_textedit_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTextEdit*
/// @param sizeIncrement QSize*
void k_textedit_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KTextEdit*
/// @param w int
/// @param h int
void k_textedit_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KTextEdit*
QSize* k_textedit_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTextEdit*
/// @param baseSize QSize*
void k_textedit_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KTextEdit*
/// @param basew int
/// @param baseh int
void k_textedit_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTextEdit*
/// @param fixedSize QSize*
void k_textedit_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KTextEdit*
/// @param w int
/// @param h int
void k_textedit_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KTextEdit*
/// @param w int
void k_textedit_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KTextEdit*
/// @param h int
void k_textedit_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTextEdit*
/// @param param1 QPointF*
QPointF* k_textedit_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KTextEdit*
/// @param param1 QPoint*
QPoint* k_textedit_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTextEdit*
/// @param param1 QPointF*
QPointF* k_textedit_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KTextEdit*
/// @param param1 QPoint*
QPoint* k_textedit_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTextEdit*
/// @param param1 QPointF*
QPointF* k_textedit_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KTextEdit*
/// @param param1 QPoint*
QPoint* k_textedit_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTextEdit*
/// @param param1 QPointF*
QPointF* k_textedit_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KTextEdit*
/// @param param1 QPoint*
QPoint* k_textedit_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_textedit_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_textedit_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTextEdit*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_textedit_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KTextEdit*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_textedit_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KTextEdit*
QWidget* k_textedit_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KTextEdit*
QWidget* k_textedit_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KTextEdit*
QWidget* k_textedit_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KTextEdit*
const QPalette* k_textedit_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KTextEdit*
/// @param palette QPalette*
void k_textedit_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KTextEdit*
/// @param backgroundRole enum QPalette__ColorRole
void k_textedit_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KTextEdit*
///
/// @return enum QPalette__ColorRole
int32_t k_textedit_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KTextEdit*
/// @param foregroundRole enum QPalette__ColorRole
void k_textedit_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KTextEdit*
///
/// @return enum QPalette__ColorRole
int32_t k_textedit_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KTextEdit*
const QFont* k_textedit_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KTextEdit*
/// @param font QFont*
void k_textedit_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KTextEdit*
QFontMetrics* k_textedit_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KTextEdit*
QFontInfo* k_textedit_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KTextEdit*
QCursor* k_textedit_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KTextEdit*
/// @param cursor QCursor*
void k_textedit_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KTextEdit*
void k_textedit_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KTextEdit*
/// @param enable bool
void k_textedit_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KTextEdit*
bool k_textedit_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KTextEdit*
bool k_textedit_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KTextEdit*
/// @param enable bool
void k_textedit_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KTextEdit*
bool k_textedit_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTextEdit*
/// @param mask QBitmap*
void k_textedit_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KTextEdit*
/// @param mask QRegion*
void k_textedit_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KTextEdit*
QRegion* k_textedit_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KTextEdit*
void k_textedit_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param target QPaintDevice*
void k_textedit_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param painter QPainter*
void k_textedit_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTextEdit*
QPixmap* k_textedit_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KTextEdit*
QGraphicsEffect* k_textedit_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KTextEdit*
/// @param effect QGraphicsEffect*
void k_textedit_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTextEdit*
/// @param type enum Qt__GestureType
void k_textedit_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KTextEdit*
/// @param type enum Qt__GestureType
void k_textedit_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KTextEdit*
/// @param windowTitle const char*
void k_textedit_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KTextEdit*
/// @param styleSheet const char*
void k_textedit_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KTextEdit*
/// @param icon QIcon*
void k_textedit_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KTextEdit*
QIcon* k_textedit_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KTextEdit*
/// @param windowIconText const char*
void k_textedit_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KTextEdit*
/// @param windowRole const char*
void k_textedit_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KTextEdit*
/// @param filePath const char*
void k_textedit_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KTextEdit*
/// @param level double
void k_textedit_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KTextEdit*
double k_textedit_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KTextEdit*
bool k_textedit_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KTextEdit*
/// @param toolTip const char*
void k_textedit_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KTextEdit*
/// @param msec int
void k_textedit_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KTextEdit*
int32_t k_textedit_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KTextEdit*
/// @param statusTip const char*
void k_textedit_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KTextEdit*
/// @param whatsThis const char*
void k_textedit_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KTextEdit*
/// @param name const char*
void k_textedit_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KTextEdit*
/// @param description const char*
void k_textedit_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KTextEdit*
/// @param direction enum Qt__LayoutDirection
void k_textedit_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KTextEdit*
///
/// @return enum Qt__LayoutDirection
int32_t k_textedit_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KTextEdit*
void k_textedit_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KTextEdit*
/// @param locale QLocale*
void k_textedit_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KTextEdit*
QLocale* k_textedit_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KTextEdit*
void k_textedit_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KTextEdit*
bool k_textedit_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KTextEdit*
bool k_textedit_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTextEdit*
void k_textedit_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KTextEdit*
bool k_textedit_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KTextEdit*
void k_textedit_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KTextEdit*
void k_textedit_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KTextEdit*
/// @param reason enum Qt__FocusReason
void k_textedit_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KTextEdit*
///
/// @return enum Qt__FocusPolicy
int32_t k_textedit_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KTextEdit*
/// @param policy enum Qt__FocusPolicy
void k_textedit_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KTextEdit*
bool k_textedit_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_textedit_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KTextEdit*
/// @param focusProxy QWidget*
void k_textedit_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KTextEdit*
QWidget* k_textedit_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KTextEdit*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_textedit_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KTextEdit*
/// @param policy enum Qt__ContextMenuPolicy
void k_textedit_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTextEdit*
void k_textedit_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KTextEdit*
/// @param param1 QCursor*
void k_textedit_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KTextEdit*
void k_textedit_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KTextEdit*
void k_textedit_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KTextEdit*
void k_textedit_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTextEdit*
/// @param key QKeySequence*
int32_t k_textedit_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KTextEdit*
/// @param id int
void k_textedit_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTextEdit*
/// @param id int
void k_textedit_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTextEdit*
/// @param id int
void k_textedit_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_textedit_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_textedit_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KTextEdit*
bool k_textedit_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KTextEdit*
/// @param enable bool
void k_textedit_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KTextEdit*
QGraphicsProxyWidget* k_textedit_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEdit*
void k_textedit_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEdit*
void k_textedit_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_textedit_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEdit*
/// @param param1 QRect*
void k_textedit_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KTextEdit*
/// @param param1 QRegion*
void k_textedit_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_textedit_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEdit*
/// @param param1 QRect*
void k_textedit_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KTextEdit*
/// @param param1 QRegion*
void k_textedit_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KTextEdit*
/// @param hidden bool
void k_textedit_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KTextEdit*
void k_textedit_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KTextEdit*
void k_textedit_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KTextEdit*
void k_textedit_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KTextEdit*
void k_textedit_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KTextEdit*
void k_textedit_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KTextEdit*
void k_textedit_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KTextEdit*
bool k_textedit_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KTextEdit*
void k_textedit_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KTextEdit*
void k_textedit_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KTextEdit*
/// @param param1 QWidget*
void k_textedit_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTextEdit*
/// @param x int
/// @param y int
void k_textedit_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KTextEdit*
/// @param param1 QPoint*
void k_textedit_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTextEdit*
/// @param w int
/// @param h int
void k_textedit_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KTextEdit*
/// @param param1 QSize*
void k_textedit_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTextEdit*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_textedit_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KTextEdit*
/// @param geometry QRect*
void k_textedit_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
char* k_textedit_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KTextEdit*
/// @param geometry const char*
bool k_textedit_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KTextEdit*
void k_textedit_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KTextEdit*
bool k_textedit_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KTextEdit*
/// @param param1 QWidget*
bool k_textedit_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KTextEdit*
bool k_textedit_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KTextEdit*
bool k_textedit_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KTextEdit*
bool k_textedit_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KTextEdit*
bool k_textedit_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KTextEdit*
///
/// @return flag of enum Qt__WindowState
int32_t k_textedit_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KTextEdit*
/// @param state flag of enum Qt__WindowState
void k_textedit_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KTextEdit*
/// @param state flag of enum Qt__WindowState
void k_textedit_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KTextEdit*
QSizePolicy* k_textedit_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTextEdit*
/// @param sizePolicy QSizePolicy*
void k_textedit_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KTextEdit*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_textedit_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KTextEdit*
QRegion* k_textedit_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_textedit_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KTextEdit*
/// @param margins QMargins*
void k_textedit_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KTextEdit*
QMargins* k_textedit_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KTextEdit*
QRect* k_textedit_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KTextEdit*
QLayout* k_textedit_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KTextEdit*
/// @param layout QLayout*
void k_textedit_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KTextEdit*
void k_textedit_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTextEdit*
/// @param parent QWidget*
void k_textedit_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KTextEdit*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_textedit_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTextEdit*
/// @param dx int
/// @param dy int
void k_textedit_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KTextEdit*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_textedit_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KTextEdit*
QWidget* k_textedit_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KTextEdit*
QWidget* k_textedit_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KTextEdit*
QWidget* k_textedit_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KTextEdit*
bool k_textedit_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KTextEdit*
/// @param on bool
void k_textedit_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEdit*
/// @param action QAction*
void k_textedit_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KTextEdit*
/// @param actions libqt_list /* of QAction* */
void k_textedit_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KTextEdit*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_textedit_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KTextEdit*
/// @param before QAction*
/// @param action QAction*
void k_textedit_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KTextEdit*
/// @param action QAction*
void k_textedit_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KTextEdit*
libqt_list /* of QAction* */ k_textedit_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEdit*
/// @param text const char*
QAction* k_textedit_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEdit*
/// @param icon QIcon*
/// @param text const char*
QAction* k_textedit_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEdit*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_textedit_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KTextEdit*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_textedit_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KTextEdit*
QWidget* k_textedit_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KTextEdit*
/// @param type flag of enum Qt__WindowType
void k_textedit_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KTextEdit*
///
/// @return flag of enum Qt__WindowType
int64_t k_textedit_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTextEdit*
/// @param param1 enum Qt__WindowType
void k_textedit_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KTextEdit*
/// @param type flag of enum Qt__WindowType
void k_textedit_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KTextEdit*
///
/// @return enum Qt__WindowType
int64_t k_textedit_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEdit*
/// @param x int
/// @param y int
QWidget* k_textedit_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEdit*
/// @param p QPoint*
QWidget* k_textedit_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KTextEdit*
/// @param p QPointF*
QWidget* k_textedit_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTextEdit*
/// @param param1 enum Qt__WidgetAttribute
void k_textedit_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KTextEdit*
/// @param param1 enum Qt__WidgetAttribute
bool k_textedit_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KTextEdit*
void k_textedit_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KTextEdit*
/// @param child QWidget*
bool k_textedit_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KTextEdit*
bool k_textedit_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KTextEdit*
/// @param enabled bool
void k_textedit_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KTextEdit*
QBackingStore* k_textedit_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KTextEdit*
QWindow* k_textedit_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KTextEdit*
QScreen* k_textedit_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KTextEdit*
/// @param screen QScreen*
void k_textedit_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_textedit_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTextEdit*
/// @param title const char*
void k_textedit_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, const char* title)
void k_textedit_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTextEdit*
/// @param icon QIcon*
void k_textedit_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QIcon* icon)
void k_textedit_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTextEdit*
/// @param iconText const char*
void k_textedit_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, const char* iconText)
void k_textedit_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTextEdit*
/// @param pos QPoint*
void k_textedit_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QPoint* pos)
void k_textedit_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KTextEdit*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_textedit_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KTextEdit*
/// @param hints flag of enum Qt__InputMethodHint
void k_textedit_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_textedit_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_textedit_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_textedit_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_textedit_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_textedit_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KTextEdit*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_textedit_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KTextEdit*
/// @param rectangle QRect*
QPixmap* k_textedit_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KTextEdit*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_textedit_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KTextEdit*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_textedit_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KTextEdit*
/// @param id int
/// @param enable bool
void k_textedit_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KTextEdit*
/// @param id int
/// @param enable bool
void k_textedit_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KTextEdit*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_textedit_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KTextEdit*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_textedit_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_textedit_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_textedit_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char* k_textedit_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEdit*
/// @param name char*
void k_textedit_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEdit*
bool k_textedit_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEdit*
bool k_textedit_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEdit*
bool k_textedit_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEdit*
bool k_textedit_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEdit*
/// @param b bool
bool k_textedit_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEdit*
QThread* k_textedit_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEdit*
/// @param thread QThread*
bool k_textedit_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEdit*
/// @param interval int
int32_t k_textedit_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEdit*
/// @param id int
void k_textedit_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEdit*
/// @param id enum Qt__TimerId
void k_textedit_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEdit*
libqt_list /* of QObject* */ k_textedit_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEdit*
/// @param filterObj QObject*
void k_textedit_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEdit*
/// @param obj QObject*
void k_textedit_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_textedit_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_textedit_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_textedit_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_textedit_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEdit*
void k_textedit_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEdit*
void k_textedit_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEdit*
/// @param name const char*
/// @param value QVariant*
bool k_textedit_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEdit*
/// @param name const char*
QVariant* k_textedit_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEdit*
const char** k_textedit_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEdit*
QBindingStorage* k_textedit_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEdit*
const QBindingStorage* k_textedit_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEdit*
void k_textedit_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self)
void k_textedit_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEdit*
QObject* k_textedit_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEdit*
/// @param classname const char*
bool k_textedit_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEdit*
void k_textedit_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEdit*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_textedit_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEdit*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_textedit_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_textedit_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEdit*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_textedit_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEdit*
/// @param param1 QObject*
void k_textedit_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QObject* param1)
void k_textedit_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KTextEdit*
bool k_textedit_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KTextEdit*
int32_t k_textedit_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KTextEdit*
int32_t k_textedit_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KTextEdit*
int32_t k_textedit_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KTextEdit*
int32_t k_textedit_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KTextEdit*
int32_t k_textedit_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KTextEdit*
int32_t k_textedit_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KTextEdit*
double k_textedit_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KTextEdit*
double k_textedit_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KTextEdit*
int32_t k_textedit_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KTextEdit*
int32_t k_textedit_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_textedit_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_textedit_encode_metric_f(int32_t metric, double value);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param type int
/// @param name QUrl*
QVariant* k_textedit_load_resource(void* self, int type, void* name);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param type int
/// @param name QUrl*
QVariant* k_textedit_qbase_load_resource(void* self, int type, void* name);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QVariant* func(KTextEdit* self, int type, QUrl* name)
void k_textedit_on_load_resource(void* self, QVariant* (*callback)(void*, int, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param property enum Qt__InputMethodQuery
QVariant* k_textedit_input_method_query(void* self, int64_t property);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param property enum Qt__InputMethodQuery
QVariant* k_textedit_qbase_input_method_query(void* self, int64_t property);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QVariant* func(KTextEdit* self, enum Qt__InputMethodQuery property)
void k_textedit_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QTimerEvent*
void k_textedit_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QTimerEvent*
void k_textedit_qbase_timer_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QTimerEvent* e)
void k_textedit_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QKeyEvent*
void k_textedit_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QKeyEvent*
void k_textedit_qbase_key_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QKeyEvent* e)
void k_textedit_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QResizeEvent*
void k_textedit_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QResizeEvent*
void k_textedit_qbase_resize_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QResizeEvent* e)
void k_textedit_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QPaintEvent*
void k_textedit_paint_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QPaintEvent*
void k_textedit_qbase_paint_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QPaintEvent* e)
void k_textedit_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_qbase_mouse_press_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMouseEvent* e)
void k_textedit_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMouseEvent* e)
void k_textedit_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_mouse_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMouseEvent* e)
void k_textedit_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QMouseEvent*
void k_textedit_qbase_mouse_double_click_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMouseEvent* e)
void k_textedit_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param next bool
bool k_textedit_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param next bool
bool k_textedit_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, bool next)
void k_textedit_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDragEnterEvent*
void k_textedit_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDragEnterEvent*
void k_textedit_qbase_drag_enter_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QDragEnterEvent* e)
void k_textedit_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDragLeaveEvent*
void k_textedit_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDragLeaveEvent*
void k_textedit_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QDragLeaveEvent* e)
void k_textedit_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDragMoveEvent*
void k_textedit_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDragMoveEvent*
void k_textedit_qbase_drag_move_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QDragMoveEvent* e)
void k_textedit_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDropEvent*
void k_textedit_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QDropEvent*
void k_textedit_qbase_drop_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QDropEvent* e)
void k_textedit_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QFocusEvent*
void k_textedit_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QFocusEvent*
void k_textedit_qbase_focus_out_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QFocusEvent* e)
void k_textedit_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QShowEvent*
void k_textedit_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QShowEvent*
void k_textedit_qbase_show_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QShowEvent* param1)
void k_textedit_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QEvent*
void k_textedit_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QEvent*
void k_textedit_qbase_change_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QEvent* e)
void k_textedit_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param e QWheelEvent*
void k_textedit_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param e QWheelEvent*
void k_textedit_qbase_wheel_event(void* self, void* e);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QWheelEvent* e)
void k_textedit_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QMimeData* k_textedit_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QMimeData* k_textedit_qbase_create_mime_data_from_selection(void* self);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QMimeData* func()
void k_textedit_on_create_mime_data_from_selection(void* self, QMimeData* (*callback)());

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param source QMimeData*
bool k_textedit_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param source QMimeData*
bool k_textedit_qbase_can_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, QMimeData* source)
void k_textedit_on_can_insert_from_mime_data(void* self, bool (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param source QMimeData*
void k_textedit_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param source QMimeData*
void k_textedit_qbase_insert_from_mime_data(void* self, void* source);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMimeData* source)
void k_textedit_on_insert_from_mime_data(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QInputMethodEvent*
void k_textedit_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QInputMethodEvent*
void k_textedit_qbase_input_method_event(void* self, void* param1);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QInputMethodEvent* param1)
void k_textedit_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param dx int
/// @param dy int
void k_textedit_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param dx int
/// @param dy int
void k_textedit_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, int dx, int dy)
void k_textedit_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param cursor QTextCursor*
void k_textedit_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param cursor QTextCursor*
void k_textedit_qbase_do_set_text_cursor(void* self, void* cursor);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QTextCursor* cursor)
void k_textedit_on_do_set_text_cursor(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QSize* k_textedit_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QSize* k_textedit_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QSize* func()
void k_textedit_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QSize* k_textedit_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QSize* k_textedit_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QSize* func()
void k_textedit_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param viewport QWidget*
void k_textedit_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param viewport QWidget*
void k_textedit_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QWidget* viewport)
void k_textedit_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_textedit_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QObject*
/// @param param2 QEvent*
bool k_textedit_qbase_event_filter(void* self, void* param1, void* param2);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, QObject* param1, QEvent* param2)
void k_textedit_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QEvent*
bool k_textedit_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QEvent*
bool k_textedit_qbase_viewport_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, QEvent* param1)
void k_textedit_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QSize* k_textedit_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QSize* k_textedit_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QSize* func()
void k_textedit_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param option QStyleOptionFrame*
void k_textedit_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param option QStyleOptionFrame*
void k_textedit_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QStyleOptionFrame* option)
void k_textedit_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
int32_t k_textedit_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
int32_t k_textedit_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback int32_t func()
void k_textedit_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param visible bool
void k_textedit_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param visible bool
void k_textedit_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, bool visible)
void k_textedit_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 int
int32_t k_textedit_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 int
int32_t k_textedit_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback int32_t func(KTextEdit* self, int param1)
void k_textedit_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
bool k_textedit_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
bool k_textedit_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func()
void k_textedit_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QPaintEngine* k_textedit_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QPaintEngine* k_textedit_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QPaintEngine* func()
void k_textedit_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QEnterEvent*
void k_textedit_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QEnterEvent*
void k_textedit_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QEnterEvent* event)
void k_textedit_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QEvent*
void k_textedit_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QEvent*
void k_textedit_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QEvent* event)
void k_textedit_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QMoveEvent*
void k_textedit_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QMoveEvent*
void k_textedit_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMoveEvent* event)
void k_textedit_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QCloseEvent*
void k_textedit_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QCloseEvent*
void k_textedit_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QCloseEvent* event)
void k_textedit_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QTabletEvent*
void k_textedit_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QTabletEvent*
void k_textedit_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QTabletEvent* event)
void k_textedit_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QActionEvent*
void k_textedit_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QActionEvent*
void k_textedit_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QActionEvent* event)
void k_textedit_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QHideEvent*
void k_textedit_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QHideEvent*
void k_textedit_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QHideEvent* event)
void k_textedit_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_textedit_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_textedit_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, const char* eventType, void* message, intptr_t* result)
void k_textedit_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_textedit_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_textedit_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback int32_t func(KTextEdit* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_textedit_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param painter QPainter*
void k_textedit_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param painter QPainter*
void k_textedit_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QPainter* painter)
void k_textedit_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param offset QPoint*
QPaintDevice* k_textedit_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param offset QPoint*
QPaintDevice* k_textedit_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QPaintDevice* func(KTextEdit* self, QPoint* offset)
void k_textedit_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QPainter* k_textedit_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QPainter* k_textedit_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QPainter* func()
void k_textedit_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QChildEvent*
void k_textedit_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QChildEvent*
void k_textedit_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QChildEvent* event)
void k_textedit_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param event QEvent*
void k_textedit_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param event QEvent*
void k_textedit_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QEvent* event)
void k_textedit_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param signal QMetaMethod*
void k_textedit_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param signal QMetaMethod*
void k_textedit_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMetaMethod* signal)
void k_textedit_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param signal QMetaMethod*
void k_textedit_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param signal QMetaMethod*
void k_textedit_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QMetaMethod* signal)
void k_textedit_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param range float
void k_textedit_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param range float
void k_textedit_qbase_zoom_in_f(void* self, float range);

/// Inherited from QTextEdit
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, float range)
void k_textedit_on_zoom_in_f(void* self, void (*callback)(void*, float));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_textedit_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_textedit_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, int left, int top, int right, int bottom)
void k_textedit_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QMargins* k_textedit_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QMargins* k_textedit_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QMargins* func()
void k_textedit_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QPainter*
void k_textedit_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param param1 QPainter*
void k_textedit_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, QPainter* param1)
void k_textedit_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
void k_textedit_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
void k_textedit_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
void k_textedit_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
void k_textedit_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
void k_textedit_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
void k_textedit_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback void func()
void k_textedit_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
bool k_textedit_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
bool k_textedit_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func()
void k_textedit_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
bool k_textedit_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
bool k_textedit_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func()
void k_textedit_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
QObject* k_textedit_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
QObject* k_textedit_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback QObject* func()
void k_textedit_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
int32_t k_textedit_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
int32_t k_textedit_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback int32_t func()
void k_textedit_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param signal const char*
int32_t k_textedit_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param signal const char*
int32_t k_textedit_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback int32_t func(KTextEdit* self, const char* signal)
void k_textedit_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param signal QMetaMethod*
bool k_textedit_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param signal QMetaMethod*
bool k_textedit_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback bool func(KTextEdit* self, QMetaMethod* signal)
void k_textedit_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_textedit_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEdit*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_textedit_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEdit*
/// @param callback double func(KTextEdit* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_textedit_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEdit*
/// @param callback void func(KTextEdit* self, const char* objectName)
void k_textedit_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ktextedit.html#dtor.KTextEdit)
///
/// Delete this object from C++ memory.
///
/// @param self KTextEdit*
void k_textedit_delete(void* self);

#endif
