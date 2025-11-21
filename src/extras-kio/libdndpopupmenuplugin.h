#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBDNDPOPUPMENUPLUGIN_H
#define SRC_EXTRAS_KIO_QT6C_LIBDNDPOPUPMENUPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-dndpopupmenuplugin.html

/// k_io__dndpopupmenuplugin_new constructs a new KIO::DndPopupMenuPlugin object.
///
/// @param parent QObject*
KIO__DndPopupMenuPlugin* k_io__dndpopupmenuplugin_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__DndPopupMenuPlugin*
const QMetaObject* k_io__dndpopupmenuplugin_meta_object(void* self);

/// @param self KIO__DndPopupMenuPlugin*
/// @param param1 const char*
void* k_io__dndpopupmenuplugin_metacast(void* self, const char* param1);

/// @param self KIO__DndPopupMenuPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__dndpopupmenuplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback int32_t func(KIO__DndPopupMenuPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_io__dndpopupmenuplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__dndpopupmenuplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__dndpopupmenuplugin_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-dndpopupmenuplugin.html#setup)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param popupMenuInfo KFileItemListProperties*
/// @param destination QUrl*
libqt_list /* of QAction* */ k_io__dndpopupmenuplugin_setup(void* self, void* popupMenuInfo, void* destination);

/// [Qt documentation](https://api.kde.org/kio-dndpopupmenuplugin.html#setup)
///
/// Allows for overriding the related default method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback QAction** func(KIO__DndPopupMenuPlugin* self, KFileItemListProperties* popupMenuInfo, QUrl* destination)
void k_io__dndpopupmenuplugin_on_setup(void* self, QAction** (*callback)(void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-dndpopupmenuplugin.html#setup)
///
/// Base class method implementation
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param popupMenuInfo KFileItemListProperties*
/// @param destination QUrl*
libqt_list /* of QAction* */ k_io__dndpopupmenuplugin_qbase_setup(void* self, void* popupMenuInfo, void* destination);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__dndpopupmenuplugin_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__dndpopupmenuplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__DndPopupMenuPlugin*
const char* k_io__dndpopupmenuplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param name char*
void k_io__dndpopupmenuplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__DndPopupMenuPlugin*
bool k_io__dndpopupmenuplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__DndPopupMenuPlugin*
bool k_io__dndpopupmenuplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__DndPopupMenuPlugin*
bool k_io__dndpopupmenuplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__DndPopupMenuPlugin*
bool k_io__dndpopupmenuplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param b bool
bool k_io__dndpopupmenuplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__DndPopupMenuPlugin*
QThread* k_io__dndpopupmenuplugin_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param thread QThread*
bool k_io__dndpopupmenuplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param interval int
int32_t k_io__dndpopupmenuplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param id int
void k_io__dndpopupmenuplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param id enum Qt__TimerId
void k_io__dndpopupmenuplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__DndPopupMenuPlugin*
libqt_list /* of QObject* */ k_io__dndpopupmenuplugin_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param parent QObject*
void k_io__dndpopupmenuplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param filterObj QObject*
void k_io__dndpopupmenuplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param obj QObject*
void k_io__dndpopupmenuplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__dndpopupmenuplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__dndpopupmenuplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__dndpopupmenuplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__dndpopupmenuplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__DndPopupMenuPlugin*
void k_io__dndpopupmenuplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__DndPopupMenuPlugin*
void k_io__dndpopupmenuplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param name const char*
/// @param value QVariant*
bool k_io__dndpopupmenuplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param name const char*
QVariant* k_io__dndpopupmenuplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__DndPopupMenuPlugin*
const char** k_io__dndpopupmenuplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__DndPopupMenuPlugin*
QBindingStorage* k_io__dndpopupmenuplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__DndPopupMenuPlugin*
const QBindingStorage* k_io__dndpopupmenuplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__DndPopupMenuPlugin*
void k_io__dndpopupmenuplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self)
void k_io__dndpopupmenuplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__DndPopupMenuPlugin*
QObject* k_io__dndpopupmenuplugin_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param classname const char*
bool k_io__dndpopupmenuplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__DndPopupMenuPlugin*
void k_io__dndpopupmenuplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__dndpopupmenuplugin_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__dndpopupmenuplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__dndpopupmenuplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_io__dndpopupmenuplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param param1 QObject*
void k_io__dndpopupmenuplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self, QObject* param1)
void k_io__dndpopupmenuplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QEvent*
bool k_io__dndpopupmenuplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QEvent*
bool k_io__dndpopupmenuplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback bool func(KIO__DndPopupMenuPlugin* self, QEvent* event)
void k_io__dndpopupmenuplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__dndpopupmenuplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__dndpopupmenuplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback bool func(KIO__DndPopupMenuPlugin* self, QObject* watched, QEvent* event)
void k_io__dndpopupmenuplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QTimerEvent*
void k_io__dndpopupmenuplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QTimerEvent*
void k_io__dndpopupmenuplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self, QTimerEvent* event)
void k_io__dndpopupmenuplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QChildEvent*
void k_io__dndpopupmenuplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QChildEvent*
void k_io__dndpopupmenuplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self, QChildEvent* event)
void k_io__dndpopupmenuplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QEvent*
void k_io__dndpopupmenuplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param event QEvent*
void k_io__dndpopupmenuplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self, QEvent* event)
void k_io__dndpopupmenuplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal QMetaMethod*
void k_io__dndpopupmenuplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal QMetaMethod*
void k_io__dndpopupmenuplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self, QMetaMethod* signal)
void k_io__dndpopupmenuplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal QMetaMethod*
void k_io__dndpopupmenuplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal QMetaMethod*
void k_io__dndpopupmenuplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self, QMetaMethod* signal)
void k_io__dndpopupmenuplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
QObject* k_io__dndpopupmenuplugin_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
QObject* k_io__dndpopupmenuplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback QObject* func()
void k_io__dndpopupmenuplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
int32_t k_io__dndpopupmenuplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
int32_t k_io__dndpopupmenuplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback int32_t func()
void k_io__dndpopupmenuplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal const char*
int32_t k_io__dndpopupmenuplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal const char*
int32_t k_io__dndpopupmenuplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback int32_t func(KIO__DndPopupMenuPlugin* self, const char* signal)
void k_io__dndpopupmenuplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal QMetaMethod*
bool k_io__dndpopupmenuplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param signal QMetaMethod*
bool k_io__dndpopupmenuplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback bool func(KIO__DndPopupMenuPlugin* self, QMetaMethod* signal)
void k_io__dndpopupmenuplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__DndPopupMenuPlugin*
/// @param callback void func(KIO__DndPopupMenuPlugin* self, const char* objectName)
void k_io__dndpopupmenuplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__DndPopupMenuPlugin*
void k_io__dndpopupmenuplugin_delete(void* self);

#endif
