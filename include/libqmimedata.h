#pragma once
#ifndef SRC_QT6C_LIBQMIMEDATA_H
#define SRC_QT6C_LIBQMIMEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html)

/// q_mimedata_new constructs a new QMimeData object.
///
QMimeData* q_mimedata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMimeData*
///
const QMetaObject* q_mimedata_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QMimeData*
/// @param callback const QMetaObject* func()
///
void q_mimedata_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QMimeData*
///
const QMetaObject* q_mimedata_qbase_meta_object(void* self);

/// @param self QMimeData*
/// @param param1 const char*
///
void* q_mimedata_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QMimeData*
/// @param callback void* func(QMimeData* self, const char* param1)
///
void q_mimedata_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QMimeData*
/// @param param1 const char*
///
void* q_mimedata_qbase_metacast(void* self, const char* param1);

/// @param self QMimeData*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mimedata_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMimeData*
/// @param callback int32_t func(QMimeData* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_mimedata_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QMimeData*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mimedata_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_mimedata_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#urls)
///
/// @param self QMimeData*
///
/// @return libqt_list of QUrl*
///
libqt_list q_mimedata_urls(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#setUrls)
///
/// @param self QMimeData*
/// @param urls libqt_list of QUrl*
///
void q_mimedata_set_urls(void* self, libqt_list /* of QUrl* */ urls);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasUrls)
///
/// @param self QMimeData*
///
bool q_mimedata_has_urls(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMimeData*
///
const char* q_mimedata_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#setText)
///
/// @param self QMimeData*
/// @param text const char*
///
void q_mimedata_set_text(void* self, const char* text);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasText)
///
/// @param self QMimeData*
///
bool q_mimedata_has_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMimeData*
///
const char* q_mimedata_html(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#setHtml)
///
/// @param self QMimeData*
/// @param html const char*
///
void q_mimedata_set_html(void* self, const char* html);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasHtml)
///
/// @param self QMimeData*
///
bool q_mimedata_has_html(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#imageData)
///
/// @param self QMimeData*
///
QVariant* q_mimedata_image_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#setImageData)
///
/// @param self QMimeData*
/// @param image QVariant*
///
void q_mimedata_set_image_data(void* self, void* image);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasImage)
///
/// @param self QMimeData*
///
bool q_mimedata_has_image(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#colorData)
///
/// @param self QMimeData*
///
QVariant* q_mimedata_color_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#setColorData)
///
/// @param self QMimeData*
/// @param color QVariant*
///
void q_mimedata_set_color_data(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasColor)
///
/// @param self QMimeData*
///
bool q_mimedata_has_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMimeData*
/// @param mimetype const char*
///
char* q_mimedata_data(void* self, const char* mimetype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#setData)
///
/// @param self QMimeData*
/// @param mimetype const char*
/// @param data const char*
///
void q_mimedata_set_data(void* self, const char* mimetype, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#removeFormat)
///
/// @param self QMimeData*
/// @param mimetype const char*
///
void q_mimedata_remove_format(void* self, const char* mimetype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasFormat)
///
/// @param self QMimeData*
/// @param mimetype const char*
///
bool q_mimedata_has_format(void* self, const char* mimetype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasFormat)
///
/// Allows for overriding the related default method
///
/// @param self QMimeData*
/// @param callback bool func(QMimeData* self, const char* mimetype)
///
void q_mimedata_on_has_format(void* self, bool (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#hasFormat)
///
/// Base class method implementation
///
/// @param self QMimeData*
/// @param mimetype const char*
///
bool q_mimedata_qbase_has_format(void* self, const char* mimetype);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#formats)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMimeData*
///
const char** q_mimedata_formats(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#formats)
///
/// Allows for overriding the related default method
///
/// @param self QMimeData*
/// @param callback const char** func()
///
void q_mimedata_on_formats(void* self, const char** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#formats)
///
/// Base class method implementation
///
/// @param self QMimeData*
///
const char** q_mimedata_qbase_formats(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#clear)
///
/// @param self QMimeData*
///
void q_mimedata_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#retrieveData)
///
/// @param self QMimeData*
/// @param mimetype const char*
/// @param preferredType QMetaType*
///
QVariant* q_mimedata_retrieve_data(void* self, const char* mimetype, void* preferredType);

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#retrieveData)
///
/// Allows for overriding the related default method
///
/// @param self QMimeData*
/// @param callback QVariant* func(QMimeData* self, const char* mimetype, QMetaType* preferredType)
///
void q_mimedata_on_retrieve_data(void* self, QVariant* (*callback)(void*, const char*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#retrieveData)
///
/// Base class method implementation
///
/// @param self QMimeData*
/// @param mimetype const char*
/// @param preferredType QMetaType*
///
QVariant* q_mimedata_qbase_retrieve_data(void* self, const char* mimetype, void* preferredType);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_mimedata_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_mimedata_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMimeData*
///
const char* q_mimedata_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMimeData*
/// @param name char*
///
void q_mimedata_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMimeData*
///
bool q_mimedata_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMimeData*
///
bool q_mimedata_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMimeData*
///
bool q_mimedata_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMimeData*
///
bool q_mimedata_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMimeData*
/// @param b bool
///
bool q_mimedata_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMimeData*
///
QThread* q_mimedata_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMimeData*
/// @param thread QThread*
///
bool q_mimedata_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMimeData*
/// @param interval int
///
int32_t q_mimedata_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMimeData*
/// @param time int64_t of nanoseconds
///
int32_t q_mimedata_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMimeData*
/// @param id int
///
void q_mimedata_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMimeData*
/// @param id enum Qt__TimerId
///
void q_mimedata_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMimeData*
///
/// @return libqt_list of QObject*
///
libqt_list q_mimedata_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMimeData*
/// @param parent QObject*
///
void q_mimedata_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMimeData*
/// @param filterObj QObject*
///
void q_mimedata_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMimeData*
/// @param obj QObject*
///
void q_mimedata_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_mimedata_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMimeData*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_mimedata_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_mimedata_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_mimedata_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMimeData*
///
void q_mimedata_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMimeData*
///
void q_mimedata_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMimeData*
/// @param name const char*
/// @param value QVariant*
///
bool q_mimedata_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMimeData*
/// @param name const char*
///
QVariant* q_mimedata_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMimeData*
///
const char** q_mimedata_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMimeData*
///
QBindingStorage* q_mimedata_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMimeData*
///
const QBindingStorage* q_mimedata_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMimeData*
///
void q_mimedata_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self)
///
void q_mimedata_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMimeData*
///
QObject* q_mimedata_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMimeData*
/// @param classname const char*
///
bool q_mimedata_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMimeData*
///
void q_mimedata_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMimeData*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_mimedata_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMimeData*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_mimedata_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_mimedata_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMimeData*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_mimedata_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMimeData*
/// @param param1 QObject*
///
void q_mimedata_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self, QObject* param1)
///
void q_mimedata_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param event QEvent*
///
bool q_mimedata_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param event QEvent*
///
bool q_mimedata_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback bool func(QMimeData* self, QEvent* event)
///
void q_mimedata_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mimedata_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mimedata_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback bool func(QMimeData* self, QObject* watched, QEvent* event)
///
void q_mimedata_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param event QTimerEvent*
///
void q_mimedata_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param event QTimerEvent*
///
void q_mimedata_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self, QTimerEvent* event)
///
void q_mimedata_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param event QChildEvent*
///
void q_mimedata_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param event QChildEvent*
///
void q_mimedata_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self, QChildEvent* event)
///
void q_mimedata_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param event QEvent*
///
void q_mimedata_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param event QEvent*
///
void q_mimedata_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self, QEvent* event)
///
void q_mimedata_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param signal QMetaMethod*
///
void q_mimedata_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param signal QMetaMethod*
///
void q_mimedata_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self, QMetaMethod* signal)
///
void q_mimedata_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param signal QMetaMethod*
///
void q_mimedata_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param signal QMetaMethod*
///
void q_mimedata_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self, QMetaMethod* signal)
///
void q_mimedata_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
///
QObject* q_mimedata_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
///
QObject* q_mimedata_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback QObject* func()
///
void q_mimedata_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
///
int32_t q_mimedata_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
///
int32_t q_mimedata_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback int32_t func()
///
void q_mimedata_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param signal const char*
///
int32_t q_mimedata_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param signal const char*
///
int32_t q_mimedata_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback int32_t func(QMimeData* self, const char* signal)
///
void q_mimedata_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMimeData*
/// @param signal QMetaMethod*
///
bool q_mimedata_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMimeData*
/// @param signal QMetaMethod*
///
bool q_mimedata_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMimeData*
/// @param callback bool func(QMimeData* self, QMetaMethod* signal)
///
void q_mimedata_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMimeData*
/// @param callback void func(QMimeData* self, const char* objectName)
///
void q_mimedata_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmimedata.html#dtor.QMimeData)
///
/// Delete this object from C++ memory.
///
/// @param self QMimeData*
///
void q_mimedata_delete(void* self);

#endif
