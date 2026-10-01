#pragma once
#ifndef RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTSYNTAXSPELLCHECKINGHIGHLIGHTER_H
#define RESTRICTED_EXTRAS_KTEXTADDONS_LIBPLAINTEXTSYNTAXSPELLCHECKINGHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)

/// k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_new constructs a new TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter object.
///
/// @param plainText TextCustomEditor__PlainTextEditor*
///
TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_new(void* plainText);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)

/// k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_new2 constructs a new TextCustomEditor::PlainTextSyntaxSpellCheckingHighlighter object.
///
/// @param plainText TextCustomEditor__PlainTextEditor*
/// @param misspelledColor QColor*
///
TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_new2(void* plainText, const void* misspelledColor);

/// Upcasts to a KSyntaxHighlighting::AbstractHighlighter object
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
KSyntaxHighlighting__AbstractHighlighter* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_as_k_syntax_highlighting___abstract_highlighter(const void* self);

/// Downcasts to a TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter object
///
/// @param _ksyntaxhighlighting__abstracthighlighter KSyntaxHighlighting__AbstractHighlighter*
///
TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_from_k_syntax_highlighting___abstract_highlighter(const void* _ksyntaxhighlighting__abstracthighlighter);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param on bool
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_toggle_spell_highlighting(void* self, bool on);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param def KSyntaxHighlighting__Definition*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_definition(void* self, const void* def);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, KSyntaxHighlighting__Definition* def)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_definition(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param def KSyntaxHighlighting__Definition*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_definition(void* self, const void* def);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param text const char*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlight_block(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* text)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_highlight_block(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param text const char*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_highlight_block(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param start int
/// @param count int
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_unset_misspelled(void* self, int start, int count);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_unset_misspelled(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param start int
/// @param count int
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_unset_misspelled(void* self, int start, int count);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param start int
/// @param count int
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_misspelled(void* self, int start, int count);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_misspelled(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param start int
/// @param count int
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_misspelled(void* self, int start, int count);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param offset int
/// @param length int
/// @param format KSyntaxHighlighting__Format*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_apply_format(void* self, int offset, int length, const void* format);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Allows for overriding the related default method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__Format* format)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_apply_format(void* self, void (*callback)(void*, int, int, const void*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Base class method implementation
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param offset int
/// @param length int
/// @param format KSyntaxHighlighting__Format*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_apply_format(void* self, int offset, int length, const void* format);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_tr(const char* s);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#spellCheckerFound)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_spell_checker_found(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#currentLanguage)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_language(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setActive)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param active bool
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_active(void* self, bool active);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isActive)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_active(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#automatic)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_automatic(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutomatic)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param automatic bool
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_automatic(void* self, bool automatic);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#autoDetectLanguageDisabled)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_auto_detect_language_disabled(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setAutoDetectLanguageDisabled)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param autoDetectDisabled bool
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_auto_detect_language_disabled(void* self, bool autoDetectDisabled);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#addWordToDictionary)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param word const char*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_add_word_to_dictionary(void* self, const char* word);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#ignoreWord)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param word const char*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_ignore_word(void* self, const char* word);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param word const char*
///
const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word(void* self, const char* word);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param word const char*
/// @param cursor QTextCursor*
///
const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word2(void* self, const char* word, const void* cursor);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#isWordMisspelled)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param word const char*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_word_misspelled(void* self, const char* word);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setMisspelledColor)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param color QColor*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_misspelled_color(void* self, const void* color);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#checkerEnabledByDefault)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_checker_enabled_by_default(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setDocument)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param document QTextDocument*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_document(void* self, void* document);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param description const char*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_active_changed(void* self, const char* description);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#activeChanged)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* description)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_active_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setCurrentLanguage)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param language const char*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_current_language(void* self, const char* language);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotAutoDetection)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_slot_auto_detection(void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#slotRehighlight)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_slot_rehighlight(void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_tr2(const char* s, const char* c);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_tr3(const char* s, const char* c, int n);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param word const char*
/// @param max int
///
const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word22(void* self, const char* word, int max);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param word const char*
/// @param cursor QTextCursor*
/// @param max int
///
const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_suggestions_for_word3(void* self, const char* word, const void* cursor, int max);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QTextDocument* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_document(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_rehighlight(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param block QTextBlock*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_rehighlight_block(void* self, const void* block);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
const char* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param name const char*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param b bool
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QThread* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param thread QThread*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param interval int
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param time int64_t of nanoseconds
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param id int
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param id enum Qt__TimerId
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
/// @return libqt_list of QObject*
///
libqt_list k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param parent QObject*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param filterObj QObject*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param obj QObject*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param receiver QObject*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param name const char*
/// @param value QVariant*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param name const char*
///
QVariant* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
const char** k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QBindingStorage* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
const QBindingStorage* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param classname const char*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal const char*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param param1 QObject*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QObject* param1)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#definition)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
KSyntaxHighlighting__Definition* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_definition(const void* self);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#theme)
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
KSyntaxHighlighting__Theme* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_theme(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#metaObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
const QMetaObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_meta_object(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#metaObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
const QMetaObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_meta_object(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#metaObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback const QMetaObject* func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param param1 const char*
///
void* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacast(void* self, const char* param1);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param param1 const char*
///
void* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_metacast(void* self, const char* param1);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void* func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* param1)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback int32_t func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param o QObject*
/// @param e QEvent*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event_filter(void* self, void* o, void* e);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param o QObject*
/// @param e QEvent*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_event_filter(void* self, void* o, void* e);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback bool func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QObject* o, QEvent* e)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QEvent*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QEvent*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback bool func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QTimerEvent*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QTimerEvent*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTimerEvent* event)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QChildEvent*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QChildEvent*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QChildEvent* event)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QEvent*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param event QEvent*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QEvent* event)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QMetaMethod* signal)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal QMetaMethod*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QMetaMethod* signal)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param theme KSyntaxHighlighting__Theme*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_theme(void* self, const void* theme);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param theme KSyntaxHighlighting__Theme*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_theme(void* self, const void* theme);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#setTheme)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, KSyntaxHighlighting__Theme* theme)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_theme(void* self, void (*callback)(void*, const void*));

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#applyFolding)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param offset int
/// @param length int
/// @param region KSyntaxHighlighting__FoldingRegion*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_apply_folding(void* self, int offset, int length, void* region);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#applyFolding)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param offset int
/// @param length int
/// @param region KSyntaxHighlighting__FoldingRegion*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_apply_folding(void* self, int offset, int length, void* region);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#applyFolding)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_apply_folding(void* self, void (*callback)(void*, int, int, void*));

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_intra_word_editing(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_intra_word_editing(const void* self);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback bool func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_intra_word_editing(void* self, bool (*callback)(const void*));

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param editing bool
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_intra_word_editing(void* self, bool editing);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param editing bool
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_intra_word_editing(void* self, bool editing);

/// Inherited from Sonnet::Highlighter
///
/// [Upstream resources](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, bool editing)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_intra_word_editing(void* self, void (*callback)(void*, bool));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_format(void* self, int start, int count, const void* format);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_format(void* self, int start, int count, const void* format);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int start, int count, QTextCharFormat* format)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_format(void* self, void (*callback)(void*, int, int, const void*));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param pos int
///
QTextCharFormat* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_format(const void* self, int pos);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param pos int
///
QTextCharFormat* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_format(const void* self, int pos);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback QTextCharFormat* func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int pos)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_format(void* self, QTextCharFormat* (*callback)(const void*, int));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_previous_block_state(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_previous_block_state(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback int32_t func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_previous_block_state(void* self, int32_t (*callback)(const void*));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_block_state(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_current_block_state(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback int32_t func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_current_block_state(void* self, int32_t (*callback)(const void*));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param newState int
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_current_block_state(void* self, int newState);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param newState int
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_current_block_state(void* self, int newState);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, int newState)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_current_block_state(void* self, void (*callback)(void*, int));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param data QTextBlockUserData*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_set_current_block_user_data(void* self, void* data);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param data QTextBlockUserData*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_set_current_block_user_data(void* self, void* data);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QTextBlockUserData* data)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QTextBlockUserData* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_block_user_data(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QTextBlockUserData* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_current_block_user_data(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback QTextBlockUserData* func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)(const void*));

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QTextBlock* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_current_block(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QTextBlock* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_current_block(const void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback QTextBlock* func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_current_block(void* self, QTextBlock* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
QObject* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback QObject* func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback int32_t func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal const char*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal const char*
///
int32_t k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback int32_t func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* signal)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param signal QMetaMethod*
///
bool k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback bool func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, QMetaMethod* signal)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#highlightLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param text const char*
/// @param state KSyntaxHighlighting__State*
///
KSyntaxHighlighting__State* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_highlight_line(void* self, const char* text, const void* state);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#highlightLine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param text const char*
/// @param state KSyntaxHighlighting__State*
///
KSyntaxHighlighting__State* k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_super_highlight_line(void* self, const char* text, const void* state);

/// Inherited from KSyntaxHighlighting::AbstractHighlighter
///
/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-abstracthighlighter.html#highlightLine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback KSyntaxHighlighting__State* func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* text, KSyntaxHighlighting__State* state)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_highlight_line(void* self, KSyntaxHighlighting__State* (*callback)(void*, const char*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
/// @param callback void func(TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter* self, const char* objectName)
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextSyntaxSpellCheckingHighlighter.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextCustomEditor__PlainTextSyntaxSpellCheckingHighlighter*
///
void k_textcustomeditor__plaintextsyntaxspellcheckinghighlighter_delete(void* self);

#endif
