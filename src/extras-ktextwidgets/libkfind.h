#pragma once
#ifndef EXTRAS_KTEXTWIDGETS_LIBKFIND_H
#define EXTRAS_KTEXTWIDGETS_LIBKFIND_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfind.html)

/// k_find_new constructs a new KFind object.
///
/// @param pattern const char*
/// @param options long
/// @param parent QWidget*
///
KFind* k_find_new(const char* pattern, long options, void* parent);

/// [Upstream resources](https://api.kde.org/kfind.html)

/// k_find_new2 constructs a new KFind object.
///
/// @param pattern const char*
/// @param options long
/// @param parent QWidget*
/// @param findDialog QWidget*
///
KFind* k_find_new2(const char* pattern, long options, void* parent, void* findDialog);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KFind*
///
const QMetaObject* k_find_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback const QMetaObject* func(const KFind* self)
///
void k_find_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KFind*
///
const QMetaObject* k_find_super_meta_object(const void* self);

/// @param self KFind*
/// @param param1 const char*
///
void* k_find_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback void* func(KFind* self, const char* param1)
///
void k_find_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KFind*
/// @param param1 const char*
///
void* k_find_super_metacast(void* self, const char* param1);

/// @param self KFind*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_find_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback int32_t func(KFind* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_find_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFind*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_find_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_find_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfind.html#needData)
///
/// @param self const KFind*
///
bool k_find_need_data(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param data const char*
///
void k_find_set_data(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param id int
/// @param data const char*
///
void k_find_set_data2(void* self, int id, const char* data);

/// [Upstream resources](https://api.kde.org/kfind.html#find)
///
/// @param self KFind*
///
/// @return enum KFind__Result
///
int32_t k_find_find(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#options)
///
/// @param self const KFind*
///
long k_find_options(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// @param self KFind*
/// @param options long
///
void k_find_set_options(void* self, long options);

/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback void func(KFind* self, long options)
///
void k_find_on_set_options(void* self, void (*callback)(void*, long));

/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// Base class method implementation
///
/// @param self KFind*
/// @param options long
///
void k_find_super_set_options(void* self, long options);

/// [Upstream resources](https://api.kde.org/kfind.html#pattern)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFind*
///
const char* k_find_pattern(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#setPattern)
///
/// @param self KFind*
/// @param pattern const char*
///
void k_find_set_pattern(void* self, const char* pattern);

/// [Upstream resources](https://api.kde.org/kfind.html#numMatches)
///
/// @param self const KFind*
///
int32_t k_find_num_matches(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
///
/// @param self KFind*
///
void k_find_reset_counts(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback void func(KFind* self)
///
void k_find_on_reset_counts(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
///
/// Base class method implementation
///
/// @param self KFind*
///
void k_find_super_reset_counts(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// @param self KFind*
/// @param text const char*
/// @param index int
/// @param matchedlength int
///
bool k_find_validate_match(void* self, const char* text, int index, int matchedlength);

/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, const char* text, int index, int matchedlength)
///
void k_find_on_validate_match(void* self, bool (*callback)(void*, const char*, int, int));

/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// Base class method implementation
///
/// @param self KFind*
/// @param text const char*
/// @param index int
/// @param matchedlength int
///
bool k_find_super_validate_match(void* self, const char* text, int index, int matchedlength);

/// [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
///
/// @param self const KFind*
/// @param forceAsking bool
/// @param showNumMatches bool
///
bool k_find_should_restart(const void* self, bool forceAsking, bool showNumMatches);

/// [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback bool func(const KFind* self, bool forceAsking, bool showNumMatches)
///
void k_find_on_should_restart(void* self, bool (*callback)(const void*, bool, bool));

/// [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
///
/// Base class method implementation
///
/// @param self const KFind*
/// @param forceAsking bool
/// @param showNumMatches bool
///
bool k_find_super_should_restart(const void* self, bool forceAsking, bool showNumMatches);

/// [Upstream resources](https://api.kde.org/kfind.html#find)
///
/// @param text const char*
/// @param pattern const char*
/// @param index int
/// @param options long
/// @param matchedLength int*
/// @param rmatch QRegularExpressionMatch*
///
int32_t k_find_find2(const char* text, const char* pattern, int index, long options, int* matchedLength, void* rmatch);

/// [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
///
/// @param self const KFind*
///
void k_find_display_final_dialog(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback void func(const KFind* self)
///
void k_find_on_display_final_dialog(void* self, void (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
///
/// Base class method implementation
///
/// @param self const KFind*
///
void k_find_super_display_final_dialog(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
///
/// @param self KFind*
///
QDialog* k_find_find_next_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#closeFindNextDialog)
///
/// @param self KFind*
///
void k_find_close_find_next_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#index)
///
/// @param self const KFind*
///
int32_t k_find_index(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#textFound)
///
/// @param self KFind*
/// @param text const char*
/// @param matchingIndex int
/// @param matchedLength int
///
void k_find_text_found(void* self, const char* text, int matchingIndex, int matchedLength);

/// [Upstream resources](https://api.kde.org/kfind.html#textFound)
///
/// @param self KFind*
/// @param callback void func(KFind* self, const char* text, int matchingIndex, int matchedLength)
///
void k_find_on_text_found(void* self, void (*callback)(void*, const char*, int, int));

/// [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
///
/// @param self KFind*
/// @param id int
/// @param matchingIndex int
/// @param matchedLength int
///
void k_find_text_found_at_id(void* self, int id, int matchingIndex, int matchedLength);

/// [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
///
/// @param self KFind*
/// @param callback void func(KFind* self, int id, int matchingIndex, int matchedLength)
///
void k_find_on_text_found_at_id(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://api.kde.org/kfind.html#findNext)
///
/// @param self KFind*
///
void k_find_find_next(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#findNext)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
///
void k_find_on_find_next(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
///
/// @param self KFind*
///
void k_find_options_changed(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
///
void k_find_on_options_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
///
/// @param self KFind*
///
void k_find_dialog_closed(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
///
void k_find_on_dialog_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
///
/// @param self const KFind*
///
QWidget* k_find_parent_widget(const void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
///
/// @param self const KFind*
///
QWidget* k_find_dialogs_parent(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_find_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_find_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param data const char*
/// @param startPos int
///
void k_find_set_data22(void* self, const char* data, int startPos);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param id int
/// @param data const char*
/// @param startPos int
///
void k_find_set_data3(void* self, int id, const char* data, int startPos);

/// [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
///
/// @param self KFind*
/// @param create bool
///
QDialog* k_find_find_next_dialog1(void* self, bool create);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KFind*
///
const char* k_find_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFind*
/// @param name const char*
///
void k_find_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KFind*
///
bool k_find_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KFind*
///
bool k_find_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KFind*
///
bool k_find_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KFind*
///
bool k_find_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFind*
/// @param b bool
///
bool k_find_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KFind*
///
QThread* k_find_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFind*
/// @param thread QThread*
///
bool k_find_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFind*
/// @param interval int
///
int32_t k_find_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFind*
/// @param time int64_t of nanoseconds
///
int32_t k_find_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFind*
/// @param id int
///
void k_find_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFind*
/// @param id enum Qt__TimerId
///
void k_find_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KFind*
///
/// @return libqt_list of QObject*
///
libqt_list k_find_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFind*
/// @param parent QObject*
///
void k_find_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFind*
/// @param filterObj QObject*
///
void k_find_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFind*
/// @param obj QObject*
///
void k_find_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_find_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_find_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KFind*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_find_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_find_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_find_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFind*
///
bool k_find_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFind*
/// @param receiver QObject*
///
bool k_find_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_find_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KFind*
///
void k_find_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KFind*
///
void k_find_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFind*
/// @param name const char*
/// @param value QVariant*
///
bool k_find_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KFind*
/// @param name const char*
///
QVariant* k_find_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KFind*
///
const char** k_find_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFind*
///
QBindingStorage* k_find_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KFind*
///
const QBindingStorage* k_find_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
///
void k_find_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
///
void k_find_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KFind*
///
QObject* k_find_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KFind*
/// @param classname const char*
///
bool k_find_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFind*
///
void k_find_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFind*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_find_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFind*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_find_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_find_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_find_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KFind*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_find_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFind*
/// @param signal const char*
///
bool k_find_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFind*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_find_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFind*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_find_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KFind*
/// @param receiver QObject*
/// @param member const char*
///
bool k_find_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
/// @param param1 QObject*
///
void k_find_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
/// @param callback void func(KFind* self, QObject* param1)
///
void k_find_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
///
bool k_find_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
///
bool k_find_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, QEvent* event)
///
void k_find_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_find_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_find_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, QObject* watched, QEvent* event)
///
void k_find_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QTimerEvent*
///
void k_find_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QTimerEvent*
///
void k_find_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QTimerEvent* event)
///
void k_find_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QChildEvent*
///
void k_find_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QChildEvent*
///
void k_find_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QChildEvent* event)
///
void k_find_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
///
void k_find_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
///
void k_find_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QEvent* event)
///
void k_find_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
///
void k_find_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
///
void k_find_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QMetaMethod* signal)
///
void k_find_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
///
void k_find_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
///
void k_find_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QMetaMethod* signal)
///
void k_find_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFind*
///
QObject* k_find_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFind*
///
QObject* k_find_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback QObject* func(KFind* self)
///
void k_find_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFind*
///
int32_t k_find_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFind*
///
int32_t k_find_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback int32_t func(KFind* self)
///
void k_find_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFind*
/// @param signal const char*
///
int32_t k_find_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFind*
/// @param signal const char*
///
int32_t k_find_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback int32_t func(KFind* self, const char* signal)
///
void k_find_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KFind*
/// @param signal QMetaMethod*
///
bool k_find_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KFind*
/// @param signal QMetaMethod*
///
bool k_find_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, QMetaMethod* signal)
///
void k_find_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFind*
/// @param callback void func(KFind* self, const char* objectName)
///
void k_find_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfind.html#dtor.KFind)
///
/// Delete this object from C++ memory.
///
/// @param self KFind*
///
void k_find_delete(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#public-types)

typedef enum {
    KFIND_OPTIONS_WHOLEWORDSONLY = 1,
    KFIND_OPTIONS_FROMCURSOR = 2,
    KFIND_OPTIONS_SELECTEDTEXT = 4,
    KFIND_OPTIONS_CASESENSITIVE = 8,
    KFIND_OPTIONS_FINDBACKWARDS = 16,
    KFIND_OPTIONS_REGULAREXPRESSION = 32,
    KFIND_OPTIONS_FINDINCREMENTAL = 64,
    KFIND_OPTIONS_MINIMUMUSEROPTION = 65536
} KFind__Options;

/// [Upstream resources](https://api.kde.org/kfind.html#public-types)

typedef enum {
    KFIND_RESULT_NOMATCH = 0,
    KFIND_RESULT_MATCH = 1
} KFind__Result;

#endif
