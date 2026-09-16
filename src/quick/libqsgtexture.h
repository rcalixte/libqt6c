#pragma once
#ifndef QUICK_LIBQSGTEXTURE_H
#define QUICK_LIBQSGTEXTURE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html)

/// q_sgtexture_new constructs a new QSGTexture object.
///
QSGTexture* q_sgtexture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSGTexture*
///
const QMetaObject* q_sgtexture_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback const QMetaObject* func()
///
void q_sgtexture_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSGTexture*
///
const QMetaObject* q_sgtexture_super_meta_object(void* self);

/// @param self QSGTexture*
/// @param param1 const char*
///
void* q_sgtexture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback void* func(QSGTexture* self, const char* param1)
///
void q_sgtexture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSGTexture*
/// @param param1 const char*
///
void* q_sgtexture_super_metacast(void* self, const char* param1);

/// @param self QSGTexture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sgtexture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback int32_t func(QSGTexture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sgtexture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSGTexture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sgtexture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sgtexture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
///
/// @param self QSGTexture*
///
int64_t q_sgtexture_comparison_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback int64_t func()
///
void q_sgtexture_on_comparison_key(void* self, int64_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
///
/// Base class method implementation
///
/// @param self QSGTexture*
///
int64_t q_sgtexture_super_comparison_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
///
/// @param self QSGTexture*
///
QSize* q_sgtexture_texture_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback QSize* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sgtexture_on_texture_size(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
///
/// Base class method implementation
///
/// @param self QSGTexture*
///
QSize* q_sgtexture_super_texture_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
///
/// @param self QSGTexture*
///
bool q_sgtexture_has_alpha_channel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback bool func()
///
void q_sgtexture_on_has_alpha_channel(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
///
/// Base class method implementation
///
/// @param self QSGTexture*
///
bool q_sgtexture_super_has_alpha_channel(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
///
/// @param self QSGTexture*
///
bool q_sgtexture_has_mipmaps(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback bool func()
///
void q_sgtexture_on_has_mipmaps(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
///
/// Base class method implementation
///
/// @param self QSGTexture*
///
bool q_sgtexture_super_has_mipmaps(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
///
/// @param self QSGTexture*
///
QRectF* q_sgtexture_normalized_texture_sub_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sgtexture_on_normalized_texture_sub_rect(void* self, QRectF* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
///
/// Base class method implementation
///
/// @param self QSGTexture*
///
QRectF* q_sgtexture_super_normalized_texture_sub_rect(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
///
/// @param self QSGTexture*
///
bool q_sgtexture_is_atlas_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback bool func()
///
void q_sgtexture_on_is_atlas_texture(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
///
/// Base class method implementation
///
/// @param self QSGTexture*
///
bool q_sgtexture_super_is_atlas_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setMipmapFiltering)
///
/// @param self QSGTexture*
/// @param filter enum QSGTexture__Filtering
///
void q_sgtexture_set_mipmap_filtering(void* self, int32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#mipmapFiltering)
///
/// @param self QSGTexture*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgtexture_mipmap_filtering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setFiltering)
///
/// @param self QSGTexture*
/// @param filter enum QSGTexture__Filtering
///
void q_sgtexture_set_filtering(void* self, int32_t filter);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#filtering)
///
/// @param self QSGTexture*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgtexture_filtering(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setAnisotropyLevel)
///
/// @param self QSGTexture*
/// @param level enum QSGTexture__AnisotropyLevel
///
void q_sgtexture_set_anisotropy_level(void* self, int32_t level);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#anisotropyLevel)
///
/// @param self QSGTexture*
///
/// @return enum QSGTexture__AnisotropyLevel
///
int32_t q_sgtexture_anisotropy_level(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setHorizontalWrapMode)
///
/// @param self QSGTexture*
/// @param hwrap enum QSGTexture__WrapMode
///
void q_sgtexture_set_horizontal_wrap_mode(void* self, int32_t hwrap);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#horizontalWrapMode)
///
/// @param self QSGTexture*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgtexture_horizontal_wrap_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setVerticalWrapMode)
///
/// @param self QSGTexture*
/// @param vwrap enum QSGTexture__WrapMode
///
void q_sgtexture_set_vertical_wrap_mode(void* self, int32_t vwrap);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#verticalWrapMode)
///
/// @param self QSGTexture*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgtexture_vertical_wrap_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#convertToNormalizedSourceRect)
///
/// @param self QSGTexture*
/// @param rect QRectF*
///
QRectF* q_sgtexture_convert_to_normalized_source_rect(void* self, void* rect);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
///
/// @param self QSGTexture*
/// @param name const char*
/// @param revision int
///
void* q_sgtexture_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
///
/// Allows for overriding the related default method
///
/// @param self QSGTexture*
/// @param callback void* func(QSGTexture* self, const char* name, int revision)
///
void q_sgtexture_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
///
/// Base class method implementation
///
/// @param self QSGTexture*
/// @param name const char*
/// @param revision int
///
void* q_sgtexture_super_resolve_interface(void* self, const char* name, int revision);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sgtexture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sgtexture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSGTexture*
///
const char* q_sgtexture_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSGTexture*
/// @param name const char*
///
void q_sgtexture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSGTexture*
///
bool q_sgtexture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSGTexture*
///
bool q_sgtexture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSGTexture*
///
bool q_sgtexture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSGTexture*
///
bool q_sgtexture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSGTexture*
/// @param b bool
///
bool q_sgtexture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSGTexture*
///
QThread* q_sgtexture_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSGTexture*
/// @param thread QThread*
///
bool q_sgtexture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGTexture*
/// @param interval int
///
int32_t q_sgtexture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGTexture*
/// @param time int64_t of nanoseconds
///
int32_t q_sgtexture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSGTexture*
/// @param id int
///
void q_sgtexture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSGTexture*
/// @param id enum Qt__TimerId
///
void q_sgtexture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSGTexture*
///
/// @return libqt_list of QObject*
///
libqt_list q_sgtexture_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSGTexture*
/// @param parent QObject*
///
void q_sgtexture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSGTexture*
/// @param filterObj QObject*
///
void q_sgtexture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSGTexture*
/// @param obj QObject*
///
void q_sgtexture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_sgtexture_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sgtexture_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSGTexture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sgtexture_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sgtexture_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sgtexture_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGTexture*
///
bool q_sgtexture_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGTexture*
/// @param receiver QObject*
///
bool q_sgtexture_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sgtexture_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSGTexture*
///
void q_sgtexture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSGTexture*
///
void q_sgtexture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSGTexture*
/// @param name const char*
/// @param value QVariant*
///
bool q_sgtexture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSGTexture*
/// @param name const char*
///
QVariant* q_sgtexture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSGTexture*
///
const char** q_sgtexture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSGTexture*
///
QBindingStorage* q_sgtexture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSGTexture*
///
const QBindingStorage* q_sgtexture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGTexture*
///
void q_sgtexture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self)
///
void q_sgtexture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSGTexture*
///
QObject* q_sgtexture_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSGTexture*
/// @param classname const char*
///
bool q_sgtexture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSGTexture*
///
void q_sgtexture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGTexture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sgtexture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGTexture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sgtexture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_sgtexture_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_sgtexture_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSGTexture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sgtexture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGTexture*
/// @param signal const char*
///
bool q_sgtexture_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGTexture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_sgtexture_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGTexture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sgtexture_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGTexture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sgtexture_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGTexture*
/// @param param1 QObject*
///
void q_sgtexture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self, QObject* param1)
///
void q_sgtexture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param event QEvent*
///
bool q_sgtexture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param event QEvent*
///
bool q_sgtexture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback bool func(QSGTexture* self, QEvent* event)
///
void q_sgtexture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sgtexture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sgtexture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback bool func(QSGTexture* self, QObject* watched, QEvent* event)
///
void q_sgtexture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param event QTimerEvent*
///
void q_sgtexture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param event QTimerEvent*
///
void q_sgtexture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self, QTimerEvent* event)
///
void q_sgtexture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param event QChildEvent*
///
void q_sgtexture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param event QChildEvent*
///
void q_sgtexture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self, QChildEvent* event)
///
void q_sgtexture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param event QEvent*
///
void q_sgtexture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param event QEvent*
///
void q_sgtexture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self, QEvent* event)
///
void q_sgtexture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param signal QMetaMethod*
///
void q_sgtexture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param signal QMetaMethod*
///
void q_sgtexture_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self, QMetaMethod* signal)
///
void q_sgtexture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param signal QMetaMethod*
///
void q_sgtexture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param signal QMetaMethod*
///
void q_sgtexture_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self, QMetaMethod* signal)
///
void q_sgtexture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
///
QObject* q_sgtexture_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
///
QObject* q_sgtexture_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback QObject* func()
///
void q_sgtexture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
///
int32_t q_sgtexture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
///
int32_t q_sgtexture_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback int32_t func()
///
void q_sgtexture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param signal const char*
///
int32_t q_sgtexture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param signal const char*
///
int32_t q_sgtexture_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback int32_t func(QSGTexture* self, const char* signal)
///
void q_sgtexture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGTexture*
/// @param signal QMetaMethod*
///
bool q_sgtexture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGTexture*
/// @param signal QMetaMethod*
///
bool q_sgtexture_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGTexture*
/// @param callback bool func(QSGTexture* self, QMetaMethod* signal)
///
void q_sgtexture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSGTexture*
/// @param callback void func(QSGTexture* self, const char* objectName)
///
void q_sgtexture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#dtor.QSGTexture)
///
/// Delete this object from C++ memory.
///
/// @param self QSGTexture*
///
void q_sgtexture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html)

/// q_sgdynamictexture_new constructs a new QSGDynamicTexture object.
///
QSGDynamicTexture* q_sgdynamictexture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSGDynamicTexture*
///
const QMetaObject* q_sgdynamictexture_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSGDynamicTexture*
/// @param callback const QMetaObject* func()
///
void q_sgdynamictexture_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSGDynamicTexture*
///
const QMetaObject* q_sgdynamictexture_super_meta_object(void* self);

/// @param self QSGDynamicTexture*
/// @param param1 const char*
///
void* q_sgdynamictexture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSGDynamicTexture*
/// @param callback void* func(QSGDynamicTexture* self, const char* param1)
///
void q_sgdynamictexture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSGDynamicTexture*
/// @param param1 const char*
///
void* q_sgdynamictexture_super_metacast(void* self, const char* param1);

/// @param self QSGDynamicTexture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sgdynamictexture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSGDynamicTexture*
/// @param callback int32_t func(QSGDynamicTexture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_sgdynamictexture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSGDynamicTexture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_sgdynamictexture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_sgdynamictexture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#updateTexture)
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_update_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#updateTexture)
///
/// Allows for overriding the related default method
///
/// @param self QSGDynamicTexture*
/// @param callback bool func()
///
void q_sgdynamictexture_on_update_texture(void* self, bool (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#updateTexture)
///
/// Base class method implementation
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_super_update_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_sgdynamictexture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_sgdynamictexture_tr3(const char* s, const char* c, int n);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setMipmapFiltering)
///
/// @param self QSGDynamicTexture*
/// @param filter enum QSGTexture__Filtering
///
void q_sgdynamictexture_set_mipmap_filtering(void* self, int32_t filter);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#mipmapFiltering)
///
/// @param self QSGDynamicTexture*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgdynamictexture_mipmap_filtering(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setFiltering)
///
/// @param self QSGDynamicTexture*
/// @param filter enum QSGTexture__Filtering
///
void q_sgdynamictexture_set_filtering(void* self, int32_t filter);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#filtering)
///
/// @param self QSGDynamicTexture*
///
/// @return enum QSGTexture__Filtering
///
int32_t q_sgdynamictexture_filtering(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setAnisotropyLevel)
///
/// @param self QSGDynamicTexture*
/// @param level enum QSGTexture__AnisotropyLevel
///
void q_sgdynamictexture_set_anisotropy_level(void* self, int32_t level);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#anisotropyLevel)
///
/// @param self QSGDynamicTexture*
///
/// @return enum QSGTexture__AnisotropyLevel
///
int32_t q_sgdynamictexture_anisotropy_level(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setHorizontalWrapMode)
///
/// @param self QSGDynamicTexture*
/// @param hwrap enum QSGTexture__WrapMode
///
void q_sgdynamictexture_set_horizontal_wrap_mode(void* self, int32_t hwrap);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#horizontalWrapMode)
///
/// @param self QSGDynamicTexture*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgdynamictexture_horizontal_wrap_mode(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#setVerticalWrapMode)
///
/// @param self QSGDynamicTexture*
/// @param vwrap enum QSGTexture__WrapMode
///
void q_sgdynamictexture_set_vertical_wrap_mode(void* self, int32_t vwrap);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#verticalWrapMode)
///
/// @param self QSGDynamicTexture*
///
/// @return enum QSGTexture__WrapMode
///
int32_t q_sgdynamictexture_vertical_wrap_mode(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#convertToNormalizedSourceRect)
///
/// @param self QSGDynamicTexture*
/// @param rect QRectF*
///
QRectF* q_sgdynamictexture_convert_to_normalized_source_rect(void* self, void* rect);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSGDynamicTexture*
///
const char* q_sgdynamictexture_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSGDynamicTexture*
/// @param name const char*
///
void q_sgdynamictexture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSGDynamicTexture*
/// @param b bool
///
bool q_sgdynamictexture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSGDynamicTexture*
///
QThread* q_sgdynamictexture_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSGDynamicTexture*
/// @param thread QThread*
///
bool q_sgdynamictexture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGDynamicTexture*
/// @param interval int
///
int32_t q_sgdynamictexture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGDynamicTexture*
/// @param time int64_t of nanoseconds
///
int32_t q_sgdynamictexture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSGDynamicTexture*
/// @param id int
///
void q_sgdynamictexture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSGDynamicTexture*
/// @param id enum Qt__TimerId
///
void q_sgdynamictexture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSGDynamicTexture*
///
/// @return libqt_list of QObject*
///
libqt_list q_sgdynamictexture_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSGDynamicTexture*
/// @param parent QObject*
///
void q_sgdynamictexture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSGDynamicTexture*
/// @param filterObj QObject*
///
void q_sgdynamictexture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSGDynamicTexture*
/// @param obj QObject*
///
void q_sgdynamictexture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_sgdynamictexture_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_sgdynamictexture_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSGDynamicTexture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_sgdynamictexture_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sgdynamictexture_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_sgdynamictexture_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGDynamicTexture*
/// @param receiver QObject*
///
bool q_sgdynamictexture_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_sgdynamictexture_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSGDynamicTexture*
///
void q_sgdynamictexture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSGDynamicTexture*
///
void q_sgdynamictexture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSGDynamicTexture*
/// @param name const char*
/// @param value QVariant*
///
bool q_sgdynamictexture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSGDynamicTexture*
/// @param name const char*
///
QVariant* q_sgdynamictexture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSGDynamicTexture*
///
const char** q_sgdynamictexture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSGDynamicTexture*
///
QBindingStorage* q_sgdynamictexture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSGDynamicTexture*
///
const QBindingStorage* q_sgdynamictexture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGDynamicTexture*
///
void q_sgdynamictexture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self)
///
void q_sgdynamictexture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSGDynamicTexture*
///
QObject* q_sgdynamictexture_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSGDynamicTexture*
/// @param classname const char*
///
bool q_sgdynamictexture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSGDynamicTexture*
///
void q_sgdynamictexture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGDynamicTexture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_sgdynamictexture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSGDynamicTexture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_sgdynamictexture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_sgdynamictexture_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_sgdynamictexture_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSGDynamicTexture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_sgdynamictexture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGDynamicTexture*
/// @param signal const char*
///
bool q_sgdynamictexture_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGDynamicTexture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_sgdynamictexture_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGDynamicTexture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sgdynamictexture_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSGDynamicTexture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_sgdynamictexture_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGDynamicTexture*
/// @param param1 QObject*
///
void q_sgdynamictexture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self, QObject* param1)
///
void q_sgdynamictexture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
int64_t q_sgdynamictexture_comparison_key(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
int64_t q_sgdynamictexture_super_comparison_key(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#comparisonKey)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback int64_t func()
///
void q_sgdynamictexture_on_comparison_key(void* self, int64_t (*callback)());

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
QSize* q_sgdynamictexture_texture_size(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
QSize* q_sgdynamictexture_super_texture_size(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#textureSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback QSize* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sgdynamictexture_on_texture_size(void* self, QSize* (*callback)());

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_has_alpha_channel(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_super_has_alpha_channel(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasAlphaChannel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback bool func()
///
void q_sgdynamictexture_on_has_alpha_channel(void* self, bool (*callback)());

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_has_mipmaps(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_super_has_mipmaps(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#hasMipmaps)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback bool func()
///
void q_sgdynamictexture_on_has_mipmaps(void* self, bool (*callback)());

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
QRectF* q_sgdynamictexture_normalized_texture_sub_rect(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
QRectF* q_sgdynamictexture_super_normalized_texture_sub_rect(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#normalizedTextureSubRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback QRectF* func()
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_sgdynamictexture_on_normalized_texture_sub_rect(void* self, QRectF* (*callback)());

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_is_atlas_texture(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
bool q_sgdynamictexture_super_is_atlas_texture(void* self);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#isAtlasTexture)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback bool func()
///
void q_sgdynamictexture_on_is_atlas_texture(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QEvent*
///
bool q_sgdynamictexture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QEvent*
///
bool q_sgdynamictexture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback bool func(QSGDynamicTexture* self, QEvent* event)
///
void q_sgdynamictexture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sgdynamictexture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_sgdynamictexture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback bool func(QSGDynamicTexture* self, QObject* watched, QEvent* event)
///
void q_sgdynamictexture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QTimerEvent*
///
void q_sgdynamictexture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QTimerEvent*
///
void q_sgdynamictexture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self, QTimerEvent* event)
///
void q_sgdynamictexture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QChildEvent*
///
void q_sgdynamictexture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QChildEvent*
///
void q_sgdynamictexture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self, QChildEvent* event)
///
void q_sgdynamictexture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QEvent*
///
void q_sgdynamictexture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param event QEvent*
///
void q_sgdynamictexture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self, QEvent* event)
///
void q_sgdynamictexture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal QMetaMethod*
///
void q_sgdynamictexture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal QMetaMethod*
///
void q_sgdynamictexture_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self, QMetaMethod* signal)
///
void q_sgdynamictexture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal QMetaMethod*
///
void q_sgdynamictexture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal QMetaMethod*
///
void q_sgdynamictexture_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self, QMetaMethod* signal)
///
void q_sgdynamictexture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param name const char*
/// @param revision int
///
void* q_sgdynamictexture_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param name const char*
/// @param revision int
///
void* q_sgdynamictexture_super_resolve_interface(void* self, const char* name, int revision);

/// Inherited from QSGTexture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#resolveInterface)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback void* func(QSGDynamicTexture* self, const char* name, int revision)
///
void q_sgdynamictexture_on_resolve_interface(void* self, void* (*callback)(void*, const char*, int));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
QObject* q_sgdynamictexture_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
QObject* q_sgdynamictexture_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback QObject* func()
///
void q_sgdynamictexture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
///
int32_t q_sgdynamictexture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
///
int32_t q_sgdynamictexture_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback int32_t func()
///
void q_sgdynamictexture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal const char*
///
int32_t q_sgdynamictexture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal const char*
///
int32_t q_sgdynamictexture_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback int32_t func(QSGDynamicTexture* self, const char* signal)
///
void q_sgdynamictexture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal QMetaMethod*
///
bool q_sgdynamictexture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param signal QMetaMethod*
///
bool q_sgdynamictexture_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSGDynamicTexture*
/// @param callback bool func(QSGDynamicTexture* self, QMetaMethod* signal)
///
void q_sgdynamictexture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSGDynamicTexture*
/// @param callback void func(QSGDynamicTexture* self, const char* objectName)
///
void q_sgdynamictexture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsgdynamictexture.html#dtor.QSGDynamicTexture)
///
/// Delete this object from C++ memory.
///
/// @param self QSGDynamicTexture*
///
void q_sgdynamictexture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#public-types)

typedef enum {
    QSGTEXTURE_WRAPMODE_REPEAT = 0,
    QSGTEXTURE_WRAPMODE_CLAMPTOEDGE = 1,
    QSGTEXTURE_WRAPMODE_MIRROREDREPEAT = 2
} QSGTexture__WrapMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#public-types)

typedef enum {
    QSGTEXTURE_FILTERING_NONE = 0,
    QSGTEXTURE_FILTERING_NEAREST = 1,
    QSGTEXTURE_FILTERING_LINEAR = 2
} QSGTexture__Filtering;

/// [Upstream resources](https://doc.qt.io/qt-6/qsgtexture.html#public-types)

typedef enum {
    QSGTEXTURE_ANISOTROPYLEVEL_ANISOTROPYNONE = 0,
    QSGTEXTURE_ANISOTROPYLEVEL_ANISOTROPY2X = 1,
    QSGTEXTURE_ANISOTROPYLEVEL_ANISOTROPY4X = 2,
    QSGTEXTURE_ANISOTROPYLEVEL_ANISOTROPY8X = 3,
    QSGTEXTURE_ANISOTROPYLEVEL_ANISOTROPY16X = 4
} QSGTexture__AnisotropyLevel;

#endif
