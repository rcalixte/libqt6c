#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBDEFINITIONDOWNLOADER_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTINGQT6C_LIBDEFINITIONDOWNLOADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html

/// k_syntaxhighlighting__definitiondownloader_new constructs a new KSyntaxHighlighting::DefinitionDownloader object.
///
/// @param repo KSyntaxHighlighting__Repository*
KSyntaxHighlighting__DefinitionDownloader* k_syntaxhighlighting__definitiondownloader_new(void* repo);

/// k_syntaxhighlighting__definitiondownloader_new2 constructs a new KSyntaxHighlighting::DefinitionDownloader object.
///
/// @param repo KSyntaxHighlighting__Repository*
/// @param parent QObject*
KSyntaxHighlighting__DefinitionDownloader* k_syntaxhighlighting__definitiondownloader_new2(void* repo, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
const QMetaObject* k_syntaxhighlighting__definitiondownloader_meta_object(void* self);

/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param param1 const char*
void* k_syntaxhighlighting__definitiondownloader_metacast(void* self, const char* param1);

/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_syntaxhighlighting__definitiondownloader_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback int32_t func(KSyntaxHighlighting__DefinitionDownloader* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_syntaxhighlighting__definitiondownloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_syntaxhighlighting__definitiondownloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_syntaxhighlighting__definitiondownloader_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#start)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
void k_syntaxhighlighting__definitiondownloader_start(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#informationMessage)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param msg const char*
void k_syntaxhighlighting__definitiondownloader_information_message(void* self, const char* msg);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#informationMessage)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, const char* msg)
void k_syntaxhighlighting__definitiondownloader_on_information_message(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#done)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
void k_syntaxhighlighting__definitiondownloader_done(void* self);

/// [Qt documentation](https://api.kde.org/ksyntaxhighlighting-definitiondownloader.html#done)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self)
void k_syntaxhighlighting__definitiondownloader_on_done(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_syntaxhighlighting__definitiondownloader_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_syntaxhighlighting__definitiondownloader_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
const char* k_syntaxhighlighting__definitiondownloader_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param name char*
void k_syntaxhighlighting__definitiondownloader_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
bool k_syntaxhighlighting__definitiondownloader_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
bool k_syntaxhighlighting__definitiondownloader_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
bool k_syntaxhighlighting__definitiondownloader_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
bool k_syntaxhighlighting__definitiondownloader_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param b bool
bool k_syntaxhighlighting__definitiondownloader_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
QThread* k_syntaxhighlighting__definitiondownloader_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param thread QThread*
bool k_syntaxhighlighting__definitiondownloader_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param interval int
int32_t k_syntaxhighlighting__definitiondownloader_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param id int
void k_syntaxhighlighting__definitiondownloader_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param id enum Qt__TimerId
void k_syntaxhighlighting__definitiondownloader_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
libqt_list /* of QObject* */ k_syntaxhighlighting__definitiondownloader_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param parent QObject*
void k_syntaxhighlighting__definitiondownloader_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param filterObj QObject*
void k_syntaxhighlighting__definitiondownloader_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param obj QObject*
void k_syntaxhighlighting__definitiondownloader_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_syntaxhighlighting__definitiondownloader_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_syntaxhighlighting__definitiondownloader_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
void k_syntaxhighlighting__definitiondownloader_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
void k_syntaxhighlighting__definitiondownloader_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param name const char*
/// @param value QVariant*
bool k_syntaxhighlighting__definitiondownloader_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param name const char*
QVariant* k_syntaxhighlighting__definitiondownloader_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
const char** k_syntaxhighlighting__definitiondownloader_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
QBindingStorage* k_syntaxhighlighting__definitiondownloader_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
const QBindingStorage* k_syntaxhighlighting__definitiondownloader_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
void k_syntaxhighlighting__definitiondownloader_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self)
void k_syntaxhighlighting__definitiondownloader_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
QObject* k_syntaxhighlighting__definitiondownloader_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param classname const char*
bool k_syntaxhighlighting__definitiondownloader_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
void k_syntaxhighlighting__definitiondownloader_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_syntaxhighlighting__definitiondownloader_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_syntaxhighlighting__definitiondownloader_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_syntaxhighlighting__definitiondownloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param param1 QObject*
void k_syntaxhighlighting__definitiondownloader_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, QObject* param1)
void k_syntaxhighlighting__definitiondownloader_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QEvent*
bool k_syntaxhighlighting__definitiondownloader_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QEvent*
bool k_syntaxhighlighting__definitiondownloader_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback bool func(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event)
void k_syntaxhighlighting__definitiondownloader_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param watched QObject*
/// @param event QEvent*
bool k_syntaxhighlighting__definitiondownloader_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param watched QObject*
/// @param event QEvent*
bool k_syntaxhighlighting__definitiondownloader_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback bool func(KSyntaxHighlighting__DefinitionDownloader* self, QObject* watched, QEvent* event)
void k_syntaxhighlighting__definitiondownloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QTimerEvent*
void k_syntaxhighlighting__definitiondownloader_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QTimerEvent*
void k_syntaxhighlighting__definitiondownloader_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, QTimerEvent* event)
void k_syntaxhighlighting__definitiondownloader_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QChildEvent*
void k_syntaxhighlighting__definitiondownloader_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QChildEvent*
void k_syntaxhighlighting__definitiondownloader_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, QChildEvent* event)
void k_syntaxhighlighting__definitiondownloader_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QEvent*
void k_syntaxhighlighting__definitiondownloader_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param event QEvent*
void k_syntaxhighlighting__definitiondownloader_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, QEvent* event)
void k_syntaxhighlighting__definitiondownloader_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__definitiondownloader_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__definitiondownloader_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, QMetaMethod* signal)
void k_syntaxhighlighting__definitiondownloader_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__definitiondownloader_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal QMetaMethod*
void k_syntaxhighlighting__definitiondownloader_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, QMetaMethod* signal)
void k_syntaxhighlighting__definitiondownloader_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
QObject* k_syntaxhighlighting__definitiondownloader_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
QObject* k_syntaxhighlighting__definitiondownloader_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback QObject* func()
void k_syntaxhighlighting__definitiondownloader_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
int32_t k_syntaxhighlighting__definitiondownloader_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
int32_t k_syntaxhighlighting__definitiondownloader_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback int32_t func()
void k_syntaxhighlighting__definitiondownloader_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal const char*
int32_t k_syntaxhighlighting__definitiondownloader_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal const char*
int32_t k_syntaxhighlighting__definitiondownloader_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback int32_t func(KSyntaxHighlighting__DefinitionDownloader* self, const char* signal)
void k_syntaxhighlighting__definitiondownloader_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal QMetaMethod*
bool k_syntaxhighlighting__definitiondownloader_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param signal QMetaMethod*
bool k_syntaxhighlighting__definitiondownloader_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback bool func(KSyntaxHighlighting__DefinitionDownloader* self, QMetaMethod* signal)
void k_syntaxhighlighting__definitiondownloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
/// @param callback void func(KSyntaxHighlighting__DefinitionDownloader* self, const char* objectName)
void k_syntaxhighlighting__definitiondownloader_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__DefinitionDownloader*
void k_syntaxhighlighting__definitiondownloader_delete(void* self);

#endif
