#pragma once
#ifndef EXTRAS_KIO_LIBKURLCOMPLETION_H
#define EXTRAS_KIO_LIBKURLCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kurlcompletion.html)

/// k_urlcompletion_new constructs a new KUrlCompletion object.
///
KUrlCompletion* k_urlcompletion_new();

/// [Upstream resources](https://api.kde.org/kurlcompletion.html)

/// k_urlcompletion_new2 constructs a new KUrlCompletion object.
///
/// @param param1 enum KUrlCompletion__Mode
///
KUrlCompletion* k_urlcompletion_new2(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KUrlCompletion*
///
const QMetaObject* k_urlcompletion_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback const QMetaObject* func(const KUrlCompletion* self)
///
void k_urlcompletion_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
///
const QMetaObject* k_urlcompletion_super_meta_object(const void* self);

/// @param self KUrlCompletion*
/// @param param1 const char*
///
void* k_urlcompletion_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void* func(KUrlCompletion* self, const char* param1)
///
void k_urlcompletion_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param param1 const char*
///
void* k_urlcompletion_super_metacast(void* self, const char* param1);

/// @param self KUrlCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlcompletion_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func(KUrlCompletion* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_urlcompletion_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_urlcompletion_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_urlcompletion_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#makeCompletion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUrlCompletion*
/// @param text const char*
///
const char* k_urlcompletion_make_completion(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#makeCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback const char* func(KUrlCompletion* self, const char* text)
///
void k_urlcompletion_on_make_completion(void* self, const char* (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#makeCompletion)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param text const char*
///
const char* k_urlcompletion_super_make_completion(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
///
/// @param self KUrlCompletion*
/// @param dir QUrl*
///
void k_urlcompletion_set_dir(void* self, const void* dir);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QUrl* dir)
///
void k_urlcompletion_on_set_dir(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param dir QUrl*
///
void k_urlcompletion_super_set_dir(void* self, const void* dir);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
///
/// @param self const KUrlCompletion*
///
QUrl* k_urlcompletion_dir(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback QUrl* func(const KUrlCompletion* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_urlcompletion_on_dir(void* self, QUrl* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
///
QUrl* k_urlcompletion_super_dir(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_is_running(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback bool func(const KUrlCompletion* self)
///
void k_urlcompletion_on_is_running(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_super_is_running(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_stop(void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self)
///
void k_urlcompletion_on_stop(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_super_stop(void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
///
/// @param self const KUrlCompletion*
///
/// @return enum KUrlCompletion__Mode
///
int32_t k_urlcompletion_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func(const KUrlCompletion* self)
///
void k_urlcompletion_on_mode(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
///
/// @return enum KUrlCompletion__Mode
///
int32_t k_urlcompletion_super_mode(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
///
/// @param self KUrlCompletion*
/// @param mode enum KUrlCompletion__Mode
///
void k_urlcompletion_set_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, enum KUrlCompletion__Mode mode)
///
void k_urlcompletion_on_set_mode(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param mode enum KUrlCompletion__Mode
///
void k_urlcompletion_super_set_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_replace_env(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback bool func(const KUrlCompletion* self)
///
void k_urlcompletion_on_replace_env(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_super_replace_env(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// @param self KUrlCompletion*
/// @param replace bool
///
void k_urlcompletion_set_replace_env(void* self, bool replace);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool replace)
///
void k_urlcompletion_on_set_replace_env(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param replace bool
///
void k_urlcompletion_super_set_replace_env(void* self, bool replace);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_replace_home(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback bool func(const KUrlCompletion* self)
///
void k_urlcompletion_on_replace_home(void* self, bool (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_super_replace_home(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// @param self KUrlCompletion*
/// @param replace bool
///
void k_urlcompletion_set_replace_home(void* self, bool replace);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool replace)
///
void k_urlcompletion_on_set_replace_home(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param replace bool
///
void k_urlcompletion_super_set_replace_home(void* self, bool replace);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KUrlCompletion*
/// @param text const char*
///
const char* k_urlcompletion_replaced_path(const void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param text const char*
/// @param replaceHome bool
///
const char* k_urlcompletion_replaced_path2(const char* text, bool replaceHome);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMimeTypeFilters)
///
/// @param self KUrlCompletion*
/// @param mimeTypes const char**
///
void k_urlcompletion_set_mime_type_filters(void* self, const char* mimeTypes[static 1]);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mimeTypeFilters)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KUrlCompletion*
///
const char** k_urlcompletion_mime_type_filters(const void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// @param self const KUrlCompletion*
/// @param matches const char**
///
void k_urlcompletion_post_process_matches(const void* self, const char* matches[static 1]);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(const KUrlCompletion* self, const char** matches)
///
void k_urlcompletion_on_post_process_matches(void* self, void (*callback)(const void*, const char**));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
/// @param matches const char**
///
void k_urlcompletion_super_post_process_matches(const void* self, const char* matches[static 1]);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// @param self const KUrlCompletion*
/// @param matches KCompletionMatches*
///
void k_urlcompletion_post_process_matches2(const void* self, void* matches);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(const KUrlCompletion* self, KCompletionMatches* matches)
///
void k_urlcompletion_on_post_process_matches2(void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self const KUrlCompletion*
/// @param matches KCompletionMatches*
///
void k_urlcompletion_super_post_process_matches2(const void* self, void* matches);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_urlcompletion_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_urlcompletion_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param text const char*
/// @param replaceHome bool
/// @param replaceEnv bool
///
const char* k_urlcompletion_replaced_path3(const char* text, bool replaceHome, bool replaceEnv);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#substringCompletion)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KUrlCompletion*
/// @param string const char*
///
const char** k_urlcompletion_substring_completion(const void* self, const char* string);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#items)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KUrlCompletion*
///
const char** k_urlcompletion_items(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#isEmpty)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_is_empty(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#completionMode)
///
/// @param self const KUrlCompletion*
///
/// @return enum KCompletion__CompletionMode
///
int32_t k_urlcompletion_completion_mode(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#order)
///
/// @param self const KUrlCompletion*
///
/// @return enum KCompletion__CompOrder
///
int32_t k_urlcompletion_order(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#ignoreCase)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_ignore_case(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_should_auto_suggest(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUrlCompletion*
///
const char** k_urlcompletion_all_matches(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KUrlCompletion*
/// @param string const char*
///
const char** k_urlcompletion_all_matches2(void* self, const char* string);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KUrlCompletion*
///
KCompletionMatches* k_urlcompletion_all_weighted_matches(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KUrlCompletion*
/// @param string const char*
///
KCompletionMatches* k_urlcompletion_all_weighted_matches2(void* self, const char* string);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#soundsEnabled)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_sounds_enabled(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#hasMultipleMatches)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_has_multiple_matches(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#previousMatch)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUrlCompletion*
///
const char* k_urlcompletion_previous_match(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#nextMatch)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KUrlCompletion*
///
const char* k_urlcompletion_next_match(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#insertItems)
///
/// @param self KUrlCompletion*
/// @param items const char**
///
void k_urlcompletion_insert_items(void* self, const char* items[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KUrlCompletion*
/// @param item const char*
///
void k_urlcompletion_add_item(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KUrlCompletion*
/// @param item const char*
/// @param weight uint32_t
///
void k_urlcompletion_add_item2(void* self, const char* item, uint32_t weight);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#removeItem)
///
/// @param self KUrlCompletion*
/// @param item const char*
///
void k_urlcompletion_remove_item(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#match)
///
/// @param self KUrlCompletion*
/// @param item const char*
///
void k_urlcompletion_match(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#match)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char* item)
///
void k_urlcompletion_on_match(void* self, void (*callback)(void*, const char*));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KUrlCompletion*
/// @param matchlist const char**
///
void k_urlcompletion_matches(void* self, const char* matchlist[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char** matchlist)
///
void k_urlcompletion_on_matches(void* self, void (*callback)(void*, const char**));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_multiple_matches(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self)
///
void k_urlcompletion_on_multiple_matches(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KUrlCompletion*
///
const char* k_urlcompletion_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUrlCompletion*
/// @param name const char*
///
void k_urlcompletion_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUrlCompletion*
/// @param b bool
///
bool k_urlcompletion_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KUrlCompletion*
///
QThread* k_urlcompletion_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlCompletion*
/// @param thread QThread*
///
bool k_urlcompletion_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlCompletion*
/// @param interval int
///
int32_t k_urlcompletion_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlCompletion*
/// @param time int64_t of nanoseconds
///
int32_t k_urlcompletion_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlCompletion*
/// @param id int
///
void k_urlcompletion_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlCompletion*
/// @param id enum Qt__TimerId
///
void k_urlcompletion_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KUrlCompletion*
///
/// @return libqt_list of QObject*
///
libqt_list k_urlcompletion_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KUrlCompletion*
/// @param parent QObject*
///
void k_urlcompletion_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUrlCompletion*
/// @param filterObj QObject*
///
void k_urlcompletion_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUrlCompletion*
/// @param obj QObject*
///
void k_urlcompletion_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_urlcompletion_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_urlcompletion_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KUrlCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_urlcompletion_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_urlcompletion_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_urlcompletion_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUrlCompletion*
///
bool k_urlcompletion_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUrlCompletion*
/// @param receiver QObject*
///
bool k_urlcompletion_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_urlcompletion_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KUrlCompletion*
///
void k_urlcompletion_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KUrlCompletion*
///
void k_urlcompletion_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUrlCompletion*
/// @param name const char*
/// @param value QVariant*
///
bool k_urlcompletion_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KUrlCompletion*
/// @param name const char*
///
QVariant* k_urlcompletion_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KUrlCompletion*
///
const char** k_urlcompletion_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlCompletion*
///
QBindingStorage* k_urlcompletion_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KUrlCompletion*
///
const QBindingStorage* k_urlcompletion_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self)
///
void k_urlcompletion_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KUrlCompletion*
///
QObject* k_urlcompletion_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KUrlCompletion*
/// @param classname const char*
///
bool k_urlcompletion_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlCompletion*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_urlcompletion_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlCompletion*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_urlcompletion_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_urlcompletion_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_urlcompletion_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KUrlCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_urlcompletion_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUrlCompletion*
/// @param signal const char*
///
bool k_urlcompletion_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUrlCompletion*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_urlcompletion_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUrlCompletion*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_urlcompletion_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KUrlCompletion*
/// @param receiver QObject*
/// @param member const char*
///
bool k_urlcompletion_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
/// @param param1 QObject*
///
void k_urlcompletion_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QObject* param1)
///
void k_urlcompletion_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KUrlCompletion*
///
const char* k_urlcompletion_last_match(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KUrlCompletion*
///
const char* k_urlcompletion_super_last_match(const void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback const char* func(KUrlCompletion* self)
///
void k_urlcompletion_on_last_match(void* self, const char* (*callback)(const void*));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param mode enum KCompletion__CompletionMode
///
void k_urlcompletion_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param mode enum KCompletion__CompletionMode
///
void k_urlcompletion_super_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, enum KCompletion__CompletionMode mode)
///
void k_urlcompletion_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param order enum KCompletion__CompOrder
///
void k_urlcompletion_set_order(void* self, int32_t order);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param order enum KCompletion__CompOrder
///
void k_urlcompletion_super_set_order(void* self, int32_t order);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, enum KCompletion__CompOrder order)
///
void k_urlcompletion_on_set_order(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param ignoreCase bool
///
void k_urlcompletion_set_ignore_case(void* self, bool ignoreCase);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param ignoreCase bool
///
void k_urlcompletion_super_set_ignore_case(void* self, bool ignoreCase);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool ignoreCase)
///
void k_urlcompletion_on_set_ignore_case(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param enable bool
///
void k_urlcompletion_set_sounds_enabled(void* self, bool enable);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param enable bool
///
void k_urlcompletion_super_set_sounds_enabled(void* self, bool enable);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool enable)
///
void k_urlcompletion_on_set_sounds_enabled(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param itemList const char**
///
void k_urlcompletion_set_items(void* self, const char* itemList[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param itemList const char**
///
void k_urlcompletion_super_set_items(void* self, const char* itemList[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char** itemList)
///
void k_urlcompletion_on_set_items(void* self, void (*callback)(void*, const char**));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_clear(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_super_clear(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self)
///
void k_urlcompletion_on_clear(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
///
bool k_urlcompletion_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
///
bool k_urlcompletion_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback bool func(KUrlCompletion* self, QEvent* event)
///
void k_urlcompletion_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_urlcompletion_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_urlcompletion_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback bool func(KUrlCompletion* self, QObject* watched, QEvent* event)
///
void k_urlcompletion_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QTimerEvent*
///
void k_urlcompletion_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QTimerEvent*
///
void k_urlcompletion_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QTimerEvent* event)
///
void k_urlcompletion_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QChildEvent*
///
void k_urlcompletion_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QChildEvent*
///
void k_urlcompletion_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QChildEvent* event)
///
void k_urlcompletion_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
///
void k_urlcompletion_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
///
void k_urlcompletion_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QEvent* event)
///
void k_urlcompletion_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
///
void k_urlcompletion_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
///
void k_urlcompletion_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QMetaMethod* signal)
///
void k_urlcompletion_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
///
void k_urlcompletion_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
///
void k_urlcompletion_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QMetaMethod* signal)
///
void k_urlcompletion_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param shouldAutosuggest bool
///
void k_urlcompletion_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param shouldAutosuggest bool
///
void k_urlcompletion_super_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool shouldAutosuggest)
///
void k_urlcompletion_on_set_should_auto_suggest(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KUrlCompletion*
///
QObject* k_urlcompletion_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KUrlCompletion*
///
QObject* k_urlcompletion_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback QObject* func(KUrlCompletion* self)
///
void k_urlcompletion_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KUrlCompletion*
///
int32_t k_urlcompletion_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KUrlCompletion*
///
int32_t k_urlcompletion_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func(KUrlCompletion* self)
///
void k_urlcompletion_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KUrlCompletion*
/// @param signal const char*
///
int32_t k_urlcompletion_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KUrlCompletion*
/// @param signal const char*
///
int32_t k_urlcompletion_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func(KUrlCompletion* self, const char* signal)
///
void k_urlcompletion_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KUrlCompletion*
/// @param signal QMetaMethod*
///
bool k_urlcompletion_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KUrlCompletion*
/// @param signal QMetaMethod*
///
bool k_urlcompletion_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback bool func(KUrlCompletion* self, QMetaMethod* signal)
///
void k_urlcompletion_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char* objectName)
///
void k_urlcompletion_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#dtor.KUrlCompletion)
///
/// Delete this object from C++ memory.
///
/// @param self KUrlCompletion*
///
void k_urlcompletion_delete(void* self);

/// [Upstream resources](https://api.kde.org/kurlcompletion.html#public-types)

typedef enum {
    KURLCOMPLETION_MODE_EXECOMPLETION = 1,
    KURLCOMPLETION_MODE_FILECOMPLETION = 2,
    KURLCOMPLETION_MODE_DIRCOMPLETION = 3
} KUrlCompletion__Mode;

#endif
