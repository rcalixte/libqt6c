#include "../libqanystringview.hpp"
#include "libqaudioengine.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqvectornd.hpp"
#include "../libqcoreevent.hpp"
#include "libqaudiolistener.hpp"
#include "libqaudiolistener.h"

/// https://doc.qt.io/qt-6/qaudiolistener.html

/// q_audiolistener_new constructs a new QAudioListener object.
///
/// ``` QAudioEngine* engine ```
QAudioListener* q_audiolistener_new(void* engine) {
    return QAudioListener_new((QAudioEngine*)engine);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiolistener.html#setPosition)
///
/// ``` QAudioListener* self, QVector3D* pos ```
void q_audiolistener_set_position(void* self, void* pos) {
    QAudioListener_SetPosition((QAudioListener*)self, (QVector3D*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiolistener.html#position)
///
/// ``` QAudioListener* self ```
QVector3D* q_audiolistener_position(void* self) {
    return QAudioListener_Position((QAudioListener*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiolistener.html#setRotation)
///
/// ``` QAudioListener* self, QQuaternion* q ```
void q_audiolistener_set_rotation(void* self, void* q) {
    QAudioListener_SetRotation((QAudioListener*)self, (QQuaternion*)q);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiolistener.html#rotation)
///
/// ``` QAudioListener* self ```
QQuaternion* q_audiolistener_rotation(void* self) {
    return QAudioListener_Rotation((QAudioListener*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiolistener.html#engine)
///
/// ``` QAudioListener* self ```
QAudioEngine* q_audiolistener_engine(void* self) {
    return QAudioListener_Engine((QAudioListener*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioListener* self ```
QMetaObject* q_audiolistener_meta_object(void* self) {
    return QObject_MetaObject((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioListener* self, const char* param1 ```
void* q_audiolistener_metacast(void* self, const char* param1) {
    return QObject_Metacast((QObject*)self, param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiolistener_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioListener* self ```
const char* q_audiolistener_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioListener* self, const char* name ```
void q_audiolistener_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioListener* self ```
bool q_audiolistener_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioListener* self ```
bool q_audiolistener_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioListener* self ```
bool q_audiolistener_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioListener* self ```
bool q_audiolistener_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioListener* self, bool b ```
bool q_audiolistener_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioListener* self ```
QThread* q_audiolistener_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioListener* self, QThread* thread ```
void q_audiolistener_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioListener* self, int interval ```
int32_t q_audiolistener_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioListener* self, int id ```
void q_audiolistener_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioListener* self ```
libqt_list /* of QObject* */ q_audiolistener_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioListener* self, QObject* parent ```
void q_audiolistener_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioListener* self, QObject* filterObj ```
void q_audiolistener_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioListener* self, QObject* obj ```
void q_audiolistener_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiolistener_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioListener* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiolistener_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiolistener_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiolistener_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioListener* self ```
void q_audiolistener_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioListener* self ```
void q_audiolistener_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioListener* self, const char* name, QVariant* value ```
bool q_audiolistener_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioListener* self, const char* name ```
QVariant* q_audiolistener_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioListener* self ```
const char** q_audiolistener_dynamic_property_names(void* self) {
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
/// ``` QAudioListener* self ```
QBindingStorage* q_audiolistener_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioListener* self ```
QBindingStorage* q_audiolistener_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioListener* self ```
void q_audiolistener_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioListener* self, void (*slot)(QObject*) ```
void q_audiolistener_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioListener* self ```
QObject* q_audiolistener_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioListener* self, const char* classname ```
bool q_audiolistener_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioListener* self ```
void q_audiolistener_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiolistener_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiolistener_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioListener* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiolistener_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiolistener_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioListener* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiolistener_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioListener* self, QObject* param1 ```
void q_audiolistener_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAudioListener* self, void (*slot)(QObject*, QObject*) ```
void q_audiolistener_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#qt_metacall)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiolistener_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioListener_Metacall((QAudioListener*)self, param1, param2, param3);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiolistener_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioListener_QBaseMetacall((QAudioListener*)self, param1, param2, param3);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, int32_t (*slot)(QAudioListener*, enum QMetaObject__Call, int, void*) ```
void q_audiolistener_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioListener_OnMetacall((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QEvent* event ```
bool q_audiolistener_event(void* self, void* event) {
    return QAudioListener_Event((QAudioListener*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QEvent* event ```
bool q_audiolistener_qbase_event(void* self, void* event) {
    return QAudioListener_QBaseEvent((QAudioListener*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, bool (*slot)(QAudioListener*, QEvent*) ```
void q_audiolistener_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioListener_OnEvent((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QObject* watched, QEvent* event ```
bool q_audiolistener_event_filter(void* self, void* watched, void* event) {
    return QAudioListener_EventFilter((QAudioListener*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QObject* watched, QEvent* event ```
bool q_audiolistener_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioListener_QBaseEventFilter((QAudioListener*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, bool (*slot)(QAudioListener*, QObject*, QEvent*) ```
void q_audiolistener_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioListener_OnEventFilter((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QTimerEvent* event ```
void q_audiolistener_timer_event(void* self, void* event) {
    QAudioListener_TimerEvent((QAudioListener*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QTimerEvent* event ```
void q_audiolistener_qbase_timer_event(void* self, void* event) {
    QAudioListener_QBaseTimerEvent((QAudioListener*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, void (*slot)(QAudioListener*, QTimerEvent*) ```
void q_audiolistener_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnTimerEvent((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QChildEvent* event ```
void q_audiolistener_child_event(void* self, void* event) {
    QAudioListener_ChildEvent((QAudioListener*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QChildEvent* event ```
void q_audiolistener_qbase_child_event(void* self, void* event) {
    QAudioListener_QBaseChildEvent((QAudioListener*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, void (*slot)(QAudioListener*, QChildEvent*) ```
void q_audiolistener_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnChildEvent((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QEvent* event ```
void q_audiolistener_custom_event(void* self, void* event) {
    QAudioListener_CustomEvent((QAudioListener*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QEvent* event ```
void q_audiolistener_qbase_custom_event(void* self, void* event) {
    QAudioListener_QBaseCustomEvent((QAudioListener*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, void (*slot)(QAudioListener*, QEvent*) ```
void q_audiolistener_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnCustomEvent((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QMetaMethod* signal ```
void q_audiolistener_connect_notify(void* self, void* signal) {
    QAudioListener_ConnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QMetaMethod* signal ```
void q_audiolistener_qbase_connect_notify(void* self, void* signal) {
    QAudioListener_QBaseConnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, void (*slot)(QAudioListener*, QMetaMethod*) ```
void q_audiolistener_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnConnectNotify((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QMetaMethod* signal ```
void q_audiolistener_disconnect_notify(void* self, void* signal) {
    QAudioListener_DisconnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QMetaMethod* signal ```
void q_audiolistener_qbase_disconnect_notify(void* self, void* signal) {
    QAudioListener_QBaseDisconnectNotify((QAudioListener*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, void (*slot)(QAudioListener*, QMetaMethod*) ```
void q_audiolistener_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioListener_OnDisconnectNotify((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self ```
QObject* q_audiolistener_sender(void* self) {
    return QAudioListener_Sender((QAudioListener*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self ```
QObject* q_audiolistener_qbase_sender(void* self) {
    return QAudioListener_QBaseSender((QAudioListener*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, QObject* (*slot)() ```
void q_audiolistener_on_sender(void* self, QObject* (*slot)()) {
    QAudioListener_OnSender((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self ```
int32_t q_audiolistener_sender_signal_index(void* self) {
    return QAudioListener_SenderSignalIndex((QAudioListener*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self ```
int32_t q_audiolistener_qbase_sender_signal_index(void* self) {
    return QAudioListener_QBaseSenderSignalIndex((QAudioListener*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, int32_t (*slot)() ```
void q_audiolistener_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioListener_OnSenderSignalIndex((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, const char* signal ```
int32_t q_audiolistener_receivers(void* self, const char* signal) {
    return QAudioListener_Receivers((QAudioListener*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, const char* signal ```
int32_t q_audiolistener_qbase_receivers(void* self, const char* signal) {
    return QAudioListener_QBaseReceivers((QAudioListener*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, int32_t (*slot)(QAudioListener*, const char*) ```
void q_audiolistener_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioListener_OnReceivers((QAudioListener*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioListener* self, QMetaMethod* signal ```
bool q_audiolistener_is_signal_connected(void* self, void* signal) {
    return QAudioListener_IsSignalConnected((QAudioListener*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioListener* self, QMetaMethod* signal ```
bool q_audiolistener_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioListener_QBaseIsSignalConnected((QAudioListener*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioListener* self, bool (*slot)(QAudioListener*, QMetaMethod*) ```
void q_audiolistener_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioListener_OnIsSignalConnected((QAudioListener*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioListener* self ```
void q_audiolistener_delete(void* self) {
    QAudioListener_Delete((QAudioListener*)(self));
}