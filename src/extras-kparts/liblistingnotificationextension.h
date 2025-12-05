#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBLISTINGNOTIFICATIONEXTENSION_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBLISTINGNOTIFICATIONEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html)

/// k_parts__listingnotificationextension_new constructs a new KParts::ListingNotificationExtension object.
///
/// @param parent KParts__ReadOnlyPart*
///
KParts__ListingNotificationExtension* k_parts__listingnotificationextension_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__ListingNotificationExtension*
///
const QMetaObject* k_parts__listingnotificationextension_meta_object(void* self);

/// @param self KParts__ListingNotificationExtension*
/// @param param1 const char*
///
void* k_parts__listingnotificationextension_metacast(void* self, const char* param1);

/// @param self KParts__ListingNotificationExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__listingnotificationextension_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback int32_t func(KParts__ListingNotificationExtension* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_parts__listingnotificationextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__ListingNotificationExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__listingnotificationextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* k_parts__listingnotificationextension_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html#supportedNotificationEventTypes)
///
/// @param self KParts__ListingNotificationExtension*
///
/// @return flag of enum KParts__ListingNotificationExtension__NotificationEventType
///
int32_t k_parts__listingnotificationextension_supported_notification_event_types(void* self);

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html#supportedNotificationEventTypes)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback int32_t func()
///
void k_parts__listingnotificationextension_on_supported_notification_event_types(void* self, int32_t (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html#supportedNotificationEventTypes)
///
/// Base class method implementation
///
/// @param self KParts__ListingNotificationExtension*
///
/// @return flag of enum KParts__ListingNotificationExtension__NotificationEventType
///
int32_t k_parts__listingnotificationextension_qbase_supported_notification_event_types(void* self);

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html#childObject)
///
/// @param obj QObject*
///
KParts__ListingNotificationExtension* k_parts__listingnotificationextension_child_object(void* obj);

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html#listingEvent)
///
/// @param self KParts__ListingNotificationExtension*
/// @param param1 enum KParts__ListingNotificationExtension__NotificationEventType
/// @param param2 KFileItemList*
///
void k_parts__listingnotificationextension_listing_event(void* self, int32_t param1, void* param2);

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html#listingEvent)
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, enum KParts__ListingNotificationExtension__NotificationEventType param1, KFileItemList* param2)
///
void k_parts__listingnotificationextension_on_listing_event(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* k_parts__listingnotificationextension_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_parts__listingnotificationextension_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__ListingNotificationExtension*
///
const char* k_parts__listingnotificationextension_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__ListingNotificationExtension*
/// @param name char*
///
void k_parts__listingnotificationextension_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__ListingNotificationExtension*
///
bool k_parts__listingnotificationextension_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__ListingNotificationExtension*
///
bool k_parts__listingnotificationextension_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__ListingNotificationExtension*
///
bool k_parts__listingnotificationextension_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__ListingNotificationExtension*
///
bool k_parts__listingnotificationextension_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__ListingNotificationExtension*
/// @param b bool
///
bool k_parts__listingnotificationextension_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__ListingNotificationExtension*
///
QThread* k_parts__listingnotificationextension_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__ListingNotificationExtension*
/// @param thread QThread*
///
bool k_parts__listingnotificationextension_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ListingNotificationExtension*
/// @param interval int
///
int32_t k_parts__listingnotificationextension_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ListingNotificationExtension*
/// @param id int
///
void k_parts__listingnotificationextension_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ListingNotificationExtension*
/// @param id enum Qt__TimerId
///
void k_parts__listingnotificationextension_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__ListingNotificationExtension*
///
libqt_list /* of QObject* */ k_parts__listingnotificationextension_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__ListingNotificationExtension*
/// @param parent QObject*
///
void k_parts__listingnotificationextension_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__ListingNotificationExtension*
/// @param filterObj QObject*
///
void k_parts__listingnotificationextension_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__ListingNotificationExtension*
/// @param obj QObject*
///
void k_parts__listingnotificationextension_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_parts__listingnotificationextension_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ListingNotificationExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_parts__listingnotificationextension_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_parts__listingnotificationextension_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_parts__listingnotificationextension_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__ListingNotificationExtension*
///
void k_parts__listingnotificationextension_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__ListingNotificationExtension*
///
void k_parts__listingnotificationextension_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__ListingNotificationExtension*
/// @param name const char*
/// @param value QVariant*
///
bool k_parts__listingnotificationextension_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__ListingNotificationExtension*
/// @param name const char*
///
QVariant* k_parts__listingnotificationextension_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__ListingNotificationExtension*
///
const char** k_parts__listingnotificationextension_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ListingNotificationExtension*
///
QBindingStorage* k_parts__listingnotificationextension_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ListingNotificationExtension*
///
const QBindingStorage* k_parts__listingnotificationextension_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingNotificationExtension*
///
void k_parts__listingnotificationextension_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self)
///
void k_parts__listingnotificationextension_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__ListingNotificationExtension*
///
QObject* k_parts__listingnotificationextension_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__ListingNotificationExtension*
/// @param classname const char*
///
bool k_parts__listingnotificationextension_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__ListingNotificationExtension*
///
void k_parts__listingnotificationextension_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__ListingNotificationExtension*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_parts__listingnotificationextension_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ListingNotificationExtension*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__listingnotificationextension_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_parts__listingnotificationextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ListingNotificationExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__listingnotificationextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingNotificationExtension*
/// @param param1 QObject*
///
void k_parts__listingnotificationextension_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, QObject* param1)
///
void k_parts__listingnotificationextension_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QEvent*
///
bool k_parts__listingnotificationextension_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QEvent*
///
bool k_parts__listingnotificationextension_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback bool func(KParts__ListingNotificationExtension* self, QEvent* event)
///
void k_parts__listingnotificationextension_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__listingnotificationextension_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__listingnotificationextension_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback bool func(KParts__ListingNotificationExtension* self, QObject* watched, QEvent* event)
///
void k_parts__listingnotificationextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QTimerEvent*
///
void k_parts__listingnotificationextension_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QTimerEvent*
///
void k_parts__listingnotificationextension_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, QTimerEvent* event)
///
void k_parts__listingnotificationextension_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QChildEvent*
///
void k_parts__listingnotificationextension_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QChildEvent*
///
void k_parts__listingnotificationextension_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, QChildEvent* event)
///
void k_parts__listingnotificationextension_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QEvent*
///
void k_parts__listingnotificationextension_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param event QEvent*
///
void k_parts__listingnotificationextension_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, QEvent* event)
///
void k_parts__listingnotificationextension_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingnotificationextension_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingnotificationextension_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, QMetaMethod* signal)
///
void k_parts__listingnotificationextension_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingnotificationextension_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingnotificationextension_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, QMetaMethod* signal)
///
void k_parts__listingnotificationextension_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
///
QObject* k_parts__listingnotificationextension_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
///
QObject* k_parts__listingnotificationextension_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback QObject* func()
///
void k_parts__listingnotificationextension_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
///
int32_t k_parts__listingnotificationextension_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
///
int32_t k_parts__listingnotificationextension_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback int32_t func()
///
void k_parts__listingnotificationextension_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal const char*
///
int32_t k_parts__listingnotificationextension_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal const char*
///
int32_t k_parts__listingnotificationextension_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback int32_t func(KParts__ListingNotificationExtension* self, const char* signal)
///
void k_parts__listingnotificationextension_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal QMetaMethod*
///
bool k_parts__listingnotificationextension_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param signal QMetaMethod*
///
bool k_parts__listingnotificationextension_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback bool func(KParts__ListingNotificationExtension* self, QMetaMethod* signal)
///
void k_parts__listingnotificationextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__ListingNotificationExtension*
/// @param callback void func(KParts__ListingNotificationExtension* self, const char* objectName)
///
void k_parts__listingnotificationextension_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__ListingNotificationExtension*
///
void k_parts__listingnotificationextension_delete(void* self);

/// [Upstream resources](https://api.kde.org/kparts-listingnotificationextension.html#public-types)

typedef enum {
    KPARTS_LISTINGNOTIFICATIONEXTENSION_NOTIFICATIONEVENTTYPE_NONE = 0,
    KPARTS_LISTINGNOTIFICATIONEXTENSION_NOTIFICATIONEVENTTYPE_ITEMSADDED = 1,
    KPARTS_LISTINGNOTIFICATIONEXTENSION_NOTIFICATIONEVENTTYPE_ITEMSDELETED = 2
} KParts__ListingNotificationExtension__NotificationEventType;

#endif
