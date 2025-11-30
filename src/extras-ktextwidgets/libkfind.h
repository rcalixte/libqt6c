#pragma once
#ifndef SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKFIND_H
#define SRC_EXTRAS_KTEXTWIDGETS_QT6C_LIBKFIND_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfind.html

/// k_find_new constructs a new KFind object.
///
/// @param pattern const char*
/// @param options int64_t
/// @param parent QWidget*
KFind* k_find_new(const char* pattern, int64_t options, void* parent);

/// k_find_new2 constructs a new KFind object.
///
/// @param pattern const char*
/// @param options int64_t
/// @param parent QWidget*
/// @param findDialog QWidget*
KFind* k_find_new2(const char* pattern, int64_t options, void* parent, void* findDialog);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFind*
const QMetaObject* k_find_meta_object(void* self);

/// @param self KFind*
/// @param param1 const char*
void* k_find_metacast(void* self, const char* param1);

/// @param self KFind*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_find_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback int32_t func(KFind* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_find_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFind*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_find_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_find_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfind.html#needData)
///
/// @param self KFind*
bool k_find_need_data(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param data const char*
void k_find_set_data(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param id int
/// @param data const char*
void k_find_set_data2(void* self, int id, const char* data);

/// [Upstream resources](https://api.kde.org/kfind.html#find)
///
/// @param self KFind*
///
/// @return enum KFind__Result
int32_t k_find_find(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#options)
///
/// @param self KFind*
int64_t k_find_options(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// @param self KFind*
/// @param options int64_t
void k_find_set_options(void* self, int64_t options);

/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback void func(KFind* self, int64_t options)
void k_find_on_set_options(void* self, void (*callback)(void*, int64_t));

/// [Upstream resources](https://api.kde.org/kfind.html#setOptions)
///
/// Base class method implementation
///
/// @param self KFind*
/// @param options int64_t
void k_find_qbase_set_options(void* self, int64_t options);

/// [Upstream resources](https://api.kde.org/kfind.html#pattern)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFind*
const char* k_find_pattern(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#setPattern)
///
/// @param self KFind*
/// @param pattern const char*
void k_find_set_pattern(void* self, const char* pattern);

/// [Upstream resources](https://api.kde.org/kfind.html#numMatches)
///
/// @param self KFind*
int32_t k_find_num_matches(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
///
/// @param self KFind*
void k_find_reset_counts(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback void func()
void k_find_on_reset_counts(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kfind.html#resetCounts)
///
/// Base class method implementation
///
/// @param self KFind*
void k_find_qbase_reset_counts(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// @param self KFind*
/// @param text const char*
/// @param index int
/// @param matchedlength int
bool k_find_validate_match(void* self, const char* text, int index, int matchedlength);

/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, const char* text, int index, int matchedlength)
void k_find_on_validate_match(void* self, bool (*callback)(void*, const char*, int, int));

/// [Upstream resources](https://api.kde.org/kfind.html#validateMatch)
///
/// Base class method implementation
///
/// @param self KFind*
/// @param text const char*
/// @param index int
/// @param matchedlength int
bool k_find_qbase_validate_match(void* self, const char* text, int index, int matchedlength);

/// [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
///
/// @param self KFind*
/// @param forceAsking bool
/// @param showNumMatches bool
bool k_find_should_restart(void* self, bool forceAsking, bool showNumMatches);

/// [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, bool forceAsking, bool showNumMatches)
void k_find_on_should_restart(void* self, bool (*callback)(void*, bool, bool));

/// [Upstream resources](https://api.kde.org/kfind.html#shouldRestart)
///
/// Base class method implementation
///
/// @param self KFind*
/// @param forceAsking bool
/// @param showNumMatches bool
bool k_find_qbase_should_restart(void* self, bool forceAsking, bool showNumMatches);

/// [Upstream resources](https://api.kde.org/kfind.html#find)
///
/// @param text const char*
/// @param pattern const char*
/// @param index int
/// @param options int64_t
/// @param matchedLength int*
/// @param rmatch QRegularExpressionMatch*
int32_t k_find_find2(const char* text, const char* pattern, int index, int64_t options, int* matchedLength, void* rmatch);

/// [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
///
/// @param self KFind*
void k_find_display_final_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback void func()
void k_find_on_display_final_dialog(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kfind.html#displayFinalDialog)
///
/// Base class method implementation
///
/// @param self KFind*
void k_find_qbase_display_final_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
///
/// @param self KFind*
QDialog* k_find_find_next_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#closeFindNextDialog)
///
/// @param self KFind*
void k_find_close_find_next_dialog(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#index)
///
/// @param self KFind*
int32_t k_find_index(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#textFound)
///
/// @param self KFind*
/// @param text const char*
/// @param matchingIndex int
/// @param matchedLength int
void k_find_text_found(void* self, const char* text, int matchingIndex, int matchedLength);

/// [Upstream resources](https://api.kde.org/kfind.html#textFound)
///
/// @param self KFind*
/// @param callback void func(KFind* self, const char* text, int matchingIndex, int matchedLength)
void k_find_on_text_found(void* self, void (*callback)(void*, const char*, int, int));

/// [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
///
/// @param self KFind*
/// @param id int
/// @param matchingIndex int
/// @param matchedLength int
void k_find_text_found_at_id(void* self, int id, int matchingIndex, int matchedLength);

/// [Upstream resources](https://api.kde.org/kfind.html#textFoundAtId)
///
/// @param self KFind*
/// @param callback void func(KFind* self, int id, int matchingIndex, int matchedLength)
void k_find_on_text_found_at_id(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://api.kde.org/kfind.html#findNext)
///
/// @param self KFind*
void k_find_find_next(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#findNext)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
void k_find_on_find_next(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
///
/// @param self KFind*
void k_find_options_changed(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#optionsChanged)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
void k_find_on_options_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
///
/// @param self KFind*
void k_find_dialog_closed(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#dialogClosed)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
void k_find_on_dialog_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
///
/// @param self KFind*
QWidget* k_find_parent_widget(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback QWidget* func()
void k_find_on_parent_widget(void* self, QWidget* (*callback)());

/// [Upstream resources](https://api.kde.org/kfind.html#parentWidget)
///
/// Base class method implementation
///
/// @param self KFind*
QWidget* k_find_qbase_parent_widget(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
///
/// @param self KFind*
QWidget* k_find_dialogs_parent(void* self);

/// [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
///
/// Allows for overriding the related default method
///
/// @param self KFind*
/// @param callback QWidget* func()
void k_find_on_dialogs_parent(void* self, QWidget* (*callback)());

/// [Upstream resources](https://api.kde.org/kfind.html#dialogsParent)
///
/// Base class method implementation
///
/// @param self KFind*
QWidget* k_find_qbase_dialogs_parent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_find_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_find_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param data const char*
/// @param startPos int
void k_find_set_data22(void* self, const char* data, int startPos);

/// [Upstream resources](https://api.kde.org/kfind.html#setData)
///
/// @param self KFind*
/// @param id int
/// @param data const char*
/// @param startPos int
void k_find_set_data3(void* self, int id, const char* data, int startPos);

/// [Upstream resources](https://api.kde.org/kfind.html#findNextDialog)
///
/// @param self KFind*
/// @param create bool
QDialog* k_find_find_next_dialog1(void* self, bool create);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFind*
const char* k_find_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFind*
/// @param name char*
void k_find_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFind*
bool k_find_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFind*
bool k_find_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFind*
bool k_find_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFind*
bool k_find_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFind*
/// @param b bool
bool k_find_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFind*
QThread* k_find_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFind*
/// @param thread QThread*
bool k_find_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFind*
/// @param interval int
int32_t k_find_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFind*
/// @param id int
void k_find_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFind*
/// @param id enum Qt__TimerId
void k_find_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFind*
libqt_list /* of QObject* */ k_find_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFind*
/// @param parent QObject*
void k_find_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFind*
/// @param filterObj QObject*
void k_find_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFind*
/// @param obj QObject*
void k_find_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_find_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFind*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_find_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_find_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_find_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFind*
void k_find_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFind*
void k_find_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFind*
/// @param name const char*
/// @param value QVariant*
bool k_find_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFind*
/// @param name const char*
QVariant* k_find_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFind*
const char** k_find_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFind*
QBindingStorage* k_find_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFind*
const QBindingStorage* k_find_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
void k_find_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
/// @param callback void func(KFind* self)
void k_find_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFind*
QObject* k_find_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFind*
/// @param classname const char*
bool k_find_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFind*
void k_find_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFind*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_find_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFind*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_find_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_find_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFind*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_find_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
/// @param param1 QObject*
void k_find_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFind*
/// @param callback void func(KFind* self, QObject* param1)
void k_find_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
bool k_find_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
bool k_find_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, QEvent* event)
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
bool k_find_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, QObject* watched, QEvent* event)
void k_find_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QTimerEvent*
void k_find_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QTimerEvent*
void k_find_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QTimerEvent* event)
void k_find_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QChildEvent*
void k_find_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QChildEvent*
void k_find_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QChildEvent* event)
void k_find_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
void k_find_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param event QEvent*
void k_find_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QEvent* event)
void k_find_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
void k_find_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
void k_find_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QMetaMethod* signal)
void k_find_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
void k_find_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
void k_find_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback void func(KFind* self, QMetaMethod* signal)
void k_find_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
QObject* k_find_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
QObject* k_find_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback QObject* func()
void k_find_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
int32_t k_find_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
int32_t k_find_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback int32_t func()
void k_find_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param signal const char*
int32_t k_find_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param signal const char*
int32_t k_find_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback int32_t func(KFind* self, const char* signal)
void k_find_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
bool k_find_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFind*
/// @param signal QMetaMethod*
bool k_find_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFind*
/// @param callback bool func(KFind* self, QMetaMethod* signal)
void k_find_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFind*
/// @param callback void func(KFind* self, const char* objectName)
void k_find_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kfind.html#dtor.KFind)
///
/// Delete this object from C++ memory.
///
/// @param self KFind*
void k_find_delete(void* self);

/// https://api.kde.org/kfind.html#types

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

typedef enum {
    KFIND_RESULT_NOMATCH = 0,
    KFIND_RESULT_MATCH = 1
} KFind__Result;

#endif
