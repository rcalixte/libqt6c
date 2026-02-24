#pragma once
#ifndef SRC_WEBSOCKETS_QT6C_LIBQMASKGENERATOR_H
#define SRC_WEBSOCKETS_QT6C_LIBQMASKGENERATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html)

/// q_maskgenerator_new constructs a new QMaskGenerator object.
///
QMaskGenerator* q_maskgenerator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html)

/// q_maskgenerator_new2 constructs a new QMaskGenerator object.
///
/// @param parent QObject*
///
QMaskGenerator* q_maskgenerator_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html#seed)
///
/// @param self QMaskGenerator*
///
bool q_maskgenerator_seed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html#seed)
///
/// Allows for overriding the related default method
///
/// @param self QMaskGenerator*
/// @param callback bool func()
///
void q_maskgenerator_on_seed(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `q_maskgenerator_super_seed` instead
///
#define q_maskgenerator_qbase_seed q_maskgenerator_super_seed

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html#seed)
///
/// Base class method implementation
///
/// @param self QMaskGenerator*
///
bool q_maskgenerator_super_seed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html#nextMask)
///
/// @param self QMaskGenerator*
///
uint32_t q_maskgenerator_next_mask(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html#nextMask)
///
/// Allows for overriding the related default method
///
/// @param self QMaskGenerator*
/// @param callback uint32_t func()
///
void q_maskgenerator_on_next_mask(void* self, uint32_t (*callback)());

/// @warning DEPRECATED: Use `q_maskgenerator_super_next_mask` instead
///
#define q_maskgenerator_qbase_next_mask q_maskgenerator_super_next_mask

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html#nextMask)
///
/// Base class method implementation
///
/// @param self QMaskGenerator*
///
uint32_t q_maskgenerator_super_next_mask(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_maskgenerator_tr(const char* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMaskGenerator*
///
const char* q_maskgenerator_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMaskGenerator*
/// @param name const char*
///
void q_maskgenerator_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMaskGenerator*
///
bool q_maskgenerator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMaskGenerator*
///
bool q_maskgenerator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMaskGenerator*
///
bool q_maskgenerator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMaskGenerator*
///
bool q_maskgenerator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMaskGenerator*
/// @param b bool
///
bool q_maskgenerator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMaskGenerator*
///
QThread* q_maskgenerator_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMaskGenerator*
/// @param thread QThread*
///
bool q_maskgenerator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMaskGenerator*
/// @param interval int
///
int32_t q_maskgenerator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMaskGenerator*
/// @param time int64_t of nanoseconds
///
int32_t q_maskgenerator_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMaskGenerator*
/// @param id int
///
void q_maskgenerator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMaskGenerator*
/// @param id enum Qt__TimerId
///
void q_maskgenerator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMaskGenerator*
///
/// @return libqt_list of QObject*
///
libqt_list q_maskgenerator_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMaskGenerator*
/// @param parent QObject*
///
void q_maskgenerator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMaskGenerator*
/// @param filterObj QObject*
///
void q_maskgenerator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMaskGenerator*
/// @param obj QObject*
///
void q_maskgenerator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_maskgenerator_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_maskgenerator_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMaskGenerator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_maskgenerator_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_maskgenerator_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_maskgenerator_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMaskGenerator*
///
bool q_maskgenerator_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMaskGenerator*
/// @param receiver QObject*
///
bool q_maskgenerator_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_maskgenerator_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMaskGenerator*
///
void q_maskgenerator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMaskGenerator*
///
void q_maskgenerator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMaskGenerator*
/// @param name const char*
/// @param value QVariant*
///
bool q_maskgenerator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMaskGenerator*
/// @param name const char*
///
QVariant* q_maskgenerator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMaskGenerator*
///
const char** q_maskgenerator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMaskGenerator*
///
QBindingStorage* q_maskgenerator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMaskGenerator*
///
const QBindingStorage* q_maskgenerator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMaskGenerator*
///
void q_maskgenerator_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self)
///
void q_maskgenerator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMaskGenerator*
///
QObject* q_maskgenerator_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMaskGenerator*
/// @param classname const char*
///
bool q_maskgenerator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMaskGenerator*
///
void q_maskgenerator_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_maskgenerator_tr2(const char* s, const char* c);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_maskgenerator_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMaskGenerator*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_maskgenerator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMaskGenerator*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_maskgenerator_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_maskgenerator_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_maskgenerator_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMaskGenerator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_maskgenerator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMaskGenerator*
/// @param signal const char*
///
bool q_maskgenerator_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMaskGenerator*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_maskgenerator_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMaskGenerator*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_maskgenerator_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMaskGenerator*
/// @param receiver QObject*
/// @param member const char*
///
bool q_maskgenerator_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMaskGenerator*
/// @param param1 QObject*
///
void q_maskgenerator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self, QObject* param1)
///
void q_maskgenerator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
///
const QMetaObject* q_maskgenerator_meta_object(void* self);

/// @warning DEPRECATED: Use `q_maskgenerator_super_meta_object` instead
///
#define q_maskgenerator_qbase_meta_object q_maskgenerator_super_meta_object

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
///
const QMetaObject* q_maskgenerator_super_meta_object(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback const QMetaObject* func()
///
void q_maskgenerator_on_meta_object(void* self, const QMetaObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param param1 const char*
///
void* q_maskgenerator_metacast(void* self, const char* param1);

/// @warning DEPRECATED: Use `q_maskgenerator_super_metacast` instead
///
#define q_maskgenerator_qbase_metacast q_maskgenerator_super_metacast

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param param1 const char*
///
void* q_maskgenerator_super_metacast(void* self, const char* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback void* func(QMaskGenerator* self, const char* param1)
///
void q_maskgenerator_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_maskgenerator_metacall(void* self, int32_t param1, int param2, void* param3);

/// @warning DEPRECATED: Use `q_maskgenerator_super_metacall` instead
///
#define q_maskgenerator_qbase_metacall q_maskgenerator_super_metacall

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_maskgenerator_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback int32_t func(QMaskGenerator* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_maskgenerator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QEvent*
///
bool q_maskgenerator_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_maskgenerator_super_event` instead
///
#define q_maskgenerator_qbase_event q_maskgenerator_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QEvent*
///
bool q_maskgenerator_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback bool func(QMaskGenerator* self, QEvent* event)
///
void q_maskgenerator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_maskgenerator_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_maskgenerator_super_event_filter` instead
///
#define q_maskgenerator_qbase_event_filter q_maskgenerator_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_maskgenerator_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback bool func(QMaskGenerator* self, QObject* watched, QEvent* event)
///
void q_maskgenerator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QTimerEvent*
///
void q_maskgenerator_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_maskgenerator_super_timer_event` instead
///
#define q_maskgenerator_qbase_timer_event q_maskgenerator_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QTimerEvent*
///
void q_maskgenerator_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self, QTimerEvent* event)
///
void q_maskgenerator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QChildEvent*
///
void q_maskgenerator_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_maskgenerator_super_child_event` instead
///
#define q_maskgenerator_qbase_child_event q_maskgenerator_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QChildEvent*
///
void q_maskgenerator_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self, QChildEvent* event)
///
void q_maskgenerator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QEvent*
///
void q_maskgenerator_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_maskgenerator_super_custom_event` instead
///
#define q_maskgenerator_qbase_custom_event q_maskgenerator_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param event QEvent*
///
void q_maskgenerator_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self, QEvent* event)
///
void q_maskgenerator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal QMetaMethod*
///
void q_maskgenerator_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_maskgenerator_super_connect_notify` instead
///
#define q_maskgenerator_qbase_connect_notify q_maskgenerator_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal QMetaMethod*
///
void q_maskgenerator_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self, QMetaMethod* signal)
///
void q_maskgenerator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal QMetaMethod*
///
void q_maskgenerator_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_maskgenerator_super_disconnect_notify` instead
///
#define q_maskgenerator_qbase_disconnect_notify q_maskgenerator_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal QMetaMethod*
///
void q_maskgenerator_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self, QMetaMethod* signal)
///
void q_maskgenerator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
///
QObject* q_maskgenerator_sender(void* self);

/// @warning DEPRECATED: Use `q_maskgenerator_super_sender` instead
///
#define q_maskgenerator_qbase_sender q_maskgenerator_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
///
QObject* q_maskgenerator_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback QObject* func()
///
void q_maskgenerator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
///
int32_t q_maskgenerator_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_maskgenerator_super_sender_signal_index` instead
///
#define q_maskgenerator_qbase_sender_signal_index q_maskgenerator_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
///
int32_t q_maskgenerator_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback int32_t func()
///
void q_maskgenerator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal const char*
///
int32_t q_maskgenerator_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_maskgenerator_super_receivers` instead
///
#define q_maskgenerator_qbase_receivers q_maskgenerator_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal const char*
///
int32_t q_maskgenerator_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback int32_t func(QMaskGenerator* self, const char* signal)
///
void q_maskgenerator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal QMetaMethod*
///
bool q_maskgenerator_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_maskgenerator_super_is_signal_connected` instead
///
#define q_maskgenerator_qbase_is_signal_connected q_maskgenerator_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param signal QMetaMethod*
///
bool q_maskgenerator_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMaskGenerator*
/// @param callback bool func(QMaskGenerator* self, QMetaMethod* signal)
///
void q_maskgenerator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMaskGenerator*
/// @param callback void func(QMaskGenerator* self, const char* objectName)
///
void q_maskgenerator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmaskgenerator.html#dtor.QMaskGenerator)
///
/// Delete this object from C++ memory.
///
/// @param self QMaskGenerator*
///
void q_maskgenerator_delete(void* self);

#endif
