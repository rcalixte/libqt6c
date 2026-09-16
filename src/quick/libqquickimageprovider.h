#pragma once
#ifndef QUICK_LIBQQUICKIMAGEPROVIDER_H
#define QUICK_LIBQQUICKIMAGEPROVIDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html)

/// q_quicktexturefactory_new constructs a new QQuickTextureFactory object.
///
QQuickTextureFactory* q_quicktexturefactory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickTextureFactory*
///
const QMetaObject* q_quicktexturefactory_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTextureFactory*
/// @param callback const QMetaObject* func()
///
void q_quicktexturefactory_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickTextureFactory*
///
const QMetaObject* q_quicktexturefactory_super_meta_object(void* self);

/// @param self QQuickTextureFactory*
/// @param param1 const char*
///
void* q_quicktexturefactory_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickTextureFactory*
/// @param callback void* func(QQuickTextureFactory* self, const char* param1)
///
void q_quicktexturefactory_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickTextureFactory*
/// @param param1 const char*
///
void* q_quicktexturefactory_super_metacast(void* self, const char* param1);

/// @param self QQuickTextureFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quicktexturefactory_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickTextureFactory*
/// @param callback int32_t func(QQuickTextureFactory* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quicktexturefactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickTextureFactory*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quicktexturefactory_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quicktexturefactory_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#createTexture)
///
/// @param self QQuickTextureFactory*
/// @param window QQuickWindow*
///
QSGTexture* q_quicktexturefactory_create_texture(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#createTexture)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTextureFactory*
/// @param callback QSGTexture* func(QQuickTextureFactory* self, QQuickWindow* window)
///
void q_quicktexturefactory_on_create_texture(void* self, QSGTexture* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#createTexture)
///
/// Base class method implementation
///
/// @param self QQuickTextureFactory*
/// @param window QQuickWindow*
///
QSGTexture* q_quicktexturefactory_super_create_texture(void* self, void* window);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#textureSize)
///
/// @param self QQuickTextureFactory*
///
QSize* q_quicktexturefactory_texture_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#textureSize)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTextureFactory*
/// @param callback QSize* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quicktexturefactory_on_texture_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#textureSize)
///
/// Base class method implementation
///
/// @param self QQuickTextureFactory*
///
QSize* q_quicktexturefactory_super_texture_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#textureByteCount)
///
/// @param self QQuickTextureFactory*
///
int32_t q_quicktexturefactory_texture_byte_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#textureByteCount)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTextureFactory*
/// @param callback int32_t func()
///
void q_quicktexturefactory_on_texture_byte_count(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#textureByteCount)
///
/// Base class method implementation
///
/// @param self QQuickTextureFactory*
///
int32_t q_quicktexturefactory_super_texture_byte_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#image)
///
/// @param self QQuickTextureFactory*
///
QImage* q_quicktexturefactory_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#image)
///
/// Allows for overriding the related default method
///
/// @param self QQuickTextureFactory*
/// @param callback QImage* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quicktexturefactory_on_image(void* self, QImage* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#image)
///
/// Base class method implementation
///
/// @param self QQuickTextureFactory*
///
QImage* q_quicktexturefactory_super_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#textureFactoryForImage)
///
/// @param image QImage*
///
QQuickTextureFactory* q_quicktexturefactory_texture_factory_for_image(void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quicktexturefactory_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quicktexturefactory_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickTextureFactory*
///
const char* q_quicktexturefactory_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickTextureFactory*
/// @param name const char*
///
void q_quicktexturefactory_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickTextureFactory*
///
bool q_quicktexturefactory_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickTextureFactory*
///
bool q_quicktexturefactory_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickTextureFactory*
///
bool q_quicktexturefactory_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickTextureFactory*
///
bool q_quicktexturefactory_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickTextureFactory*
/// @param b bool
///
bool q_quicktexturefactory_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickTextureFactory*
///
QThread* q_quicktexturefactory_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickTextureFactory*
/// @param thread QThread*
///
bool q_quicktexturefactory_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextureFactory*
/// @param interval int
///
int32_t q_quicktexturefactory_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextureFactory*
/// @param time int64_t of nanoseconds
///
int32_t q_quicktexturefactory_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickTextureFactory*
/// @param id int
///
void q_quicktexturefactory_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickTextureFactory*
/// @param id enum Qt__TimerId
///
void q_quicktexturefactory_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickTextureFactory*
///
/// @return libqt_list of QObject*
///
libqt_list q_quicktexturefactory_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickTextureFactory*
/// @param parent QObject*
///
void q_quicktexturefactory_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickTextureFactory*
/// @param filterObj QObject*
///
void q_quicktexturefactory_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickTextureFactory*
/// @param obj QObject*
///
void q_quicktexturefactory_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quicktexturefactory_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quicktexturefactory_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickTextureFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quicktexturefactory_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktexturefactory_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quicktexturefactory_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextureFactory*
///
bool q_quicktexturefactory_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextureFactory*
/// @param receiver QObject*
///
bool q_quicktexturefactory_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quicktexturefactory_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickTextureFactory*
///
void q_quicktexturefactory_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickTextureFactory*
///
void q_quicktexturefactory_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickTextureFactory*
/// @param name const char*
/// @param value QVariant*
///
bool q_quicktexturefactory_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickTextureFactory*
/// @param name const char*
///
QVariant* q_quicktexturefactory_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickTextureFactory*
///
const char** q_quicktexturefactory_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickTextureFactory*
///
QBindingStorage* q_quicktexturefactory_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickTextureFactory*
///
const QBindingStorage* q_quicktexturefactory_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextureFactory*
///
void q_quicktexturefactory_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self)
///
void q_quicktexturefactory_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickTextureFactory*
///
QObject* q_quicktexturefactory_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickTextureFactory*
/// @param classname const char*
///
bool q_quicktexturefactory_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickTextureFactory*
///
void q_quicktexturefactory_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextureFactory*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quicktexturefactory_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickTextureFactory*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quicktexturefactory_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quicktexturefactory_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quicktexturefactory_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickTextureFactory*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quicktexturefactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextureFactory*
/// @param signal const char*
///
bool q_quicktexturefactory_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextureFactory*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quicktexturefactory_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextureFactory*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktexturefactory_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickTextureFactory*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quicktexturefactory_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextureFactory*
/// @param param1 QObject*
///
void q_quicktexturefactory_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self, QObject* param1)
///
void q_quicktexturefactory_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QEvent*
///
bool q_quicktexturefactory_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QEvent*
///
bool q_quicktexturefactory_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback bool func(QQuickTextureFactory* self, QEvent* event)
///
void q_quicktexturefactory_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quicktexturefactory_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quicktexturefactory_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback bool func(QQuickTextureFactory* self, QObject* watched, QEvent* event)
///
void q_quicktexturefactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QTimerEvent*
///
void q_quicktexturefactory_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QTimerEvent*
///
void q_quicktexturefactory_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self, QTimerEvent* event)
///
void q_quicktexturefactory_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QChildEvent*
///
void q_quicktexturefactory_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QChildEvent*
///
void q_quicktexturefactory_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self, QChildEvent* event)
///
void q_quicktexturefactory_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QEvent*
///
void q_quicktexturefactory_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param event QEvent*
///
void q_quicktexturefactory_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self, QEvent* event)
///
void q_quicktexturefactory_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal QMetaMethod*
///
void q_quicktexturefactory_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal QMetaMethod*
///
void q_quicktexturefactory_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self, QMetaMethod* signal)
///
void q_quicktexturefactory_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal QMetaMethod*
///
void q_quicktexturefactory_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal QMetaMethod*
///
void q_quicktexturefactory_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self, QMetaMethod* signal)
///
void q_quicktexturefactory_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
///
QObject* q_quicktexturefactory_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
///
QObject* q_quicktexturefactory_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback QObject* func()
///
void q_quicktexturefactory_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
///
int32_t q_quicktexturefactory_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
///
int32_t q_quicktexturefactory_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback int32_t func()
///
void q_quicktexturefactory_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal const char*
///
int32_t q_quicktexturefactory_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal const char*
///
int32_t q_quicktexturefactory_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback int32_t func(QQuickTextureFactory* self, const char* signal)
///
void q_quicktexturefactory_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal QMetaMethod*
///
bool q_quicktexturefactory_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param signal QMetaMethod*
///
bool q_quicktexturefactory_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickTextureFactory*
/// @param callback bool func(QQuickTextureFactory* self, QMetaMethod* signal)
///
void q_quicktexturefactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickTextureFactory*
/// @param callback void func(QQuickTextureFactory* self, const char* objectName)
///
void q_quicktexturefactory_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquicktexturefactory.html#dtor.QQuickTextureFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickTextureFactory*
///
void q_quicktexturefactory_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html)

/// q_quickimageresponse_new constructs a new QQuickImageResponse object.
///
QQuickImageResponse* q_quickimageresponse_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickImageResponse*
///
const QMetaObject* q_quickimageresponse_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageResponse*
/// @param callback const QMetaObject* func()
///
void q_quickimageresponse_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickImageResponse*
///
const QMetaObject* q_quickimageresponse_super_meta_object(void* self);

/// @param self QQuickImageResponse*
/// @param param1 const char*
///
void* q_quickimageresponse_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickImageResponse*
/// @param callback void* func(QQuickImageResponse* self, const char* param1)
///
void q_quickimageresponse_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickImageResponse*
/// @param param1 const char*
///
void* q_quickimageresponse_super_metacast(void* self, const char* param1);

/// @param self QQuickImageResponse*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickimageresponse_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickImageResponse*
/// @param callback int32_t func(QQuickImageResponse* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickimageresponse_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickImageResponse*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickimageresponse_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickimageresponse_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#textureFactory)
///
/// @param self QQuickImageResponse*
///
QQuickTextureFactory* q_quickimageresponse_texture_factory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#textureFactory)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageResponse*
/// @param callback QQuickTextureFactory* func()
///
void q_quickimageresponse_on_texture_factory(void* self, QQuickTextureFactory* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#textureFactory)
///
/// Base class method implementation
///
/// @param self QQuickImageResponse*
///
QQuickTextureFactory* q_quickimageresponse_super_texture_factory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickImageResponse*
///
const char* q_quickimageresponse_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#errorString)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageResponse*
/// @param callback const char* func()
///
void q_quickimageresponse_on_error_string(void* self, const char* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#errorString)
///
/// Base class method implementation
///
/// @param self QQuickImageResponse*
///
const char* q_quickimageresponse_super_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#cancel)
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_cancel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#cancel)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageResponse*
/// @param callback void func()
///
void q_quickimageresponse_on_cancel(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#cancel)
///
/// Base class method implementation
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_super_cancel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#finished)
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#finished)
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self)
///
void q_quickimageresponse_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickimageresponse_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickimageresponse_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickImageResponse*
///
const char* q_quickimageresponse_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickImageResponse*
/// @param name const char*
///
void q_quickimageresponse_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickImageResponse*
///
bool q_quickimageresponse_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickImageResponse*
///
bool q_quickimageresponse_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickImageResponse*
///
bool q_quickimageresponse_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickImageResponse*
///
bool q_quickimageresponse_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickImageResponse*
/// @param b bool
///
bool q_quickimageresponse_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickImageResponse*
///
QThread* q_quickimageresponse_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickImageResponse*
/// @param thread QThread*
///
bool q_quickimageresponse_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageResponse*
/// @param interval int
///
int32_t q_quickimageresponse_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageResponse*
/// @param time int64_t of nanoseconds
///
int32_t q_quickimageresponse_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickImageResponse*
/// @param id int
///
void q_quickimageresponse_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickImageResponse*
/// @param id enum Qt__TimerId
///
void q_quickimageresponse_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickImageResponse*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickimageresponse_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickImageResponse*
/// @param parent QObject*
///
void q_quickimageresponse_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickImageResponse*
/// @param filterObj QObject*
///
void q_quickimageresponse_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickImageResponse*
/// @param obj QObject*
///
void q_quickimageresponse_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickimageresponse_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickimageresponse_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickImageResponse*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickimageresponse_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickimageresponse_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickimageresponse_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageResponse*
///
bool q_quickimageresponse_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageResponse*
/// @param receiver QObject*
///
bool q_quickimageresponse_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickimageresponse_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickImageResponse*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickimageresponse_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickImageResponse*
/// @param name const char*
///
QVariant* q_quickimageresponse_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickImageResponse*
///
const char** q_quickimageresponse_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickImageResponse*
///
QBindingStorage* q_quickimageresponse_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickImageResponse*
///
const QBindingStorage* q_quickimageresponse_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self)
///
void q_quickimageresponse_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickImageResponse*
///
QObject* q_quickimageresponse_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickImageResponse*
/// @param classname const char*
///
bool q_quickimageresponse_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageResponse*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickimageresponse_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageResponse*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickimageresponse_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickimageresponse_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickimageresponse_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickImageResponse*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickimageresponse_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageResponse*
/// @param signal const char*
///
bool q_quickimageresponse_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageResponse*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickimageresponse_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageResponse*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickimageresponse_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageResponse*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickimageresponse_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageResponse*
/// @param param1 QObject*
///
void q_quickimageresponse_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self, QObject* param1)
///
void q_quickimageresponse_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QEvent*
///
bool q_quickimageresponse_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QEvent*
///
bool q_quickimageresponse_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback bool func(QQuickImageResponse* self, QEvent* event)
///
void q_quickimageresponse_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickimageresponse_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickimageresponse_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback bool func(QQuickImageResponse* self, QObject* watched, QEvent* event)
///
void q_quickimageresponse_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QTimerEvent*
///
void q_quickimageresponse_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QTimerEvent*
///
void q_quickimageresponse_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self, QTimerEvent* event)
///
void q_quickimageresponse_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QChildEvent*
///
void q_quickimageresponse_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QChildEvent*
///
void q_quickimageresponse_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self, QChildEvent* event)
///
void q_quickimageresponse_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QEvent*
///
void q_quickimageresponse_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param event QEvent*
///
void q_quickimageresponse_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self, QEvent* event)
///
void q_quickimageresponse_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal QMetaMethod*
///
void q_quickimageresponse_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal QMetaMethod*
///
void q_quickimageresponse_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self, QMetaMethod* signal)
///
void q_quickimageresponse_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal QMetaMethod*
///
void q_quickimageresponse_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal QMetaMethod*
///
void q_quickimageresponse_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self, QMetaMethod* signal)
///
void q_quickimageresponse_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
///
QObject* q_quickimageresponse_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
///
QObject* q_quickimageresponse_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback QObject* func()
///
void q_quickimageresponse_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
///
int32_t q_quickimageresponse_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
///
int32_t q_quickimageresponse_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback int32_t func()
///
void q_quickimageresponse_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal const char*
///
int32_t q_quickimageresponse_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal const char*
///
int32_t q_quickimageresponse_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback int32_t func(QQuickImageResponse* self, const char* signal)
///
void q_quickimageresponse_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal QMetaMethod*
///
bool q_quickimageresponse_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param signal QMetaMethod*
///
bool q_quickimageresponse_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageResponse*
/// @param callback bool func(QQuickImageResponse* self, QMetaMethod* signal)
///
void q_quickimageresponse_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickImageResponse*
/// @param callback void func(QQuickImageResponse* self, const char* objectName)
///
void q_quickimageresponse_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageresponse.html#dtor.QQuickImageResponse)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickImageResponse*
///
void q_quickimageresponse_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html)

/// q_quickimageprovider_new constructs a new QQuickImageProvider object.
///
/// @param type enum QQmlImageProviderBase__ImageType
///
QQuickImageProvider* q_quickimageprovider_new(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html)

/// q_quickimageprovider_new2 constructs a new QQuickImageProvider object.
///
/// @param type enum QQmlImageProviderBase__ImageType
/// @param flags flag of enum QQmlImageProviderBase__Flag
///
QQuickImageProvider* q_quickimageprovider_new2(int32_t type, int32_t flags);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QQuickImageProvider*
///
const QMetaObject* q_quickimageprovider_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback const QMetaObject* func()
///
void q_quickimageprovider_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QQuickImageProvider*
///
const QMetaObject* q_quickimageprovider_super_meta_object(void* self);

/// @param self QQuickImageProvider*
/// @param param1 const char*
///
void* q_quickimageprovider_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback void* func(QQuickImageProvider* self, const char* param1)
///
void q_quickimageprovider_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuickImageProvider*
/// @param param1 const char*
///
void* q_quickimageprovider_super_metacast(void* self, const char* param1);

/// @param self QQuickImageProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickimageprovider_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback int32_t func(QQuickImageProvider* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickimageprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuickImageProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickimageprovider_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickimageprovider_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// @param self QQuickImageProvider*
///
/// @return enum QQmlImageProviderBase__ImageType
///
int32_t q_quickimageprovider_image_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback int32_t func()
///
void q_quickimageprovider_on_image_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Base class method implementation
///
/// @param self QQuickImageProvider*
///
/// @return enum QQmlImageProviderBase__ImageType
///
int32_t q_quickimageprovider_super_image_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// @param self QQuickImageProvider*
///
/// @return flag of enum QQmlImageProviderBase__Flag
///
int32_t q_quickimageprovider_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback int32_t func()
///
void q_quickimageprovider_on_flags(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Base class method implementation
///
/// @param self QQuickImageProvider*
///
/// @return flag of enum QQmlImageProviderBase__Flag
///
int32_t q_quickimageprovider_super_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// @param self QQuickImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QImage* q_quickimageprovider_request_image(void* self, const char* id, void* size, void* requestedSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback QImage* func(QQuickImageProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickimageprovider_on_request_image(void* self, QImage* (*callback)(void*, const char*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Base class method implementation
///
/// @param self QQuickImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QImage* q_quickimageprovider_super_request_image(void* self, const char* id, void* size, void* requestedSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestPixmap)
///
/// @param self QQuickImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QPixmap* q_quickimageprovider_request_pixmap(void* self, const char* id, void* size, void* requestedSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestPixmap)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback QPixmap* func(QQuickImageProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickimageprovider_on_request_pixmap(void* self, QPixmap* (*callback)(void*, const char*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestPixmap)
///
/// Base class method implementation
///
/// @param self QQuickImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QPixmap* q_quickimageprovider_super_request_pixmap(void* self, const char* id, void* size, void* requestedSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// @param self QQuickImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QQuickTextureFactory* q_quickimageprovider_request_texture(void* self, const char* id, void* size, void* requestedSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Allows for overriding the related default method
///
/// @param self QQuickImageProvider*
/// @param callback QQuickTextureFactory* func(QQuickImageProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
void q_quickimageprovider_on_request_texture(void* self, QQuickTextureFactory* (*callback)(void*, const char*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Base class method implementation
///
/// @param self QQuickImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QQuickTextureFactory* q_quickimageprovider_super_request_texture(void* self, const char* id, void* size, void* requestedSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickimageprovider_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quickimageprovider_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickImageProvider*
///
const char* q_quickimageprovider_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickImageProvider*
/// @param name const char*
///
void q_quickimageprovider_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickImageProvider*
///
bool q_quickimageprovider_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickImageProvider*
///
bool q_quickimageprovider_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickImageProvider*
///
bool q_quickimageprovider_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickImageProvider*
///
bool q_quickimageprovider_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickImageProvider*
/// @param b bool
///
bool q_quickimageprovider_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickImageProvider*
///
QThread* q_quickimageprovider_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickImageProvider*
/// @param thread QThread*
///
bool q_quickimageprovider_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageProvider*
/// @param interval int
///
int32_t q_quickimageprovider_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageProvider*
/// @param time int64_t of nanoseconds
///
int32_t q_quickimageprovider_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickImageProvider*
/// @param id int
///
void q_quickimageprovider_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickImageProvider*
/// @param id enum Qt__TimerId
///
void q_quickimageprovider_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickImageProvider*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickimageprovider_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickImageProvider*
/// @param parent QObject*
///
void q_quickimageprovider_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickImageProvider*
/// @param filterObj QObject*
///
void q_quickimageprovider_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickImageProvider*
/// @param obj QObject*
///
void q_quickimageprovider_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickimageprovider_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickimageprovider_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickImageProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickimageprovider_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickimageprovider_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickimageprovider_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageProvider*
///
bool q_quickimageprovider_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageProvider*
/// @param receiver QObject*
///
bool q_quickimageprovider_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickimageprovider_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickImageProvider*
///
void q_quickimageprovider_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickImageProvider*
///
void q_quickimageprovider_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickImageProvider*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickimageprovider_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickImageProvider*
/// @param name const char*
///
QVariant* q_quickimageprovider_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickImageProvider*
///
const char** q_quickimageprovider_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickImageProvider*
///
QBindingStorage* q_quickimageprovider_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickImageProvider*
///
const QBindingStorage* q_quickimageprovider_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageProvider*
///
void q_quickimageprovider_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self)
///
void q_quickimageprovider_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickImageProvider*
///
QObject* q_quickimageprovider_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickImageProvider*
/// @param classname const char*
///
bool q_quickimageprovider_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickImageProvider*
///
void q_quickimageprovider_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageProvider*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickimageprovider_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickImageProvider*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickimageprovider_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickimageprovider_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickimageprovider_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickImageProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickimageprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageProvider*
/// @param signal const char*
///
bool q_quickimageprovider_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageProvider*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickimageprovider_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageProvider*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickimageprovider_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickImageProvider*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickimageprovider_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageProvider*
/// @param param1 QObject*
///
void q_quickimageprovider_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self, QObject* param1)
///
void q_quickimageprovider_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QEvent*
///
bool q_quickimageprovider_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QEvent*
///
bool q_quickimageprovider_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback bool func(QQuickImageProvider* self, QEvent* event)
///
void q_quickimageprovider_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickimageprovider_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickimageprovider_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback bool func(QQuickImageProvider* self, QObject* watched, QEvent* event)
///
void q_quickimageprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QTimerEvent*
///
void q_quickimageprovider_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QTimerEvent*
///
void q_quickimageprovider_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self, QTimerEvent* event)
///
void q_quickimageprovider_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QChildEvent*
///
void q_quickimageprovider_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QChildEvent*
///
void q_quickimageprovider_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self, QChildEvent* event)
///
void q_quickimageprovider_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QEvent*
///
void q_quickimageprovider_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param event QEvent*
///
void q_quickimageprovider_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self, QEvent* event)
///
void q_quickimageprovider_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal QMetaMethod*
///
void q_quickimageprovider_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal QMetaMethod*
///
void q_quickimageprovider_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self, QMetaMethod* signal)
///
void q_quickimageprovider_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal QMetaMethod*
///
void q_quickimageprovider_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal QMetaMethod*
///
void q_quickimageprovider_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self, QMetaMethod* signal)
///
void q_quickimageprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
///
QObject* q_quickimageprovider_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
///
QObject* q_quickimageprovider_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback QObject* func()
///
void q_quickimageprovider_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
///
int32_t q_quickimageprovider_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
///
int32_t q_quickimageprovider_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback int32_t func()
///
void q_quickimageprovider_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal const char*
///
int32_t q_quickimageprovider_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal const char*
///
int32_t q_quickimageprovider_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback int32_t func(QQuickImageProvider* self, const char* signal)
///
void q_quickimageprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal QMetaMethod*
///
bool q_quickimageprovider_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param signal QMetaMethod*
///
bool q_quickimageprovider_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickImageProvider*
/// @param callback bool func(QQuickImageProvider* self, QMetaMethod* signal)
///
void q_quickimageprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickImageProvider*
/// @param callback void func(QQuickImageProvider* self, const char* objectName)
///
void q_quickimageprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#dtor.QQuickImageProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickImageProvider*
///
void q_quickimageprovider_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickasyncimageprovider.html)

/// q_quickasyncimageprovider_new constructs a new QQuickAsyncImageProvider object.
///
QQuickAsyncImageProvider* q_quickasyncimageprovider_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquickasyncimageprovider.html#requestImageResponse)
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param requestedSize QSize*
///
QQuickImageResponse* q_quickasyncimageprovider_request_image_response(void* self, const char* id, void* requestedSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qquickasyncimageprovider.html#requestImageResponse)
///
/// Allows for overriding the related default method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback QQuickImageResponse* func(QQuickAsyncImageProvider* self, const char* id, QSize* requestedSize)
///
void q_quickasyncimageprovider_on_request_image_response(void* self, QQuickImageResponse* (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickasyncimageprovider.html#requestImageResponse)
///
/// Base class method implementation
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param requestedSize QSize*
///
QQuickImageResponse* q_quickasyncimageprovider_super_request_image_response(void* self, const char* id, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quickasyncimageprovider_tr(const char* s);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quickasyncimageprovider_tr2(const char* s, const char* c);

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
const char* q_quickasyncimageprovider_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QQuickAsyncImageProvider*
///
const char* q_quickasyncimageprovider_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuickAsyncImageProvider*
/// @param name const char*
///
void q_quickasyncimageprovider_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QQuickAsyncImageProvider*
///
bool q_quickasyncimageprovider_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QQuickAsyncImageProvider*
///
bool q_quickasyncimageprovider_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QQuickAsyncImageProvider*
///
bool q_quickasyncimageprovider_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QQuickAsyncImageProvider*
///
bool q_quickasyncimageprovider_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuickAsyncImageProvider*
/// @param b bool
///
bool q_quickasyncimageprovider_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QQuickAsyncImageProvider*
///
QThread* q_quickasyncimageprovider_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuickAsyncImageProvider*
/// @param thread QThread*
///
bool q_quickasyncimageprovider_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAsyncImageProvider*
/// @param interval int
///
int32_t q_quickasyncimageprovider_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAsyncImageProvider*
/// @param time int64_t of nanoseconds
///
int32_t q_quickasyncimageprovider_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickAsyncImageProvider*
/// @param id int
///
void q_quickasyncimageprovider_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuickAsyncImageProvider*
/// @param id enum Qt__TimerId
///
void q_quickasyncimageprovider_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QQuickAsyncImageProvider*
///
/// @return libqt_list of QObject*
///
libqt_list q_quickasyncimageprovider_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuickAsyncImageProvider*
/// @param parent QObject*
///
void q_quickasyncimageprovider_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuickAsyncImageProvider*
/// @param filterObj QObject*
///
void q_quickasyncimageprovider_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuickAsyncImageProvider*
/// @param obj QObject*
///
void q_quickasyncimageprovider_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quickasyncimageprovider_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quickasyncimageprovider_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickAsyncImageProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quickasyncimageprovider_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickasyncimageprovider_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quickasyncimageprovider_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAsyncImageProvider*
///
bool q_quickasyncimageprovider_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAsyncImageProvider*
/// @param receiver QObject*
///
bool q_quickasyncimageprovider_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quickasyncimageprovider_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QQuickAsyncImageProvider*
///
void q_quickasyncimageprovider_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QQuickAsyncImageProvider*
///
void q_quickasyncimageprovider_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuickAsyncImageProvider*
/// @param name const char*
/// @param value QVariant*
///
bool q_quickasyncimageprovider_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QQuickAsyncImageProvider*
/// @param name const char*
///
QVariant* q_quickasyncimageprovider_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QQuickAsyncImageProvider*
///
const char** q_quickasyncimageprovider_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickAsyncImageProvider*
///
QBindingStorage* q_quickasyncimageprovider_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuickAsyncImageProvider*
///
const QBindingStorage* q_quickasyncimageprovider_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAsyncImageProvider*
///
void q_quickasyncimageprovider_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self)
///
void q_quickasyncimageprovider_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QQuickAsyncImageProvider*
///
QObject* q_quickasyncimageprovider_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QQuickAsyncImageProvider*
/// @param classname const char*
///
bool q_quickasyncimageprovider_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuickAsyncImageProvider*
///
void q_quickasyncimageprovider_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAsyncImageProvider*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quickasyncimageprovider_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuickAsyncImageProvider*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quickasyncimageprovider_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quickasyncimageprovider_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quickasyncimageprovider_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QQuickAsyncImageProvider*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quickasyncimageprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAsyncImageProvider*
/// @param signal const char*
///
bool q_quickasyncimageprovider_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAsyncImageProvider*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quickasyncimageprovider_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAsyncImageProvider*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickasyncimageprovider_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QQuickAsyncImageProvider*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quickasyncimageprovider_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAsyncImageProvider*
/// @param param1 QObject*
///
void q_quickasyncimageprovider_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self, QObject* param1)
///
void q_quickasyncimageprovider_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
const QMetaObject* q_quickasyncimageprovider_meta_object(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
const QMetaObject* q_quickasyncimageprovider_super_meta_object(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#metaObject)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback const QMetaObject* func()
///
void q_quickasyncimageprovider_on_meta_object(void* self, const QMetaObject* (*callback)());

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param param1 const char*
///
void* q_quickasyncimageprovider_metacast(void* self, const char* param1);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param param1 const char*
///
void* q_quickasyncimageprovider_super_metacast(void* self, const char* param1);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacast)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void* func(QQuickAsyncImageProvider* self, const char* param1)
///
void q_quickasyncimageprovider_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickasyncimageprovider_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quickasyncimageprovider_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#qt_metacall)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback int32_t func(QQuickAsyncImageProvider* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quickasyncimageprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
/// @return enum QQmlImageProviderBase__ImageType
///
int32_t q_quickasyncimageprovider_image_type(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
/// @return enum QQmlImageProviderBase__ImageType
///
int32_t q_quickasyncimageprovider_super_image_type(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#imageType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback int32_t func()
///
void q_quickasyncimageprovider_on_image_type(void* self, int32_t (*callback)());

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
/// @return flag of enum QQmlImageProviderBase__Flag
///
int32_t q_quickasyncimageprovider_flags(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
/// @return flag of enum QQmlImageProviderBase__Flag
///
int32_t q_quickasyncimageprovider_super_flags(void* self);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#flags)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback int32_t func()
///
void q_quickasyncimageprovider_on_flags(void* self, int32_t (*callback)());

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QImage* q_quickasyncimageprovider_request_image(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QImage* q_quickasyncimageprovider_super_request_image(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestImage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback QImage* func(QQuickAsyncImageProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickasyncimageprovider_on_request_image(void* self, QImage* (*callback)(void*, const char*, void*, void*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QPixmap* q_quickasyncimageprovider_request_pixmap(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestPixmap)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QPixmap* q_quickasyncimageprovider_super_request_pixmap(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestPixmap)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback QPixmap* func(QQuickAsyncImageProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_quickasyncimageprovider_on_request_pixmap(void* self, QPixmap* (*callback)(void*, const char*, void*, void*));

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QQuickTextureFactory* q_quickasyncimageprovider_request_texture(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param id const char*
/// @param size QSize*
/// @param requestedSize QSize*
///
QQuickTextureFactory* q_quickasyncimageprovider_super_request_texture(void* self, const char* id, void* size, void* requestedSize);

/// Inherited from QQuickImageProvider
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquickimageprovider.html#requestTexture)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback QQuickTextureFactory* func(QQuickAsyncImageProvider* self, const char* id, QSize* size, QSize* requestedSize)
///
void q_quickasyncimageprovider_on_request_texture(void* self, QQuickTextureFactory* (*callback)(void*, const char*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QEvent*
///
bool q_quickasyncimageprovider_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QEvent*
///
bool q_quickasyncimageprovider_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback bool func(QQuickAsyncImageProvider* self, QEvent* event)
///
void q_quickasyncimageprovider_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickasyncimageprovider_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quickasyncimageprovider_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback bool func(QQuickAsyncImageProvider* self, QObject* watched, QEvent* event)
///
void q_quickasyncimageprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QTimerEvent*
///
void q_quickasyncimageprovider_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QTimerEvent*
///
void q_quickasyncimageprovider_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self, QTimerEvent* event)
///
void q_quickasyncimageprovider_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QChildEvent*
///
void q_quickasyncimageprovider_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QChildEvent*
///
void q_quickasyncimageprovider_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self, QChildEvent* event)
///
void q_quickasyncimageprovider_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QEvent*
///
void q_quickasyncimageprovider_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param event QEvent*
///
void q_quickasyncimageprovider_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self, QEvent* event)
///
void q_quickasyncimageprovider_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal QMetaMethod*
///
void q_quickasyncimageprovider_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal QMetaMethod*
///
void q_quickasyncimageprovider_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self, QMetaMethod* signal)
///
void q_quickasyncimageprovider_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal QMetaMethod*
///
void q_quickasyncimageprovider_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal QMetaMethod*
///
void q_quickasyncimageprovider_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self, QMetaMethod* signal)
///
void q_quickasyncimageprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
QObject* q_quickasyncimageprovider_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
QObject* q_quickasyncimageprovider_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback QObject* func()
///
void q_quickasyncimageprovider_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
int32_t q_quickasyncimageprovider_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
///
int32_t q_quickasyncimageprovider_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback int32_t func()
///
void q_quickasyncimageprovider_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal const char*
///
int32_t q_quickasyncimageprovider_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal const char*
///
int32_t q_quickasyncimageprovider_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback int32_t func(QQuickAsyncImageProvider* self, const char* signal)
///
void q_quickasyncimageprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal QMetaMethod*
///
bool q_quickasyncimageprovider_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param signal QMetaMethod*
///
bool q_quickasyncimageprovider_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuickAsyncImageProvider*
/// @param callback bool func(QQuickAsyncImageProvider* self, QMetaMethod* signal)
///
void q_quickasyncimageprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuickAsyncImageProvider*
/// @param callback void func(QQuickAsyncImageProvider* self, const char* objectName)
///
void q_quickasyncimageprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquickasyncimageprovider.html#dtor.QQuickAsyncImageProvider)
///
/// Delete this object from C++ memory.
///
/// @param self QQuickAsyncImageProvider*
///
void q_quickasyncimageprovider_delete(void* self);

#endif
