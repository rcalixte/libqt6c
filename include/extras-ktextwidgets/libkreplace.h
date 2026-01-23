#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKREPLACE_H
#define SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKREPLACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kreplace.html)

/// k_replace_new constructs a new KReplace object.
///
/// @param pattern const char*
/// @param replacement const char*
/// @param options int64_t
///
KReplace* k_replace_new(const char* pattern, const char* replacement, int64_t options);

/// [Upstream resources](https://api.kde.org/kreplace.html)

/// k_replace_new2 constructs a new KReplace object.
///
/// @param pattern const char*
/// @param replacement const char*
/// @param options int64_t
/// @param parent QWidget*
/// @param replaceDialog QWidget*
///
KReplace* k_replace_new2(const char* pattern, const char* replacement, int64_t options, void* parent, void* replaceDialog);

/// [Upstream resources](https://api.kde.org/kreplace.html)

/// k_replace_new3 constructs a new KReplace object.
///
/// @param pattern const char*
/// @param replacement const char*
/// @param options int64_t
/// @param parent QWidget*
///
KReplace* k_replace_new3(const char* pattern, const char* replacement, int64_t options, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KReplace*
///
const QMetaObject* k_replace_meta_object(void* self);

/// @param self KReplace*
/// @param param1 const char*
///
void* k_replace_metacast(void* self, const char* param1);

/// @param self KReplace*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_replace_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KReplace*
/// @param callback int32_t func(KReplace* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_replace_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KReplace*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_replace_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_replace_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kreplace.html#numReplacements)
///
/// @param self KReplace*
///
int32_t k_replace_num_replacements(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#resetCounts)
///
/// @param self KReplace*
///
void k_replace_reset_counts(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#resetCounts)
///
/// Allows for overriding the related default method
///
/// @param self KReplace*
/// @param callback void func()
///
void k_replace_on_reset_counts(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kreplace.html#resetCounts)
///
/// Base class method implementation
///
/// @param self KReplace*
///
void k_replace_qbase_reset_counts(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#replace)
///
/// @param self KReplace*
///
/// @return enum KFind__Result
///
int32_t k_replace_replace(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#replaceNextDialog)
///
/// @param self KReplace*
///
QDialog* k_replace_replace_next_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#closeReplaceNextDialog)
///
/// @param self KReplace*
///
void k_replace_close_replace_next_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#replace)
///
/// @param text const char*
/// @param pattern const char*
/// @param replacement const char*
/// @param index int
/// @param options int64_t
/// @param replacedLength int*
///
int32_t k_replace_replace2(const char* text, const char* pattern, const char* replacement, int index, int64_t options, int* replacedLength);

/// [Upstream resources](https://api.kde.org/kreplace.html#shouldRestart)
///
/// @param self KReplace*
/// @param forceAsking bool
/// @param showNumMatches bool
///
bool k_replace_should_restart(void* self, bool forceAsking, bool showNumMatches);

/// [Upstream resources](https://api.kde.org/kreplace.html#shouldRestart)
///
/// Allows for overriding the related default method
///
/// @param self KReplace*
/// @param callback bool func(KReplace* self, bool forceAsking, bool showNumMatches)
///
void k_replace_on_should_restart(void* self, bool (*callback)(void*, bool, bool));

/// [Upstream resources](https://api.kde.org/kreplace.html#shouldRestart)
///
/// Base class method implementation
///
/// @param self KReplace*
/// @param forceAsking bool
/// @param showNumMatches bool
///
bool k_replace_qbase_should_restart(void* self, bool forceAsking, bool showNumMatches);

/// [Upstream resources](https://api.kde.org/kreplace.html#displayFinalDialog)
///
/// @param self KReplace*
///
void k_replace_display_final_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#displayFinalDialog)
///
/// Allows for overriding the related default method
///
/// @param self KReplace*
/// @param callback void func()
///
void k_replace_on_display_final_dialog(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kreplace.html#displayFinalDialog)
///
/// Base class method implementation
///
/// @param self KReplace*
///
void k_replace_qbase_display_final_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kreplace.html#textReplaced)
///
/// @param self KReplace*
/// @param text const char*
/// @param replacementIndex int
/// @param replacedLength int
/// @param matchedLength int
///
void k_replace_text_replaced(void* self, const char* text, int replacementIndex, int replacedLength, int matchedLength);

/// [Upstream resources](https://api.kde.org/kreplace.html#textReplaced)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, const char* text, int replacementIndex, int replacedLength, int matchedLength)
///
void k_replace_on_text_replaced(void* self, void (*callback)(void*, const char*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_replace_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_replace_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kreplace.html#replaceNextDialog)
///
/// @param self KReplace*
/// @param create bool
///
QDialog* k_replace_replace_next_dialog1(void* self, bool create);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#needData)
///
/// @param self KReplace*
///
bool k_replace_need_data(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KReplace*
/// @param data const char*
///
void k_replace_set_data(void* self, const char* data);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KReplace*
/// @param id int
/// @param data const char*
///
void k_replace_set_data2(void* self, int id, const char* data);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#find)
///
/// @param self KReplace*
///
/// @return enum KFind__Result
///
int32_t k_replace_find(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#options)
///
/// @param self KReplace*
///
int64_t k_replace_options(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#pattern)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KReplace*
///
const char* k_replace_pattern(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setPattern)
///
/// @param self KReplace*
/// @param pattern const char*
///
void k_replace_set_pattern(void* self, const char* pattern);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#numMatches)
///
/// @param self KReplace*
///
int32_t k_replace_num_matches(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#find)
///
/// @param text const char*
/// @param pattern const char*
/// @param index int
/// @param options int64_t
/// @param matchedLength int*
/// @param rmatch QRegularExpressionMatch*
///
int32_t k_replace_find2(const char* text, const char* pattern, int index, int64_t options, int* matchedLength, void* rmatch);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
///
/// @param self KReplace*
///
QDialog* k_replace_find_next_dialog(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#closeFindNextDialog)
///
/// @param self KReplace*
///
void k_replace_close_find_next_dialog(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#index)
///
/// @param self KReplace*
///
int32_t k_replace_index(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#textFound)
///
/// @param self KReplace*
/// @param text const char*
/// @param matchingIndex int
/// @param matchedLength int
///
void k_replace_text_found(void* self, const char* text, int matchingIndex, int matchedLength);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#textFound)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, const char* text, int matchingIndex, int matchedLength)
///
void k_replace_on_text_found(void* self, void (*callback)(void*, const char*, int, int));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
///
/// @param self KReplace*
/// @param id int
/// @param matchingIndex int
/// @param matchedLength int
///
void k_replace_text_found_at_id(void* self, int id, int matchingIndex, int matchedLength);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, int id, int matchingIndex, int matchedLength)
///
void k_replace_on_text_found_at_id(void* self, void (*callback)(void*, int, int, int));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#findNext)
///
/// @param self KReplace*
///
void k_replace_find_next(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#findNext)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self)
///
void k_replace_on_find_next(void* self, void (*callback)(void*));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
///
/// @param self KReplace*
///
void k_replace_options_changed(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self)
///
void k_replace_on_options_changed(void* self, void (*callback)(void*));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
///
/// @param self KReplace*
///
void k_replace_dialog_closed(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self)
///
void k_replace_on_dialog_closed(void* self, void (*callback)(void*));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KReplace*
/// @param data const char*
/// @param startPos int
///
void k_replace_set_data22(void* self, const char* data, int startPos);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KReplace*
/// @param id int
/// @param data const char*
/// @param startPos int
///
void k_replace_set_data3(void* self, int id, const char* data, int startPos);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
///
/// @param self KReplace*
/// @param create bool
///
QDialog* k_replace_find_next_dialog1(void* self, bool create);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KReplace*
///
const char* k_replace_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KReplace*
/// @param name char*
///
void k_replace_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KReplace*
///
bool k_replace_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KReplace*
///
bool k_replace_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KReplace*
///
bool k_replace_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KReplace*
///
bool k_replace_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KReplace*
/// @param b bool
///
bool k_replace_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KReplace*
///
QThread* k_replace_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KReplace*
/// @param thread QThread*
///
bool k_replace_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KReplace*
/// @param interval int
///
int32_t k_replace_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KReplace*
/// @param time int64_t of nanoseconds
///
int32_t k_replace_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KReplace*
/// @param id int
///
void k_replace_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KReplace*
/// @param id enum Qt__TimerId
///
void k_replace_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KReplace*
///
/// @return libqt_list of QObject*
///
libqt_list k_replace_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KReplace*
/// @param parent QObject*
///
void k_replace_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KReplace*
/// @param filterObj QObject*
///
void k_replace_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KReplace*
/// @param obj QObject*
///
void k_replace_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_replace_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KReplace*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_replace_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_replace_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_replace_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KReplace*
///
void k_replace_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KReplace*
///
void k_replace_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KReplace*
/// @param name const char*
/// @param value QVariant*
///
bool k_replace_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KReplace*
/// @param name const char*
///
QVariant* k_replace_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KReplace*
///
const char** k_replace_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KReplace*
///
QBindingStorage* k_replace_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KReplace*
///
const QBindingStorage* k_replace_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KReplace*
///
void k_replace_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self)
///
void k_replace_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KReplace*
///
QObject* k_replace_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KReplace*
/// @param classname const char*
///
bool k_replace_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KReplace*
///
void k_replace_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KReplace*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_replace_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KReplace*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_replace_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KReplace*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_replace_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_replace_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KReplace*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_replace_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KReplace*
/// @param param1 QObject*
///
void k_replace_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, QObject* param1)
///
void k_replace_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param options int64_t
///
void k_replace_set_options(void* self, int64_t options);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param options int64_t
///
void k_replace_qbase_set_options(void* self, int64_t options);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, int64_t options)
///
void k_replace_on_set_options(void* self, void (*callback)(void*, int64_t));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param text const char*
/// @param index int
/// @param matchedlength int
///
bool k_replace_validate_match(void* self, const char* text, int index, int matchedlength);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param text const char*
/// @param index int
/// @param matchedlength int
///
bool k_replace_qbase_validate_match(void* self, const char* text, int index, int matchedlength);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback bool func(KReplace* self, const char* text, int index, int matchedlength)
///
void k_replace_on_validate_match(void* self, bool (*callback)(void*, const char*, int, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param event QEvent*
///
bool k_replace_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param event QEvent*
///
bool k_replace_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback bool func(KReplace* self, QEvent* event)
///
void k_replace_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_replace_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_replace_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback bool func(KReplace* self, QObject* watched, QEvent* event)
///
void k_replace_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param event QTimerEvent*
///
void k_replace_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param event QTimerEvent*
///
void k_replace_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, QTimerEvent* event)
///
void k_replace_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param event QChildEvent*
///
void k_replace_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param event QChildEvent*
///
void k_replace_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, QChildEvent* event)
///
void k_replace_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param event QEvent*
///
void k_replace_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param event QEvent*
///
void k_replace_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, QEvent* event)
///
void k_replace_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param signal QMetaMethod*
///
void k_replace_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param signal QMetaMethod*
///
void k_replace_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, QMetaMethod* signal)
///
void k_replace_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param signal QMetaMethod*
///
void k_replace_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param signal QMetaMethod*
///
void k_replace_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, QMetaMethod* signal)
///
void k_replace_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
///
QWidget* k_replace_parent_widget(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
///
QWidget* k_replace_qbase_parent_widget(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback QWidget* func()
///
void k_replace_on_parent_widget(void* self, QWidget* (*callback)());

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
///
QWidget* k_replace_dialogs_parent(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
///
QWidget* k_replace_qbase_dialogs_parent(void* self);

/// Inherited from KFind
///
/// [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback QWidget* func()
///
void k_replace_on_dialogs_parent(void* self, QWidget* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
///
QObject* k_replace_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
///
QObject* k_replace_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback QObject* func()
///
void k_replace_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
///
int32_t k_replace_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
///
int32_t k_replace_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback int32_t func()
///
void k_replace_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param signal const char*
///
int32_t k_replace_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param signal const char*
///
int32_t k_replace_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback int32_t func(KReplace* self, const char* signal)
///
void k_replace_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KReplace*
/// @param signal QMetaMethod*
///
bool k_replace_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KReplace*
/// @param signal QMetaMethod*
///
bool k_replace_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KReplace*
/// @param callback bool func(KReplace* self, QMetaMethod* signal)
///
void k_replace_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KReplace*
/// @param callback void func(KReplace* self, const char* objectName)
///
void k_replace_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kreplace.html#dtor.KReplace)
///
/// Delete this object from C++ memory.
///
/// @param self KReplace*
///
void k_replace_delete(void* self);

#endif
