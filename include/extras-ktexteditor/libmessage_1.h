#pragma once
#ifndef SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMESSAGE_H
#define SRC_EXTRAS_KTEXTEDITOR_QT6C_LIBMESSAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktexteditor-message.html

/// k_texteditor__message_new constructs a new KTextEditor::Message object.
///
/// @param richtext const char*
KTextEditor__Message* k_texteditor__message_new(const char* richtext);

/// k_texteditor__message_new2 constructs a new KTextEditor::Message object.
///
/// @param richtext const char*
/// @param type enum KTextEditor__Message__MessageType
KTextEditor__Message* k_texteditor__message_new2(const char* richtext, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTextEditor__Message*
const QMetaObject* k_texteditor__message_meta_object(void* self);

/// @param self KTextEditor__Message*
/// @param param1 const char*
void* k_texteditor__message_metacast(void* self, const char* param1);

/// @param self KTextEditor__Message*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_texteditor__message_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTextEditor__Message*
/// @param callback int32_t func(KTextEditor__Message* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_texteditor__message_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTextEditor__Message*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_texteditor__message_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_texteditor__message_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Message*
const char* k_texteditor__message_text(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#icon)
///
/// @param self KTextEditor__Message*
QIcon* k_texteditor__message_icon(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#messageType)
///
/// @param self KTextEditor__Message*
///
/// @return enum KTextEditor__Message__MessageType
int32_t k_texteditor__message_message_type(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#addAction)
///
/// @param self KTextEditor__Message*
/// @param action QAction*
void k_texteditor__message_add_action(void* self, void* action);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#actions)
///
/// @param self KTextEditor__Message*
libqt_list /* of QAction* */ k_texteditor__message_actions(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHide)
///
/// @param self KTextEditor__Message*
void k_texteditor__message_set_auto_hide(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#autoHide)
///
/// @param self KTextEditor__Message*
int32_t k_texteditor__message_auto_hide(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHideMode)
///
/// @param self KTextEditor__Message*
/// @param mode enum KTextEditor__Message__AutoHideMode
void k_texteditor__message_set_auto_hide_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#autoHideMode)
///
/// @param self KTextEditor__Message*
///
/// @return enum KTextEditor__Message__AutoHideMode
int32_t k_texteditor__message_auto_hide_mode(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setWordWrap)
///
/// @param self KTextEditor__Message*
/// @param wordWrap bool
void k_texteditor__message_set_word_wrap(void* self, bool wordWrap);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#wordWrap)
///
/// @param self KTextEditor__Message*
bool k_texteditor__message_word_wrap(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setPriority)
///
/// @param self KTextEditor__Message*
/// @param priority int
void k_texteditor__message_set_priority(void* self, int priority);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#priority)
///
/// @param self KTextEditor__Message*
int32_t k_texteditor__message_priority(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setView)
///
/// @param self KTextEditor__Message*
/// @param view KTextEditor__View*
void k_texteditor__message_set_view(void* self, void* view);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#view)
///
/// @param self KTextEditor__Message*
KTextEditor__View* k_texteditor__message_view(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setDocument)
///
/// @param self KTextEditor__Message*
/// @param document KTextEditor__Document*
void k_texteditor__message_set_document(void* self, void* document);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#document)
///
/// @param self KTextEditor__Message*
KTextEditor__Document* k_texteditor__message_document(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setPosition)
///
/// @param self KTextEditor__Message*
/// @param position enum KTextEditor__Message__MessagePosition
void k_texteditor__message_set_position(void* self, int32_t position);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#position)
///
/// @param self KTextEditor__Message*
///
/// @return enum KTextEditor__Message__MessagePosition
int32_t k_texteditor__message_position(void* self);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setText)
///
/// @param self KTextEditor__Message*
/// @param richtext const char*
void k_texteditor__message_set_text(void* self, const char* richtext);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setIcon)
///
/// @param self KTextEditor__Message*
/// @param icon QIcon*
void k_texteditor__message_set_icon(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#closed)
///
/// @param self KTextEditor__Message*
/// @param message KTextEditor__Message*
void k_texteditor__message_closed(void* self, void* message);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#closed)
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, KTextEditor__Message* message)
void k_texteditor__message_on_closed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#textChanged)
///
/// @param self KTextEditor__Message*
/// @param text const char*
void k_texteditor__message_text_changed(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#textChanged)
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, const char* text)
void k_texteditor__message_on_text_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#iconChanged)
///
/// @param self KTextEditor__Message*
/// @param icon QIcon*
void k_texteditor__message_icon_changed(void* self, void* icon);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#iconChanged)
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, QIcon* icon)
void k_texteditor__message_on_icon_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_texteditor__message_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_texteditor__message_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#addAction)
///
/// @param self KTextEditor__Message*
/// @param action QAction*
/// @param closeOnTrigger bool
void k_texteditor__message_add_action2(void* self, void* action, bool closeOnTrigger);

/// [Upstream resources](https://api.kde.org/ktexteditor-message.html#setAutoHide)
///
/// @param self KTextEditor__Message*
/// @param delay int
void k_texteditor__message_set_auto_hide1(void* self, int delay);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Message*
const char* k_texteditor__message_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTextEditor__Message*
/// @param name char*
void k_texteditor__message_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTextEditor__Message*
bool k_texteditor__message_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTextEditor__Message*
bool k_texteditor__message_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTextEditor__Message*
bool k_texteditor__message_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTextEditor__Message*
bool k_texteditor__message_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTextEditor__Message*
/// @param b bool
bool k_texteditor__message_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTextEditor__Message*
QThread* k_texteditor__message_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Message*
/// @param thread QThread*
bool k_texteditor__message_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Message*
/// @param interval int
int32_t k_texteditor__message_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Message*
/// @param id int
void k_texteditor__message_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTextEditor__Message*
/// @param id enum Qt__TimerId
void k_texteditor__message_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTextEditor__Message*
libqt_list /* of QObject* */ k_texteditor__message_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTextEditor__Message*
/// @param parent QObject*
void k_texteditor__message_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTextEditor__Message*
/// @param filterObj QObject*
void k_texteditor__message_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTextEditor__Message*
/// @param obj QObject*
void k_texteditor__message_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_texteditor__message_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Message*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_texteditor__message_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_texteditor__message_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_texteditor__message_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTextEditor__Message*
void k_texteditor__message_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTextEditor__Message*
void k_texteditor__message_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTextEditor__Message*
/// @param name const char*
/// @param value QVariant*
bool k_texteditor__message_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTextEditor__Message*
/// @param name const char*
QVariant* k_texteditor__message_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTextEditor__Message*
const char** k_texteditor__message_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Message*
QBindingStorage* k_texteditor__message_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTextEditor__Message*
const QBindingStorage* k_texteditor__message_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Message*
void k_texteditor__message_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self)
void k_texteditor__message_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTextEditor__Message*
QObject* k_texteditor__message_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTextEditor__Message*
/// @param classname const char*
bool k_texteditor__message_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTextEditor__Message*
void k_texteditor__message_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTextEditor__Message*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_texteditor__message_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTextEditor__Message*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_texteditor__message_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__message_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTextEditor__Message*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_texteditor__message_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Message*
/// @param param1 QObject*
void k_texteditor__message_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, QObject* param1)
void k_texteditor__message_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QEvent*
bool k_texteditor__message_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QEvent*
bool k_texteditor__message_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback bool func(KTextEditor__Message* self, QEvent* event)
void k_texteditor__message_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param watched QObject*
/// @param event QEvent*
bool k_texteditor__message_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param watched QObject*
/// @param event QEvent*
bool k_texteditor__message_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback bool func(KTextEditor__Message* self, QObject* watched, QEvent* event)
void k_texteditor__message_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QTimerEvent*
void k_texteditor__message_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QTimerEvent*
void k_texteditor__message_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, QTimerEvent* event)
void k_texteditor__message_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QChildEvent*
void k_texteditor__message_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QChildEvent*
void k_texteditor__message_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, QChildEvent* event)
void k_texteditor__message_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QEvent*
void k_texteditor__message_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param event QEvent*
void k_texteditor__message_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, QEvent* event)
void k_texteditor__message_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal QMetaMethod*
void k_texteditor__message_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal QMetaMethod*
void k_texteditor__message_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, QMetaMethod* signal)
void k_texteditor__message_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal QMetaMethod*
void k_texteditor__message_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal QMetaMethod*
void k_texteditor__message_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, QMetaMethod* signal)
void k_texteditor__message_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
QObject* k_texteditor__message_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
QObject* k_texteditor__message_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback QObject* func()
void k_texteditor__message_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
int32_t k_texteditor__message_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
int32_t k_texteditor__message_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback int32_t func()
void k_texteditor__message_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal const char*
int32_t k_texteditor__message_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal const char*
int32_t k_texteditor__message_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback int32_t func(KTextEditor__Message* self, const char* signal)
void k_texteditor__message_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal QMetaMethod*
bool k_texteditor__message_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param signal QMetaMethod*
bool k_texteditor__message_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTextEditor__Message*
/// @param callback bool func(KTextEditor__Message* self, QMetaMethod* signal)
void k_texteditor__message_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTextEditor__Message*
/// @param callback void func(KTextEditor__Message* self, const char* objectName)
void k_texteditor__message_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KTextEditor__Message*
void k_texteditor__message_delete(void* self);

/// https://api.kde.org/message.html#types

typedef enum {
    KTEXTEDITOR_MESSAGE_MESSAGETYPE_POSITIVE = 0,
    KTEXTEDITOR_MESSAGE_MESSAGETYPE_INFORMATION = 1,
    KTEXTEDITOR_MESSAGE_MESSAGETYPE_WARNING = 2,
    KTEXTEDITOR_MESSAGE_MESSAGETYPE_ERROR = 3
} KTextEditor__Message__MessageType;

typedef enum {
    KTEXTEDITOR_MESSAGE_MESSAGEPOSITION_ABOVEVIEW = 0,
    KTEXTEDITOR_MESSAGE_MESSAGEPOSITION_BELOWVIEW = 1,
    KTEXTEDITOR_MESSAGE_MESSAGEPOSITION_TOPINVIEW = 2,
    KTEXTEDITOR_MESSAGE_MESSAGEPOSITION_BOTTOMINVIEW = 3,
    KTEXTEDITOR_MESSAGE_MESSAGEPOSITION_CENTERINVIEW = 4
} KTextEditor__Message__MessagePosition;

typedef enum {
    KTEXTEDITOR_MESSAGE_AUTOHIDEMODE_IMMEDIATE = 0,
    KTEXTEDITOR_MESSAGE_AUTOHIDEMODE_AFTERUSERINTERACTION = 1
} KTextEditor__Message__AutoHideMode;

#endif
