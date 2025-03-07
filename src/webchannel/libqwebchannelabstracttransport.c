#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqjsonobject.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebchannelabstracttransport.hpp"
#include "libqwebchannelabstracttransport.h"

/// https://doc.qt.io/qt-6/qwebchannelabstracttransport.html

/// q_webchannelabstracttransport_new constructs a new QWebChannelAbstractTransport object.
///
///
QWebChannelAbstractTransport* q_webchannelabstracttransport_new() {
    return QWebChannelAbstractTransport_new();
}

/// q_webchannelabstracttransport_new2 constructs a new QWebChannelAbstractTransport object.
///
/// ``` QObject* parent ```
QWebChannelAbstractTransport* q_webchannelabstracttransport_new2(void* parent) {
    return QWebChannelAbstractTransport_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebChannelAbstractTransport* self ```
QMetaObject* q_webchannelabstracttransport_meta_object(void* self) {
    return QWebChannelAbstractTransport_MetaObject((QWebChannelAbstractTransport*)self);
}

/// ``` QWebChannelAbstractTransport* self, const char* param1 ```
void* q_webchannelabstracttransport_metacast(void* self, const char* param1) {
    return QWebChannelAbstractTransport_Metacast((QWebChannelAbstractTransport*)self, param1);
}

/// ``` QWebChannelAbstractTransport* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webchannelabstracttransport_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebChannelAbstractTransport_Metacall((QWebChannelAbstractTransport*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWebChannelAbstractTransport* self, int32_t (*slot)(QWebChannelAbstractTransport*, enum QMetaObject__Call, int, void*) ```
void q_webchannelabstracttransport_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWebChannelAbstractTransport_OnMetacall((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebChannelAbstractTransport* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webchannelabstracttransport_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebChannelAbstractTransport_QBaseMetacall((QWebChannelAbstractTransport*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webchannelabstracttransport_tr(const char* s) {
    libqt_string _str = QWebChannelAbstractTransport_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#sendMessage)
///
/// ``` QWebChannelAbstractTransport* self, QJsonObject* message ```
void q_webchannelabstracttransport_send_message(void* self, void* message) {
    QWebChannelAbstractTransport_SendMessage((QWebChannelAbstractTransport*)self, (QJsonObject*)message);
}

/// Allows for overriding the related default method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QJsonObject*) ```
void q_webchannelabstracttransport_on_send_message(void* self, void (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnSendMessage((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebChannelAbstractTransport* self, QJsonObject* message ```
void q_webchannelabstracttransport_qbase_send_message(void* self, void* message) {
    QWebChannelAbstractTransport_QBaseSendMessage((QWebChannelAbstractTransport*)self, (QJsonObject*)message);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebchannelabstracttransport.html#messageReceived)
///
/// ``` QWebChannelAbstractTransport* self, QJsonObject* message, QWebChannelAbstractTransport* transport ```
void q_webchannelabstracttransport_message_received(void* self, void* message, void* transport) {
    QWebChannelAbstractTransport_MessageReceived((QWebChannelAbstractTransport*)self, (QJsonObject*)message, (QWebChannelAbstractTransport*)transport);
}

/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QJsonObject*, QWebChannelAbstractTransport*) ```
void q_webchannelabstracttransport_on_message_received(void* self, void (*slot)(void*, void*, void*)) {
    QWebChannelAbstractTransport_Connect_MessageReceived((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webchannelabstracttransport_tr2(const char* s, const char* c) {
    libqt_string _str = QWebChannelAbstractTransport_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webchannelabstracttransport_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebChannelAbstractTransport_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebChannelAbstractTransport* self ```
const char* q_webchannelabstracttransport_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebChannelAbstractTransport* self, const char* name ```
void q_webchannelabstracttransport_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebChannelAbstractTransport* self ```
bool q_webchannelabstracttransport_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebChannelAbstractTransport* self, bool b ```
bool q_webchannelabstracttransport_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebChannelAbstractTransport* self ```
QThread* q_webchannelabstracttransport_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebChannelAbstractTransport* self, QThread* thread ```
void q_webchannelabstracttransport_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebChannelAbstractTransport* self, int interval ```
int32_t q_webchannelabstracttransport_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebChannelAbstractTransport* self, int id ```
void q_webchannelabstracttransport_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebChannelAbstractTransport* self ```
libqt_list /* of QObject* */ q_webchannelabstracttransport_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebChannelAbstractTransport* self, QObject* parent ```
void q_webchannelabstracttransport_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebChannelAbstractTransport* self, QObject* filterObj ```
void q_webchannelabstracttransport_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebChannelAbstractTransport* self, QObject* obj ```
void q_webchannelabstracttransport_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webchannelabstracttransport_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebChannelAbstractTransport* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webchannelabstracttransport_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webchannelabstracttransport_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webchannelabstracttransport_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebChannelAbstractTransport* self, const char* name, QVariant* value ```
bool q_webchannelabstracttransport_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebChannelAbstractTransport* self, const char* name ```
QVariant* q_webchannelabstracttransport_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebChannelAbstractTransport* self ```
const char** q_webchannelabstracttransport_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebChannelAbstractTransport* self ```
QBindingStorage* q_webchannelabstracttransport_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebChannelAbstractTransport* self ```
QBindingStorage* q_webchannelabstracttransport_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QObject*) ```
void q_webchannelabstracttransport_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebChannelAbstractTransport* self ```
QObject* q_webchannelabstracttransport_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebChannelAbstractTransport* self, const char* classname ```
bool q_webchannelabstracttransport_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebChannelAbstractTransport* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webchannelabstracttransport_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webchannelabstracttransport_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebChannelAbstractTransport* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webchannelabstracttransport_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebChannelAbstractTransport* self, QObject* param1 ```
void q_webchannelabstracttransport_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QObject*, QObject*) ```
void q_webchannelabstracttransport_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
bool q_webchannelabstracttransport_event(void* self, void* event) {
    return QWebChannelAbstractTransport_Event((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
bool q_webchannelabstracttransport_qbase_event(void* self, void* event) {
    return QWebChannelAbstractTransport_QBaseEvent((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, bool (*slot)(QWebChannelAbstractTransport*, QEvent*) ```
void q_webchannelabstracttransport_on_event(void* self, bool (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnEvent((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QObject* watched, QEvent* event ```
bool q_webchannelabstracttransport_event_filter(void* self, void* watched, void* event) {
    return QWebChannelAbstractTransport_EventFilter((QWebChannelAbstractTransport*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QObject* watched, QEvent* event ```
bool q_webchannelabstracttransport_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebChannelAbstractTransport_QBaseEventFilter((QWebChannelAbstractTransport*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, bool (*slot)(QWebChannelAbstractTransport*, QObject*, QEvent*) ```
void q_webchannelabstracttransport_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWebChannelAbstractTransport_OnEventFilter((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QTimerEvent* event ```
void q_webchannelabstracttransport_timer_event(void* self, void* event) {
    QWebChannelAbstractTransport_TimerEvent((QWebChannelAbstractTransport*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QTimerEvent* event ```
void q_webchannelabstracttransport_qbase_timer_event(void* self, void* event) {
    QWebChannelAbstractTransport_QBaseTimerEvent((QWebChannelAbstractTransport*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QTimerEvent*) ```
void q_webchannelabstracttransport_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnTimerEvent((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QChildEvent* event ```
void q_webchannelabstracttransport_child_event(void* self, void* event) {
    QWebChannelAbstractTransport_ChildEvent((QWebChannelAbstractTransport*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QChildEvent* event ```
void q_webchannelabstracttransport_qbase_child_event(void* self, void* event) {
    QWebChannelAbstractTransport_QBaseChildEvent((QWebChannelAbstractTransport*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QChildEvent*) ```
void q_webchannelabstracttransport_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnChildEvent((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
void q_webchannelabstracttransport_custom_event(void* self, void* event) {
    QWebChannelAbstractTransport_CustomEvent((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QEvent* event ```
void q_webchannelabstracttransport_qbase_custom_event(void* self, void* event) {
    QWebChannelAbstractTransport_QBaseCustomEvent((QWebChannelAbstractTransport*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QEvent*) ```
void q_webchannelabstracttransport_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnCustomEvent((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_connect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_ConnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_qbase_connect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_QBaseConnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QMetaMethod*) ```
void q_webchannelabstracttransport_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnConnectNotify((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_disconnect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_DisconnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
void q_webchannelabstracttransport_qbase_disconnect_notify(void* self, void* signal) {
    QWebChannelAbstractTransport_QBaseDisconnectNotify((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, void (*slot)(QWebChannelAbstractTransport*, QMetaMethod*) ```
void q_webchannelabstracttransport_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnDisconnectNotify((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
QObject* q_webchannelabstracttransport_sender(void* self) {
    return QWebChannelAbstractTransport_Sender((QWebChannelAbstractTransport*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
QObject* q_webchannelabstracttransport_qbase_sender(void* self) {
    return QWebChannelAbstractTransport_QBaseSender((QWebChannelAbstractTransport*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QObject* (*slot)() ```
void q_webchannelabstracttransport_on_sender(void* self, QObject* (*slot)()) {
    QWebChannelAbstractTransport_OnSender((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
int32_t q_webchannelabstracttransport_sender_signal_index(void* self) {
    return QWebChannelAbstractTransport_SenderSignalIndex((QWebChannelAbstractTransport*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self ```
int32_t q_webchannelabstracttransport_qbase_sender_signal_index(void* self) {
    return QWebChannelAbstractTransport_QBaseSenderSignalIndex((QWebChannelAbstractTransport*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, int32_t (*slot)() ```
void q_webchannelabstracttransport_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWebChannelAbstractTransport_OnSenderSignalIndex((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, const char* signal ```
int32_t q_webchannelabstracttransport_receivers(void* self, const char* signal) {
    return QWebChannelAbstractTransport_Receivers((QWebChannelAbstractTransport*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, const char* signal ```
int32_t q_webchannelabstracttransport_qbase_receivers(void* self, const char* signal) {
    return QWebChannelAbstractTransport_QBaseReceivers((QWebChannelAbstractTransport*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, int32_t (*slot)(QWebChannelAbstractTransport*, const char*) ```
void q_webchannelabstracttransport_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWebChannelAbstractTransport_OnReceivers((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
bool q_webchannelabstracttransport_is_signal_connected(void* self, void* signal) {
    return QWebChannelAbstractTransport_IsSignalConnected((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, QMetaMethod* signal ```
bool q_webchannelabstracttransport_qbase_is_signal_connected(void* self, void* signal) {
    return QWebChannelAbstractTransport_QBaseIsSignalConnected((QWebChannelAbstractTransport*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebChannelAbstractTransport* self, bool (*slot)(QWebChannelAbstractTransport*, QMetaMethod*) ```
void q_webchannelabstracttransport_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWebChannelAbstractTransport_OnIsSignalConnected((QWebChannelAbstractTransport*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebChannelAbstractTransport* self ```
void q_webchannelabstracttransport_delete(void* self) {
    QWebChannelAbstractTransport_Delete((QWebChannelAbstractTransport*)(self));
}