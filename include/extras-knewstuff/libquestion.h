#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFQT6C_LIBQUESTION_H
#define SRC_EXTRAS_KNEWSTUFFQT6C_LIBQUESTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knscore-question.html

/// k_nscore__question_new constructs a new KNSCore::Question object.
///
KNSCore__Question* k_nscore__question_new();

/// k_nscore__question_new2 constructs a new KNSCore::Question object.
///
/// @param param1 enum KNSCore__Question__QuestionType
KNSCore__Question* k_nscore__question_new2(int32_t param1);

/// k_nscore__question_new3 constructs a new KNSCore::Question object.
///
/// @param param1 enum KNSCore__Question__QuestionType
/// @param parent QObject*
KNSCore__Question* k_nscore__question_new3(int32_t param1, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNSCore__Question*
const QMetaObject* k_nscore__question_meta_object(void* self);

/// @param self KNSCore__Question*
/// @param param1 const char*
void* k_nscore__question_metacast(void* self, const char* param1);

/// @param self KNSCore__Question*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_nscore__question_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNSCore__Question*
/// @param callback int32_t func(KNSCore__Question* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_nscore__question_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNSCore__Question*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_nscore__question_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_nscore__question_tr(const char* s);

/// [Qt documentation](https://api.kde.org/knscore-question.html#ask)
///
/// @param self KNSCore__Question*
///
/// @return enum KNSCore__Question__Response
int32_t k_nscore__question_ask(void* self);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setQuestionType)
///
/// @param self KNSCore__Question*
void k_nscore__question_set_question_type(void* self);

/// [Qt documentation](https://api.kde.org/knscore-question.html#questionType)
///
/// @param self KNSCore__Question*
///
/// @return enum KNSCore__Question__QuestionType
int32_t k_nscore__question_question_type(void* self);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setQuestion)
///
/// @param self KNSCore__Question*
/// @param newQuestion const char*
void k_nscore__question_set_question(void* self, const char* newQuestion);

/// [Qt documentation](https://api.kde.org/knscore-question.html#question)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Question*
const char* k_nscore__question_question(void* self);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setTitle)
///
/// @param self KNSCore__Question*
/// @param newTitle const char*
void k_nscore__question_set_title(void* self, const char* newTitle);

/// [Qt documentation](https://api.kde.org/knscore-question.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Question*
const char* k_nscore__question_title(void* self);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setList)
///
/// @param self KNSCore__Question*
/// @param newList const char**
void k_nscore__question_set_list(void* self, const char* newList[]);

/// [Qt documentation](https://api.kde.org/knscore-question.html#list)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Question*
const char** k_nscore__question_list(void* self);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setEntry)
///
/// @param self KNSCore__Question*
/// @param entry KNSCore__Entry*
void k_nscore__question_set_entry(void* self, void* entry);

/// [Qt documentation](https://api.kde.org/knscore-question.html#entry)
///
/// @param self KNSCore__Question*
KNSCore__Entry* k_nscore__question_entry(void* self);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setResponse)
///
/// @param self KNSCore__Question*
/// @param response enum KNSCore__Question__Response
void k_nscore__question_set_response(void* self, int32_t response);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setResponse)
///
/// @param self KNSCore__Question*
/// @param response const char*
void k_nscore__question_set_response2(void* self, const char* response);

/// [Qt documentation](https://api.kde.org/knscore-question.html#response)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Question*
const char* k_nscore__question_response(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_nscore__question_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_nscore__question_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/knscore-question.html#setQuestionType)
///
/// @param self KNSCore__Question*
/// @param newType enum KNSCore__Question__QuestionType
void k_nscore__question_set_question_type1(void* self, int32_t newType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Question*
const char* k_nscore__question_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__Question*
/// @param name char*
void k_nscore__question_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__Question*
bool k_nscore__question_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__Question*
bool k_nscore__question_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__Question*
bool k_nscore__question_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__Question*
bool k_nscore__question_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__Question*
/// @param b bool
bool k_nscore__question_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNSCore__Question*
QThread* k_nscore__question_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Question*
/// @param thread QThread*
bool k_nscore__question_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Question*
/// @param interval int
int32_t k_nscore__question_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Question*
/// @param id int
void k_nscore__question_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Question*
/// @param id enum Qt__TimerId
void k_nscore__question_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNSCore__Question*
libqt_list /* of QObject* */ k_nscore__question_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__Question*
/// @param parent QObject*
void k_nscore__question_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__Question*
/// @param filterObj QObject*
void k_nscore__question_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__Question*
/// @param obj QObject*
void k_nscore__question_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_nscore__question_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Question*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_nscore__question_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_nscore__question_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_nscore__question_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__Question*
void k_nscore__question_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__Question*
void k_nscore__question_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__Question*
/// @param name const char*
/// @param value QVariant*
bool k_nscore__question_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__Question*
/// @param name const char*
QVariant* k_nscore__question_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__Question*
const char** k_nscore__question_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Question*
QBindingStorage* k_nscore__question_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Question*
const QBindingStorage* k_nscore__question_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Question*
void k_nscore__question_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self)
void k_nscore__question_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNSCore__Question*
QObject* k_nscore__question_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNSCore__Question*
/// @param classname const char*
bool k_nscore__question_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__Question*
void k_nscore__question_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Question*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_nscore__question_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Question*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_nscore__question_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__question_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Question*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__question_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Question*
/// @param param1 QObject*
void k_nscore__question_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self, QObject* param1)
void k_nscore__question_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QEvent*
bool k_nscore__question_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QEvent*
bool k_nscore__question_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback bool func(KNSCore__Question* self, QEvent* event)
void k_nscore__question_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param watched QObject*
/// @param event QEvent*
bool k_nscore__question_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param watched QObject*
/// @param event QEvent*
bool k_nscore__question_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback bool func(KNSCore__Question* self, QObject* watched, QEvent* event)
void k_nscore__question_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QTimerEvent*
void k_nscore__question_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QTimerEvent*
void k_nscore__question_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self, QTimerEvent* event)
void k_nscore__question_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QChildEvent*
void k_nscore__question_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QChildEvent*
void k_nscore__question_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self, QChildEvent* event)
void k_nscore__question_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QEvent*
void k_nscore__question_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param event QEvent*
void k_nscore__question_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self, QEvent* event)
void k_nscore__question_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal QMetaMethod*
void k_nscore__question_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal QMetaMethod*
void k_nscore__question_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self, QMetaMethod* signal)
void k_nscore__question_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal QMetaMethod*
void k_nscore__question_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal QMetaMethod*
void k_nscore__question_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self, QMetaMethod* signal)
void k_nscore__question_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
QObject* k_nscore__question_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
QObject* k_nscore__question_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback QObject* func()
void k_nscore__question_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
int32_t k_nscore__question_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
int32_t k_nscore__question_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback int32_t func()
void k_nscore__question_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal const char*
int32_t k_nscore__question_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal const char*
int32_t k_nscore__question_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback int32_t func(KNSCore__Question* self, const char* signal)
void k_nscore__question_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal QMetaMethod*
bool k_nscore__question_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param signal QMetaMethod*
bool k_nscore__question_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__Question*
/// @param callback bool func(KNSCore__Question* self, QMetaMethod* signal)
void k_nscore__question_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__Question*
/// @param callback void func(KNSCore__Question* self, const char* objectName)
void k_nscore__question_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Question*
void k_nscore__question_delete(void* self);

/// https://api.kde.org/knscore-question.html#types

typedef enum {
    KNSCORE_QUESTION_RESPONSE_INVALIDRESPONSE = 0,
    KNSCORE_QUESTION_RESPONSE_YESRESPONSE = 1,
    KNSCORE_QUESTION_RESPONSE_NORESPONSE = 2,
    KNSCORE_QUESTION_RESPONSE_CONTINUERESPONSE = 3,
    KNSCORE_QUESTION_RESPONSE_CANCELRESPONSE = 4,
    KNSCORE_QUESTION_RESPONSE_OKRESPONSE = 1
} KNSCore__Question__Response;

typedef enum {
    KNSCORE_QUESTION_QUESTIONTYPE_YESNOQUESTION = 0,
    KNSCORE_QUESTION_QUESTIONTYPE_CONTINUECANCELQUESTION = 1,
    KNSCORE_QUESTION_QUESTIONTYPE_INPUTTEXTQUESTION = 2,
    KNSCORE_QUESTION_QUESTIONTYPE_SELECTFROMLISTQUESTION = 3,
    KNSCORE_QUESTION_QUESTIONTYPE_PASSWORDQUESTION = 4
} KNSCore__Question__QuestionType;

#endif
