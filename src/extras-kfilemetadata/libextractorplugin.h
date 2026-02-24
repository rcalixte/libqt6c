#pragma once
#ifndef SRC_EXTRAS_KFILEMETADATA_QT6C_LIBEXTRACTORPLUGIN_H
#define SRC_EXTRAS_KFILEMETADATA_QT6C_LIBEXTRACTORPLUGIN_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html)

/// k_filemetadata__extractorplugin_new constructs a new KFileMetaData::ExtractorPlugin object.
///
/// @param parent QObject*
///
KFileMetaData__ExtractorPlugin* k_filemetadata__extractorplugin_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
const QMetaObject* k_filemetadata__extractorplugin_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback const QMetaObject* func()
///
void k_filemetadata__extractorplugin_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_meta_object` instead
///
#define k_filemetadata__extractorplugin_qbase_meta_object k_filemetadata__extractorplugin_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KFileMetaData__ExtractorPlugin*
///
const QMetaObject* k_filemetadata__extractorplugin_super_meta_object(void* self);

/// @param self KFileMetaData__ExtractorPlugin*
/// @param param1 const char*
///
void* k_filemetadata__extractorplugin_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void* func(KFileMetaData__ExtractorPlugin* self, const char* param1)
///
void k_filemetadata__extractorplugin_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_metacast` instead
///
#define k_filemetadata__extractorplugin_qbase_metacast k_filemetadata__extractorplugin_super_metacast

/// Base class method implementation
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param param1 const char*
///
void* k_filemetadata__extractorplugin_super_metacast(void* self, const char* param1);

/// @param self KFileMetaData__ExtractorPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_filemetadata__extractorplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback int32_t func(KFileMetaData__ExtractorPlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_filemetadata__extractorplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_metacall` instead
///
#define k_filemetadata__extractorplugin_qbase_metacall k_filemetadata__extractorplugin_super_metacall

/// Base class method implementation
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_filemetadata__extractorplugin_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_filemetadata__extractorplugin_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#mimetypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileMetaData__ExtractorPlugin*
///
const char** k_filemetadata__extractorplugin_mimetypes(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#mimetypes)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback const char** func()
///
void k_filemetadata__extractorplugin_on_mimetypes(void* self, const char** (*callback)());

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_mimetypes` instead
///
#define k_filemetadata__extractorplugin_qbase_mimetypes k_filemetadata__extractorplugin_super_mimetypes

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#mimetypes)
///
/// Base class method implementation
///
/// @param self KFileMetaData__ExtractorPlugin*
///
const char** k_filemetadata__extractorplugin_super_mimetypes(void* self);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#extract)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param result KFileMetaData__ExtractionResult*
///
void k_filemetadata__extractorplugin_extract(void* self, void* result);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#extract)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, KFileMetaData__ExtractionResult* result)
///
void k_filemetadata__extractorplugin_on_extract(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_extract` instead
///
#define k_filemetadata__extractorplugin_qbase_extract k_filemetadata__extractorplugin_super_extract

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#extract)
///
/// Base class method implementation
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param result KFileMetaData__ExtractionResult*
///
void k_filemetadata__extractorplugin_super_extract(void* self, void* result);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#dateTimeFromString)
///
/// @param dateString const char*
///
QDateTime* k_filemetadata__extractorplugin_date_time_from_string(const char* dateString);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#contactsFromString)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param stringVal const char*
///
const char** k_filemetadata__extractorplugin_contacts_from_string(const char* stringVal);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#getSupportedMimeType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param mimetype const char*
///
const char* k_filemetadata__extractorplugin_get_supported_mime_type(void* self, const char* mimetype);

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#getSupportedMimeType)
///
/// Allows for overriding the related default method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback const char* func(KFileMetaData__ExtractorPlugin* self, const char* mimetype)
///
void k_filemetadata__extractorplugin_on_get_supported_mime_type(void* self, const char* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_get_supported_mime_type` instead
///
#define k_filemetadata__extractorplugin_qbase_get_supported_mime_type k_filemetadata__extractorplugin_super_get_supported_mime_type

/// [Upstream resources](https://api.kde.org/kfilemetadata-extractorplugin.html#getSupportedMimeType)
///
/// Base class method implementation
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param mimetype const char*
///
const char* k_filemetadata__extractorplugin_super_get_supported_mime_type(void* self, const char* mimetype);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_filemetadata__extractorplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_filemetadata__extractorplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KFileMetaData__ExtractorPlugin*
///
const char* k_filemetadata__extractorplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param name const char*
///
void k_filemetadata__extractorplugin_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
bool k_filemetadata__extractorplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
bool k_filemetadata__extractorplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
bool k_filemetadata__extractorplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
bool k_filemetadata__extractorplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param b bool
///
bool k_filemetadata__extractorplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
QThread* k_filemetadata__extractorplugin_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param thread QThread*
///
bool k_filemetadata__extractorplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param interval int
///
int32_t k_filemetadata__extractorplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param time int64_t of nanoseconds
///
int32_t k_filemetadata__extractorplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param id int
///
void k_filemetadata__extractorplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param id enum Qt__TimerId
///
void k_filemetadata__extractorplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
/// @return libqt_list of QObject*
///
libqt_list k_filemetadata__extractorplugin_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param parent QObject*
///
void k_filemetadata__extractorplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param filterObj QObject*
///
void k_filemetadata__extractorplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param obj QObject*
///
void k_filemetadata__extractorplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_filemetadata__extractorplugin_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_filemetadata__extractorplugin_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_filemetadata__extractorplugin_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_filemetadata__extractorplugin_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_filemetadata__extractorplugin_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
bool k_filemetadata__extractorplugin_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param receiver QObject*
///
bool k_filemetadata__extractorplugin_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_filemetadata__extractorplugin_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
void k_filemetadata__extractorplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
void k_filemetadata__extractorplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param name const char*
/// @param value QVariant*
///
bool k_filemetadata__extractorplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param name const char*
///
QVariant* k_filemetadata__extractorplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KFileMetaData__ExtractorPlugin*
///
const char** k_filemetadata__extractorplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
QBindingStorage* k_filemetadata__extractorplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
const QBindingStorage* k_filemetadata__extractorplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
void k_filemetadata__extractorplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self)
///
void k_filemetadata__extractorplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
QObject* k_filemetadata__extractorplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param classname const char*
///
bool k_filemetadata__extractorplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KFileMetaData__ExtractorPlugin*
///
void k_filemetadata__extractorplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_filemetadata__extractorplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_filemetadata__extractorplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_filemetadata__extractorplugin_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_filemetadata__extractorplugin_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_filemetadata__extractorplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal const char*
///
bool k_filemetadata__extractorplugin_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_filemetadata__extractorplugin_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_filemetadata__extractorplugin_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param receiver QObject*
/// @param member const char*
///
bool k_filemetadata__extractorplugin_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param param1 QObject*
///
void k_filemetadata__extractorplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, QObject* param1)
///
void k_filemetadata__extractorplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QEvent*
///
bool k_filemetadata__extractorplugin_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_event` instead
///
#define k_filemetadata__extractorplugin_qbase_event k_filemetadata__extractorplugin_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QEvent*
///
bool k_filemetadata__extractorplugin_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback bool func(KFileMetaData__ExtractorPlugin* self, QEvent* event)
///
void k_filemetadata__extractorplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_filemetadata__extractorplugin_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_event_filter` instead
///
#define k_filemetadata__extractorplugin_qbase_event_filter k_filemetadata__extractorplugin_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_filemetadata__extractorplugin_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback bool func(KFileMetaData__ExtractorPlugin* self, QObject* watched, QEvent* event)
///
void k_filemetadata__extractorplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QTimerEvent*
///
void k_filemetadata__extractorplugin_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_timer_event` instead
///
#define k_filemetadata__extractorplugin_qbase_timer_event k_filemetadata__extractorplugin_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QTimerEvent*
///
void k_filemetadata__extractorplugin_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, QTimerEvent* event)
///
void k_filemetadata__extractorplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QChildEvent*
///
void k_filemetadata__extractorplugin_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_child_event` instead
///
#define k_filemetadata__extractorplugin_qbase_child_event k_filemetadata__extractorplugin_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QChildEvent*
///
void k_filemetadata__extractorplugin_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, QChildEvent* event)
///
void k_filemetadata__extractorplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QEvent*
///
void k_filemetadata__extractorplugin_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_custom_event` instead
///
#define k_filemetadata__extractorplugin_qbase_custom_event k_filemetadata__extractorplugin_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param event QEvent*
///
void k_filemetadata__extractorplugin_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, QEvent* event)
///
void k_filemetadata__extractorplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal QMetaMethod*
///
void k_filemetadata__extractorplugin_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_connect_notify` instead
///
#define k_filemetadata__extractorplugin_qbase_connect_notify k_filemetadata__extractorplugin_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal QMetaMethod*
///
void k_filemetadata__extractorplugin_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, QMetaMethod* signal)
///
void k_filemetadata__extractorplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal QMetaMethod*
///
void k_filemetadata__extractorplugin_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_disconnect_notify` instead
///
#define k_filemetadata__extractorplugin_qbase_disconnect_notify k_filemetadata__extractorplugin_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal QMetaMethod*
///
void k_filemetadata__extractorplugin_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, QMetaMethod* signal)
///
void k_filemetadata__extractorplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
///
QObject* k_filemetadata__extractorplugin_sender(void* self);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_sender` instead
///
#define k_filemetadata__extractorplugin_qbase_sender k_filemetadata__extractorplugin_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
///
QObject* k_filemetadata__extractorplugin_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback QObject* func()
///
void k_filemetadata__extractorplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
///
int32_t k_filemetadata__extractorplugin_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_sender_signal_index` instead
///
#define k_filemetadata__extractorplugin_qbase_sender_signal_index k_filemetadata__extractorplugin_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
///
int32_t k_filemetadata__extractorplugin_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback int32_t func()
///
void k_filemetadata__extractorplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal const char*
///
int32_t k_filemetadata__extractorplugin_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_receivers` instead
///
#define k_filemetadata__extractorplugin_qbase_receivers k_filemetadata__extractorplugin_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal const char*
///
int32_t k_filemetadata__extractorplugin_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback int32_t func(KFileMetaData__ExtractorPlugin* self, const char* signal)
///
void k_filemetadata__extractorplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal QMetaMethod*
///
bool k_filemetadata__extractorplugin_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `k_filemetadata__extractorplugin_super_is_signal_connected` instead
///
#define k_filemetadata__extractorplugin_qbase_is_signal_connected k_filemetadata__extractorplugin_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param signal QMetaMethod*
///
bool k_filemetadata__extractorplugin_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback bool func(KFileMetaData__ExtractorPlugin* self, QMetaMethod* signal)
///
void k_filemetadata__extractorplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KFileMetaData__ExtractorPlugin*
/// @param callback void func(KFileMetaData__ExtractorPlugin* self, const char* objectName)
///
void k_filemetadata__extractorplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KFileMetaData__ExtractorPlugin*
///
void k_filemetadata__extractorplugin_delete(void* self);

#endif
