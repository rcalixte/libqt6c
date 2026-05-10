#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBCUSTOMEMOJIICONMANAGER_H
#define SRC_RESTRICTED_EXTRAS_KTEXTADDONS_QT6C_LIBCUSTOMEMOJIICONMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)

/// k_textemoticonscore__customemojiiconmanager_new constructs a new TextEmoticonsCore::CustomEmojiIconManager object.
///
TextEmoticonsCore__CustomEmojiIconManager* k_textemoticonscore__customemojiiconmanager_new();

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)

/// k_textemoticonscore__customemojiiconmanager_new2 constructs a new TextEmoticonsCore::CustomEmojiIconManager object.
///
/// @param parent QObject*
///
TextEmoticonsCore__CustomEmojiIconManager* k_textemoticonscore__customemojiiconmanager_new2(void* parent);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param customIdentifier const char*
///
QIcon* k_textemoticonscore__customemojiiconmanager_generate_icon(void* self, const char* customIdentifier);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
///
/// Allows for overriding the related default method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback QIcon* func(TextEmoticonsCore__CustomEmojiIconManager* self, const char* customIdentifier)
///
void k_textemoticonscore__customemojiiconmanager_on_generate_icon(void* self, QIcon* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_generate_icon` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_generate_icon k_textemoticonscore__customemojiiconmanager_super_generate_icon

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
///
/// Base class method implementation
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param customIdentifier const char*
///
QIcon* k_textemoticonscore__customemojiiconmanager_super_generate_icon(void* self, const char* customIdentifier);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param customIdentifier const char*
///
const char* k_textemoticonscore__customemojiiconmanager_file_name(void* self, const char* customIdentifier);

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
///
/// Allows for overriding the related default method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback const char* func(TextEmoticonsCore__CustomEmojiIconManager* self, const char* customIdentifier)
///
void k_textemoticonscore__customemojiiconmanager_on_file_name(void* self, const char* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_file_name` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_file_name k_textemoticonscore__customemojiiconmanager_super_file_name

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
///
/// Base class method implementation
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param customIdentifier const char*
///
const char* k_textemoticonscore__customemojiiconmanager_super_file_name(void* self, const char* customIdentifier);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_textemoticonscore__customemojiiconmanager_tr(const char* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
const char* k_textemoticonscore__customemojiiconmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param name const char*
///
void k_textemoticonscore__customemojiiconmanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
bool k_textemoticonscore__customemojiiconmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
bool k_textemoticonscore__customemojiiconmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
bool k_textemoticonscore__customemojiiconmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
bool k_textemoticonscore__customemojiiconmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param b bool
///
bool k_textemoticonscore__customemojiiconmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
QThread* k_textemoticonscore__customemojiiconmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param thread QThread*
///
bool k_textemoticonscore__customemojiiconmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param interval int
///
int32_t k_textemoticonscore__customemojiiconmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param time int64_t of nanoseconds
///
int32_t k_textemoticonscore__customemojiiconmanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param id int
///
void k_textemoticonscore__customemojiiconmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param id enum Qt__TimerId
///
void k_textemoticonscore__customemojiiconmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
/// @return libqt_list of QObject*
///
libqt_list k_textemoticonscore__customemojiiconmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param parent QObject*
///
void k_textemoticonscore__customemojiiconmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param filterObj QObject*
///
void k_textemoticonscore__customemojiiconmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param obj QObject*
///
void k_textemoticonscore__customemojiiconmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_textemoticonscore__customemojiiconmanager_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_textemoticonscore__customemojiiconmanager_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_textemoticonscore__customemojiiconmanager_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param receiver QObject*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
void k_textemoticonscore__customemojiiconmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
void k_textemoticonscore__customemojiiconmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param name const char*
/// @param value QVariant*
///
bool k_textemoticonscore__customemojiiconmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param name const char*
///
QVariant* k_textemoticonscore__customemojiiconmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
const char** k_textemoticonscore__customemojiiconmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
QBindingStorage* k_textemoticonscore__customemojiiconmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
const QBindingStorage* k_textemoticonscore__customemojiiconmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
void k_textemoticonscore__customemojiiconmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self)
///
void k_textemoticonscore__customemojiiconmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
QObject* k_textemoticonscore__customemojiiconmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param classname const char*
///
bool k_textemoticonscore__customemojiiconmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
void k_textemoticonscore__customemojiiconmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_textemoticonscore__customemojiiconmanager_tr2(const char* s, const char* c);

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
const char* k_textemoticonscore__customemojiiconmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_textemoticonscore__customemojiiconmanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_textemoticonscore__customemojiiconmanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_textemoticonscore__customemojiiconmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_textemoticonscore__customemojiiconmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_textemoticonscore__customemojiiconmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal const char*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param receiver QObject*
/// @param member const char*
///
bool k_textemoticonscore__customemojiiconmanager_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param param1 QObject*
///
void k_textemoticonscore__customemojiiconmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self, QObject* param1)
///
void k_textemoticonscore__customemojiiconmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
const QMetaObject* k_textemoticonscore__customemojiiconmanager_meta_object(void* self);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_meta_object` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_meta_object k_textemoticonscore__customemojiiconmanager_super_meta_object

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
const QMetaObject* k_textemoticonscore__customemojiiconmanager_super_meta_object(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback const QMetaObject* func()
///
void k_textemoticonscore__customemojiiconmanager_on_meta_object(void* self, const QMetaObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param param1 const char*
///
void* k_textemoticonscore__customemojiiconmanager_metacast(void* self, const char* param1);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_metacast` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_metacast k_textemoticonscore__customemojiiconmanager_super_metacast

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param param1 const char*
///
void* k_textemoticonscore__customemojiiconmanager_super_metacast(void* self, const char* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void* func(TextEmoticonsCore__CustomEmojiIconManager* self, const char* param1)
///
void k_textemoticonscore__customemojiiconmanager_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textemoticonscore__customemojiiconmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_metacall` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_metacall k_textemoticonscore__customemojiiconmanager_super_metacall

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_textemoticonscore__customemojiiconmanager_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback int32_t func(TextEmoticonsCore__CustomEmojiIconManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_textemoticonscore__customemojiiconmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QEvent*
///
bool k_textemoticonscore__customemojiiconmanager_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_event` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_event k_textemoticonscore__customemojiiconmanager_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QEvent*
///
bool k_textemoticonscore__customemojiiconmanager_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback bool func(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event)
///
void k_textemoticonscore__customemojiiconmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textemoticonscore__customemojiiconmanager_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_event_filter` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_event_filter k_textemoticonscore__customemojiiconmanager_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_textemoticonscore__customemojiiconmanager_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback bool func(TextEmoticonsCore__CustomEmojiIconManager* self, QObject* watched, QEvent* event)
///
void k_textemoticonscore__customemojiiconmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QTimerEvent*
///
void k_textemoticonscore__customemojiiconmanager_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_timer_event` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_timer_event k_textemoticonscore__customemojiiconmanager_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QTimerEvent*
///
void k_textemoticonscore__customemojiiconmanager_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self, QTimerEvent* event)
///
void k_textemoticonscore__customemojiiconmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QChildEvent*
///
void k_textemoticonscore__customemojiiconmanager_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_child_event` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_child_event k_textemoticonscore__customemojiiconmanager_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QChildEvent*
///
void k_textemoticonscore__customemojiiconmanager_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self, QChildEvent* event)
///
void k_textemoticonscore__customemojiiconmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QEvent*
///
void k_textemoticonscore__customemojiiconmanager_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_custom_event` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_custom_event k_textemoticonscore__customemojiiconmanager_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param event QEvent*
///
void k_textemoticonscore__customemojiiconmanager_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self, QEvent* event)
///
void k_textemoticonscore__customemojiiconmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__customemojiiconmanager_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_connect_notify` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_connect_notify k_textemoticonscore__customemojiiconmanager_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__customemojiiconmanager_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self, QMetaMethod* signal)
///
void k_textemoticonscore__customemojiiconmanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__customemojiiconmanager_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_disconnect_notify` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_disconnect_notify k_textemoticonscore__customemojiiconmanager_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal QMetaMethod*
///
void k_textemoticonscore__customemojiiconmanager_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self, QMetaMethod* signal)
///
void k_textemoticonscore__customemojiiconmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
QObject* k_textemoticonscore__customemojiiconmanager_sender(void* self);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_sender` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_sender k_textemoticonscore__customemojiiconmanager_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
QObject* k_textemoticonscore__customemojiiconmanager_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback QObject* func()
///
void k_textemoticonscore__customemojiiconmanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
int32_t k_textemoticonscore__customemojiiconmanager_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_sender_signal_index` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_sender_signal_index k_textemoticonscore__customemojiiconmanager_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
int32_t k_textemoticonscore__customemojiiconmanager_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback int32_t func()
///
void k_textemoticonscore__customemojiiconmanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal const char*
///
int32_t k_textemoticonscore__customemojiiconmanager_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_receivers` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_receivers k_textemoticonscore__customemojiiconmanager_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal const char*
///
int32_t k_textemoticonscore__customemojiiconmanager_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback int32_t func(TextEmoticonsCore__CustomEmojiIconManager* self, const char* signal)
///
void k_textemoticonscore__customemojiiconmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal QMetaMethod*
///
bool k_textemoticonscore__customemojiiconmanager_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_textemoticonscore__customemojiiconmanager_super_is_signal_connected` instead
///
#define k_textemoticonscore__customemojiiconmanager_qbase_is_signal_connected k_textemoticonscore__customemojiiconmanager_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param signal QMetaMethod*
///
bool k_textemoticonscore__customemojiiconmanager_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback bool func(TextEmoticonsCore__CustomEmojiIconManager* self, QMetaMethod* signal)
///
void k_textemoticonscore__customemojiiconmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
/// @param callback void func(TextEmoticonsCore__CustomEmojiIconManager* self, const char* objectName)
///
void k_textemoticonscore__customemojiiconmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextEmoticonsCore_1_1CustomEmojiIconManager.html)
///
/// Delete this object from C++ memory.
///
/// @param self TextEmoticonsCore__CustomEmojiIconManager*
///
void k_textemoticonscore__customemojiiconmanager_delete(void* self);

#endif
