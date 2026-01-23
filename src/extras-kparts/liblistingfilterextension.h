#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBLISTINGFILTEREXTENSION_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBLISTINGFILTEREXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html)

/// k_parts__listingfilterextension_new constructs a new KParts::ListingFilterExtension object.
///
/// @param parent KParts__ReadOnlyPart*
///
KParts__ListingFilterExtension* k_parts__listingfilterextension_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__ListingFilterExtension*
///
const QMetaObject* k_parts__listingfilterextension_meta_object(void* self);

/// @param self KParts__ListingFilterExtension*
/// @param param1 const char*
///
void* k_parts__listingfilterextension_metacast(void* self, const char* param1);

/// @param self KParts__ListingFilterExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__listingfilterextension_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback int32_t func(KParts__ListingFilterExtension* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_parts__listingfilterextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__ListingFilterExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__listingfilterextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_parts__listingfilterextension_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#childObject)
///
/// @param obj QObject*
///
KParts__ListingFilterExtension* k_parts__listingfilterextension_child_object(void* obj);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#supportedFilterModes)
///
/// @param self KParts__ListingFilterExtension*
///
/// @return flag of enum KParts__ListingFilterExtension__FilterMode
///
int32_t k_parts__listingfilterextension_supported_filter_modes(void* self);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#supportedFilterModes)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback int32_t func()
///
void k_parts__listingfilterextension_on_supported_filter_modes(void* self, int32_t (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#supportedFilterModes)
///
/// Base class method implementation
///
/// @param self KParts__ListingFilterExtension*
///
/// @return flag of enum KParts__ListingFilterExtension__FilterMode
///
int32_t k_parts__listingfilterextension_qbase_supported_filter_modes(void* self);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#supportsMultipleFilters)
///
/// @param self KParts__ListingFilterExtension*
/// @param mode enum KParts__ListingFilterExtension__FilterMode
///
bool k_parts__listingfilterextension_supports_multiple_filters(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#supportsMultipleFilters)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback bool func(KParts__ListingFilterExtension* self, enum KParts__ListingFilterExtension__FilterMode mode)
///
void k_parts__listingfilterextension_on_supports_multiple_filters(void* self, bool (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#supportsMultipleFilters)
///
/// Base class method implementation
///
/// @param self KParts__ListingFilterExtension*
/// @param mode enum KParts__ListingFilterExtension__FilterMode
///
bool k_parts__listingfilterextension_qbase_supports_multiple_filters(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#filter)
///
/// @param self KParts__ListingFilterExtension*
/// @param mode enum KParts__ListingFilterExtension__FilterMode
///
QVariant* k_parts__listingfilterextension_filter(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#filter)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback QVariant* func(KParts__ListingFilterExtension* self, enum KParts__ListingFilterExtension__FilterMode mode)
///
void k_parts__listingfilterextension_on_filter(void* self, QVariant* (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#filter)
///
/// Base class method implementation
///
/// @param self KParts__ListingFilterExtension*
/// @param mode enum KParts__ListingFilterExtension__FilterMode
///
QVariant* k_parts__listingfilterextension_qbase_filter(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#setFilter)
///
/// @param self KParts__ListingFilterExtension*
/// @param mode enum KParts__ListingFilterExtension__FilterMode
/// @param filter QVariant*
///
void k_parts__listingfilterextension_set_filter(void* self, int32_t mode, void* filter);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#setFilter)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, enum KParts__ListingFilterExtension__FilterMode mode, QVariant* filter)
///
void k_parts__listingfilterextension_on_set_filter(void* self, void (*callback)(void*, int32_t, void*));

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#setFilter)
///
/// Base class method implementation
///
/// @param self KParts__ListingFilterExtension*
/// @param mode enum KParts__ListingFilterExtension__FilterMode
/// @param filter QVariant*
///
void k_parts__listingfilterextension_qbase_set_filter(void* self, int32_t mode, void* filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_parts__listingfilterextension_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_parts__listingfilterextension_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__ListingFilterExtension*
///
const char* k_parts__listingfilterextension_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__ListingFilterExtension*
/// @param name char*
///
void k_parts__listingfilterextension_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__ListingFilterExtension*
///
bool k_parts__listingfilterextension_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__ListingFilterExtension*
///
bool k_parts__listingfilterextension_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__ListingFilterExtension*
///
bool k_parts__listingfilterextension_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__ListingFilterExtension*
///
bool k_parts__listingfilterextension_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__ListingFilterExtension*
/// @param b bool
///
bool k_parts__listingfilterextension_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__ListingFilterExtension*
///
QThread* k_parts__listingfilterextension_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__ListingFilterExtension*
/// @param thread QThread*
///
bool k_parts__listingfilterextension_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ListingFilterExtension*
/// @param interval int
///
int32_t k_parts__listingfilterextension_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ListingFilterExtension*
/// @param time int64_t of nanoseconds
///
int32_t k_parts__listingfilterextension_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ListingFilterExtension*
/// @param id int
///
void k_parts__listingfilterextension_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ListingFilterExtension*
/// @param id enum Qt__TimerId
///
void k_parts__listingfilterextension_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__ListingFilterExtension*
///
/// @return libqt_list of QObject*
///
libqt_list k_parts__listingfilterextension_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__ListingFilterExtension*
/// @param parent QObject*
///
void k_parts__listingfilterextension_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__ListingFilterExtension*
/// @param filterObj QObject*
///
void k_parts__listingfilterextension_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__ListingFilterExtension*
/// @param obj QObject*
///
void k_parts__listingfilterextension_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_parts__listingfilterextension_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ListingFilterExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_parts__listingfilterextension_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_parts__listingfilterextension_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_parts__listingfilterextension_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__ListingFilterExtension*
///
void k_parts__listingfilterextension_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__ListingFilterExtension*
///
void k_parts__listingfilterextension_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__ListingFilterExtension*
/// @param name const char*
/// @param value QVariant*
///
bool k_parts__listingfilterextension_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__ListingFilterExtension*
/// @param name const char*
///
QVariant* k_parts__listingfilterextension_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__ListingFilterExtension*
///
const char** k_parts__listingfilterextension_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ListingFilterExtension*
///
QBindingStorage* k_parts__listingfilterextension_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ListingFilterExtension*
///
const QBindingStorage* k_parts__listingfilterextension_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingFilterExtension*
///
void k_parts__listingfilterextension_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self)
///
void k_parts__listingfilterextension_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__ListingFilterExtension*
///
QObject* k_parts__listingfilterextension_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__ListingFilterExtension*
/// @param classname const char*
///
bool k_parts__listingfilterextension_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__ListingFilterExtension*
///
void k_parts__listingfilterextension_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__ListingFilterExtension*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_parts__listingfilterextension_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ListingFilterExtension*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__listingfilterextension_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ListingFilterExtension*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__listingfilterextension_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_parts__listingfilterextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ListingFilterExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__listingfilterextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingFilterExtension*
/// @param param1 QObject*
///
void k_parts__listingfilterextension_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, QObject* param1)
///
void k_parts__listingfilterextension_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QEvent*
///
bool k_parts__listingfilterextension_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QEvent*
///
bool k_parts__listingfilterextension_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback bool func(KParts__ListingFilterExtension* self, QEvent* event)
///
void k_parts__listingfilterextension_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__listingfilterextension_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__listingfilterextension_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback bool func(KParts__ListingFilterExtension* self, QObject* watched, QEvent* event)
///
void k_parts__listingfilterextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QTimerEvent*
///
void k_parts__listingfilterextension_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QTimerEvent*
///
void k_parts__listingfilterextension_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, QTimerEvent* event)
///
void k_parts__listingfilterextension_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QChildEvent*
///
void k_parts__listingfilterextension_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QChildEvent*
///
void k_parts__listingfilterextension_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, QChildEvent* event)
///
void k_parts__listingfilterextension_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QEvent*
///
void k_parts__listingfilterextension_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param event QEvent*
///
void k_parts__listingfilterextension_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, QEvent* event)
///
void k_parts__listingfilterextension_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingfilterextension_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingfilterextension_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, QMetaMethod* signal)
///
void k_parts__listingfilterextension_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingfilterextension_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal QMetaMethod*
///
void k_parts__listingfilterextension_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, QMetaMethod* signal)
///
void k_parts__listingfilterextension_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
///
QObject* k_parts__listingfilterextension_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
///
QObject* k_parts__listingfilterextension_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback QObject* func()
///
void k_parts__listingfilterextension_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
///
int32_t k_parts__listingfilterextension_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
///
int32_t k_parts__listingfilterextension_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback int32_t func()
///
void k_parts__listingfilterextension_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal const char*
///
int32_t k_parts__listingfilterextension_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal const char*
///
int32_t k_parts__listingfilterextension_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback int32_t func(KParts__ListingFilterExtension* self, const char* signal)
///
void k_parts__listingfilterextension_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal QMetaMethod*
///
bool k_parts__listingfilterextension_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param signal QMetaMethod*
///
bool k_parts__listingfilterextension_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ListingFilterExtension*
/// @param callback bool func(KParts__ListingFilterExtension* self, QMetaMethod* signal)
///
void k_parts__listingfilterextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__ListingFilterExtension*
/// @param callback void func(KParts__ListingFilterExtension* self, const char* objectName)
///
void k_parts__listingfilterextension_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__ListingFilterExtension*
///
void k_parts__listingfilterextension_delete(void* self);

/// [Upstream resources](https://api.kde.org/kparts-listingfilterextension.html#public-types)

typedef enum {
    KPARTS_LISTINGFILTEREXTENSION_FILTERMODE_NONE = 0,
    KPARTS_LISTINGFILTEREXTENSION_FILTERMODE_MIMETYPE = 1,
    KPARTS_LISTINGFILTEREXTENSION_FILTERMODE_SUBSTRING = 2,
    KPARTS_LISTINGFILTEREXTENSION_FILTERMODE_WILDCARD = 4
} KParts__ListingFilterExtension__FilterMode;

#endif
