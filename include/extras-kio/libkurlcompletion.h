#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKURLCOMPLETION_H
#define SRC_EXTRAS_KIOQT6C_LIBKURLCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kurlcompletion.html

/// k_urlcompletion_new constructs a new KUrlCompletion object.
///
KUrlCompletion* k_urlcompletion_new();

/// k_urlcompletion_new2 constructs a new KUrlCompletion object.
///
/// @param param1 enum KUrlCompletion__Mode
KUrlCompletion* k_urlcompletion_new2(int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KUrlCompletion*
const QMetaObject* k_urlcompletion_meta_object(void* self);

/// @param self KUrlCompletion*
/// @param param1 const char*
void* k_urlcompletion_metacast(void* self, const char* param1);

/// @param self KUrlCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_urlcompletion_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func(KUrlCompletion* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_urlcompletion_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_urlcompletion_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_urlcompletion_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#makeCompletion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
/// @param text const char*
const char* k_urlcompletion_make_completion(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#makeCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback const char* func(KUrlCompletion* self, const char* text)
void k_urlcompletion_on_make_completion(void* self, const char* (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#makeCompletion)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param text const char*
const char* k_urlcompletion_qbase_make_completion(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setDir)
///
/// @param self KUrlCompletion*
/// @param dir QUrl*
void k_urlcompletion_set_dir(void* self, void* dir);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setDir)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QUrl* dir)
void k_urlcompletion_on_set_dir(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setDir)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param dir QUrl*
void k_urlcompletion_qbase_set_dir(void* self, void* dir);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#dir)
///
/// @param self KUrlCompletion*
QUrl* k_urlcompletion_dir(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#dir)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback QUrl* func()
void k_urlcompletion_on_dir(void* self, QUrl* (*callback)());

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#dir)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
QUrl* k_urlcompletion_qbase_dir(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_is_running(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback bool func()
void k_urlcompletion_on_is_running(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
bool k_urlcompletion_qbase_is_running(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#stop)
///
/// @param self KUrlCompletion*
void k_urlcompletion_stop(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#stop)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func()
void k_urlcompletion_on_stop(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#stop)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
void k_urlcompletion_qbase_stop(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#mode)
///
/// @param self KUrlCompletion*
///
/// @return enum KUrlCompletion__Mode
int32_t k_urlcompletion_mode(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#mode)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func()
void k_urlcompletion_on_mode(void* self, int32_t (*callback)());

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#mode)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
///
/// @return enum KUrlCompletion__Mode
int32_t k_urlcompletion_qbase_mode(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMode)
///
/// @param self KUrlCompletion*
/// @param mode enum KUrlCompletion__Mode
void k_urlcompletion_set_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMode)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, enum KUrlCompletion__Mode mode)
void k_urlcompletion_on_set_mode(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMode)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param mode enum KUrlCompletion__Mode
void k_urlcompletion_qbase_set_mode(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_replace_env(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback bool func()
void k_urlcompletion_on_replace_env(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
bool k_urlcompletion_qbase_replace_env(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// @param self KUrlCompletion*
/// @param replace bool
void k_urlcompletion_set_replace_env(void* self, bool replace);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool replace)
void k_urlcompletion_on_set_replace_env(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param replace bool
void k_urlcompletion_qbase_set_replace_env(void* self, bool replace);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_replace_home(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback bool func()
void k_urlcompletion_on_replace_home(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
bool k_urlcompletion_qbase_replace_home(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// @param self KUrlCompletion*
/// @param replace bool
void k_urlcompletion_set_replace_home(void* self, bool replace);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool replace)
void k_urlcompletion_on_set_replace_home(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param replace bool
void k_urlcompletion_qbase_set_replace_home(void* self, bool replace);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
/// @param text const char*
const char* k_urlcompletion_replaced_path(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param text const char*
/// @param replaceHome bool
const char* k_urlcompletion_replaced_path2(const char* text, bool replaceHome);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#setMimeTypeFilters)
///
/// @param self KUrlCompletion*
/// @param mimeTypes const char**
void k_urlcompletion_set_mime_type_filters(void* self, const char* mimeTypes[]);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#mimeTypeFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
const char** k_urlcompletion_mime_type_filters(void* self);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// @param self KUrlCompletion*
/// @param matches const char**
void k_urlcompletion_post_process_matches(void* self, const char* matches[]);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char** matches)
void k_urlcompletion_on_post_process_matches(void* self, void (*callback)(void*, const char**));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param matches const char**
void k_urlcompletion_qbase_post_process_matches(void* self, const char* matches[]);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// @param self KUrlCompletion*
/// @param matches KCompletionMatches*
void k_urlcompletion_post_process_matches2(void* self, void* matches);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, KCompletionMatches* matches)
void k_urlcompletion_on_post_process_matches2(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self KUrlCompletion*
/// @param matches KCompletionMatches*
void k_urlcompletion_qbase_post_process_matches2(void* self, void* matches);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_urlcompletion_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_urlcompletion_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param text const char*
/// @param replaceHome bool
/// @param replaceEnv bool
const char* k_urlcompletion_replaced_path3(const char* text, bool replaceHome, bool replaceEnv);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#substringCompletion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
/// @param stringVal const char*
const char** k_urlcompletion_substring_completion(void* self, const char* stringVal);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#items)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
const char** k_urlcompletion_items(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#isEmpty)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_is_empty(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#completionMode)
///
/// @param self KUrlCompletion*
///
/// @return enum KCompletion__CompletionMode
int32_t k_urlcompletion_completion_mode(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#order)
///
/// @param self KUrlCompletion*
///
/// @return enum KCompletion__CompOrder
int32_t k_urlcompletion_order(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#ignoreCase)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_ignore_case(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_should_auto_suggest(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#allMatches)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
const char** k_urlcompletion_all_matches(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#allMatches)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
/// @param stringVal const char*
const char** k_urlcompletion_all_matches2(void* self, const char* stringVal);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KUrlCompletion*
KCompletionMatches* k_urlcompletion_all_weighted_matches(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KUrlCompletion*
/// @param stringVal const char*
KCompletionMatches* k_urlcompletion_all_weighted_matches2(void* self, const char* stringVal);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#soundsEnabled)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_sounds_enabled(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#hasMultipleMatches)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_has_multiple_matches(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#previousMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
const char* k_urlcompletion_previous_match(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#nextMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
const char* k_urlcompletion_next_match(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#insertItems)
///
/// @param self KUrlCompletion*
/// @param items const char**
void k_urlcompletion_insert_items(void* self, const char* items[]);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KUrlCompletion*
/// @param item const char*
void k_urlcompletion_add_item(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KUrlCompletion*
/// @param item const char*
/// @param weight uint32_t
void k_urlcompletion_add_item2(void* self, const char* item, uint32_t weight);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#removeItem)
///
/// @param self KUrlCompletion*
/// @param item const char*
void k_urlcompletion_remove_item(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#match)
///
/// @param self KUrlCompletion*
/// @param item const char*
void k_urlcompletion_match(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#match)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char* item)
void k_urlcompletion_on_match(void* self, void (*callback)(void*, const char*));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KUrlCompletion*
/// @param matchlist const char**
void k_urlcompletion_matches(void* self, const char* matchlist[]);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char** matchlist)
void k_urlcompletion_on_matches(void* self, void (*callback)(void*, const char**));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KUrlCompletion*
void k_urlcompletion_multiple_matches(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self)
void k_urlcompletion_on_multiple_matches(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
const char* k_urlcompletion_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUrlCompletion*
/// @param name char*
void k_urlcompletion_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUrlCompletion*
bool k_urlcompletion_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUrlCompletion*
/// @param b bool
bool k_urlcompletion_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUrlCompletion*
QThread* k_urlcompletion_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlCompletion*
/// @param thread QThread*
bool k_urlcompletion_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlCompletion*
/// @param interval int
int32_t k_urlcompletion_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlCompletion*
/// @param id int
void k_urlcompletion_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlCompletion*
/// @param id enum Qt__TimerId
void k_urlcompletion_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUrlCompletion*
libqt_list /* of QObject* */ k_urlcompletion_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KUrlCompletion*
/// @param parent QObject*
void k_urlcompletion_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUrlCompletion*
/// @param filterObj QObject*
void k_urlcompletion_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUrlCompletion*
/// @param obj QObject*
void k_urlcompletion_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_urlcompletion_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_urlcompletion_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_urlcompletion_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_urlcompletion_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUrlCompletion*
void k_urlcompletion_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUrlCompletion*
void k_urlcompletion_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUrlCompletion*
/// @param name const char*
/// @param value QVariant*
bool k_urlcompletion_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUrlCompletion*
/// @param name const char*
QVariant* k_urlcompletion_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlCompletion*
const char** k_urlcompletion_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlCompletion*
QBindingStorage* k_urlcompletion_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlCompletion*
const QBindingStorage* k_urlcompletion_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
void k_urlcompletion_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self)
void k_urlcompletion_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUrlCompletion*
QObject* k_urlcompletion_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUrlCompletion*
/// @param classname const char*
bool k_urlcompletion_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUrlCompletion*
void k_urlcompletion_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlCompletion*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_urlcompletion_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlCompletion*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_urlcompletion_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_urlcompletion_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_urlcompletion_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
/// @param param1 QObject*
void k_urlcompletion_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QObject* param1)
void k_urlcompletion_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
const char* k_urlcompletion_last_match(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
const char* k_urlcompletion_qbase_last_match(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback const char* func()
void k_urlcompletion_on_last_match(void* self, const char* (*callback)());

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param mode enum KCompletion__CompletionMode
void k_urlcompletion_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param mode enum KCompletion__CompletionMode
void k_urlcompletion_qbase_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, enum KCompletion__CompletionMode mode)
void k_urlcompletion_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param order enum KCompletion__CompOrder
void k_urlcompletion_set_order(void* self, int32_t order);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param order enum KCompletion__CompOrder
void k_urlcompletion_qbase_set_order(void* self, int32_t order);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, enum KCompletion__CompOrder order)
void k_urlcompletion_on_set_order(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param ignoreCase bool
void k_urlcompletion_set_ignore_case(void* self, bool ignoreCase);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param ignoreCase bool
void k_urlcompletion_qbase_set_ignore_case(void* self, bool ignoreCase);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool ignoreCase)
void k_urlcompletion_on_set_ignore_case(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param enable bool
void k_urlcompletion_set_sounds_enabled(void* self, bool enable);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param enable bool
void k_urlcompletion_qbase_set_sounds_enabled(void* self, bool enable);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool enable)
void k_urlcompletion_on_set_sounds_enabled(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param itemList const char**
void k_urlcompletion_set_items(void* self, const char* itemList[]);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param itemList const char**
void k_urlcompletion_qbase_set_items(void* self, const char* itemList[]);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char** itemList)
void k_urlcompletion_on_set_items(void* self, void (*callback)(void*, const char**));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
void k_urlcompletion_clear(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
void k_urlcompletion_qbase_clear(void* self);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func()
void k_urlcompletion_on_clear(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
bool k_urlcompletion_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
bool k_urlcompletion_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback bool func(KUrlCompletion* self, QEvent* event)
void k_urlcompletion_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param watched QObject*
/// @param event QEvent*
bool k_urlcompletion_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param watched QObject*
/// @param event QEvent*
bool k_urlcompletion_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback bool func(KUrlCompletion* self, QObject* watched, QEvent* event)
void k_urlcompletion_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QTimerEvent*
void k_urlcompletion_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QTimerEvent*
void k_urlcompletion_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QTimerEvent* event)
void k_urlcompletion_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QChildEvent*
void k_urlcompletion_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QChildEvent*
void k_urlcompletion_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QChildEvent* event)
void k_urlcompletion_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
void k_urlcompletion_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param event QEvent*
void k_urlcompletion_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QEvent* event)
void k_urlcompletion_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
void k_urlcompletion_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
void k_urlcompletion_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QMetaMethod* signal)
void k_urlcompletion_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
void k_urlcompletion_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
void k_urlcompletion_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, QMetaMethod* signal)
void k_urlcompletion_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param shouldAutosuggest bool
void k_urlcompletion_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param shouldAutosuggest bool
void k_urlcompletion_qbase_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// Inherited from KCompletion
///
/// [Qt documentation](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, bool shouldAutosuggest)
void k_urlcompletion_on_set_should_auto_suggest(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
QObject* k_urlcompletion_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
QObject* k_urlcompletion_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback QObject* func()
void k_urlcompletion_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
int32_t k_urlcompletion_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
int32_t k_urlcompletion_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func()
void k_urlcompletion_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal const char*
int32_t k_urlcompletion_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal const char*
int32_t k_urlcompletion_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback int32_t func(KUrlCompletion* self, const char* signal)
void k_urlcompletion_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
bool k_urlcompletion_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param signal QMetaMethod*
bool k_urlcompletion_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlCompletion*
/// @param callback bool func(KUrlCompletion* self, QMetaMethod* signal)
void k_urlcompletion_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUrlCompletion*
/// @param callback void func(KUrlCompletion* self, const char* objectName)
void k_urlcompletion_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kurlcompletion.html#dtor.KUrlCompletion)
///
/// Delete this object from C++ memory.
///
/// @param self KUrlCompletion*
void k_urlcompletion_delete(void* self);

/// https://api.kde.org/kurlcompletion.html#types

typedef enum {
    KURLCOMPLETION_MODE_EXECOMPLETION = 1,
    KURLCOMPLETION_MODE_FILECOMPLETION = 2,
    KURLCOMPLETION_MODE_DIRCOMPLETION = 3
} KUrlCompletion__Mode;

#endif
