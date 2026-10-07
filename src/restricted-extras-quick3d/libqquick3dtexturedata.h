#pragma once
#ifndef RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DTEXTUREDATA_H
#define RESTRICTED_EXTRAS_QUICK3D_LIBQQUICK3DTEXTUREDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html)

/// q_quick3dtexturedata_new constructs a new QQuick3DTextureData object.
///
QQuick3DTextureData* q_quick3dtexturedata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html)

/// q_quick3dtexturedata_new2 constructs a new QQuick3DTextureData object.
///
/// @param parent QQuick3DObject*
///
QQuick3DTextureData* q_quick3dtexturedata_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QQuick3DTextureData*
///
const QMetaObject* q_quick3dtexturedata_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DTextureData*
/// @param callback const QMetaObject* func(const QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QQuick3DTextureData*
///
const QMetaObject* q_quick3dtexturedata_super_meta_object(const void* self);

/// @param self QQuick3DTextureData*
/// @param param1 const char*
///
void* q_quick3dtexturedata_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QQuick3DTextureData*
/// @param callback void* func(QQuick3DTextureData* self, const char* param1)
///
void q_quick3dtexturedata_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QQuick3DTextureData*
/// @param param1 const char*
///
void* q_quick3dtexturedata_super_metacast(void* self, const char* param1);

/// @param self QQuick3DTextureData*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dtexturedata_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QQuick3DTextureData*
/// @param callback int32_t func(QQuick3DTextureData* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_quick3dtexturedata_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QQuick3DTextureData*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_quick3dtexturedata_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_quick3dtexturedata_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#textureData)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DTextureData*
///
const char* q_quick3dtexturedata_texture_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setTextureData)
///
/// @param self QQuick3DTextureData*
/// @param data const char*
///
void q_quick3dtexturedata_set_texture_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#size)
///
/// @param self const QQuick3DTextureData*
///
QSize* q_quick3dtexturedata_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setSize)
///
/// @param self QQuick3DTextureData*
/// @param size QSize*
///
void q_quick3dtexturedata_set_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#depth)
///
/// @param self const QQuick3DTextureData*
///
int32_t q_quick3dtexturedata_depth(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setDepth)
///
/// @param self QQuick3DTextureData*
/// @param depth int
///
void q_quick3dtexturedata_set_depth(void* self, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#format)
///
/// @param self const QQuick3DTextureData*
///
/// @return enum QQuick3DTextureData__Format
///
int32_t q_quick3dtexturedata_format(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setFormat)
///
/// @param self QQuick3DTextureData*
/// @param format enum QQuick3DTextureData__Format
///
void q_quick3dtexturedata_set_format(void* self, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#hasTransparency)
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_has_transparency(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#setHasTransparency)
///
/// @param self QQuick3DTextureData*
/// @param hasTransparency bool
///
void q_quick3dtexturedata_set_has_transparency(void* self, bool hasTransparency);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#textureDataNodeDirty)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_texture_data_node_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#textureDataNodeDirty)
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_texture_data_node_dirty(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#markAllDirty)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_mark_all_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#markAllDirty)
///
/// Allows for overriding the related default method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_mark_all_dirty(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#markAllDirty)
///
/// Base class method implementation
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_super_mark_all_dirty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_quick3dtexturedata_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_quick3dtexturedata_tr3(const char* s, const char* c, int n);

/// Inherited from QQuick3DObject
///
/// Upcasts to a QQmlParserStatus object
///
/// @param self const QQuick3DTextureData*
///
QQmlParserStatus* q_quick3dtexturedata_as_q_qml_parser_status(const void* self);

/// Inherited from QQuick3DObject
///
/// Downcasts to a QQuick3DTextureData object
///
/// @param _qqmlparserstatus QQmlParserStatus*
///
QQuick3DTextureData* q_quick3dtexturedata_from_q_qml_parser_status(const void* _qqmlparserstatus);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#state)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DTextureData*
///
const char* q_quick3dtexturedata_state(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setState)
///
/// @param self QQuick3DTextureData*
/// @param state const char*
///
void q_quick3dtexturedata_set_state(void* self, const char* state);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childItems)
///
/// @param self const QQuick3DTextureData*
///
/// @return libqt_list of QQuick3DObject*
///
libqt_list q_quick3dtexturedata_child_items(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentItem)
///
/// @param self const QQuick3DTextureData*
///
QQuick3DObject* q_quick3dtexturedata_parent_item(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#update)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_update(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#setParentItem)
///
/// @param self QQuick3DTextureData*
/// @param parentItem QQuick3DObject*
///
void q_quick3dtexturedata_set_parent_item(void* self, void* parentItem);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_parent_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#parentChanged)
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_parent_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_children_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#childrenChanged)
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_children_changed(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_state_changed(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#stateChanged)
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_state_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QQuick3DTextureData*
///
const char* q_quick3dtexturedata_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QQuick3DTextureData*
/// @param name const char*
///
void q_quick3dtexturedata_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QQuick3DTextureData*
/// @param b bool
///
bool q_quick3dtexturedata_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QQuick3DTextureData*
///
QThread* q_quick3dtexturedata_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QQuick3DTextureData*
/// @param thread QThread*
///
bool q_quick3dtexturedata_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DTextureData*
/// @param interval int
///
int32_t q_quick3dtexturedata_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DTextureData*
/// @param time int64_t of nanoseconds
///
int32_t q_quick3dtexturedata_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DTextureData*
/// @param id int
///
void q_quick3dtexturedata_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QQuick3DTextureData*
/// @param id enum Qt__TimerId
///
void q_quick3dtexturedata_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QQuick3DTextureData*
///
/// @return libqt_list of QObject*
///
libqt_list q_quick3dtexturedata_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QQuick3DTextureData*
/// @param parent QObject*
///
void q_quick3dtexturedata_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QQuick3DTextureData*
/// @param filterObj QObject*
///
void q_quick3dtexturedata_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QQuick3DTextureData*
/// @param obj QObject*
///
void q_quick3dtexturedata_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dtexturedata_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_quick3dtexturedata_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DTextureData*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_quick3dtexturedata_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dtexturedata_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_quick3dtexturedata_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DTextureData*
/// @param receiver QObject*
///
bool q_quick3dtexturedata_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_quick3dtexturedata_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QQuick3DTextureData*
///
void q_quick3dtexturedata_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QQuick3DTextureData*
///
void q_quick3dtexturedata_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QQuick3DTextureData*
/// @param name const char*
/// @param value QVariant*
///
bool q_quick3dtexturedata_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QQuick3DTextureData*
/// @param name const char*
///
QVariant* q_quick3dtexturedata_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QQuick3DTextureData*
///
const char** q_quick3dtexturedata_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QQuick3DTextureData*
///
QBindingStorage* q_quick3dtexturedata_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QQuick3DTextureData*
///
const QBindingStorage* q_quick3dtexturedata_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QQuick3DTextureData*
///
QObject* q_quick3dtexturedata_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QQuick3DTextureData*
/// @param classname const char*
///
bool q_quick3dtexturedata_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DTextureData*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dtexturedata_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QQuick3DTextureData*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_quick3dtexturedata_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_quick3dtexturedata_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_quick3dtexturedata_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QQuick3DTextureData*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_quick3dtexturedata_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DTextureData*
/// @param signal const char*
///
bool q_quick3dtexturedata_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DTextureData*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_quick3dtexturedata_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DTextureData*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dtexturedata_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QQuick3DTextureData*
/// @param receiver QObject*
/// @param member const char*
///
bool q_quick3dtexturedata_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DTextureData*
/// @param param1 QObject*
///
void q_quick3dtexturedata_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, QObject* param1)
///
void q_quick3dtexturedata_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dtexturedata_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param param1 enum QQuick3DObject__ItemChange
/// @param param2 QQuick3DObject__ItemChangeData*
///
void q_quick3dtexturedata_super_item_change(void* self, int32_t param1, const void* param2);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#itemChange)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, enum QQuick3DObject__ItemChange param1, QQuick3DObject__ItemChangeData* param2)
///
void q_quick3dtexturedata_on_item_change(void* self, void (*callback)(void*, int32_t, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_super_class_begin(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#classBegin)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_class_begin(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_super_component_complete(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#componentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_component_complete(void* self, void (*callback)(void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_super_pre_sync(void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#preSync)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_pre_sync(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QEvent*
///
bool q_quick3dtexturedata_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QEvent*
///
bool q_quick3dtexturedata_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback bool func(QQuick3DTextureData* self, QEvent* event)
///
void q_quick3dtexturedata_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dtexturedata_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_quick3dtexturedata_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback bool func(QQuick3DTextureData* self, QObject* watched, QEvent* event)
///
void q_quick3dtexturedata_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QTimerEvent*
///
void q_quick3dtexturedata_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QTimerEvent*
///
void q_quick3dtexturedata_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, QTimerEvent* event)
///
void q_quick3dtexturedata_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QChildEvent*
///
void q_quick3dtexturedata_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QChildEvent*
///
void q_quick3dtexturedata_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, QChildEvent* event)
///
void q_quick3dtexturedata_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QEvent*
///
void q_quick3dtexturedata_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param event QEvent*
///
void q_quick3dtexturedata_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, QEvent* event)
///
void q_quick3dtexturedata_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param signal QMetaMethod*
///
void q_quick3dtexturedata_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param signal QMetaMethod*
///
void q_quick3dtexturedata_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, QMetaMethod* signal)
///
void q_quick3dtexturedata_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param signal QMetaMethod*
///
void q_quick3dtexturedata_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param signal QMetaMethod*
///
void q_quick3dtexturedata_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, QMetaMethod* signal)
///
void q_quick3dtexturedata_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DTextureData*
///
bool q_quick3dtexturedata_super_is_component_complete(const void* self);

/// Inherited from QQuick3DObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dobject.html#isComponentComplete)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback bool func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_is_component_complete(void* self, bool (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DTextureData*
///
QObject* q_quick3dtexturedata_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DTextureData*
///
QObject* q_quick3dtexturedata_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback QObject* func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DTextureData*
///
int32_t q_quick3dtexturedata_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DTextureData*
///
int32_t q_quick3dtexturedata_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback int32_t func(QQuick3DTextureData* self)
///
void q_quick3dtexturedata_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DTextureData*
/// @param signal const char*
///
int32_t q_quick3dtexturedata_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DTextureData*
/// @param signal const char*
///
int32_t q_quick3dtexturedata_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback int32_t func(QQuick3DTextureData* self, const char* signal)
///
void q_quick3dtexturedata_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QQuick3DTextureData*
/// @param signal QMetaMethod*
///
bool q_quick3dtexturedata_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QQuick3DTextureData*
/// @param signal QMetaMethod*
///
bool q_quick3dtexturedata_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQuick3DTextureData*
/// @param callback bool func(QQuick3DTextureData* self, QMetaMethod* signal)
///
void q_quick3dtexturedata_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QQuick3DTextureData*
/// @param callback void func(QQuick3DTextureData* self, const char* objectName)
///
void q_quick3dtexturedata_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#dtor.QQuick3DTextureData)
///
/// Delete this object from C++ memory.
///
/// @param self QQuick3DTextureData*
///
void q_quick3dtexturedata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qquick3dtexturedata.html#public-types)

typedef enum {
    QQUICK3DTEXTUREDATA_FORMAT_NONE = 0,
    QQUICK3DTEXTUREDATA_FORMAT_RGBA8 = 1,
    QQUICK3DTEXTUREDATA_FORMAT_RGBA16F = 2,
    QQUICK3DTEXTUREDATA_FORMAT_RGBA32F = 3,
    QQUICK3DTEXTUREDATA_FORMAT_RGBE8 = 4,
    QQUICK3DTEXTUREDATA_FORMAT_R8 = 5,
    QQUICK3DTEXTUREDATA_FORMAT_R16 = 6,
    QQUICK3DTEXTUREDATA_FORMAT_R16F = 7,
    QQUICK3DTEXTUREDATA_FORMAT_R32F = 8,
    QQUICK3DTEXTUREDATA_FORMAT_BC1 = 9,
    QQUICK3DTEXTUREDATA_FORMAT_BC2 = 10,
    QQUICK3DTEXTUREDATA_FORMAT_BC3 = 11,
    QQUICK3DTEXTUREDATA_FORMAT_BC4 = 12,
    QQUICK3DTEXTUREDATA_FORMAT_BC5 = 13,
    QQUICK3DTEXTUREDATA_FORMAT_BC6H = 14,
    QQUICK3DTEXTUREDATA_FORMAT_BC7 = 15,
    QQUICK3DTEXTUREDATA_FORMAT_DXT1_RGBA = 16,
    QQUICK3DTEXTUREDATA_FORMAT_DXT1_RGB = 17,
    QQUICK3DTEXTUREDATA_FORMAT_DXT3_RGBA = 18,
    QQUICK3DTEXTUREDATA_FORMAT_DXT5_RGBA = 19,
    QQUICK3DTEXTUREDATA_FORMAT_ETC2_RGB8 = 20,
    QQUICK3DTEXTUREDATA_FORMAT_ETC2_RGB8A1 = 21,
    QQUICK3DTEXTUREDATA_FORMAT_ETC2_RGBA8 = 22,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_4X4 = 23,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_5X4 = 24,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_5X5 = 25,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_6X5 = 26,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_6X6 = 27,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_8X5 = 28,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_8X6 = 29,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_8X8 = 30,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_10X5 = 31,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_10X6 = 32,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_10X8 = 33,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_10X10 = 34,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_12X10 = 35,
    QQUICK3DTEXTUREDATA_FORMAT_ASTC_12X12 = 36
} QQuick3DTextureData__Format;

#endif
