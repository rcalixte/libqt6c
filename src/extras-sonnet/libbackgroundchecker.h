#pragma once
#ifndef SRC_EXTRAS_SONNET_QT6C_LIBBACKGROUNDCHECKER_H
#define SRC_EXTRAS_SONNET_QT6C_LIBBACKGROUNDCHECKER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html)

/// k_sonnet__backgroundchecker_new constructs a new Sonnet::BackgroundChecker object.
///
Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new();

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html)

/// k_sonnet__backgroundchecker_new2 constructs a new Sonnet::BackgroundChecker object.
///
/// @param speller Sonnet__Speller*
///
Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new2(void* speller);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html)

/// k_sonnet__backgroundchecker_new3 constructs a new Sonnet::BackgroundChecker object.
///
/// @param parent QObject*
///
Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new3(void* parent);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html)

/// k_sonnet__backgroundchecker_new4 constructs a new Sonnet::BackgroundChecker object.
///
/// @param speller Sonnet__Speller*
/// @param parent QObject*
///
Sonnet__BackgroundChecker* k_sonnet__backgroundchecker_new4(void* speller, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Sonnet__BackgroundChecker*
///
const QMetaObject* k_sonnet__backgroundchecker_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback const QMetaObject* func()
///
void k_sonnet__backgroundchecker_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
///
const QMetaObject* k_sonnet__backgroundchecker_qbase_meta_object(void* self);

/// @param self Sonnet__BackgroundChecker*
/// @param param1 const char*
///
void* k_sonnet__backgroundchecker_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void* func(Sonnet__BackgroundChecker* self, const char* param1)
///
void k_sonnet__backgroundchecker_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
/// @param param1 const char*
///
void* k_sonnet__backgroundchecker_qbase_metacast(void* self, const char* param1);

/// @param self Sonnet__BackgroundChecker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sonnet__backgroundchecker_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback int32_t func(Sonnet__BackgroundChecker* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_sonnet__backgroundchecker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_sonnet__backgroundchecker_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_sonnet__backgroundchecker_tr(const char* s);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#setText)
///
/// @param self Sonnet__BackgroundChecker*
/// @param text const char*
///
void k_sonnet__backgroundchecker_set_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__BackgroundChecker*
///
const char* k_sonnet__backgroundchecker_text(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#currentContext)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__BackgroundChecker*
///
const char* k_sonnet__backgroundchecker_current_context(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#speller)
///
/// @param self Sonnet__BackgroundChecker*
///
Sonnet__Speller* k_sonnet__backgroundchecker_speller(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#setSpeller)
///
/// @param self Sonnet__BackgroundChecker*
/// @param speller Sonnet__Speller*
///
void k_sonnet__backgroundchecker_set_speller(void* self, void* speller);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#checkWord)
///
/// @param self Sonnet__BackgroundChecker*
/// @param word const char*
///
bool k_sonnet__backgroundchecker_check_word(void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#suggest)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Sonnet__BackgroundChecker*
/// @param word const char*
///
const char** k_sonnet__backgroundchecker_suggest(void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#addWordToPersonal)
///
/// @param self Sonnet__BackgroundChecker*
/// @param word const char*
///
bool k_sonnet__backgroundchecker_add_word_to_personal(void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#addWordToSession)
///
/// @param self Sonnet__BackgroundChecker*
/// @param word const char*
///
bool k_sonnet__backgroundchecker_add_word_to_session(void* self, const char* word);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#autoDetectLanguageDisabled)
///
/// @param self Sonnet__BackgroundChecker*
///
bool k_sonnet__backgroundchecker_auto_detect_language_disabled(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#setAutoDetectLanguageDisabled)
///
/// @param self Sonnet__BackgroundChecker*
/// @param autoDetectDisabled bool
///
void k_sonnet__backgroundchecker_set_auto_detect_language_disabled(void* self, bool autoDetectDisabled);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#start)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_start(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#start)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func()
///
void k_sonnet__backgroundchecker_on_start(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#start)
///
/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_qbase_start(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#stop)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_stop(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#stop)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func()
///
void k_sonnet__backgroundchecker_on_stop(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#stop)
///
/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_qbase_stop(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#replace)
///
/// @param self Sonnet__BackgroundChecker*
/// @param start int
/// @param oldText const char*
/// @param newText const char*
///
void k_sonnet__backgroundchecker_replace(void* self, int start, const char* oldText, const char* newText);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#changeLanguage)
///
/// @param self Sonnet__BackgroundChecker*
/// @param lang const char*
///
void k_sonnet__backgroundchecker_change_language(void* self, const char* lang);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_continue_checking(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func()
///
void k_sonnet__backgroundchecker_on_continue_checking(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#continueChecking)
///
/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_qbase_continue_checking(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#misspelling)
///
/// @param self Sonnet__BackgroundChecker*
/// @param word const char*
/// @param start int
///
void k_sonnet__backgroundchecker_misspelling(void* self, const char* word, int start);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#misspelling)
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, const char* word, int start)
///
void k_sonnet__backgroundchecker_on_misspelling(void* self, void (*callback)(void*, const char*, int));

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#done)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_done(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#done)
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self)
///
void k_sonnet__backgroundchecker_on_done(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__BackgroundChecker*
///
const char* k_sonnet__backgroundchecker_fetch_more_text(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback const char* func()
///
void k_sonnet__backgroundchecker_on_fetch_more_text(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#fetchMoreText)
///
/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
///
const char* k_sonnet__backgroundchecker_qbase_fetch_more_text(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_finished_current_feed(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func()
///
void k_sonnet__backgroundchecker_on_finished_current_feed(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#finishedCurrentFeed)
///
/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_qbase_finished_current_feed(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_slot_engine_done(void* self);

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
///
/// Allows for overriding the related default method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func()
///
void k_sonnet__backgroundchecker_on_slot_engine_done(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/sonnet-backgroundchecker.html#slotEngineDone)
///
/// Base class method implementation
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_qbase_slot_engine_done(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_sonnet__backgroundchecker_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_sonnet__backgroundchecker_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Sonnet__BackgroundChecker*
///
const char* k_sonnet__backgroundchecker_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Sonnet__BackgroundChecker*
/// @param name char*
///
void k_sonnet__backgroundchecker_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Sonnet__BackgroundChecker*
///
bool k_sonnet__backgroundchecker_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Sonnet__BackgroundChecker*
///
bool k_sonnet__backgroundchecker_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Sonnet__BackgroundChecker*
///
bool k_sonnet__backgroundchecker_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Sonnet__BackgroundChecker*
///
bool k_sonnet__backgroundchecker_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Sonnet__BackgroundChecker*
/// @param b bool
///
bool k_sonnet__backgroundchecker_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Sonnet__BackgroundChecker*
///
QThread* k_sonnet__backgroundchecker_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__BackgroundChecker*
/// @param thread QThread*
///
bool k_sonnet__backgroundchecker_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__BackgroundChecker*
/// @param interval int
///
int32_t k_sonnet__backgroundchecker_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__BackgroundChecker*
/// @param time int64_t of nanoseconds
///
int32_t k_sonnet__backgroundchecker_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__BackgroundChecker*
/// @param id int
///
void k_sonnet__backgroundchecker_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__BackgroundChecker*
/// @param id enum Qt__TimerId
///
void k_sonnet__backgroundchecker_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Sonnet__BackgroundChecker*
///
/// @return libqt_list of QObject*
///
libqt_list k_sonnet__backgroundchecker_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Sonnet__BackgroundChecker*
/// @param parent QObject*
///
void k_sonnet__backgroundchecker_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Sonnet__BackgroundChecker*
/// @param filterObj QObject*
///
void k_sonnet__backgroundchecker_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Sonnet__BackgroundChecker*
/// @param obj QObject*
///
void k_sonnet__backgroundchecker_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_sonnet__backgroundchecker_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__BackgroundChecker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_sonnet__backgroundchecker_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_sonnet__backgroundchecker_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_sonnet__backgroundchecker_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Sonnet__BackgroundChecker*
/// @param name const char*
/// @param value QVariant*
///
bool k_sonnet__backgroundchecker_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Sonnet__BackgroundChecker*
/// @param name const char*
///
QVariant* k_sonnet__backgroundchecker_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Sonnet__BackgroundChecker*
///
const char** k_sonnet__backgroundchecker_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__BackgroundChecker*
///
QBindingStorage* k_sonnet__backgroundchecker_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__BackgroundChecker*
///
const QBindingStorage* k_sonnet__backgroundchecker_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self)
///
void k_sonnet__backgroundchecker_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Sonnet__BackgroundChecker*
///
QObject* k_sonnet__backgroundchecker_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Sonnet__BackgroundChecker*
/// @param classname const char*
///
bool k_sonnet__backgroundchecker_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__BackgroundChecker*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_sonnet__backgroundchecker_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__BackgroundChecker*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_sonnet__backgroundchecker_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__BackgroundChecker*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_sonnet__backgroundchecker_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_sonnet__backgroundchecker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__BackgroundChecker*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_sonnet__backgroundchecker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__BackgroundChecker*
/// @param param1 QObject*
///
void k_sonnet__backgroundchecker_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, QObject* param1)
///
void k_sonnet__backgroundchecker_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QEvent*
///
bool k_sonnet__backgroundchecker_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QEvent*
///
bool k_sonnet__backgroundchecker_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback bool func(Sonnet__BackgroundChecker* self, QEvent* event)
///
void k_sonnet__backgroundchecker_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_sonnet__backgroundchecker_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_sonnet__backgroundchecker_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback bool func(Sonnet__BackgroundChecker* self, QObject* watched, QEvent* event)
///
void k_sonnet__backgroundchecker_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QTimerEvent*
///
void k_sonnet__backgroundchecker_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QTimerEvent*
///
void k_sonnet__backgroundchecker_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, QTimerEvent* event)
///
void k_sonnet__backgroundchecker_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QChildEvent*
///
void k_sonnet__backgroundchecker_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QChildEvent*
///
void k_sonnet__backgroundchecker_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, QChildEvent* event)
///
void k_sonnet__backgroundchecker_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QEvent*
///
void k_sonnet__backgroundchecker_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param event QEvent*
///
void k_sonnet__backgroundchecker_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, QEvent* event)
///
void k_sonnet__backgroundchecker_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal QMetaMethod*
///
void k_sonnet__backgroundchecker_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal QMetaMethod*
///
void k_sonnet__backgroundchecker_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, QMetaMethod* signal)
///
void k_sonnet__backgroundchecker_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal QMetaMethod*
///
void k_sonnet__backgroundchecker_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal QMetaMethod*
///
void k_sonnet__backgroundchecker_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, QMetaMethod* signal)
///
void k_sonnet__backgroundchecker_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
///
QObject* k_sonnet__backgroundchecker_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
///
QObject* k_sonnet__backgroundchecker_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback QObject* func()
///
void k_sonnet__backgroundchecker_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
///
int32_t k_sonnet__backgroundchecker_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
///
int32_t k_sonnet__backgroundchecker_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback int32_t func()
///
void k_sonnet__backgroundchecker_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal const char*
///
int32_t k_sonnet__backgroundchecker_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal const char*
///
int32_t k_sonnet__backgroundchecker_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback int32_t func(Sonnet__BackgroundChecker* self, const char* signal)
///
void k_sonnet__backgroundchecker_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal QMetaMethod*
///
bool k_sonnet__backgroundchecker_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param signal QMetaMethod*
///
bool k_sonnet__backgroundchecker_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback bool func(Sonnet__BackgroundChecker* self, QMetaMethod* signal)
///
void k_sonnet__backgroundchecker_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Sonnet__BackgroundChecker*
/// @param callback void func(Sonnet__BackgroundChecker* self, const char* objectName)
///
void k_sonnet__backgroundchecker_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Sonnet__BackgroundChecker*
///
void k_sonnet__backgroundchecker_delete(void* self);

#endif
