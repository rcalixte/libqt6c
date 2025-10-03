#pragma once
#ifndef SRC_EXTRAS_KPARTSQT6C_LIBFILEINFOEXTENSION_H
#define SRC_EXTRAS_KPARTSQT6C_LIBFILEINFOEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kparts-fileinfoextension.html

/// k_parts__fileinfoextension_new constructs a new KParts::FileInfoExtension object.
///
/// @param parent KParts__ReadOnlyPart*
KParts__FileInfoExtension* k_parts__fileinfoextension_new(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__FileInfoExtension*
const QMetaObject* k_parts__fileinfoextension_meta_object(void* self);

/// @param self KParts__FileInfoExtension*
/// @param param1 const char*
void* k_parts__fileinfoextension_metacast(void* self, const char* param1);

/// @param self KParts__FileInfoExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_parts__fileinfoextension_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__FileInfoExtension*
/// @param callback int32_t func(KParts__FileInfoExtension* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_parts__fileinfoextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__FileInfoExtension*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_parts__fileinfoextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_parts__fileinfoextension_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#childObject)
///
/// @param obj QObject*
KParts__FileInfoExtension* k_parts__fileinfoextension_child_object(void* obj);

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#hasSelection)
///
/// @param self KParts__FileInfoExtension*
bool k_parts__fileinfoextension_has_selection(void* self);

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#hasSelection)
///
/// Allows for overriding the related default method
///
/// @param self KParts__FileInfoExtension*
/// @param callback bool func()
void k_parts__fileinfoextension_on_has_selection(void* self, bool (*callback)());

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#hasSelection)
///
/// Base class method implementation
///
/// @param self KParts__FileInfoExtension*
bool k_parts__fileinfoextension_qbase_has_selection(void* self);

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#supportedQueryModes)
///
/// @param self KParts__FileInfoExtension*
///
/// @return flag of enum KParts__FileInfoExtension__QueryMode
int32_t k_parts__fileinfoextension_supported_query_modes(void* self);

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#supportedQueryModes)
///
/// Allows for overriding the related default method
///
/// @param self KParts__FileInfoExtension*
/// @param callback int32_t func()
void k_parts__fileinfoextension_on_supported_query_modes(void* self, int32_t (*callback)());

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#supportedQueryModes)
///
/// Base class method implementation
///
/// @param self KParts__FileInfoExtension*
///
/// @return flag of enum KParts__FileInfoExtension__QueryMode
int32_t k_parts__fileinfoextension_qbase_supported_query_modes(void* self);

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#queryFor)
///
/// @param self KParts__FileInfoExtension*
/// @param mode enum KParts__FileInfoExtension__QueryMode
KFileItemList* k_parts__fileinfoextension_query_for(void* self, int32_t mode);

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#queryFor)
///
/// Allows for overriding the related default method
///
/// @param self KParts__FileInfoExtension*
/// @param callback KFileItemList* func(KParts__FileInfoExtension* self, enum KParts__FileInfoExtension__QueryMode mode)
void k_parts__fileinfoextension_on_query_for(void* self, KFileItemList* (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/kparts-fileinfoextension.html#queryFor)
///
/// Base class method implementation
///
/// @param self KParts__FileInfoExtension*
/// @param mode enum KParts__FileInfoExtension__QueryMode
KFileItemList* k_parts__fileinfoextension_qbase_query_for(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_parts__fileinfoextension_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_parts__fileinfoextension_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__FileInfoExtension*
const char* k_parts__fileinfoextension_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__FileInfoExtension*
/// @param name char*
void k_parts__fileinfoextension_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__FileInfoExtension*
bool k_parts__fileinfoextension_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__FileInfoExtension*
bool k_parts__fileinfoextension_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__FileInfoExtension*
bool k_parts__fileinfoextension_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__FileInfoExtension*
bool k_parts__fileinfoextension_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__FileInfoExtension*
/// @param b bool
bool k_parts__fileinfoextension_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__FileInfoExtension*
QThread* k_parts__fileinfoextension_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__FileInfoExtension*
/// @param thread QThread*
bool k_parts__fileinfoextension_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__FileInfoExtension*
/// @param interval int
int32_t k_parts__fileinfoextension_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__FileInfoExtension*
/// @param id int
void k_parts__fileinfoextension_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__FileInfoExtension*
/// @param id enum Qt__TimerId
void k_parts__fileinfoextension_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__FileInfoExtension*
libqt_list /* of QObject* */ k_parts__fileinfoextension_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__FileInfoExtension*
/// @param parent QObject*
void k_parts__fileinfoextension_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__FileInfoExtension*
/// @param filterObj QObject*
void k_parts__fileinfoextension_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__FileInfoExtension*
/// @param obj QObject*
void k_parts__fileinfoextension_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_parts__fileinfoextension_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__FileInfoExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_parts__fileinfoextension_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_parts__fileinfoextension_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_parts__fileinfoextension_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__FileInfoExtension*
void k_parts__fileinfoextension_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__FileInfoExtension*
void k_parts__fileinfoextension_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__FileInfoExtension*
/// @param name const char*
/// @param value QVariant*
bool k_parts__fileinfoextension_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__FileInfoExtension*
/// @param name const char*
QVariant* k_parts__fileinfoextension_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__FileInfoExtension*
const char** k_parts__fileinfoextension_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__FileInfoExtension*
QBindingStorage* k_parts__fileinfoextension_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__FileInfoExtension*
const QBindingStorage* k_parts__fileinfoextension_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__FileInfoExtension*
void k_parts__fileinfoextension_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self)
void k_parts__fileinfoextension_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__FileInfoExtension*
QObject* k_parts__fileinfoextension_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__FileInfoExtension*
/// @param classname const char*
bool k_parts__fileinfoextension_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__FileInfoExtension*
void k_parts__fileinfoextension_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__FileInfoExtension*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_parts__fileinfoextension_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__FileInfoExtension*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_parts__fileinfoextension_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_parts__fileinfoextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__FileInfoExtension*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_parts__fileinfoextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__FileInfoExtension*
/// @param param1 QObject*
void k_parts__fileinfoextension_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self, QObject* param1)
void k_parts__fileinfoextension_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QEvent*
bool k_parts__fileinfoextension_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QEvent*
bool k_parts__fileinfoextension_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback bool func(KParts__FileInfoExtension* self, QEvent* event)
void k_parts__fileinfoextension_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param watched QObject*
/// @param event QEvent*
bool k_parts__fileinfoextension_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param watched QObject*
/// @param event QEvent*
bool k_parts__fileinfoextension_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback bool func(KParts__FileInfoExtension* self, QObject* watched, QEvent* event)
void k_parts__fileinfoextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QTimerEvent*
void k_parts__fileinfoextension_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QTimerEvent*
void k_parts__fileinfoextension_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self, QTimerEvent* event)
void k_parts__fileinfoextension_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QChildEvent*
void k_parts__fileinfoextension_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QChildEvent*
void k_parts__fileinfoextension_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self, QChildEvent* event)
void k_parts__fileinfoextension_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QEvent*
void k_parts__fileinfoextension_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param event QEvent*
void k_parts__fileinfoextension_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self, QEvent* event)
void k_parts__fileinfoextension_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal QMetaMethod*
void k_parts__fileinfoextension_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal QMetaMethod*
void k_parts__fileinfoextension_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self, QMetaMethod* signal)
void k_parts__fileinfoextension_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal QMetaMethod*
void k_parts__fileinfoextension_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal QMetaMethod*
void k_parts__fileinfoextension_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self, QMetaMethod* signal)
void k_parts__fileinfoextension_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
QObject* k_parts__fileinfoextension_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
QObject* k_parts__fileinfoextension_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback QObject* func()
void k_parts__fileinfoextension_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
int32_t k_parts__fileinfoextension_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
int32_t k_parts__fileinfoextension_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback int32_t func()
void k_parts__fileinfoextension_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal const char*
int32_t k_parts__fileinfoextension_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal const char*
int32_t k_parts__fileinfoextension_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback int32_t func(KParts__FileInfoExtension* self, const char* signal)
void k_parts__fileinfoextension_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal QMetaMethod*
bool k_parts__fileinfoextension_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param signal QMetaMethod*
bool k_parts__fileinfoextension_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__FileInfoExtension*
/// @param callback bool func(KParts__FileInfoExtension* self, QMetaMethod* signal)
void k_parts__fileinfoextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__FileInfoExtension*
/// @param callback void func(KParts__FileInfoExtension* self, const char* objectName)
void k_parts__fileinfoextension_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__FileInfoExtension*
void k_parts__fileinfoextension_delete(void* self);

/// https://api.kde.org/kparts-fileinfoextension.html#types

typedef enum {
    KPARTS_FILEINFOEXTENSION_QUERYMODE_NONE = 0,
    KPARTS_FILEINFOEXTENSION_QUERYMODE_ALLITEMS = 1,
    KPARTS_FILEINFOEXTENSION_QUERYMODE_SELECTEDITEMS = 2
} KParts__FileInfoExtension__QueryMode;

#endif
