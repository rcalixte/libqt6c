#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBTRANSACTION_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBTRANSACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knscore-transaction.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNSCore__Transaction*
///
const QMetaObject* k_nscore__transaction_meta_object(void* self);

/// @param self KNSCore__Transaction*
/// @param param1 const char*
///
void* k_nscore__transaction_metacast(void* self, const char* param1);

/// @param self KNSCore__Transaction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_nscore__transaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_nscore__transaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#install)
///
/// @param engine KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
///
KNSCore__Transaction* k_nscore__transaction_install(void* engine, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#installLinkId)
///
/// @param engine KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
/// @param linkId unsigned char
///
KNSCore__Transaction* k_nscore__transaction_install_link_id(void* engine, void* entry, unsigned char linkId);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#installLatest)
///
/// @param engine KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
///
KNSCore__Transaction* k_nscore__transaction_install_latest(void* engine, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#uninstall)
///
/// @param engine KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
///
KNSCore__Transaction* k_nscore__transaction_uninstall(void* engine, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#adopt)
///
/// @param engine KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
///
KNSCore__Transaction* k_nscore__transaction_adopt(void* engine, void* entry);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#isFinished)
///
/// @param self KNSCore__Transaction*
///
bool k_nscore__transaction_is_finished(void* self);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#finished)
///
/// @param self KNSCore__Transaction*
///
void k_nscore__transaction_finished(void* self);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#finished)
///
/// @param self KNSCore__Transaction*
/// @param callback void func(KNSCore__Transaction* self)
///
void k_nscore__transaction_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#signalMessage)
///
/// @param self KNSCore__Transaction*
/// @param message const char*
///
void k_nscore__transaction_signal_message(void* self, const char* message);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#signalMessage)
///
/// @param self KNSCore__Transaction*
/// @param callback void func(KNSCore__Transaction* self, const char* message)
///
void k_nscore__transaction_on_signal_message(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#signalEntryEvent)
///
/// @param self KNSCore__Transaction*
/// @param entry KNSCore__Entry*
/// @param event enum KNSCore__Entry__EntryEvent
///
void k_nscore__transaction_signal_entry_event(void* self, void* entry, int32_t event);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#signalEntryEvent)
///
/// @param self KNSCore__Transaction*
/// @param callback void func(KNSCore__Transaction* self, KNSCore__Entry* entry, enum KNSCore__Entry__EntryEvent event)
///
void k_nscore__transaction_on_signal_entry_event(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#signalErrorCode)
///
/// @param self KNSCore__Transaction*
/// @param errorCode enum KNSCore__ErrorCode__ErrorCode
/// @param message const char*
/// @param metadata QVariant*
///
void k_nscore__transaction_signal_error_code(void* self, int32_t errorCode, const char* message, void* metadata);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#signalErrorCode)
///
/// @param self KNSCore__Transaction*
/// @param callback void func(KNSCore__Transaction* self, enum KNSCore__ErrorCode__ErrorCode errorCode, const char* message, QVariant* metadata)
///
void k_nscore__transaction_on_signal_error_code(void* self, void (*callback)(void*, int32_t, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_nscore__transaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_nscore__transaction_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/knscore-transaction.html#install)
///
/// @param engine KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
/// @param linkId int
///
KNSCore__Transaction* k_nscore__transaction_install3(void* engine, void* entry, int linkId);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KNSCore__Transaction*
/// @param event QEvent*
///
bool k_nscore__transaction_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KNSCore__Transaction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_nscore__transaction_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNSCore__Transaction*
///
const char* k_nscore__transaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__Transaction*
/// @param name char*
///
void k_nscore__transaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__Transaction*
///
bool k_nscore__transaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__Transaction*
///
bool k_nscore__transaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__Transaction*
///
bool k_nscore__transaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__Transaction*
///
bool k_nscore__transaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__Transaction*
/// @param b bool
///
bool k_nscore__transaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNSCore__Transaction*
///
QThread* k_nscore__transaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Transaction*
/// @param thread QThread*
///
bool k_nscore__transaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Transaction*
/// @param interval int
///
int32_t k_nscore__transaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Transaction*
/// @param id int
///
void k_nscore__transaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__Transaction*
/// @param id enum Qt__TimerId
///
void k_nscore__transaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNSCore__Transaction*
///
libqt_list /* of QObject* */ k_nscore__transaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__Transaction*
/// @param parent QObject*
///
void k_nscore__transaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__Transaction*
/// @param filterObj QObject*
///
void k_nscore__transaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__Transaction*
/// @param obj QObject*
///
void k_nscore__transaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_nscore__transaction_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Transaction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_nscore__transaction_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_nscore__transaction_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_nscore__transaction_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__Transaction*
///
void k_nscore__transaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__Transaction*
///
void k_nscore__transaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__Transaction*
/// @param name const char*
/// @param value QVariant*
///
bool k_nscore__transaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__Transaction*
/// @param name const char*
///
QVariant* k_nscore__transaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNSCore__Transaction*
///
const char** k_nscore__transaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Transaction*
///
QBindingStorage* k_nscore__transaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__Transaction*
///
const QBindingStorage* k_nscore__transaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Transaction*
///
void k_nscore__transaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Transaction*
/// @param callback void func(KNSCore__Transaction* self)
///
void k_nscore__transaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNSCore__Transaction*
///
QObject* k_nscore__transaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNSCore__Transaction*
/// @param classname const char*
///
bool k_nscore__transaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__Transaction*
///
void k_nscore__transaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__Transaction*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_nscore__transaction_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__Transaction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_nscore__transaction_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* k_nscore__transaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__Transaction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_nscore__transaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Transaction*
/// @param param1 QObject*
///
void k_nscore__transaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__Transaction*
/// @param callback void func(KNSCore__Transaction* self, QObject* param1)
///
void k_nscore__transaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__Transaction*
/// @param callback void func(KNSCore__Transaction* self, const char* objectName)
///
void k_nscore__transaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__Transaction*
///
void k_nscore__transaction_delete(void* self);

#endif
