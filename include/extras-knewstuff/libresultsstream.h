#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFF_QT6C_LIBRESULTSSTREAM_H
#define SRC_EXTRAS_KNEWSTUFF_QT6C_LIBRESULTSSTREAM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knscore-resultsstream.html

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNSCore__ResultsStream*
const QMetaObject* k_nscore__resultsstream_meta_object(void* self);

/// @param self KNSCore__ResultsStream*
/// @param param1 const char*
void* k_nscore__resultsstream_metacast(void* self, const char* param1);

/// @param self KNSCore__ResultsStream*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_nscore__resultsstream_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_nscore__resultsstream_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knscore-resultsstream.html#fetch)
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_fetch(void* self);

/// [Upstream resources](https://api.kde.org/knscore-resultsstream.html#fetchMore)
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_fetch_more(void* self);

/// [Upstream resources](https://api.kde.org/knscore-resultsstream.html#entriesFound)
///
/// @param self KNSCore__ResultsStream*
/// @param entries libqt_list /* of KNSCore__Entry* */
void k_nscore__resultsstream_entries_found(void* self, libqt_list entries);

/// [Upstream resources](https://api.kde.org/knscore-resultsstream.html#entriesFound)
///
/// @param self KNSCore__ResultsStream*
/// @param callback void func(KNSCore__ResultsStream* self, KNSCore__Entry** entries)
void k_nscore__resultsstream_on_entries_found(void* self, void (*callback)(void*, KNSCore__Entry**));

/// [Upstream resources](https://api.kde.org/knscore-resultsstream.html#finished)
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_finished(void* self);

/// [Upstream resources](https://api.kde.org/knscore-resultsstream.html#finished)
///
/// @param self KNSCore__ResultsStream*
/// @param callback void func(KNSCore__ResultsStream* self)
void k_nscore__resultsstream_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_nscore__resultsstream_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_nscore__resultsstream_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KNSCore__ResultsStream*
/// @param event QEvent*
bool k_nscore__resultsstream_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KNSCore__ResultsStream*
/// @param watched QObject*
/// @param event QEvent*
bool k_nscore__resultsstream_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__ResultsStream*
const char* k_nscore__resultsstream_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__ResultsStream*
/// @param name char*
void k_nscore__resultsstream_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__ResultsStream*
bool k_nscore__resultsstream_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__ResultsStream*
bool k_nscore__resultsstream_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__ResultsStream*
bool k_nscore__resultsstream_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__ResultsStream*
bool k_nscore__resultsstream_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__ResultsStream*
/// @param b bool
bool k_nscore__resultsstream_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNSCore__ResultsStream*
QThread* k_nscore__resultsstream_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__ResultsStream*
/// @param thread QThread*
bool k_nscore__resultsstream_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ResultsStream*
/// @param interval int
int32_t k_nscore__resultsstream_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__ResultsStream*
/// @param id int
void k_nscore__resultsstream_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__ResultsStream*
/// @param id enum Qt__TimerId
void k_nscore__resultsstream_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNSCore__ResultsStream*
libqt_list /* of QObject* */ k_nscore__resultsstream_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__ResultsStream*
/// @param parent QObject*
void k_nscore__resultsstream_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__ResultsStream*
/// @param filterObj QObject*
void k_nscore__resultsstream_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__ResultsStream*
/// @param obj QObject*
void k_nscore__resultsstream_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_nscore__resultsstream_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__ResultsStream*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_nscore__resultsstream_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_nscore__resultsstream_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_nscore__resultsstream_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__ResultsStream*
/// @param name const char*
/// @param value QVariant*
bool k_nscore__resultsstream_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__ResultsStream*
/// @param name const char*
QVariant* k_nscore__resultsstream_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__ResultsStream*
const char** k_nscore__resultsstream_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__ResultsStream*
QBindingStorage* k_nscore__resultsstream_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__ResultsStream*
const QBindingStorage* k_nscore__resultsstream_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ResultsStream*
/// @param callback void func(KNSCore__ResultsStream* self)
void k_nscore__resultsstream_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNSCore__ResultsStream*
QObject* k_nscore__resultsstream_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNSCore__ResultsStream*
/// @param classname const char*
bool k_nscore__resultsstream_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__ResultsStream*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_nscore__resultsstream_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__ResultsStream*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_nscore__resultsstream_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__resultsstream_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__ResultsStream*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__resultsstream_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ResultsStream*
/// @param param1 QObject*
void k_nscore__resultsstream_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__ResultsStream*
/// @param callback void func(KNSCore__ResultsStream* self, QObject* param1)
void k_nscore__resultsstream_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__ResultsStream*
/// @param callback void func(KNSCore__ResultsStream* self, const char* objectName)
void k_nscore__resultsstream_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__ResultsStream*
void k_nscore__resultsstream_delete(void* self);

#endif
