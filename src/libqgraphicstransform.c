#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmatrix4x4.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqvectornd.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicstransform.hpp"
#include "libqgraphicstransform.h"

/// https://doc.qt.io/qt-6/qgraphicstransform.html

/// q_graphicstransform_new constructs a new QGraphicsTransform object.
///
///
QGraphicsTransform* q_graphicstransform_new() {
    return QGraphicsTransform_new();
}

/// q_graphicstransform_new2 constructs a new QGraphicsTransform object.
///
/// ``` QObject* parent ```
QGraphicsTransform* q_graphicstransform_new2(void* parent) {
    return QGraphicsTransform_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsTransform* self ```
QMetaObject* q_graphicstransform_meta_object(void* self) {
    return QGraphicsTransform_MetaObject((QGraphicsTransform*)self);
}

/// ``` QGraphicsTransform* self, const char* param1 ```
void* q_graphicstransform_metacast(void* self, const char* param1) {
    return QGraphicsTransform_Metacast((QGraphicsTransform*)self, param1);
}

/// ``` QGraphicsTransform* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicstransform_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsTransform_Metacall((QGraphicsTransform*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsTransform* self, int32_t (*slot)(QGraphicsTransform*, enum QMetaObject__Call, int, void*) ```
void q_graphicstransform_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsTransform_OnMetacall((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsTransform* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicstransform_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsTransform_QBaseMetacall((QGraphicsTransform*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicstransform_tr(const char* s) {
    libqt_string _str = QGraphicsTransform_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#applyTo)
///
/// ``` QGraphicsTransform* self, QMatrix4x4* matrix ```
void q_graphicstransform_apply_to(void* self, void* matrix) {
    QGraphicsTransform_ApplyTo((QGraphicsTransform*)self, (QMatrix4x4*)matrix);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QMatrix4x4*) ```
void q_graphicstransform_on_apply_to(void* self, void (*slot)(void*, void*)) {
    QGraphicsTransform_OnApplyTo((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsTransform* self, QMatrix4x4* matrix ```
void q_graphicstransform_qbase_apply_to(void* self, void* matrix) {
    QGraphicsTransform_QBaseApplyTo((QGraphicsTransform*)self, (QMatrix4x4*)matrix);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_update(void* self) {
    QGraphicsTransform_Update((QGraphicsTransform*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsTransform* self, void (*slot)() ```
void q_graphicstransform_on_update(void* self, void (*slot)()) {
    QGraphicsTransform_OnUpdate((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_qbase_update(void* self) {
    QGraphicsTransform_QBaseUpdate((QGraphicsTransform*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicstransform_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsTransform_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicstransform_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsTransform_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsTransform* self ```
const char* q_graphicstransform_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsTransform* self, const char* name ```
void q_graphicstransform_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsTransform* self ```
bool q_graphicstransform_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsTransform* self, bool b ```
bool q_graphicstransform_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsTransform* self ```
QThread* q_graphicstransform_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsTransform* self, QThread* thread ```
void q_graphicstransform_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsTransform* self, int interval ```
int32_t q_graphicstransform_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsTransform* self, int id ```
void q_graphicstransform_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsTransform* self ```
libqt_list /* of QObject* */ q_graphicstransform_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsTransform* self, QObject* parent ```
void q_graphicstransform_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsTransform* self, QObject* filterObj ```
void q_graphicstransform_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsTransform* self, QObject* obj ```
void q_graphicstransform_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicstransform_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsTransform* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicstransform_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicstransform_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicstransform_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsTransform* self, const char* name, QVariant* value ```
bool q_graphicstransform_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsTransform* self, const char* name ```
QVariant* q_graphicstransform_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsTransform* self ```
const char** q_graphicstransform_dynamic_property_names(void* self) {
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
/// ``` QGraphicsTransform* self ```
QBindingStorage* q_graphicstransform_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsTransform* self ```
QBindingStorage* q_graphicstransform_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsTransform* self, void (*slot)(QObject*) ```
void q_graphicstransform_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsTransform* self ```
QObject* q_graphicstransform_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsTransform* self, const char* classname ```
bool q_graphicstransform_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsTransform* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicstransform_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicstransform_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsTransform* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicstransform_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsTransform* self, QObject* param1 ```
void q_graphicstransform_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsTransform* self, void (*slot)(QObject*, QObject*) ```
void q_graphicstransform_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
bool q_graphicstransform_event(void* self, void* event) {
    return QGraphicsTransform_Event((QGraphicsTransform*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
bool q_graphicstransform_qbase_event(void* self, void* event) {
    return QGraphicsTransform_QBaseEvent((QGraphicsTransform*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, bool (*slot)(QGraphicsTransform*, QEvent*) ```
void q_graphicstransform_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsTransform_OnEvent((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QObject* watched, QEvent* event ```
bool q_graphicstransform_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTransform_EventFilter((QGraphicsTransform*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QObject* watched, QEvent* event ```
bool q_graphicstransform_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsTransform_QBaseEventFilter((QGraphicsTransform*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, bool (*slot)(QGraphicsTransform*, QObject*, QEvent*) ```
void q_graphicstransform_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsTransform_OnEventFilter((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QTimerEvent* event ```
void q_graphicstransform_timer_event(void* self, void* event) {
    QGraphicsTransform_TimerEvent((QGraphicsTransform*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QTimerEvent* event ```
void q_graphicstransform_qbase_timer_event(void* self, void* event) {
    QGraphicsTransform_QBaseTimerEvent((QGraphicsTransform*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QTimerEvent*) ```
void q_graphicstransform_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsTransform_OnTimerEvent((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QChildEvent* event ```
void q_graphicstransform_child_event(void* self, void* event) {
    QGraphicsTransform_ChildEvent((QGraphicsTransform*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QChildEvent* event ```
void q_graphicstransform_qbase_child_event(void* self, void* event) {
    QGraphicsTransform_QBaseChildEvent((QGraphicsTransform*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QChildEvent*) ```
void q_graphicstransform_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsTransform_OnChildEvent((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
void q_graphicstransform_custom_event(void* self, void* event) {
    QGraphicsTransform_CustomEvent((QGraphicsTransform*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QEvent* event ```
void q_graphicstransform_qbase_custom_event(void* self, void* event) {
    QGraphicsTransform_QBaseCustomEvent((QGraphicsTransform*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QEvent*) ```
void q_graphicstransform_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsTransform_OnCustomEvent((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_connect_notify(void* self, void* signal) {
    QGraphicsTransform_ConnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_qbase_connect_notify(void* self, void* signal) {
    QGraphicsTransform_QBaseConnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QMetaMethod*) ```
void q_graphicstransform_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsTransform_OnConnectNotify((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_disconnect_notify(void* self, void* signal) {
    QGraphicsTransform_DisconnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
void q_graphicstransform_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsTransform_QBaseDisconnectNotify((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, void (*slot)(QGraphicsTransform*, QMetaMethod*) ```
void q_graphicstransform_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsTransform_OnDisconnectNotify((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self ```
QObject* q_graphicstransform_sender(void* self) {
    return QGraphicsTransform_Sender((QGraphicsTransform*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self ```
QObject* q_graphicstransform_qbase_sender(void* self) {
    return QGraphicsTransform_QBaseSender((QGraphicsTransform*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QObject* (*slot)() ```
void q_graphicstransform_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsTransform_OnSender((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self ```
int32_t q_graphicstransform_sender_signal_index(void* self) {
    return QGraphicsTransform_SenderSignalIndex((QGraphicsTransform*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self ```
int32_t q_graphicstransform_qbase_sender_signal_index(void* self) {
    return QGraphicsTransform_QBaseSenderSignalIndex((QGraphicsTransform*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, int32_t (*slot)() ```
void q_graphicstransform_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsTransform_OnSenderSignalIndex((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, const char* signal ```
int32_t q_graphicstransform_receivers(void* self, const char* signal) {
    return QGraphicsTransform_Receivers((QGraphicsTransform*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, const char* signal ```
int32_t q_graphicstransform_qbase_receivers(void* self, const char* signal) {
    return QGraphicsTransform_QBaseReceivers((QGraphicsTransform*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, int32_t (*slot)(QGraphicsTransform*, const char*) ```
void q_graphicstransform_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsTransform_OnReceivers((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
bool q_graphicstransform_is_signal_connected(void* self, void* signal) {
    return QGraphicsTransform_IsSignalConnected((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsTransform* self, QMetaMethod* signal ```
bool q_graphicstransform_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsTransform_QBaseIsSignalConnected((QGraphicsTransform*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsTransform* self, bool (*slot)(QGraphicsTransform*, QMetaMethod*) ```
void q_graphicstransform_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsTransform_OnIsSignalConnected((QGraphicsTransform*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsTransform* self ```
void q_graphicstransform_delete(void* self) {
    QGraphicsTransform_Delete((QGraphicsTransform*)(self));
}

/// https://doc.qt.io/qt-6/qgraphicsscale.html

/// q_graphicsscale_new constructs a new QGraphicsScale object.
///
///
QGraphicsScale* q_graphicsscale_new() {
    return QGraphicsScale_new();
}

/// q_graphicsscale_new2 constructs a new QGraphicsScale object.
///
/// ``` QObject* parent ```
QGraphicsScale* q_graphicsscale_new2(void* parent) {
    return QGraphicsScale_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsScale* self ```
QMetaObject* q_graphicsscale_meta_object(void* self) {
    return QGraphicsScale_MetaObject((QGraphicsScale*)self);
}

/// ``` QGraphicsScale* self, const char* param1 ```
void* q_graphicsscale_metacast(void* self, const char* param1) {
    return QGraphicsScale_Metacast((QGraphicsScale*)self, param1);
}

/// ``` QGraphicsScale* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscale_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsScale_Metacall((QGraphicsScale*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScale* self, int32_t (*slot)(QGraphicsScale*, enum QMetaObject__Call, int, void*) ```
void q_graphicsscale_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsScale_OnMetacall((QGraphicsScale*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScale* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsscale_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsScale_QBaseMetacall((QGraphicsScale*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsscale_tr(const char* s) {
    libqt_string _str = QGraphicsScale_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#origin)
///
/// ``` QGraphicsScale* self ```
QVector3D* q_graphicsscale_origin(void* self) {
    return QGraphicsScale_Origin((QGraphicsScale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setOrigin)
///
/// ``` QGraphicsScale* self, QVector3D* point ```
void q_graphicsscale_set_origin(void* self, void* point) {
    QGraphicsScale_SetOrigin((QGraphicsScale*)self, (QVector3D*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScale)
///
/// ``` QGraphicsScale* self ```
double q_graphicsscale_x_scale(void* self) {
    return QGraphicsScale_XScale((QGraphicsScale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setXScale)
///
/// ``` QGraphicsScale* self, double xScale ```
void q_graphicsscale_set_x_scale(void* self, double xScale) {
    QGraphicsScale_SetXScale((QGraphicsScale*)self, xScale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScale)
///
/// ``` QGraphicsScale* self ```
double q_graphicsscale_y_scale(void* self) {
    return QGraphicsScale_YScale((QGraphicsScale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setYScale)
///
/// ``` QGraphicsScale* self, double yScale ```
void q_graphicsscale_set_y_scale(void* self, double yScale) {
    QGraphicsScale_SetYScale((QGraphicsScale*)self, yScale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScale)
///
/// ``` QGraphicsScale* self ```
double q_graphicsscale_z_scale(void* self) {
    return QGraphicsScale_ZScale((QGraphicsScale*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#setZScale)
///
/// ``` QGraphicsScale* self, double zScale ```
void q_graphicsscale_set_z_scale(void* self, double zScale) {
    QGraphicsScale_SetZScale((QGraphicsScale*)self, zScale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#applyTo)
///
/// ``` QGraphicsScale* self, QMatrix4x4* matrix ```
void q_graphicsscale_apply_to(void* self, void* matrix) {
    QGraphicsScale_ApplyTo((QGraphicsScale*)self, (QMatrix4x4*)matrix);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QMatrix4x4*) ```
void q_graphicsscale_on_apply_to(void* self, void (*slot)(void*, void*)) {
    QGraphicsScale_OnApplyTo((QGraphicsScale*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsScale* self, QMatrix4x4* matrix ```
void q_graphicsscale_qbase_apply_to(void* self, void* matrix) {
    QGraphicsScale_QBaseApplyTo((QGraphicsScale*)self, (QMatrix4x4*)matrix);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#originChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_origin_changed(void* self) {
    QGraphicsScale_OriginChanged((QGraphicsScale*)self);
}

/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_origin_changed(void* self, void (*slot)(void*)) {
    QGraphicsScale_Connect_OriginChanged((QGraphicsScale*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#xScaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_x_scale_changed(void* self) {
    QGraphicsScale_XScaleChanged((QGraphicsScale*)self);
}

/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_x_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsScale_Connect_XScaleChanged((QGraphicsScale*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#yScaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_y_scale_changed(void* self) {
    QGraphicsScale_YScaleChanged((QGraphicsScale*)self);
}

/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_y_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsScale_Connect_YScaleChanged((QGraphicsScale*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#zScaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_z_scale_changed(void* self) {
    QGraphicsScale_ZScaleChanged((QGraphicsScale*)self);
}

/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_z_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsScale_Connect_ZScaleChanged((QGraphicsScale*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsscale.html#scaleChanged)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_scale_changed(void* self) {
    QGraphicsScale_ScaleChanged((QGraphicsScale*)self);
}

/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*) ```
void q_graphicsscale_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsScale_Connect_ScaleChanged((QGraphicsScale*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsscale_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsScale_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsscale_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsScale_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsScale* self ```
const char* q_graphicsscale_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsScale* self, const char* name ```
void q_graphicsscale_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsScale* self ```
bool q_graphicsscale_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsScale* self, bool b ```
bool q_graphicsscale_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsScale* self ```
QThread* q_graphicsscale_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsScale* self, QThread* thread ```
void q_graphicsscale_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScale* self, int interval ```
int32_t q_graphicsscale_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsScale* self, int id ```
void q_graphicsscale_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsScale* self ```
libqt_list /* of QObject* */ q_graphicsscale_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsScale* self, QObject* parent ```
void q_graphicsscale_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsScale* self, QObject* filterObj ```
void q_graphicsscale_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsScale* self, QObject* obj ```
void q_graphicsscale_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsscale_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScale* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsscale_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsscale_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsscale_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsScale* self, const char* name, QVariant* value ```
bool q_graphicsscale_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsScale* self, const char* name ```
QVariant* q_graphicsscale_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsScale* self ```
const char** q_graphicsscale_dynamic_property_names(void* self) {
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
/// ``` QGraphicsScale* self ```
QBindingStorage* q_graphicsscale_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsScale* self ```
QBindingStorage* q_graphicsscale_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsScale* self, void (*slot)(QObject*) ```
void q_graphicsscale_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsScale* self ```
QObject* q_graphicsscale_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsScale* self, const char* classname ```
bool q_graphicsscale_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsScale* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsscale_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscale_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsScale* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsscale_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsScale* self, QObject* param1 ```
void q_graphicsscale_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsScale* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsscale_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
bool q_graphicsscale_event(void* self, void* event) {
    return QGraphicsScale_Event((QGraphicsScale*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
bool q_graphicsscale_qbase_event(void* self, void* event) {
    return QGraphicsScale_QBaseEvent((QGraphicsScale*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, bool (*slot)(QGraphicsScale*, QEvent*) ```
void q_graphicsscale_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsScale_OnEvent((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QObject* watched, QEvent* event ```
bool q_graphicsscale_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScale_EventFilter((QGraphicsScale*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QObject* watched, QEvent* event ```
bool q_graphicsscale_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsScale_QBaseEventFilter((QGraphicsScale*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, bool (*slot)(QGraphicsScale*, QObject*, QEvent*) ```
void q_graphicsscale_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsScale_OnEventFilter((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QTimerEvent* event ```
void q_graphicsscale_timer_event(void* self, void* event) {
    QGraphicsScale_TimerEvent((QGraphicsScale*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QTimerEvent* event ```
void q_graphicsscale_qbase_timer_event(void* self, void* event) {
    QGraphicsScale_QBaseTimerEvent((QGraphicsScale*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QTimerEvent*) ```
void q_graphicsscale_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScale_OnTimerEvent((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QChildEvent* event ```
void q_graphicsscale_child_event(void* self, void* event) {
    QGraphicsScale_ChildEvent((QGraphicsScale*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QChildEvent* event ```
void q_graphicsscale_qbase_child_event(void* self, void* event) {
    QGraphicsScale_QBaseChildEvent((QGraphicsScale*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QChildEvent*) ```
void q_graphicsscale_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScale_OnChildEvent((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
void q_graphicsscale_custom_event(void* self, void* event) {
    QGraphicsScale_CustomEvent((QGraphicsScale*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QEvent* event ```
void q_graphicsscale_qbase_custom_event(void* self, void* event) {
    QGraphicsScale_QBaseCustomEvent((QGraphicsScale*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QEvent*) ```
void q_graphicsscale_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsScale_OnCustomEvent((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_connect_notify(void* self, void* signal) {
    QGraphicsScale_ConnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_qbase_connect_notify(void* self, void* signal) {
    QGraphicsScale_QBaseConnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QMetaMethod*) ```
void q_graphicsscale_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsScale_OnConnectNotify((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_disconnect_notify(void* self, void* signal) {
    QGraphicsScale_DisconnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
void q_graphicsscale_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsScale_QBaseDisconnectNotify((QGraphicsScale*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)(QGraphicsScale*, QMetaMethod*) ```
void q_graphicsscale_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsScale_OnDisconnectNotify((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_update(void* self) {
    QGraphicsScale_Update((QGraphicsScale*)self);
}

/// Inherited from QGraphicsTransform
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_qbase_update(void* self) {
    QGraphicsScale_QBaseUpdate((QGraphicsScale*)self);
}

/// Inherited from QGraphicsTransform
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, void (*slot)() ```
void q_graphicsscale_on_update(void* self, void (*slot)()) {
    QGraphicsScale_OnUpdate((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self ```
QObject* q_graphicsscale_sender(void* self) {
    return QGraphicsScale_Sender((QGraphicsScale*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self ```
QObject* q_graphicsscale_qbase_sender(void* self) {
    return QGraphicsScale_QBaseSender((QGraphicsScale*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, QObject* (*slot)() ```
void q_graphicsscale_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsScale_OnSender((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self ```
int32_t q_graphicsscale_sender_signal_index(void* self) {
    return QGraphicsScale_SenderSignalIndex((QGraphicsScale*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self ```
int32_t q_graphicsscale_qbase_sender_signal_index(void* self) {
    return QGraphicsScale_QBaseSenderSignalIndex((QGraphicsScale*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, int32_t (*slot)() ```
void q_graphicsscale_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsScale_OnSenderSignalIndex((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, const char* signal ```
int32_t q_graphicsscale_receivers(void* self, const char* signal) {
    return QGraphicsScale_Receivers((QGraphicsScale*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, const char* signal ```
int32_t q_graphicsscale_qbase_receivers(void* self, const char* signal) {
    return QGraphicsScale_QBaseReceivers((QGraphicsScale*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, int32_t (*slot)(QGraphicsScale*, const char*) ```
void q_graphicsscale_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsScale_OnReceivers((QGraphicsScale*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
bool q_graphicsscale_is_signal_connected(void* self, void* signal) {
    return QGraphicsScale_IsSignalConnected((QGraphicsScale*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsScale* self, QMetaMethod* signal ```
bool q_graphicsscale_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsScale_QBaseIsSignalConnected((QGraphicsScale*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsScale* self, bool (*slot)(QGraphicsScale*, QMetaMethod*) ```
void q_graphicsscale_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsScale_OnIsSignalConnected((QGraphicsScale*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsScale* self ```
void q_graphicsscale_delete(void* self) {
    QGraphicsScale_Delete((QGraphicsScale*)(self));
}

/// https://doc.qt.io/qt-6/qgraphicsrotation.html

/// q_graphicsrotation_new constructs a new QGraphicsRotation object.
///
///
QGraphicsRotation* q_graphicsrotation_new() {
    return QGraphicsRotation_new();
}

/// q_graphicsrotation_new2 constructs a new QGraphicsRotation object.
///
/// ``` QObject* parent ```
QGraphicsRotation* q_graphicsrotation_new2(void* parent) {
    return QGraphicsRotation_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsRotation* self ```
QMetaObject* q_graphicsrotation_meta_object(void* self) {
    return QGraphicsRotation_MetaObject((QGraphicsRotation*)self);
}

/// ``` QGraphicsRotation* self, const char* param1 ```
void* q_graphicsrotation_metacast(void* self, const char* param1) {
    return QGraphicsRotation_Metacast((QGraphicsRotation*)self, param1);
}

/// ``` QGraphicsRotation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsrotation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsRotation_Metacall((QGraphicsRotation*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsRotation* self, int32_t (*slot)(QGraphicsRotation*, enum QMetaObject__Call, int, void*) ```
void q_graphicsrotation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsRotation_OnMetacall((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsRotation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsrotation_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsRotation_QBaseMetacall((QGraphicsRotation*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsrotation_tr(const char* s) {
    libqt_string _str = QGraphicsRotation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#origin)
///
/// ``` QGraphicsRotation* self ```
QVector3D* q_graphicsrotation_origin(void* self) {
    return QGraphicsRotation_Origin((QGraphicsRotation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setOrigin)
///
/// ``` QGraphicsRotation* self, QVector3D* point ```
void q_graphicsrotation_set_origin(void* self, void* point) {
    QGraphicsRotation_SetOrigin((QGraphicsRotation*)self, (QVector3D*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angle)
///
/// ``` QGraphicsRotation* self ```
double q_graphicsrotation_angle(void* self) {
    return QGraphicsRotation_Angle((QGraphicsRotation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAngle)
///
/// ``` QGraphicsRotation* self, double angle ```
void q_graphicsrotation_set_angle(void* self, double angle) {
    QGraphicsRotation_SetAngle((QGraphicsRotation*)self, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axis)
///
/// ``` QGraphicsRotation* self ```
QVector3D* q_graphicsrotation_axis(void* self) {
    return QGraphicsRotation_Axis((QGraphicsRotation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// ``` QGraphicsRotation* self, QVector3D* axis ```
void q_graphicsrotation_set_axis(void* self, void* axis) {
    QGraphicsRotation_SetAxis((QGraphicsRotation*)self, (QVector3D*)axis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#setAxis)
///
/// ``` QGraphicsRotation* self, enum Qt__Axis axis ```
void q_graphicsrotation_set_axis_with_axis(void* self, int64_t axis) {
    QGraphicsRotation_SetAxisWithAxis((QGraphicsRotation*)self, axis);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#applyTo)
///
/// ``` QGraphicsRotation* self, QMatrix4x4* matrix ```
void q_graphicsrotation_apply_to(void* self, void* matrix) {
    QGraphicsRotation_ApplyTo((QGraphicsRotation*)self, (QMatrix4x4*)matrix);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QMatrix4x4*) ```
void q_graphicsrotation_on_apply_to(void* self, void (*slot)(void*, void*)) {
    QGraphicsRotation_OnApplyTo((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsRotation* self, QMatrix4x4* matrix ```
void q_graphicsrotation_qbase_apply_to(void* self, void* matrix) {
    QGraphicsRotation_QBaseApplyTo((QGraphicsRotation*)self, (QMatrix4x4*)matrix);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#originChanged)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_origin_changed(void* self) {
    QGraphicsRotation_OriginChanged((QGraphicsRotation*)self);
}

/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*) ```
void q_graphicsrotation_on_origin_changed(void* self, void (*slot)(void*)) {
    QGraphicsRotation_Connect_OriginChanged((QGraphicsRotation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#angleChanged)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_angle_changed(void* self) {
    QGraphicsRotation_AngleChanged((QGraphicsRotation*)self);
}

/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*) ```
void q_graphicsrotation_on_angle_changed(void* self, void (*slot)(void*)) {
    QGraphicsRotation_Connect_AngleChanged((QGraphicsRotation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsrotation.html#axisChanged)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_axis_changed(void* self) {
    QGraphicsRotation_AxisChanged((QGraphicsRotation*)self);
}

/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*) ```
void q_graphicsrotation_on_axis_changed(void* self, void (*slot)(void*)) {
    QGraphicsRotation_Connect_AxisChanged((QGraphicsRotation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsrotation_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsRotation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsrotation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsRotation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsRotation* self ```
const char* q_graphicsrotation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsRotation* self, const char* name ```
void q_graphicsrotation_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsRotation* self ```
bool q_graphicsrotation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsRotation* self, bool b ```
bool q_graphicsrotation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsRotation* self ```
QThread* q_graphicsrotation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsRotation* self, QThread* thread ```
void q_graphicsrotation_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsRotation* self, int interval ```
int32_t q_graphicsrotation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsRotation* self, int id ```
void q_graphicsrotation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsRotation* self ```
libqt_list /* of QObject* */ q_graphicsrotation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsRotation* self, QObject* parent ```
void q_graphicsrotation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsRotation* self, QObject* filterObj ```
void q_graphicsrotation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsRotation* self, QObject* obj ```
void q_graphicsrotation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsrotation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsRotation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsrotation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsrotation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsrotation_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsRotation* self, const char* name, QVariant* value ```
bool q_graphicsrotation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsRotation* self, const char* name ```
QVariant* q_graphicsrotation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsRotation* self ```
const char** q_graphicsrotation_dynamic_property_names(void* self) {
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
/// ``` QGraphicsRotation* self ```
QBindingStorage* q_graphicsrotation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsRotation* self ```
QBindingStorage* q_graphicsrotation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsRotation* self, void (*slot)(QObject*) ```
void q_graphicsrotation_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsRotation* self ```
QObject* q_graphicsrotation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsRotation* self, const char* classname ```
bool q_graphicsrotation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsRotation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsrotation_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsrotation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsRotation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsrotation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsRotation* self, QObject* param1 ```
void q_graphicsrotation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsRotation* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsrotation_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
bool q_graphicsrotation_event(void* self, void* event) {
    return QGraphicsRotation_Event((QGraphicsRotation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
bool q_graphicsrotation_qbase_event(void* self, void* event) {
    return QGraphicsRotation_QBaseEvent((QGraphicsRotation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, bool (*slot)(QGraphicsRotation*, QEvent*) ```
void q_graphicsrotation_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsRotation_OnEvent((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QObject* watched, QEvent* event ```
bool q_graphicsrotation_event_filter(void* self, void* watched, void* event) {
    return QGraphicsRotation_EventFilter((QGraphicsRotation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QObject* watched, QEvent* event ```
bool q_graphicsrotation_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsRotation_QBaseEventFilter((QGraphicsRotation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, bool (*slot)(QGraphicsRotation*, QObject*, QEvent*) ```
void q_graphicsrotation_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsRotation_OnEventFilter((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QTimerEvent* event ```
void q_graphicsrotation_timer_event(void* self, void* event) {
    QGraphicsRotation_TimerEvent((QGraphicsRotation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QTimerEvent* event ```
void q_graphicsrotation_qbase_timer_event(void* self, void* event) {
    QGraphicsRotation_QBaseTimerEvent((QGraphicsRotation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QTimerEvent*) ```
void q_graphicsrotation_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsRotation_OnTimerEvent((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QChildEvent* event ```
void q_graphicsrotation_child_event(void* self, void* event) {
    QGraphicsRotation_ChildEvent((QGraphicsRotation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QChildEvent* event ```
void q_graphicsrotation_qbase_child_event(void* self, void* event) {
    QGraphicsRotation_QBaseChildEvent((QGraphicsRotation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QChildEvent*) ```
void q_graphicsrotation_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsRotation_OnChildEvent((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
void q_graphicsrotation_custom_event(void* self, void* event) {
    QGraphicsRotation_CustomEvent((QGraphicsRotation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QEvent* event ```
void q_graphicsrotation_qbase_custom_event(void* self, void* event) {
    QGraphicsRotation_QBaseCustomEvent((QGraphicsRotation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QEvent*) ```
void q_graphicsrotation_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsRotation_OnCustomEvent((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_connect_notify(void* self, void* signal) {
    QGraphicsRotation_ConnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_qbase_connect_notify(void* self, void* signal) {
    QGraphicsRotation_QBaseConnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QMetaMethod*) ```
void q_graphicsrotation_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsRotation_OnConnectNotify((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_disconnect_notify(void* self, void* signal) {
    QGraphicsRotation_DisconnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
void q_graphicsrotation_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsRotation_QBaseDisconnectNotify((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)(QGraphicsRotation*, QMetaMethod*) ```
void q_graphicsrotation_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsRotation_OnDisconnectNotify((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsTransform
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicstransform.html#update)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_update(void* self) {
    QGraphicsRotation_Update((QGraphicsRotation*)self);
}

/// Inherited from QGraphicsTransform
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_qbase_update(void* self) {
    QGraphicsRotation_QBaseUpdate((QGraphicsRotation*)self);
}

/// Inherited from QGraphicsTransform
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, void (*slot)() ```
void q_graphicsrotation_on_update(void* self, void (*slot)()) {
    QGraphicsRotation_OnUpdate((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self ```
QObject* q_graphicsrotation_sender(void* self) {
    return QGraphicsRotation_Sender((QGraphicsRotation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self ```
QObject* q_graphicsrotation_qbase_sender(void* self) {
    return QGraphicsRotation_QBaseSender((QGraphicsRotation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QObject* (*slot)() ```
void q_graphicsrotation_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsRotation_OnSender((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self ```
int32_t q_graphicsrotation_sender_signal_index(void* self) {
    return QGraphicsRotation_SenderSignalIndex((QGraphicsRotation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self ```
int32_t q_graphicsrotation_qbase_sender_signal_index(void* self) {
    return QGraphicsRotation_QBaseSenderSignalIndex((QGraphicsRotation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, int32_t (*slot)() ```
void q_graphicsrotation_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsRotation_OnSenderSignalIndex((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, const char* signal ```
int32_t q_graphicsrotation_receivers(void* self, const char* signal) {
    return QGraphicsRotation_Receivers((QGraphicsRotation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, const char* signal ```
int32_t q_graphicsrotation_qbase_receivers(void* self, const char* signal) {
    return QGraphicsRotation_QBaseReceivers((QGraphicsRotation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, int32_t (*slot)(QGraphicsRotation*, const char*) ```
void q_graphicsrotation_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsRotation_OnReceivers((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
bool q_graphicsrotation_is_signal_connected(void* self, void* signal) {
    return QGraphicsRotation_IsSignalConnected((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsRotation* self, QMetaMethod* signal ```
bool q_graphicsrotation_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsRotation_QBaseIsSignalConnected((QGraphicsRotation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsRotation* self, bool (*slot)(QGraphicsRotation*, QMetaMethod*) ```
void q_graphicsrotation_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsRotation_OnIsSignalConnected((QGraphicsRotation*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsRotation* self ```
void q_graphicsrotation_delete(void* self) {
    QGraphicsRotation_Delete((QGraphicsRotation*)(self));
}