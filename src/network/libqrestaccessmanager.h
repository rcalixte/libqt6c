#pragma once
#ifndef SRC_NETWORKQT6C_LIBQRESTACCESSMANAGER_H
#define SRC_NETWORKQT6C_LIBQRESTACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qrestaccessmanager.html

/// q_restaccessmanager_new constructs a new QRestAccessManager object.
///
/// ``` QNetworkAccessManager* manager ```
QRestAccessManager* q_restaccessmanager_new(void* manager);

/// q_restaccessmanager_new2 constructs a new QRestAccessManager object.
///
/// ``` QNetworkAccessManager* manager, QObject* parent ```
QRestAccessManager* q_restaccessmanager_new2(void* manager, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QRestAccessManager* self ```
const QMetaObject* q_restaccessmanager_meta_object(void* self);

/// ``` QRestAccessManager* self, const char* param1 ```
void* q_restaccessmanager_metacast(void* self, const char* param1);

/// ``` QRestAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_restaccessmanager_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QRestAccessManager* self, int32_t (*slot)(QRestAccessManager*, enum QMetaObject__Call, int, void*) ```
void q_restaccessmanager_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QRestAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_restaccessmanager_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_restaccessmanager_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#networkAccessManager)
///
/// ``` QRestAccessManager* self ```
QNetworkAccessManager* q_restaccessmanager_network_access_manager(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#deleteResource)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_restaccessmanager_delete_resource(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#head)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_restaccessmanager_head(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_restaccessmanager_get(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_restaccessmanager_get2(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data ```
QNetworkReply* q_restaccessmanager_get3(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#get)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_restaccessmanager_get4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data ```
QNetworkReply* q_restaccessmanager_post(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, libqt_map /* of const char* to QVariant* */ data ```
QNetworkReply* q_restaccessmanager_post2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_restaccessmanager_post3(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QHttpMultiPart* data ```
QNetworkReply* q_restaccessmanager_post4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#post)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_restaccessmanager_post5(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data ```
QNetworkReply* q_restaccessmanager_put(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, libqt_map /* of const char* to QVariant* */ data ```
QNetworkReply* q_restaccessmanager_put2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_restaccessmanager_put3(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QHttpMultiPart* data ```
QNetworkReply* q_restaccessmanager_put4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#put)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_restaccessmanager_put5(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QJsonDocument* data ```
QNetworkReply* q_restaccessmanager_patch(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, libqt_map /* of const char* to QVariant* */ data ```
QNetworkReply* q_restaccessmanager_patch2(void* self, void* request, libqt_map /* of const char* to QVariant* */ data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_restaccessmanager_patch3(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#patch)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_restaccessmanager_patch4(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, const char* method, const char* data ```
QNetworkReply* q_restaccessmanager_send_custom_request(void* self, void* request, const char* method, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, const char* method, QIODevice* data ```
QNetworkReply* q_restaccessmanager_send_custom_request2(void* self, void* request, const char* method, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#sendCustomRequest)
///
/// ``` QRestAccessManager* self, QNetworkRequest* request, const char* method, QHttpMultiPart* data ```
QNetworkReply* q_restaccessmanager_send_custom_request3(void* self, void* request, const char* method, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_restaccessmanager_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_restaccessmanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QRestAccessManager* self ```
const char* q_restaccessmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QRestAccessManager* self, char* name ```
void q_restaccessmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QRestAccessManager* self ```
bool q_restaccessmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QRestAccessManager* self ```
bool q_restaccessmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QRestAccessManager* self ```
bool q_restaccessmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QRestAccessManager* self ```
bool q_restaccessmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QRestAccessManager* self, bool b ```
bool q_restaccessmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QRestAccessManager* self ```
QThread* q_restaccessmanager_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRestAccessManager* self, QThread* thread ```
bool q_restaccessmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRestAccessManager* self, int interval ```
int32_t q_restaccessmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRestAccessManager* self, int id ```
void q_restaccessmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QRestAccessManager* self, enum Qt__TimerId id ```
void q_restaccessmanager_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QRestAccessManager* self ```
libqt_list /* of QObject* */ q_restaccessmanager_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QRestAccessManager* self, QObject* parent ```
void q_restaccessmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QRestAccessManager* self, QObject* filterObj ```
void q_restaccessmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QRestAccessManager* self, QObject* obj ```
void q_restaccessmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_restaccessmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRestAccessManager* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_restaccessmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_restaccessmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_restaccessmanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QRestAccessManager* self ```
void q_restaccessmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QRestAccessManager* self ```
void q_restaccessmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QRestAccessManager* self, const char* name, QVariant* value ```
bool q_restaccessmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QRestAccessManager* self, const char* name ```
QVariant* q_restaccessmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QRestAccessManager* self ```
const char** q_restaccessmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRestAccessManager* self ```
QBindingStorage* q_restaccessmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QRestAccessManager* self ```
const QBindingStorage* q_restaccessmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRestAccessManager* self ```
void q_restaccessmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRestAccessManager* self, void (*slot)(QObject*) ```
void q_restaccessmanager_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QRestAccessManager* self ```
QObject* q_restaccessmanager_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QRestAccessManager* self, const char* classname ```
bool q_restaccessmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QRestAccessManager* self ```
void q_restaccessmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QRestAccessManager* self, QThread* thread, Disambiguated_t* param2 ```
bool q_restaccessmanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QRestAccessManager* self, int interval, enum Qt__TimerType timerType ```
int32_t q_restaccessmanager_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_restaccessmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QRestAccessManager* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_restaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRestAccessManager* self, QObject* param1 ```
void q_restaccessmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QRestAccessManager* self, void (*slot)(QObject*, QObject*) ```
void q_restaccessmanager_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QEvent* event ```
bool q_restaccessmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QEvent* event ```
bool q_restaccessmanager_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, bool (*slot)(QRestAccessManager*, QEvent*) ```
void q_restaccessmanager_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QObject* watched, QEvent* event ```
bool q_restaccessmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QObject* watched, QEvent* event ```
bool q_restaccessmanager_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, bool (*slot)(QRestAccessManager*, QObject*, QEvent*) ```
void q_restaccessmanager_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QTimerEvent* event ```
void q_restaccessmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QTimerEvent* event ```
void q_restaccessmanager_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, void (*slot)(QRestAccessManager*, QTimerEvent*) ```
void q_restaccessmanager_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QChildEvent* event ```
void q_restaccessmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QChildEvent* event ```
void q_restaccessmanager_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, void (*slot)(QRestAccessManager*, QChildEvent*) ```
void q_restaccessmanager_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QEvent* event ```
void q_restaccessmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QEvent* event ```
void q_restaccessmanager_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, void (*slot)(QRestAccessManager*, QEvent*) ```
void q_restaccessmanager_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QMetaMethod* signal ```
void q_restaccessmanager_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QMetaMethod* signal ```
void q_restaccessmanager_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, void (*slot)(QRestAccessManager*, QMetaMethod*) ```
void q_restaccessmanager_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QMetaMethod* signal ```
void q_restaccessmanager_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QMetaMethod* signal ```
void q_restaccessmanager_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, void (*slot)(QRestAccessManager*, QMetaMethod*) ```
void q_restaccessmanager_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self ```
QObject* q_restaccessmanager_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self ```
QObject* q_restaccessmanager_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, QObject* (*slot)() ```
void q_restaccessmanager_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self ```
int32_t q_restaccessmanager_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self ```
int32_t q_restaccessmanager_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, int32_t (*slot)() ```
void q_restaccessmanager_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, const char* signal ```
int32_t q_restaccessmanager_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, const char* signal ```
int32_t q_restaccessmanager_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, int32_t (*slot)(QRestAccessManager*, const char*) ```
void q_restaccessmanager_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QRestAccessManager* self, QMetaMethod* signal ```
bool q_restaccessmanager_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QRestAccessManager* self, QMetaMethod* signal ```
bool q_restaccessmanager_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QRestAccessManager* self, bool (*slot)(QRestAccessManager*, QMetaMethod*) ```
void q_restaccessmanager_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QRestAccessManager* self, void (*slot)(QObject*, const char*) ```
void q_restaccessmanager_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qrestaccessmanager.html#dtor.QRestAccessManager)
///
/// Delete this object from C++ memory.
///
/// ``` QRestAccessManager* self ```
void q_restaccessmanager_delete(void* self);

#endif
