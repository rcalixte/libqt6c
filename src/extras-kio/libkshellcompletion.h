#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKSHELLCOMPLETION_H
#define SRC_EXTRAS_KIO_QT6C_LIBKSHELLCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kshellcompletion.html)

/// k_shellcompletion_new constructs a new KShellCompletion object.
///
KShellCompletion* k_shellcompletion_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KShellCompletion*
///
const QMetaObject* k_shellcompletion_meta_object(void* self);

/// @param self KShellCompletion*
/// @param param1 const char*
///
void* k_shellcompletion_metacast(void* self, const char* param1);

/// @param self KShellCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_shellcompletion_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KShellCompletion*
/// @param callback int32_t func(KShellCompletion* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_shellcompletion_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KShellCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_shellcompletion_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_shellcompletion_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#makeCompletion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
/// @param text const char*
///
const char* k_shellcompletion_make_completion(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#makeCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KShellCompletion*
/// @param callback const char* func(KShellCompletion* self, const char* text)
///
void k_shellcompletion_on_make_completion(void* self, const char* (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#makeCompletion)
///
/// Base class method implementation
///
/// @param self KShellCompletion*
/// @param text const char*
///
const char* k_shellcompletion_qbase_make_completion(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#postProcessMatches)
///
/// @param self KShellCompletion*
/// @param matches const char**
///
void k_shellcompletion_post_process_matches(void* self, const char* matches[static 1]);

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, const char** matches)
///
void k_shellcompletion_on_post_process_matches(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self KShellCompletion*
/// @param matches const char**
///
void k_shellcompletion_qbase_post_process_matches(void* self, const char* matches[static 1]);

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#postProcessMatches)
///
/// @param self KShellCompletion*
/// @param matches KCompletionMatches*
///
void k_shellcompletion_post_process_matches2(void* self, void* matches);

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, KCompletionMatches* matches)
///
void k_shellcompletion_on_post_process_matches2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self KShellCompletion*
/// @param matches KCompletionMatches*
///
void k_shellcompletion_qbase_post_process_matches2(void* self, void* matches);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_shellcompletion_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_shellcompletion_tr3(const char* s, const char* c, int n);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
/// @param text const char*
///
const char* k_shellcompletion_replaced_path(void* self, const char* text);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param text const char*
/// @param replaceHome bool
///
const char* k_shellcompletion_replaced_path2(const char* text, bool replaceHome);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMimeTypeFilters)
///
/// @param self KShellCompletion*
/// @param mimeTypes const char**
///
void k_shellcompletion_set_mime_type_filters(void* self, const char* mimeTypes[static 1]);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mimeTypeFilters)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
///
const char** k_shellcompletion_mime_type_filters(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replacedPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param text const char*
/// @param replaceHome bool
/// @param replaceEnv bool
///
const char* k_shellcompletion_replaced_path3(const char* text, bool replaceHome, bool replaceEnv);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#substringCompletion)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
/// @param stringVal const char*
///
const char** k_shellcompletion_substring_completion(void* self, const char* stringVal);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#items)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
///
const char** k_shellcompletion_items(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#isEmpty)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_is_empty(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#completionMode)
///
/// @param self KShellCompletion*
///
/// @return enum KCompletion__CompletionMode
///
int32_t k_shellcompletion_completion_mode(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#order)
///
/// @param self KShellCompletion*
///
/// @return enum KCompletion__CompOrder
///
int32_t k_shellcompletion_order(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#ignoreCase)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_ignore_case(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_should_auto_suggest(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
///
const char** k_shellcompletion_all_matches(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
/// @param stringVal const char*
///
const char** k_shellcompletion_all_matches2(void* self, const char* stringVal);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KShellCompletion*
///
KCompletionMatches* k_shellcompletion_all_weighted_matches(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KShellCompletion*
/// @param stringVal const char*
///
KCompletionMatches* k_shellcompletion_all_weighted_matches2(void* self, const char* stringVal);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#soundsEnabled)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_sounds_enabled(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#hasMultipleMatches)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_has_multiple_matches(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#previousMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
///
const char* k_shellcompletion_previous_match(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#nextMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
///
const char* k_shellcompletion_next_match(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#insertItems)
///
/// @param self KShellCompletion*
/// @param items const char**
///
void k_shellcompletion_insert_items(void* self, const char* items[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KShellCompletion*
/// @param item const char*
///
void k_shellcompletion_add_item(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KShellCompletion*
/// @param item const char*
/// @param weight uint32_t
///
void k_shellcompletion_add_item2(void* self, const char* item, uint32_t weight);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#removeItem)
///
/// @param self KShellCompletion*
/// @param item const char*
///
void k_shellcompletion_remove_item(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#match)
///
/// @param self KShellCompletion*
/// @param item const char*
///
void k_shellcompletion_match(void* self, const char* item);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#match)
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, const char* item)
///
void k_shellcompletion_on_match(void* self, void (*callback)(void*, const char*));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KShellCompletion*
/// @param matchlist const char**
///
void k_shellcompletion_matches(void* self, const char* matchlist[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, const char** matchlist)
///
void k_shellcompletion_on_matches(void* self, void (*callback)(void*, const char**));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KShellCompletion*
///
void k_shellcompletion_multiple_matches(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self)
///
void k_shellcompletion_on_multiple_matches(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
///
const char* k_shellcompletion_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KShellCompletion*
/// @param name char*
///
void k_shellcompletion_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KShellCompletion*
/// @param b bool
///
bool k_shellcompletion_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KShellCompletion*
///
QThread* k_shellcompletion_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KShellCompletion*
/// @param thread QThread*
///
bool k_shellcompletion_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KShellCompletion*
/// @param interval int
///
int32_t k_shellcompletion_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KShellCompletion*
/// @param id int
///
void k_shellcompletion_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KShellCompletion*
/// @param id enum Qt__TimerId
///
void k_shellcompletion_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KShellCompletion*
///
libqt_list /* of QObject* */ k_shellcompletion_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KShellCompletion*
/// @param parent QObject*
///
void k_shellcompletion_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KShellCompletion*
/// @param filterObj QObject*
///
void k_shellcompletion_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KShellCompletion*
/// @param obj QObject*
///
void k_shellcompletion_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_shellcompletion_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KShellCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_shellcompletion_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_shellcompletion_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_shellcompletion_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KShellCompletion*
///
void k_shellcompletion_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KShellCompletion*
///
void k_shellcompletion_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KShellCompletion*
/// @param name const char*
/// @param value QVariant*
///
bool k_shellcompletion_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KShellCompletion*
/// @param name const char*
///
QVariant* k_shellcompletion_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KShellCompletion*
///
const char** k_shellcompletion_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KShellCompletion*
///
QBindingStorage* k_shellcompletion_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KShellCompletion*
///
const QBindingStorage* k_shellcompletion_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KShellCompletion*
///
void k_shellcompletion_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self)
///
void k_shellcompletion_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KShellCompletion*
///
QObject* k_shellcompletion_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KShellCompletion*
/// @param classname const char*
///
bool k_shellcompletion_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KShellCompletion*
///
void k_shellcompletion_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KShellCompletion*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_shellcompletion_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KShellCompletion*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_shellcompletion_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_shellcompletion_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KShellCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_shellcompletion_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KShellCompletion*
/// @param param1 QObject*
///
void k_shellcompletion_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, QObject* param1)
///
void k_shellcompletion_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param dir QUrl*
///
void k_shellcompletion_set_dir(void* self, void* dir);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param dir QUrl*
///
void k_shellcompletion_qbase_set_dir(void* self, void* dir);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setDir)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, QUrl* dir)
///
void k_shellcompletion_on_set_dir(void* self, void (*callback)(void*, void*));

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
QUrl* k_shellcompletion_dir(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
QUrl* k_shellcompletion_qbase_dir(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#dir)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback QUrl* func()
///
void k_shellcompletion_on_dir(void* self, QUrl* (*callback)());

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_is_running(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_qbase_is_running(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#isRunning)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback bool func()
///
void k_shellcompletion_on_is_running(void* self, bool (*callback)());

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
void k_shellcompletion_stop(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
void k_shellcompletion_qbase_stop(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#stop)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func()
///
void k_shellcompletion_on_stop(void* self, void (*callback)());

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
/// @return enum KUrlCompletion__Mode
///
int32_t k_shellcompletion_mode(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
/// @return enum KUrlCompletion__Mode
///
int32_t k_shellcompletion_qbase_mode(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#mode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback int32_t func()
///
void k_shellcompletion_on_mode(void* self, int32_t (*callback)());

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param mode enum KUrlCompletion__Mode
///
void k_shellcompletion_set_mode(void* self, int32_t mode);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param mode enum KUrlCompletion__Mode
///
void k_shellcompletion_qbase_set_mode(void* self, int32_t mode);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, enum KUrlCompletion__Mode mode)
///
void k_shellcompletion_on_set_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_replace_env(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_qbase_replace_env(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceEnv)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback bool func()
///
void k_shellcompletion_on_replace_env(void* self, bool (*callback)());

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param replace bool
///
void k_shellcompletion_set_replace_env(void* self, bool replace);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param replace bool
///
void k_shellcompletion_qbase_set_replace_env(void* self, bool replace);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceEnv)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, bool replace)
///
void k_shellcompletion_on_set_replace_env(void* self, void (*callback)(void*, bool));

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_replace_home(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
bool k_shellcompletion_qbase_replace_home(void* self);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#replaceHome)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback bool func()
///
void k_shellcompletion_on_replace_home(void* self, bool (*callback)());

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param replace bool
///
void k_shellcompletion_set_replace_home(void* self, bool replace);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param replace bool
///
void k_shellcompletion_qbase_set_replace_home(void* self, bool replace);

/// Inherited from KUrlCompletion
///
/// [Upstream resources](https://api.kde.org/kurlcompletion.html#setReplaceHome)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, bool replace)
///
void k_shellcompletion_on_set_replace_home(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
const char* k_shellcompletion_last_match(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Caller is responsible for freeing the returned memory
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
const char* k_shellcompletion_qbase_last_match(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback const char* func()
///
void k_shellcompletion_on_last_match(void* self, const char* (*callback)());

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param mode enum KCompletion__CompletionMode
///
void k_shellcompletion_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param mode enum KCompletion__CompletionMode
///
void k_shellcompletion_qbase_set_completion_mode(void* self, int32_t mode);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, enum KCompletion__CompletionMode mode)
///
void k_shellcompletion_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param order enum KCompletion__CompOrder
///
void k_shellcompletion_set_order(void* self, int32_t order);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param order enum KCompletion__CompOrder
///
void k_shellcompletion_qbase_set_order(void* self, int32_t order);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, enum KCompletion__CompOrder order)
///
void k_shellcompletion_on_set_order(void* self, void (*callback)(void*, int32_t));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param ignoreCase bool
///
void k_shellcompletion_set_ignore_case(void* self, bool ignoreCase);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param ignoreCase bool
///
void k_shellcompletion_qbase_set_ignore_case(void* self, bool ignoreCase);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, bool ignoreCase)
///
void k_shellcompletion_on_set_ignore_case(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param enable bool
///
void k_shellcompletion_set_sounds_enabled(void* self, bool enable);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param enable bool
///
void k_shellcompletion_qbase_set_sounds_enabled(void* self, bool enable);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, bool enable)
///
void k_shellcompletion_on_set_sounds_enabled(void* self, void (*callback)(void*, bool));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param itemList const char**
///
void k_shellcompletion_set_items(void* self, const char* itemList[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param itemList const char**
///
void k_shellcompletion_qbase_set_items(void* self, const char* itemList[static 1]);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, const char** itemList)
///
void k_shellcompletion_on_set_items(void* self, void (*callback)(void*, const char**));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
void k_shellcompletion_clear(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
void k_shellcompletion_qbase_clear(void* self);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func()
///
void k_shellcompletion_on_clear(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QEvent*
///
bool k_shellcompletion_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QEvent*
///
bool k_shellcompletion_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback bool func(KShellCompletion* self, QEvent* event)
///
void k_shellcompletion_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_shellcompletion_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_shellcompletion_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback bool func(KShellCompletion* self, QObject* watched, QEvent* event)
///
void k_shellcompletion_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QTimerEvent*
///
void k_shellcompletion_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QTimerEvent*
///
void k_shellcompletion_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, QTimerEvent* event)
///
void k_shellcompletion_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QChildEvent*
///
void k_shellcompletion_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QChildEvent*
///
void k_shellcompletion_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, QChildEvent* event)
///
void k_shellcompletion_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QEvent*
///
void k_shellcompletion_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param event QEvent*
///
void k_shellcompletion_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, QEvent* event)
///
void k_shellcompletion_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal QMetaMethod*
///
void k_shellcompletion_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal QMetaMethod*
///
void k_shellcompletion_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, QMetaMethod* signal)
///
void k_shellcompletion_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal QMetaMethod*
///
void k_shellcompletion_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal QMetaMethod*
///
void k_shellcompletion_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, QMetaMethod* signal)
///
void k_shellcompletion_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param shouldAutosuggest bool
///
void k_shellcompletion_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param shouldAutosuggest bool
///
void k_shellcompletion_qbase_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// Inherited from KCompletion
///
/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, bool shouldAutosuggest)
///
void k_shellcompletion_on_set_should_auto_suggest(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
QObject* k_shellcompletion_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
QObject* k_shellcompletion_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback QObject* func()
///
void k_shellcompletion_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
///
int32_t k_shellcompletion_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
///
int32_t k_shellcompletion_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback int32_t func()
///
void k_shellcompletion_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal const char*
///
int32_t k_shellcompletion_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal const char*
///
int32_t k_shellcompletion_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback int32_t func(KShellCompletion* self, const char* signal)
///
void k_shellcompletion_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal QMetaMethod*
///
bool k_shellcompletion_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param signal QMetaMethod*
///
bool k_shellcompletion_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KShellCompletion*
/// @param callback bool func(KShellCompletion* self, QMetaMethod* signal)
///
void k_shellcompletion_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KShellCompletion*
/// @param callback void func(KShellCompletion* self, const char* objectName)
///
void k_shellcompletion_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kshellcompletion.html#dtor.KShellCompletion)
///
/// Delete this object from C++ memory.
///
/// @param self KShellCompletion*
///
void k_shellcompletion_delete(void* self);

#endif
