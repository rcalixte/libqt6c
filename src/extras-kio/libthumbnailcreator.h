#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBTHUMBNAILCREATOR_H
#define SRC_EXTRAS_KIOQT6C_LIBTHUMBNAILCREATOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-thumbnailrequest.html

/// k_io__thumbnailrequest_new constructs a new KIO::ThumbnailRequest object.
///
/// @param url QUrl*
/// @param targetSize QSize*
/// @param mimeType const char*
/// @param dpr double
/// @param sequenceIndex float
KIO__ThumbnailRequest* k_io__thumbnailrequest_new(void* url, void* targetSize, const char* mimeType, double dpr, float sequenceIndex);

/// k_io__thumbnailrequest_new2 constructs a new KIO::ThumbnailRequest object.
///
/// @param param1 KIO__ThumbnailRequest*
KIO__ThumbnailRequest* k_io__thumbnailrequest_new2(void* param1);

/// [Qt documentation](https://api.kde.org/kio-thumbnailrequest.html#operator-eq)
///
/// @param self KIO__ThumbnailRequest*
/// @param param1 KIO__ThumbnailRequest*
void k_io__thumbnailrequest_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kio-thumbnailrequest.html#url)
///
/// @param self KIO__ThumbnailRequest*
QUrl* k_io__thumbnailrequest_url(void* self);

/// [Qt documentation](https://api.kde.org/kio-thumbnailrequest.html#targetSize)
///
/// @param self KIO__ThumbnailRequest*
QSize* k_io__thumbnailrequest_target_size(void* self);

/// [Qt documentation](https://api.kde.org/kio-thumbnailrequest.html#mimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ThumbnailRequest*
const char* k_io__thumbnailrequest_mime_type(void* self);

/// [Qt documentation](https://api.kde.org/kio-thumbnailrequest.html#devicePixelRatio)
///
/// @param self KIO__ThumbnailRequest*
double k_io__thumbnailrequest_device_pixel_ratio(void* self);

/// [Qt documentation](https://api.kde.org/kio-thumbnailrequest.html#sequenceIndex)
///
/// @param self KIO__ThumbnailRequest*
float k_io__thumbnailrequest_sequence_index(void* self);

/// Delete this object from C++ memory.
///
/// @param self KIO__ThumbnailRequest*
void k_io__thumbnailrequest_delete(void* self);

/// https://api.kde.org/kio-thumbnailresult.html

/// k_io__thumbnailresult_new constructs a new KIO::ThumbnailResult object.
///
/// @param param1 KIO__ThumbnailResult*
KIO__ThumbnailResult* k_io__thumbnailresult_new(void* param1);

/// [Qt documentation](https://api.kde.org/kio-thumbnailresult.html#operator-eq)
///
/// @param self KIO__ThumbnailResult*
/// @param param1 KIO__ThumbnailResult*
void k_io__thumbnailresult_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kio-thumbnailresult.html#image)
///
/// @param self KIO__ThumbnailResult*
QImage* k_io__thumbnailresult_image(void* self);

/// [Qt documentation](https://api.kde.org/kio-thumbnailresult.html#isValid)
///
/// @param self KIO__ThumbnailResult*
bool k_io__thumbnailresult_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/kio-thumbnailresult.html#sequenceIndexWraparoundPoint)
///
/// @param self KIO__ThumbnailResult*
float k_io__thumbnailresult_sequence_index_wraparound_point(void* self);

/// [Qt documentation](https://api.kde.org/kio-thumbnailresult.html#setSequenceIndexWraparoundPoint)
///
/// @param self KIO__ThumbnailResult*
/// @param wraparoundPoint float
void k_io__thumbnailresult_set_sequence_index_wraparound_point(void* self, float wraparoundPoint);

/// [Qt documentation](https://api.kde.org/kio-thumbnailresult.html#pass)
///
/// @param image QImage*
KIO__ThumbnailResult* k_io__thumbnailresult_pass(void* image);

/// [Qt documentation](https://api.kde.org/kio-thumbnailresult.html#fail)
///
KIO__ThumbnailResult* k_io__thumbnailresult_fail();

/// Delete this object from C++ memory.
///
/// @param self KIO__ThumbnailResult*
void k_io__thumbnailresult_delete(void* self);

/// https://api.kde.org/kio-thumbnailcreator.html

/// k_io__thumbnailcreator_new constructs a new KIO::ThumbnailCreator object.
///
/// @param parent QObject*
/// @param args libqt_list /* of QVariant* */
KIO__ThumbnailCreator* k_io__thumbnailcreator_new(void* parent, libqt_list args);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__ThumbnailCreator*
const QMetaObject* k_io__thumbnailcreator_meta_object(void* self);

/// @param self KIO__ThumbnailCreator*
/// @param param1 const char*
void* k_io__thumbnailcreator_metacast(void* self, const char* param1);

/// @param self KIO__ThumbnailCreator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__thumbnailcreator_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback int32_t func(KIO__ThumbnailCreator* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_io__thumbnailcreator_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIO__ThumbnailCreator*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__thumbnailcreator_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__thumbnailcreator_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-thumbnailcreator.html#create)
///
/// @param self KIO__ThumbnailCreator*
/// @param request KIO__ThumbnailRequest*
KIO__ThumbnailResult* k_io__thumbnailcreator_create(void* self, void* request);

/// [Qt documentation](https://api.kde.org/kio-thumbnailcreator.html#create)
///
/// Allows for overriding the related default method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback KIO__ThumbnailResult* func(KIO__ThumbnailCreator* self, KIO__ThumbnailRequest* request)
void k_io__thumbnailcreator_on_create(void* self, KIO__ThumbnailResult* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kio-thumbnailcreator.html#create)
///
/// Base class method implementation
///
/// @param self KIO__ThumbnailCreator*
/// @param request KIO__ThumbnailRequest*
KIO__ThumbnailResult* k_io__thumbnailcreator_qbase_create(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__thumbnailcreator_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__thumbnailcreator_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ThumbnailCreator*
const char* k_io__thumbnailcreator_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__ThumbnailCreator*
/// @param name char*
void k_io__thumbnailcreator_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__ThumbnailCreator*
bool k_io__thumbnailcreator_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__ThumbnailCreator*
bool k_io__thumbnailcreator_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__ThumbnailCreator*
bool k_io__thumbnailcreator_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__ThumbnailCreator*
bool k_io__thumbnailcreator_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__ThumbnailCreator*
/// @param b bool
bool k_io__thumbnailcreator_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__ThumbnailCreator*
QThread* k_io__thumbnailcreator_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__ThumbnailCreator*
/// @param thread QThread*
bool k_io__thumbnailcreator_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ThumbnailCreator*
/// @param interval int
int32_t k_io__thumbnailcreator_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ThumbnailCreator*
/// @param id int
void k_io__thumbnailcreator_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__ThumbnailCreator*
/// @param id enum Qt__TimerId
void k_io__thumbnailcreator_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__ThumbnailCreator*
libqt_list /* of QObject* */ k_io__thumbnailcreator_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__ThumbnailCreator*
/// @param parent QObject*
void k_io__thumbnailcreator_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__ThumbnailCreator*
/// @param filterObj QObject*
void k_io__thumbnailcreator_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__ThumbnailCreator*
/// @param obj QObject*
void k_io__thumbnailcreator_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__thumbnailcreator_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ThumbnailCreator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__thumbnailcreator_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__thumbnailcreator_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__thumbnailcreator_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__ThumbnailCreator*
void k_io__thumbnailcreator_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__ThumbnailCreator*
void k_io__thumbnailcreator_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__ThumbnailCreator*
/// @param name const char*
/// @param value QVariant*
bool k_io__thumbnailcreator_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__ThumbnailCreator*
/// @param name const char*
QVariant* k_io__thumbnailcreator_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__ThumbnailCreator*
const char** k_io__thumbnailcreator_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ThumbnailCreator*
QBindingStorage* k_io__thumbnailcreator_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__ThumbnailCreator*
const QBindingStorage* k_io__thumbnailcreator_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ThumbnailCreator*
void k_io__thumbnailcreator_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self)
void k_io__thumbnailcreator_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__ThumbnailCreator*
QObject* k_io__thumbnailcreator_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__ThumbnailCreator*
/// @param classname const char*
bool k_io__thumbnailcreator_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__ThumbnailCreator*
void k_io__thumbnailcreator_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__ThumbnailCreator*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__thumbnailcreator_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__ThumbnailCreator*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__thumbnailcreator_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__thumbnailcreator_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__ThumbnailCreator*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__thumbnailcreator_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ThumbnailCreator*
/// @param param1 QObject*
void k_io__thumbnailcreator_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self, QObject* param1)
void k_io__thumbnailcreator_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QEvent*
bool k_io__thumbnailcreator_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QEvent*
bool k_io__thumbnailcreator_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback bool func(KIO__ThumbnailCreator* self, QEvent* event)
void k_io__thumbnailcreator_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__thumbnailcreator_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__thumbnailcreator_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback bool func(KIO__ThumbnailCreator* self, QObject* watched, QEvent* event)
void k_io__thumbnailcreator_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QTimerEvent*
void k_io__thumbnailcreator_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QTimerEvent*
void k_io__thumbnailcreator_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self, QTimerEvent* event)
void k_io__thumbnailcreator_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QChildEvent*
void k_io__thumbnailcreator_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QChildEvent*
void k_io__thumbnailcreator_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self, QChildEvent* event)
void k_io__thumbnailcreator_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QEvent*
void k_io__thumbnailcreator_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param event QEvent*
void k_io__thumbnailcreator_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self, QEvent* event)
void k_io__thumbnailcreator_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal QMetaMethod*
void k_io__thumbnailcreator_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal QMetaMethod*
void k_io__thumbnailcreator_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self, QMetaMethod* signal)
void k_io__thumbnailcreator_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal QMetaMethod*
void k_io__thumbnailcreator_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal QMetaMethod*
void k_io__thumbnailcreator_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self, QMetaMethod* signal)
void k_io__thumbnailcreator_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
QObject* k_io__thumbnailcreator_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
QObject* k_io__thumbnailcreator_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback QObject* func()
void k_io__thumbnailcreator_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
int32_t k_io__thumbnailcreator_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
int32_t k_io__thumbnailcreator_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback int32_t func()
void k_io__thumbnailcreator_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal const char*
int32_t k_io__thumbnailcreator_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal const char*
int32_t k_io__thumbnailcreator_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback int32_t func(KIO__ThumbnailCreator* self, const char* signal)
void k_io__thumbnailcreator_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal QMetaMethod*
bool k_io__thumbnailcreator_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param signal QMetaMethod*
bool k_io__thumbnailcreator_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIO__ThumbnailCreator*
/// @param callback bool func(KIO__ThumbnailCreator* self, QMetaMethod* signal)
void k_io__thumbnailcreator_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__ThumbnailCreator*
/// @param callback void func(KIO__ThumbnailCreator* self, const char* objectName)
void k_io__thumbnailcreator_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KIO__ThumbnailCreator*
void k_io__thumbnailcreator_delete(void* self);

#endif
