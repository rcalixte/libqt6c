#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSABSTRACTADAPTOR_H
#define SRC_POSIX_EXTRAS_DBUSQT6C_LIBQDBUSABSTRACTADAPTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbusabstractadaptor.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusAbstractAdaptor*
const QMetaObject* q_dbusabstractadaptor_meta_object(void* self);

/// @param self QDBusAbstractAdaptor*
/// @param param1 const char*
void* q_dbusabstractadaptor_metacast(void* self, const char* param1);

/// @param self QDBusAbstractAdaptor*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_dbusabstractadaptor_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_dbusabstractadaptor_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_dbusabstractadaptor_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_dbusabstractadaptor_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QDBusAbstractAdaptor*
/// @param event QEvent*
bool q_dbusabstractadaptor_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QDBusAbstractAdaptor*
/// @param watched QObject*
/// @param event QEvent*
bool q_dbusabstractadaptor_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractAdaptor*
const char* q_dbusabstractadaptor_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusAbstractAdaptor*
/// @param name char*
void q_dbusabstractadaptor_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusAbstractAdaptor*
bool q_dbusabstractadaptor_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusAbstractAdaptor*
bool q_dbusabstractadaptor_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusAbstractAdaptor*
bool q_dbusabstractadaptor_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusAbstractAdaptor*
bool q_dbusabstractadaptor_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusAbstractAdaptor*
/// @param b bool
bool q_dbusabstractadaptor_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusAbstractAdaptor*
QThread* q_dbusabstractadaptor_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusAbstractAdaptor*
/// @param thread QThread*
bool q_dbusabstractadaptor_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusAbstractAdaptor*
/// @param interval int
int32_t q_dbusabstractadaptor_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusAbstractAdaptor*
/// @param id int
void q_dbusabstractadaptor_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusAbstractAdaptor*
/// @param id enum Qt__TimerId
void q_dbusabstractadaptor_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusAbstractAdaptor*
libqt_list /* of QObject* */ q_dbusabstractadaptor_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusAbstractAdaptor*
/// @param parent QObject*
void q_dbusabstractadaptor_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusAbstractAdaptor*
/// @param filterObj QObject*
void q_dbusabstractadaptor_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusAbstractAdaptor*
/// @param obj QObject*
void q_dbusabstractadaptor_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_dbusabstractadaptor_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusAbstractAdaptor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_dbusabstractadaptor_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_dbusabstractadaptor_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_dbusabstractadaptor_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusAbstractAdaptor*
void q_dbusabstractadaptor_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusAbstractAdaptor*
void q_dbusabstractadaptor_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusAbstractAdaptor*
/// @param name const char*
/// @param value QVariant*
bool q_dbusabstractadaptor_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusAbstractAdaptor*
/// @param name const char*
QVariant* q_dbusabstractadaptor_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractAdaptor*
const char** q_dbusabstractadaptor_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusAbstractAdaptor*
QBindingStorage* q_dbusabstractadaptor_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusAbstractAdaptor*
const QBindingStorage* q_dbusabstractadaptor_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractAdaptor*
void q_dbusabstractadaptor_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractAdaptor*
/// @param callback void func(QDBusAbstractAdaptor* self)
void q_dbusabstractadaptor_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusAbstractAdaptor*
QObject* q_dbusabstractadaptor_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusAbstractAdaptor*
/// @param classname const char*
bool q_dbusabstractadaptor_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusAbstractAdaptor*
void q_dbusabstractadaptor_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusAbstractAdaptor*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_dbusabstractadaptor_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusAbstractAdaptor*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_dbusabstractadaptor_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_dbusabstractadaptor_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusAbstractAdaptor*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_dbusabstractadaptor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractAdaptor*
/// @param param1 QObject*
void q_dbusabstractadaptor_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractAdaptor*
/// @param callback void func(QDBusAbstractAdaptor* self, QObject* param1)
void q_dbusabstractadaptor_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusAbstractAdaptor*
/// @param callback void func(QDBusAbstractAdaptor* self, const char* objectName)
void q_dbusabstractadaptor_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdbusabstractadaptor.html#dtor.QDBusAbstractAdaptor)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusAbstractAdaptor*
void q_dbusabstractadaptor_delete(void* self);

#endif
