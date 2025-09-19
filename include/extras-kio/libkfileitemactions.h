#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKFILEITEMACTIONS_H
#define SRC_EXTRAS_KIOQT6C_LIBKFILEITEMACTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kfileitemactions.html

/// k_fileitemactions_new constructs a new KFileItemActions object.
///
KFileItemActions* k_fileitemactions_new();

/// k_fileitemactions_new2 constructs a new KFileItemActions object.
///
/// @param parent QObject*
KFileItemActions* k_fileitemactions_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFileItemActions*
const QMetaObject* k_fileitemactions_meta_object(void* self);

/// @param self KFileItemActions*
/// @param param1 const char*
void* k_fileitemactions_metacast(void* self, const char* param1);

/// @param self KFileItemActions*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_fileitemactions_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFileItemActions*
/// @param callback int32_t func(KFileItemActions* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_fileitemactions_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KFileItemActions*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_fileitemactions_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_fileitemactions_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#setItemListProperties)
///
/// @param self KFileItemActions*
/// @param itemList KFileItemListProperties*
void k_fileitemactions_set_item_list_properties(void* self, void* itemList);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#setParentWidget)
///
/// @param self KFileItemActions*
/// @param widget QWidget*
void k_fileitemactions_set_parent_widget(void* self, void* widget);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#insertOpenWithActionsTo)
///
/// @param self KFileItemActions*
/// @param before QAction*
/// @param topMenu QMenu*
/// @param excludedDesktopEntryNames const char**
void k_fileitemactions_insert_open_with_actions_to(void* self, void* before, void* topMenu, const char* excludedDesktopEntryNames[]);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#addActionsTo)
///
/// @param self KFileItemActions*
/// @param menu QMenu*
void k_fileitemactions_add_actions_to(void* self, void* menu);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#openWithDialogAboutToBeShown)
///
/// @param self KFileItemActions*
void k_fileitemactions_open_with_dialog_about_to_be_shown(void* self);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#openWithDialogAboutToBeShown)
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self)
void k_fileitemactions_on_open_with_dialog_about_to_be_shown(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#error)
///
/// @param self KFileItemActions*
/// @param errorMessage const char*
void k_fileitemactions_error(void* self, const char* errorMessage);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#error)
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, const char* errorMessage)
void k_fileitemactions_on_error(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#runPreferredApplications)
///
/// @param self KFileItemActions*
/// @param fileOpenList KFileItemList*
void k_fileitemactions_run_preferred_applications(void* self, void* fileOpenList);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_fileitemactions_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_fileitemactions_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#addActionsTo)
///
/// @param self KFileItemActions*
/// @param menu QMenu*
/// @param sources flag of enum KFileItemActions__MenuActionSource
void k_fileitemactions_add_actions_to2(void* self, void* menu, int32_t sources);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#addActionsTo)
///
/// @param self KFileItemActions*
/// @param menu QMenu*
/// @param sources flag of enum KFileItemActions__MenuActionSource
/// @param additionalActions libqt_list /* of QAction* */
void k_fileitemactions_add_actions_to3(void* self, void* menu, int32_t sources, libqt_list additionalActions);

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#addActionsTo)
///
/// @param self KFileItemActions*
/// @param menu QMenu*
/// @param sources flag of enum KFileItemActions__MenuActionSource
/// @param additionalActions libqt_list /* of QAction* */
/// @param excludeList const char**
void k_fileitemactions_add_actions_to4(void* self, void* menu, int32_t sources, libqt_list additionalActions, const char* excludeList[]);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileItemActions*
const char* k_fileitemactions_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFileItemActions*
/// @param name char*
void k_fileitemactions_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFileItemActions*
bool k_fileitemactions_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFileItemActions*
bool k_fileitemactions_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFileItemActions*
bool k_fileitemactions_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFileItemActions*
bool k_fileitemactions_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFileItemActions*
/// @param b bool
bool k_fileitemactions_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFileItemActions*
QThread* k_fileitemactions_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileItemActions*
/// @param thread QThread*
bool k_fileitemactions_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileItemActions*
/// @param interval int
int32_t k_fileitemactions_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileItemActions*
/// @param id int
void k_fileitemactions_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileItemActions*
/// @param id enum Qt__TimerId
void k_fileitemactions_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFileItemActions*
libqt_list /* of QObject* */ k_fileitemactions_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFileItemActions*
/// @param parent QObject*
void k_fileitemactions_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFileItemActions*
/// @param filterObj QObject*
void k_fileitemactions_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFileItemActions*
/// @param obj QObject*
void k_fileitemactions_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_fileitemactions_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileItemActions*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_fileitemactions_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_fileitemactions_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_fileitemactions_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFileItemActions*
void k_fileitemactions_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFileItemActions*
void k_fileitemactions_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFileItemActions*
/// @param name const char*
/// @param value QVariant*
bool k_fileitemactions_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFileItemActions*
/// @param name const char*
QVariant* k_fileitemactions_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KFileItemActions*
const char** k_fileitemactions_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileItemActions*
QBindingStorage* k_fileitemactions_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileItemActions*
const QBindingStorage* k_fileitemactions_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemActions*
void k_fileitemactions_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self)
void k_fileitemactions_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFileItemActions*
QObject* k_fileitemactions_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFileItemActions*
/// @param classname const char*
bool k_fileitemactions_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFileItemActions*
void k_fileitemactions_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileItemActions*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_fileitemactions_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileItemActions*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_fileitemactions_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_fileitemactions_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileItemActions*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_fileitemactions_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemActions*
/// @param param1 QObject*
void k_fileitemactions_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, QObject* param1)
void k_fileitemactions_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QEvent*
bool k_fileitemactions_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QEvent*
bool k_fileitemactions_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback bool func(KFileItemActions* self, QEvent* event)
void k_fileitemactions_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param watched QObject*
/// @param event QEvent*
bool k_fileitemactions_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param watched QObject*
/// @param event QEvent*
bool k_fileitemactions_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback bool func(KFileItemActions* self, QObject* watched, QEvent* event)
void k_fileitemactions_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QTimerEvent*
void k_fileitemactions_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QTimerEvent*
void k_fileitemactions_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, QTimerEvent* event)
void k_fileitemactions_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QChildEvent*
void k_fileitemactions_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QChildEvent*
void k_fileitemactions_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, QChildEvent* event)
void k_fileitemactions_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QEvent*
void k_fileitemactions_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param event QEvent*
void k_fileitemactions_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, QEvent* event)
void k_fileitemactions_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal QMetaMethod*
void k_fileitemactions_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal QMetaMethod*
void k_fileitemactions_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, QMetaMethod* signal)
void k_fileitemactions_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal QMetaMethod*
void k_fileitemactions_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal QMetaMethod*
void k_fileitemactions_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, QMetaMethod* signal)
void k_fileitemactions_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
QObject* k_fileitemactions_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
QObject* k_fileitemactions_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback QObject* func()
void k_fileitemactions_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
int32_t k_fileitemactions_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
int32_t k_fileitemactions_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback int32_t func()
void k_fileitemactions_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal const char*
int32_t k_fileitemactions_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal const char*
int32_t k_fileitemactions_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback int32_t func(KFileItemActions* self, const char* signal)
void k_fileitemactions_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal QMetaMethod*
bool k_fileitemactions_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param signal QMetaMethod*
bool k_fileitemactions_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileItemActions*
/// @param callback bool func(KFileItemActions* self, QMetaMethod* signal)
void k_fileitemactions_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFileItemActions*
/// @param callback void func(KFileItemActions* self, const char* objectName)
void k_fileitemactions_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kfileitemactions.html#dtor.KFileItemActions)
///
/// Delete this object from C++ memory.
///
/// @param self KFileItemActions*
void k_fileitemactions_delete(void* self);

/// https://api.kde.org/kfileitemactions.html#types

typedef enum {
    KFILEITEMACTIONS_MENUACTIONSOURCE_SERVICES = 1,
    KFILEITEMACTIONS_MENUACTIONSOURCE_PLUGINS = 2,
    KFILEITEMACTIONS_MENUACTIONSOURCE_ALL = 3
} KFileItemActions__MenuActionSource;

#endif
