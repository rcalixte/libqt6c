#pragma once
#ifndef SRC_NETWORKQT6C_LIBQRESTACCESSMANAGER_H
#define SRC_NETWORKQT6C_LIBQRESTACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qrestaccessmanager.html

/// q_restaccessmanager_new constructs a new QRestAccessManager object.
///
/// @param manager QNetworkAccessManager*
QRestAccessManager* q_restaccessmanager_new(void* manager);

/// q_restaccessmanager_new2 constructs a new QRestAccessManager object.
///
/// @param manager QNetworkAccessManager*
/// @param parent QObject*
QRestAccessManager* q_restaccessmanager_new2(void* manager, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QRestAccessManager*
const QMetaObject* q_restaccessmanager_meta_object(void* self);

/// @param self QRestAccessManager*
/// @param param1 const char*
void* q_restaccessmanager_metacast(void* self, const char* param1);

/// @param self QRestAccessManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_restaccessmanager_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QRestAccessManager*
/// @param callback int32_t fn(QRestAccessManager*, enum QMetaObject__Call, int, void*)
void q_restaccessmanager_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QRestAccessManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_restaccessmanager_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_restaccessmanager_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#networkAccessManager)
///
/// @param self QRestAccessManager*
QNetworkAccessManager* q_restaccessmanager_network_access_manager(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#deleteResource)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
QNetworkReply* q_restaccessmanager_delete_resource(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#head)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
QNetworkReply* q_restaccessmanager_head(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
QNetworkReply* q_restaccessmanager_get(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data const char*
QNetworkReply* q_restaccessmanager_get2(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QJsonDocument*
QNetworkReply* q_restaccessmanager_get3(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QIODevice*
QNetworkReply* q_restaccessmanager_get4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QJsonDocument*
QNetworkReply* q_restaccessmanager_post(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data libqt_map /* of const char* to QVariant* */
QNetworkReply* q_restaccessmanager_post2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data const char*
QNetworkReply* q_restaccessmanager_post3(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QHttpMultiPart*
QNetworkReply* q_restaccessmanager_post4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QIODevice*
QNetworkReply* q_restaccessmanager_post5(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QJsonDocument*
QNetworkReply* q_restaccessmanager_put(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data libqt_map /* of const char* to QVariant* */
QNetworkReply* q_restaccessmanager_put2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data const char*
QNetworkReply* q_restaccessmanager_put3(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QHttpMultiPart*
QNetworkReply* q_restaccessmanager_put4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QIODevice*
QNetworkReply* q_restaccessmanager_put5(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QJsonDocument*
QNetworkReply* q_restaccessmanager_patch(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data libqt_map /* of const char* to QVariant* */
QNetworkReply* q_restaccessmanager_patch2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data const char*
QNetworkReply* q_restaccessmanager_patch3(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param data QIODevice*
QNetworkReply* q_restaccessmanager_patch4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param method const char*
/// @param data const char*
QNetworkReply* q_restaccessmanager_send_custom_request(void* self, void* request, const char* method, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param method const char*
/// @param data QIODevice*
QNetworkReply* q_restaccessmanager_send_custom_request2(void* self, void* request, const char* method, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
///
/// @param self QRestAccessManager*
/// @param request QNetworkRequest*
/// @param method const char*
/// @param data QHttpMultiPart*
QNetworkReply* q_restaccessmanager_send_custom_request3(void* self, void* request, const char* method, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_restaccessmanager_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_restaccessmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRestAccessManager*
const char* q_restaccessmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QRestAccessManager*
/// @param name char*
void q_restaccessmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QRestAccessManager*
bool q_restaccessmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QRestAccessManager*
bool q_restaccessmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QRestAccessManager*
bool q_restaccessmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QRestAccessManager*
bool q_restaccessmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QRestAccessManager*
/// @param b bool
bool q_restaccessmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QRestAccessManager*
QThread* q_restaccessmanager_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QRestAccessManager*
/// @param thread QThread*
bool q_restaccessmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRestAccessManager*
/// @param interval int
int32_t q_restaccessmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRestAccessManager*
/// @param id int
void q_restaccessmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QRestAccessManager*
/// @param id enum Qt__TimerId
void q_restaccessmanager_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QRestAccessManager*
libqt_list /* of QObject* */ q_restaccessmanager_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QRestAccessManager*
/// @param parent QObject*
void q_restaccessmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QRestAccessManager*
/// @param filterObj QObject*
void q_restaccessmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QRestAccessManager*
/// @param obj QObject*
void q_restaccessmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_restaccessmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QRestAccessManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_restaccessmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_restaccessmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_restaccessmanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QRestAccessManager*
void q_restaccessmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QRestAccessManager*
void q_restaccessmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QRestAccessManager*
/// @param name const char*
/// @param value QVariant*
bool q_restaccessmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QRestAccessManager*
/// @param name const char*
QVariant* q_restaccessmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QRestAccessManager*
const char** q_restaccessmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QRestAccessManager*
QBindingStorage* q_restaccessmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QRestAccessManager*
const QBindingStorage* q_restaccessmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRestAccessManager*
void q_restaccessmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*)
void q_restaccessmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QRestAccessManager*
QObject* q_restaccessmanager_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QRestAccessManager*
/// @param classname const char*
bool q_restaccessmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QRestAccessManager*
void q_restaccessmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QRestAccessManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_restaccessmanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QRestAccessManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_restaccessmanager_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_restaccessmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QRestAccessManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_restaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRestAccessManager*
/// @param param1 QObject*
void q_restaccessmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*, QObject*)
void q_restaccessmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QEvent*
bool q_restaccessmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QEvent*
bool q_restaccessmanager_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback bool fn(QRestAccessManager*, QEvent*)
void q_restaccessmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param watched QObject*
/// @param event QEvent*
bool q_restaccessmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param watched QObject*
/// @param event QEvent*
bool q_restaccessmanager_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback bool fn(QRestAccessManager*, QObject*, QEvent*)
void q_restaccessmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QTimerEvent*
void q_restaccessmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QTimerEvent*
void q_restaccessmanager_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*, QTimerEvent*)
void q_restaccessmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QChildEvent*
void q_restaccessmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QChildEvent*
void q_restaccessmanager_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*, QChildEvent*)
void q_restaccessmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QEvent*
void q_restaccessmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param event QEvent*
void q_restaccessmanager_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*, QEvent*)
void q_restaccessmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal QMetaMethod*
void q_restaccessmanager_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal QMetaMethod*
void q_restaccessmanager_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*, QMetaMethod*)
void q_restaccessmanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal QMetaMethod*
void q_restaccessmanager_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal QMetaMethod*
void q_restaccessmanager_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*, QMetaMethod*)
void q_restaccessmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
QObject* q_restaccessmanager_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
QObject* q_restaccessmanager_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback QObject* fn()
void q_restaccessmanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
int32_t q_restaccessmanager_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
int32_t q_restaccessmanager_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback int32_t fn()
void q_restaccessmanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal const char*
int32_t q_restaccessmanager_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal const char*
int32_t q_restaccessmanager_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback int32_t fn(QRestAccessManager*, const char*)
void q_restaccessmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal QMetaMethod*
bool q_restaccessmanager_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param signal QMetaMethod*
bool q_restaccessmanager_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QRestAccessManager*
/// @param callback bool fn(QRestAccessManager*, QMetaMethod*)
void q_restaccessmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QRestAccessManager*
/// @param callback void fn(QRestAccessManager*, const char*)
void q_restaccessmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#dtor.QRestAccessManager)
///
/// Delete this object from C++ memory.
///
/// @param self QRestAccessManager*
void q_restaccessmanager_delete(void* self);

#endif
