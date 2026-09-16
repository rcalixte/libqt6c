#pragma once
#ifndef EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_H
#define EXTRAS_KICONTHEMES_LIBKQUICKICONPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kquickiconprovider.html)

/// k_quickiconprovider_new constructs a new KQuickIconProvider object.
///
KQuickIconProvider* k_quickiconprovider_new();

/// [Upstream resources](https://api.kde.org/kquickiconprovider.html#requestPixmap)
///
/// @param self KQuickIconProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QPixmap* k_quickiconprovider_request_pixmap(void* self, const char* id, void* size, void* requestedSize);

/// [Upstream resources](https://api.kde.org/kquickiconprovider.html#requestPixmap)
///
/// Allows for overriding the related default method
///
/// @param self KQuickIconProvider*
/// @param callback QPixmap* func(KQuickIconProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_quickiconprovider_on_request_pixmap(void* self, QPixmap* (*callback)(void*, const char*, void*, void*));

/// [Upstream resources](https://api.kde.org/kquickiconprovider.html#requestPixmap)
///
/// Base class method implementation
///
/// @param self KQuickIconProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QPixmap* k_quickiconprovider_super_request_pixmap(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_quickiconprovider_tr(const char* s);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_quickiconprovider_tr2(const char* s, const char* c);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_quickiconprovider_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KQuickIconProvider*
///
const char* k_quickiconprovider_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KQuickIconProvider*
/// @param name const char*
///
void k_quickiconprovider_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KQuickIconProvider*
///
bool k_quickiconprovider_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KQuickIconProvider*
///
bool k_quickiconprovider_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KQuickIconProvider*
///
bool k_quickiconprovider_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KQuickIconProvider*
///
bool k_quickiconprovider_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KQuickIconProvider*
/// @param b bool
///
bool k_quickiconprovider_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KQuickIconProvider*
///
QThread* k_quickiconprovider_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KQuickIconProvider*
/// @param thread QThread*
///
bool k_quickiconprovider_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KQuickIconProvider*
/// @param interval int
///
int32_t k_quickiconprovider_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KQuickIconProvider*
/// @param time int64_t of nanoseconds
///
int32_t k_quickiconprovider_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KQuickIconProvider*
/// @param id int
///
void k_quickiconprovider_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KQuickIconProvider*
/// @param id enum Qt__TimerId
///
void k_quickiconprovider_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KQuickIconProvider*
///
/// @return libqt_list of QObject*
///
libqt_list k_quickiconprovider_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KQuickIconProvider*
/// @param parent QObject*
///
void k_quickiconprovider_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KQuickIconProvider*
/// @param filterObj QObject*
///
void k_quickiconprovider_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KQuickIconProvider*
/// @param obj QObject*
///
void k_quickiconprovider_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_quickiconprovider_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_quickiconprovider_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KQuickIconProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_quickiconprovider_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_quickiconprovider_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_quickiconprovider_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KQuickIconProvider*
///
bool k_quickiconprovider_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KQuickIconProvider*
/// @param receiver QObject*
///
bool k_quickiconprovider_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_quickiconprovider_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KQuickIconProvider*
///
void k_quickiconprovider_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KQuickIconProvider*
///
void k_quickiconprovider_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KQuickIconProvider*
/// @param name const char*
/// @param value QVariant*
///
bool k_quickiconprovider_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KQuickIconProvider*
/// @param name const char*
///
QVariant* k_quickiconprovider_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KQuickIconProvider*
///
const char** k_quickiconprovider_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KQuickIconProvider*
///
QBindingStorage* k_quickiconprovider_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KQuickIconProvider*
///
const QBindingStorage* k_quickiconprovider_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KQuickIconProvider*
///
void k_quickiconprovider_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self)
///
void k_quickiconprovider_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KQuickIconProvider*
///
QObject* k_quickiconprovider_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KQuickIconProvider*
/// @param classname const char*
///
bool k_quickiconprovider_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KQuickIconProvider*
///
void k_quickiconprovider_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KQuickIconProvider*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_quickiconprovider_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KQuickIconProvider*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_quickiconprovider_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_quickiconprovider_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_quickiconprovider_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KQuickIconProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_quickiconprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KQuickIconProvider*
/// @param signal const char*
///
bool k_quickiconprovider_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KQuickIconProvider*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_quickiconprovider_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KQuickIconProvider*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_quickiconprovider_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KQuickIconProvider*
/// @param receiver QObject*
/// @param member const char*
///
bool k_quickiconprovider_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KQuickIconProvider*
/// @param param1 QObject*
///
void k_quickiconprovider_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self, QObject* param1)
///
void k_quickiconprovider_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
///
const QMetaObject* k_quickiconprovider_meta_object(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
///
const QMetaObject* k_quickiconprovider_super_meta_object(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback const QMetaObject* func()
///
void k_quickiconprovider_on_meta_object(void* self, const QMetaObject* (*callback)());

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param param1 const char*
///
void* k_quickiconprovider_metacast(void* self, const char* param1);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param param1 const char*
///
void* k_quickiconprovider_super_metacast(void* self, const char* param1);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback void* func(KQuickIconProvider* self, const char* param1)
///
void k_quickiconprovider_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_quickiconprovider_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_quickiconprovider_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback int32_t func(KQuickIconProvider* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_quickiconprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
///
/// @return enum QQmlImageProviderBase__ImageType
///
int32_t k_quickiconprovider_image_type(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
///
/// @return enum QQmlImageProviderBase__ImageType
///
int32_t k_quickiconprovider_super_image_type(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback int32_t func()
///
void k_quickiconprovider_on_image_type(void* self, int32_t (*callback)());

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
///
/// @return flag of enum QQmlImageProviderBase__Flag
///
int32_t k_quickiconprovider_flags(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
///
/// @return flag of enum QQmlImageProviderBase__Flag
///
int32_t k_quickiconprovider_super_flags(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback int32_t func()
///
void k_quickiconprovider_on_flags(void* self, int32_t (*callback)());

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QImage* k_quickiconprovider_request_image(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QImage* k_quickiconprovider_super_request_image(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback QImage* func(KQuickIconProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_quickiconprovider_on_request_image(void* self, QImage* (*callback)(void*, const char*, void*, void*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QQuickTextureFactory* k_quickiconprovider_request_texture(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QQuickTextureFactory* k_quickiconprovider_super_request_texture(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback QQuickTextureFactory* func(KQuickIconProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
void k_quickiconprovider_on_request_texture(void* self, QQuickTextureFactory* (*callback)(void*, const char*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QEvent*
///
bool k_quickiconprovider_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QEvent*
///
bool k_quickiconprovider_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback bool func(KQuickIconProvider* self, QEvent* event)
///
void k_quickiconprovider_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_quickiconprovider_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_quickiconprovider_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback bool func(KQuickIconProvider* self, QObject* watched, QEvent* event)
///
void k_quickiconprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QTimerEvent*
///
void k_quickiconprovider_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QTimerEvent*
///
void k_quickiconprovider_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self, QTimerEvent* event)
///
void k_quickiconprovider_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QChildEvent*
///
void k_quickiconprovider_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QChildEvent*
///
void k_quickiconprovider_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self, QChildEvent* event)
///
void k_quickiconprovider_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QEvent*
///
void k_quickiconprovider_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param event QEvent*
///
void k_quickiconprovider_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self, QEvent* event)
///
void k_quickiconprovider_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal QMetaMethod*
///
void k_quickiconprovider_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal QMetaMethod*
///
void k_quickiconprovider_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self, QMetaMethod* signal)
///
void k_quickiconprovider_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal QMetaMethod*
///
void k_quickiconprovider_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal QMetaMethod*
///
void k_quickiconprovider_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self, QMetaMethod* signal)
///
void k_quickiconprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
///
QObject* k_quickiconprovider_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
///
QObject* k_quickiconprovider_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback QObject* func()
///
void k_quickiconprovider_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
///
int32_t k_quickiconprovider_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
///
int32_t k_quickiconprovider_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback int32_t func()
///
void k_quickiconprovider_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal const char*
///
int32_t k_quickiconprovider_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal const char*
///
int32_t k_quickiconprovider_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback int32_t func(KQuickIconProvider* self, const char* signal)
///
void k_quickiconprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal QMetaMethod*
///
bool k_quickiconprovider_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param signal QMetaMethod*
///
bool k_quickiconprovider_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KQuickIconProvider*
/// @param callback bool func(KQuickIconProvider* self, QMetaMethod* signal)
///
void k_quickiconprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KQuickIconProvider*
/// @param callback void func(KQuickIconProvider* self, const char* objectName)
///
void k_quickiconprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kquickiconprovider.html#dtor.KQuickIconProvider)
///
/// Delete this object from C++ memory.
///
/// @param self KQuickIconProvider*
///
void k_quickiconprovider_delete(void* self);

#endif
