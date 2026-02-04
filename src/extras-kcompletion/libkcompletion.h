#pragma once
#ifndef SRC_EXTRAS_KCOMPLETION_QT6C_LIBKCOMPLETION_H
#define SRC_EXTRAS_KCOMPLETION_QT6C_LIBKCOMPLETION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcompletion.html)

/// k_completion_new constructs a new KCompletion object.
///
KCompletion* k_completion_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCompletion*
///
const QMetaObject* k_completion_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback const QMetaObject* func()
///
void k_completion_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KCompletion*
///
const QMetaObject* k_completion_qbase_meta_object(void* self);

/// @param self KCompletion*
/// @param param1 const char*
///
void* k_completion_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void* func(KCompletion* self, const char* param1)
///
void k_completion_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KCompletion*
/// @param param1 const char*
///
void* k_completion_qbase_metacast(void* self, const char* param1);

/// @param self KCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_completion_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback int32_t func(KCompletion* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_completion_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCompletion*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_completion_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_completion_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcompletion.html#substringCompletion)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompletion*
/// @param stringVal const char*
///
const char** k_completion_substring_completion(void* self, const char* stringVal);

/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCompletion*
///
const char* k_completion_last_match(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback const char* func()
///
void k_completion_on_last_match(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/kcompletion.html#lastMatch)
///
/// Base class method implementation
///
/// @param self KCompletion*
///
const char* k_completion_qbase_last_match(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#items)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompletion*
///
const char** k_completion_items(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#isEmpty)
///
/// @param self KCompletion*
///
bool k_completion_is_empty(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// @param self KCompletion*
/// @param mode enum KCompletion__CompletionMode
///
void k_completion_set_completion_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, enum KCompletion__CompletionMode mode)
///
void k_completion_on_set_completion_mode(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kcompletion.html#setCompletionMode)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param mode enum KCompletion__CompletionMode
///
void k_completion_qbase_set_completion_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kcompletion.html#completionMode)
///
/// @param self KCompletion*
///
/// @return enum KCompletion__CompletionMode
///
int32_t k_completion_completion_mode(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// @param self KCompletion*
/// @param order enum KCompletion__CompOrder
///
void k_completion_set_order(void* self, int32_t order);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, enum KCompletion__CompOrder order)
///
void k_completion_on_set_order(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kcompletion.html#setOrder)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param order enum KCompletion__CompOrder
///
void k_completion_qbase_set_order(void* self, int32_t order);

/// [Upstream resources](https://api.kde.org/kcompletion.html#order)
///
/// @param self KCompletion*
///
/// @return enum KCompletion__CompOrder
///
int32_t k_completion_order(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// @param self KCompletion*
/// @param ignoreCase bool
///
void k_completion_set_ignore_case(void* self, bool ignoreCase);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, bool ignoreCase)
///
void k_completion_on_set_ignore_case(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kcompletion.html#setIgnoreCase)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param ignoreCase bool
///
void k_completion_qbase_set_ignore_case(void* self, bool ignoreCase);

/// [Upstream resources](https://api.kde.org/kcompletion.html#ignoreCase)
///
/// @param self KCompletion*
///
bool k_completion_ignore_case(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#shouldAutoSuggest)
///
/// @param self KCompletion*
///
bool k_completion_should_auto_suggest(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompletion*
///
const char** k_completion_all_matches(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#allMatches)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompletion*
/// @param stringVal const char*
///
const char** k_completion_all_matches2(void* self, const char* stringVal);

/// [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KCompletion*
///
KCompletionMatches* k_completion_all_weighted_matches(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#allWeightedMatches)
///
/// @param self KCompletion*
/// @param stringVal const char*
///
KCompletionMatches* k_completion_all_weighted_matches2(void* self, const char* stringVal);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// @param self KCompletion*
/// @param enable bool
///
void k_completion_set_sounds_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, bool enable)
///
void k_completion_on_set_sounds_enabled(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kcompletion.html#setSoundsEnabled)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param enable bool
///
void k_completion_qbase_set_sounds_enabled(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcompletion.html#soundsEnabled)
///
/// @param self KCompletion*
///
bool k_completion_sounds_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#hasMultipleMatches)
///
/// @param self KCompletion*
///
bool k_completion_has_multiple_matches(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCompletion*
/// @param stringVal const char*
///
const char* k_completion_make_completion(void* self, const char* stringVal);

/// [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback const char* func(KCompletion* self, const char* stringVal)
///
void k_completion_on_make_completion(void* self, const char* (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcompletion.html#makeCompletion)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param stringVal const char*
///
const char* k_completion_qbase_make_completion(void* self, const char* stringVal);

/// [Upstream resources](https://api.kde.org/kcompletion.html#previousMatch)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCompletion*
///
const char* k_completion_previous_match(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#nextMatch)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCompletion*
///
const char* k_completion_next_match(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#insertItems)
///
/// @param self KCompletion*
/// @param items const char**
///
void k_completion_insert_items(void* self, const char* items[static 1]);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// @param self KCompletion*
/// @param itemList const char**
///
void k_completion_set_items(void* self, const char* itemList[static 1]);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, const char** itemList)
///
void k_completion_on_set_items(void* self, void (*callback)(void*, const char***));

/// [Upstream resources](https://api.kde.org/kcompletion.html#setItems)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param itemList const char**
///
void k_completion_qbase_set_items(void* self, const char* itemList[static 1]);

/// [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KCompletion*
/// @param item const char*
///
void k_completion_add_item(void* self, const char* item);

/// [Upstream resources](https://api.kde.org/kcompletion.html#addItem)
///
/// @param self KCompletion*
/// @param item const char*
/// @param weight uint32_t
///
void k_completion_add_item2(void* self, const char* item, uint32_t weight);

/// [Upstream resources](https://api.kde.org/kcompletion.html#removeItem)
///
/// @param self KCompletion*
/// @param item const char*
///
void k_completion_remove_item(void* self, const char* item);

/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// @param self KCompletion*
///
void k_completion_clear(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func()
///
void k_completion_on_clear(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kcompletion.html#clear)
///
/// Base class method implementation
///
/// @param self KCompletion*
///
void k_completion_qbase_clear(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#match)
///
/// @param self KCompletion*
/// @param item const char*
///
void k_completion_match(void* self, const char* item);

/// [Upstream resources](https://api.kde.org/kcompletion.html#match)
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, const char* item)
///
void k_completion_on_match(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KCompletion*
/// @param matchlist const char**
///
void k_completion_matches(void* self, const char* matchlist[static 1]);

/// [Upstream resources](https://api.kde.org/kcompletion.html#matches)
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, const char** matchlist)
///
void k_completion_on_matches(void* self, void (*callback)(void*, const char***));

/// [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KCompletion*
///
void k_completion_multiple_matches(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#multipleMatches)
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self)
///
void k_completion_on_multiple_matches(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
///
/// @param self KCompletion*
/// @param matchList const char**
///
void k_completion_post_process_matches(void* self, const char* matchList[static 1]);

/// [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, const char** matchList)
///
void k_completion_on_post_process_matches(void* self, void (*callback)(void*, const char***));

/// [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param matchList const char**
///
void k_completion_qbase_post_process_matches(void* self, const char* matchList[static 1]);

/// [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
///
/// @param self KCompletion*
/// @param matches KCompletionMatches*
///
void k_completion_post_process_matches2(void* self, void* matches);

/// [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, KCompletionMatches* matches)
///
void k_completion_on_post_process_matches2(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcompletion.html#postProcessMatches)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param matches KCompletionMatches*
///
void k_completion_qbase_post_process_matches2(void* self, void* matches);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// @param self KCompletion*
/// @param shouldAutosuggest bool
///
void k_completion_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Allows for overriding the related default method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, bool shouldAutosuggest)
///
void k_completion_on_set_should_auto_suggest(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kcompletion.html#setShouldAutoSuggest)
///
/// Base class method implementation
///
/// @param self KCompletion*
/// @param shouldAutosuggest bool
///
void k_completion_qbase_set_should_auto_suggest(void* self, bool shouldAutosuggest);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_completion_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_completion_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCompletion*
///
const char* k_completion_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCompletion*
/// @param name char*
///
void k_completion_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCompletion*
///
bool k_completion_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCompletion*
///
bool k_completion_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCompletion*
///
bool k_completion_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCompletion*
///
bool k_completion_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCompletion*
/// @param b bool
///
bool k_completion_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCompletion*
///
QThread* k_completion_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCompletion*
/// @param thread QThread*
///
bool k_completion_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompletion*
/// @param interval int
///
int32_t k_completion_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompletion*
/// @param time int64_t of nanoseconds
///
int32_t k_completion_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompletion*
/// @param id int
///
void k_completion_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCompletion*
/// @param id enum Qt__TimerId
///
void k_completion_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCompletion*
///
/// @return libqt_list of QObject*
///
libqt_list k_completion_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KCompletion*
/// @param parent QObject*
///
void k_completion_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCompletion*
/// @param filterObj QObject*
///
void k_completion_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCompletion*
/// @param obj QObject*
///
void k_completion_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_completion_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_completion_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_completion_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_completion_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_completion_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompletion*
///
bool k_completion_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompletion*
/// @param receiver QObject*
///
bool k_completion_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_completion_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCompletion*
///
void k_completion_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCompletion*
///
void k_completion_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCompletion*
/// @param name const char*
/// @param value QVariant*
///
bool k_completion_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCompletion*
/// @param name const char*
///
QVariant* k_completion_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCompletion*
///
const char** k_completion_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompletion*
///
QBindingStorage* k_completion_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCompletion*
///
const QBindingStorage* k_completion_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletion*
///
void k_completion_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self)
///
void k_completion_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCompletion*
///
QObject* k_completion_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCompletion*
/// @param classname const char*
///
bool k_completion_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCompletion*
///
void k_completion_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompletion*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_completion_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCompletion*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_completion_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_completion_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_completion_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCompletion*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_completion_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompletion*
/// @param signal const char*
///
bool k_completion_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompletion*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_completion_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompletion*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_completion_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KCompletion*
/// @param receiver QObject*
/// @param member const char*
///
bool k_completion_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletion*
/// @param param1 QObject*
///
void k_completion_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, QObject* param1)
///
void k_completion_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param event QEvent*
///
bool k_completion_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param event QEvent*
///
bool k_completion_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback bool func(KCompletion* self, QEvent* event)
///
void k_completion_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_completion_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_completion_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback bool func(KCompletion* self, QObject* watched, QEvent* event)
///
void k_completion_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param event QTimerEvent*
///
void k_completion_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param event QTimerEvent*
///
void k_completion_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, QTimerEvent* event)
///
void k_completion_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param event QChildEvent*
///
void k_completion_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param event QChildEvent*
///
void k_completion_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, QChildEvent* event)
///
void k_completion_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param event QEvent*
///
void k_completion_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param event QEvent*
///
void k_completion_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, QEvent* event)
///
void k_completion_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param signal QMetaMethod*
///
void k_completion_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param signal QMetaMethod*
///
void k_completion_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, QMetaMethod* signal)
///
void k_completion_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param signal QMetaMethod*
///
void k_completion_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param signal QMetaMethod*
///
void k_completion_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, QMetaMethod* signal)
///
void k_completion_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
///
QObject* k_completion_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
///
QObject* k_completion_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback QObject* func()
///
void k_completion_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
///
int32_t k_completion_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
///
int32_t k_completion_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback int32_t func()
///
void k_completion_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param signal const char*
///
int32_t k_completion_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param signal const char*
///
int32_t k_completion_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback int32_t func(KCompletion* self, const char* signal)
///
void k_completion_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCompletion*
/// @param signal QMetaMethod*
///
bool k_completion_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCompletion*
/// @param signal QMetaMethod*
///
bool k_completion_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCompletion*
/// @param callback bool func(KCompletion* self, QMetaMethod* signal)
///
void k_completion_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCompletion*
/// @param callback void func(KCompletion* self, const char* objectName)
///
void k_completion_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcompletion.html#dtor.KCompletion)
///
/// Delete this object from C++ memory.
///
/// @param self KCompletion*
///
void k_completion_delete(void* self);

/// [Upstream resources](https://api.kde.org/kcompletion.html#public-types)

typedef enum {
    KCOMPLETION_COMPLETIONMODE_COMPLETIONNONE = 1,
    KCOMPLETION_COMPLETIONMODE_COMPLETIONAUTO = 2,
    KCOMPLETION_COMPLETIONMODE_COMPLETIONMAN = 3,
    KCOMPLETION_COMPLETIONMODE_COMPLETIONSHELL = 4,
    KCOMPLETION_COMPLETIONMODE_COMPLETIONPOPUP = 5,
    KCOMPLETION_COMPLETIONMODE_COMPLETIONPOPUPAUTO = 6
} KCompletion__CompletionMode;

/// [Upstream resources](https://api.kde.org/kcompletion.html#public-types)

typedef enum {
    KCOMPLETION_COMPORDER_SORTED = 0,
    KCOMPLETION_COMPORDER_INSERTION = 1,
    KCOMPLETION_COMPORDER_WEIGHTED = 2
} KCompletion__CompOrder;

#endif
