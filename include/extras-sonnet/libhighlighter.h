#pragma once
#ifndef SRC_EXTRAS_SONNETQT6C_LIBHIGHLIGHTER_H
#define SRC_EXTRAS_SONNETQT6C_LIBHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/sonnet-highlighter.html

/// k_sonnet__highlighter_new constructs a new Sonnet::Highlighter object.
///
/// @param textEdit QTextEdit*
Sonnet__Highlighter* k_sonnet__highlighter_new(void* textEdit);

/// k_sonnet__highlighter_new2 constructs a new Sonnet::Highlighter object.
///
/// @param textEdit QPlainTextEdit*
Sonnet__Highlighter* k_sonnet__highlighter_new2(void* textEdit);

/// k_sonnet__highlighter_new3 constructs a new Sonnet::Highlighter object.
///
/// @param textEdit QTextEdit*
/// @param col QColor*
Sonnet__Highlighter* k_sonnet__highlighter_new3(void* textEdit, void* col);

/// k_sonnet__highlighter_new4 constructs a new Sonnet::Highlighter object.
///
/// @param textEdit QPlainTextEdit*
/// @param col QColor*
Sonnet__Highlighter* k_sonnet__highlighter_new4(void* textEdit, void* col);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Sonnet__Highlighter*
const QMetaObject* k_sonnet__highlighter_meta_object(void* self);

/// @param self Sonnet__Highlighter*
/// @param param1 const char*
void* k_sonnet__highlighter_metacast(void* self, const char* param1);

/// @param self Sonnet__Highlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_sonnet__highlighter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Sonnet__Highlighter*
/// @param callback int32_t func(Sonnet__Highlighter* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_sonnet__highlighter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Sonnet__Highlighter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_sonnet__highlighter_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_sonnet__highlighter_tr(const char* s);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#spellCheckerFound)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_spell_checker_found(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#currentLanguage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Highlighter*
const char* k_sonnet__highlighter_current_language(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setActive)
///
/// @param self Sonnet__Highlighter*
/// @param active bool
void k_sonnet__highlighter_set_active(void* self, bool active);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#isActive)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_is_active(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#automatic)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_automatic(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setAutomatic)
///
/// @param self Sonnet__Highlighter*
/// @param automatic bool
void k_sonnet__highlighter_set_automatic(void* self, bool automatic);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#autoDetectLanguageDisabled)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_auto_detect_language_disabled(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setAutoDetectLanguageDisabled)
///
/// @param self Sonnet__Highlighter*
/// @param autoDetectDisabled bool
void k_sonnet__highlighter_set_auto_detect_language_disabled(void* self, bool autoDetectDisabled);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#addWordToDictionary)
///
/// @param self Sonnet__Highlighter*
/// @param word const char*
void k_sonnet__highlighter_add_word_to_dictionary(void* self, const char* word);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#ignoreWord)
///
/// @param self Sonnet__Highlighter*
/// @param word const char*
void k_sonnet__highlighter_ignore_word(void* self, const char* word);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Highlighter*
/// @param word const char*
const char** k_sonnet__highlighter_suggestions_for_word(void* self, const char* word);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Highlighter*
/// @param word const char*
/// @param cursor QTextCursor*
const char** k_sonnet__highlighter_suggestions_for_word2(void* self, const char* word, void* cursor);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#isWordMisspelled)
///
/// @param self Sonnet__Highlighter*
/// @param word const char*
bool k_sonnet__highlighter_is_word_misspelled(void* self, const char* word);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setMisspelledColor)
///
/// @param self Sonnet__Highlighter*
/// @param color QColor*
void k_sonnet__highlighter_set_misspelled_color(void* self, void* color);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#checkerEnabledByDefault)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_checker_enabled_by_default(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setDocument)
///
/// @param self Sonnet__Highlighter*
/// @param document QTextDocument*
void k_sonnet__highlighter_set_document(void* self, void* document);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#activeChanged)
///
/// @param self Sonnet__Highlighter*
/// @param description const char*
void k_sonnet__highlighter_active_changed(void* self, const char* description);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#activeChanged)
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, const char* description)
void k_sonnet__highlighter_on_active_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
///
/// @param self Sonnet__Highlighter*
/// @param text const char*
void k_sonnet__highlighter_highlight_block(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, const char* text)
void k_sonnet__highlighter_on_highlight_block(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#highlightBlock)
///
/// Base class method implementation
///
/// @param self Sonnet__Highlighter*
/// @param text const char*
void k_sonnet__highlighter_qbase_highlight_block(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
///
/// @param self Sonnet__Highlighter*
/// @param start int
/// @param count int
void k_sonnet__highlighter_set_misspelled(void* self, int start, int count);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, int start, int count)
void k_sonnet__highlighter_on_set_misspelled(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setMisspelled)
///
/// Base class method implementation
///
/// @param self Sonnet__Highlighter*
/// @param start int
/// @param count int
void k_sonnet__highlighter_qbase_set_misspelled(void* self, int start, int count);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
///
/// @param self Sonnet__Highlighter*
/// @param start int
/// @param count int
void k_sonnet__highlighter_unset_misspelled(void* self, int start, int count);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, int start, int count)
void k_sonnet__highlighter_on_unset_misspelled(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#unsetMisspelled)
///
/// Base class method implementation
///
/// @param self Sonnet__Highlighter*
/// @param start int
/// @param count int
void k_sonnet__highlighter_qbase_unset_misspelled(void* self, int start, int count);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#eventFilter)
///
/// @param self Sonnet__Highlighter*
/// @param o QObject*
/// @param e QEvent*
bool k_sonnet__highlighter_event_filter(void* self, void* o, void* e);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__Highlighter*
/// @param callback bool func(Sonnet__Highlighter* self, QObject* o, QEvent* e)
void k_sonnet__highlighter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#eventFilter)
///
/// Base class method implementation
///
/// @param self Sonnet__Highlighter*
/// @param o QObject*
/// @param e QEvent*
bool k_sonnet__highlighter_qbase_event_filter(void* self, void* o, void* e);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_intra_word_editing(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__Highlighter*
/// @param callback bool func()
void k_sonnet__highlighter_on_intra_word_editing(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#intraWordEditing)
///
/// Base class method implementation
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_qbase_intra_word_editing(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
///
/// @param self Sonnet__Highlighter*
/// @param editing bool
void k_sonnet__highlighter_set_intra_word_editing(void* self, bool editing);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, bool editing)
void k_sonnet__highlighter_on_set_intra_word_editing(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setIntraWordEditing)
///
/// Base class method implementation
///
/// @param self Sonnet__Highlighter*
/// @param editing bool
void k_sonnet__highlighter_qbase_set_intra_word_editing(void* self, bool editing);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#setCurrentLanguage)
///
/// @param self Sonnet__Highlighter*
/// @param language const char*
void k_sonnet__highlighter_set_current_language(void* self, const char* language);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#slotAutoDetection)
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_slot_auto_detection(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#slotRehighlight)
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_slot_rehighlight(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_sonnet__highlighter_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_sonnet__highlighter_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Highlighter*
/// @param word const char*
/// @param max int
const char** k_sonnet__highlighter_suggestions_for_word22(void* self, const char* word, int max);

/// [Qt documentation](https://api.kde.org/sonnet-highlighter.html#suggestionsForWord)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Highlighter*
/// @param word const char*
/// @param cursor QTextCursor*
/// @param max int
const char** k_sonnet__highlighter_suggestions_for_word3(void* self, const char* word, void* cursor, int max);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#document)
///
/// @param self Sonnet__Highlighter*
QTextDocument* k_sonnet__highlighter_document(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlight)
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_rehighlight(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#rehighlightBlock)
///
/// @param self Sonnet__Highlighter*
/// @param block QTextBlock*
void k_sonnet__highlighter_rehighlight_block(void* self, void* block);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Highlighter*
const char* k_sonnet__highlighter_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Sonnet__Highlighter*
/// @param name char*
void k_sonnet__highlighter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Sonnet__Highlighter*
bool k_sonnet__highlighter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Sonnet__Highlighter*
/// @param b bool
bool k_sonnet__highlighter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Sonnet__Highlighter*
QThread* k_sonnet__highlighter_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__Highlighter*
/// @param thread QThread*
bool k_sonnet__highlighter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Highlighter*
/// @param interval int
int32_t k_sonnet__highlighter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__Highlighter*
/// @param id int
void k_sonnet__highlighter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__Highlighter*
/// @param id enum Qt__TimerId
void k_sonnet__highlighter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Sonnet__Highlighter*
libqt_list /* of QObject* */ k_sonnet__highlighter_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Sonnet__Highlighter*
/// @param parent QObject*
void k_sonnet__highlighter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Sonnet__Highlighter*
/// @param filterObj QObject*
void k_sonnet__highlighter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Sonnet__Highlighter*
/// @param obj QObject*
void k_sonnet__highlighter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_sonnet__highlighter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__Highlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_sonnet__highlighter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_sonnet__highlighter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_sonnet__highlighter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Sonnet__Highlighter*
/// @param name const char*
/// @param value QVariant*
bool k_sonnet__highlighter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Sonnet__Highlighter*
/// @param name const char*
QVariant* k_sonnet__highlighter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Highlighter*
const char** k_sonnet__highlighter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__Highlighter*
QBindingStorage* k_sonnet__highlighter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__Highlighter*
const QBindingStorage* k_sonnet__highlighter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self)
void k_sonnet__highlighter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Sonnet__Highlighter*
QObject* k_sonnet__highlighter_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Sonnet__Highlighter*
/// @param classname const char*
bool k_sonnet__highlighter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__Highlighter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_sonnet__highlighter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Highlighter*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_sonnet__highlighter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_sonnet__highlighter_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__Highlighter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_sonnet__highlighter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Highlighter*
/// @param param1 QObject*
void k_sonnet__highlighter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, QObject* param1)
void k_sonnet__highlighter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QEvent*
bool k_sonnet__highlighter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QEvent*
bool k_sonnet__highlighter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback bool func(Sonnet__Highlighter* self, QEvent* event)
void k_sonnet__highlighter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QTimerEvent*
void k_sonnet__highlighter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QTimerEvent*
void k_sonnet__highlighter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, QTimerEvent* event)
void k_sonnet__highlighter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QChildEvent*
void k_sonnet__highlighter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QChildEvent*
void k_sonnet__highlighter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, QChildEvent* event)
void k_sonnet__highlighter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QEvent*
void k_sonnet__highlighter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param event QEvent*
void k_sonnet__highlighter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, QEvent* event)
void k_sonnet__highlighter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal QMetaMethod*
void k_sonnet__highlighter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal QMetaMethod*
void k_sonnet__highlighter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, QMetaMethod* signal)
void k_sonnet__highlighter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal QMetaMethod*
void k_sonnet__highlighter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal QMetaMethod*
void k_sonnet__highlighter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, QMetaMethod* signal)
void k_sonnet__highlighter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
void k_sonnet__highlighter_set_format(void* self, int start, int count, void* format);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param start int
/// @param count int
/// @param format QTextCharFormat*
void k_sonnet__highlighter_qbase_set_format(void* self, int start, int count, void* format);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setFormat)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, int start, int count, QTextCharFormat* format)
void k_sonnet__highlighter_on_set_format(void* self, void (*callback)(void*, int, int, void*));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param pos int
QTextCharFormat* k_sonnet__highlighter_format(void* self, int pos);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param pos int
QTextCharFormat* k_sonnet__highlighter_qbase_format(void* self, int pos);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#format)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback QTextCharFormat* func(Sonnet__Highlighter* self, int pos)
void k_sonnet__highlighter_on_format(void* self, QTextCharFormat* (*callback)(void*, int));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
int32_t k_sonnet__highlighter_previous_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
int32_t k_sonnet__highlighter_qbase_previous_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#previousBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback int32_t func()
void k_sonnet__highlighter_on_previous_block_state(void* self, int32_t (*callback)());

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
int32_t k_sonnet__highlighter_current_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
int32_t k_sonnet__highlighter_qbase_current_block_state(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback int32_t func()
void k_sonnet__highlighter_on_current_block_state(void* self, int32_t (*callback)());

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param newState int
void k_sonnet__highlighter_set_current_block_state(void* self, int newState);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param newState int
void k_sonnet__highlighter_qbase_set_current_block_state(void* self, int newState);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, int newState)
void k_sonnet__highlighter_on_set_current_block_state(void* self, void (*callback)(void*, int));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param data QTextBlockUserData*
void k_sonnet__highlighter_set_current_block_user_data(void* self, void* data);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param data QTextBlockUserData*
void k_sonnet__highlighter_qbase_set_current_block_user_data(void* self, void* data);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#setCurrentBlockUserData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, QTextBlockUserData* data)
void k_sonnet__highlighter_on_set_current_block_user_data(void* self, void (*callback)(void*, void*));

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
QTextBlockUserData* k_sonnet__highlighter_current_block_user_data(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
QTextBlockUserData* k_sonnet__highlighter_qbase_current_block_user_data(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlockUserData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback QTextBlockUserData* func()
void k_sonnet__highlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*callback)());

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
QTextBlock* k_sonnet__highlighter_current_block(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
QTextBlock* k_sonnet__highlighter_qbase_current_block(void* self);

/// Inherited from QSyntaxHighlighter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qsyntaxhighlighter.html#currentBlock)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback QTextBlock* func()
void k_sonnet__highlighter_on_current_block(void* self, QTextBlock* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
QObject* k_sonnet__highlighter_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
QObject* k_sonnet__highlighter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback QObject* func()
void k_sonnet__highlighter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
int32_t k_sonnet__highlighter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
int32_t k_sonnet__highlighter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback int32_t func()
void k_sonnet__highlighter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal const char*
int32_t k_sonnet__highlighter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal const char*
int32_t k_sonnet__highlighter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback int32_t func(Sonnet__Highlighter* self, const char* signal)
void k_sonnet__highlighter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal QMetaMethod*
bool k_sonnet__highlighter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param signal QMetaMethod*
bool k_sonnet__highlighter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Highlighter*
/// @param callback bool func(Sonnet__Highlighter* self, QMetaMethod* signal)
void k_sonnet__highlighter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Sonnet__Highlighter*
/// @param callback void func(Sonnet__Highlighter* self, const char* objectName)
void k_sonnet__highlighter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Sonnet__Highlighter*
void k_sonnet__highlighter_delete(void* self);

#endif
