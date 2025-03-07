#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqobject.hpp"
#include "libqobject.h"

/// https://doc.qt.io/qt-6/qobjectdata.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobjectdata.html#dynamicMetaObject)
///
/// ``` QObjectData* self ```
QMetaObject* q_objectdata_dynamic_meta_object(void* self) {
    return QObjectData_DynamicMetaObject((QObjectData*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QObjectData* self ```
void q_objectdata_delete(void* self) {
    QObjectData_Delete((QObjectData*)(self));
}

/// https://doc.qt.io/qt-6/qobject.html

/// q_object_new constructs a new QObject object.
///
///
QObject* q_object_new() {
    return QObject_new();
}

/// q_object_new2 constructs a new QObject object.
///
/// ``` QObject* parent ```
QObject* q_object_new2(void* parent) {
    return QObject_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QObject* self ```
QMetaObject* q_object_meta_object(void* self) {
    return QObject_MetaObject((QObject*)self);
}

/// ``` QObject* self, const char* param1 ```
void* q_object_metacast(void* self, const char* param1) {
    return QObject_Metacast((QObject*)self, param1);
}

/// ``` QObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_object_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObject_Metacall((QObject*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, int32_t (*slot)(QObject*, enum QMetaObject__Call, int, void*) ```
void q_object_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QObject_OnMetacall((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_object_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QObject_QBaseMetacall((QObject*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_object_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QObject* self, QEvent* event ```
bool q_object_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, bool (*slot)(QObject*, QEvent*) ```
void q_object_on_event(void* self, bool (*slot)(void*, void*)) {
    QObject_OnEvent((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QEvent* event ```
bool q_object_qbase_event(void* self, void* event) {
    return QObject_QBaseEvent((QObject*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QObject* self, QObject* watched, QEvent* event ```
bool q_object_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, bool (*slot)(QObject*, QObject*, QEvent*) ```
void q_object_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QObject_OnEventFilter((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QObject* watched, QEvent* event ```
bool q_object_qbase_event_filter(void* self, void* watched, void* event) {
    return QObject_QBaseEventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QObject* self ```
const char* q_object_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QObject* self, const char* name ```
void q_object_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QObject* self ```
bool q_object_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QObject* self ```
bool q_object_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QObject* self ```
bool q_object_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QObject* self ```
bool q_object_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QObject* self, bool b ```
bool q_object_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QObject* self ```
QThread* q_object_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QObject* self, QThread* thread ```
void q_object_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObject* self, int interval ```
int32_t q_object_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QObject* self, int id ```
void q_object_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QObject* self ```
libqt_list /* of QObject* */ q_object_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QObject* self, QObject* parent ```
void q_object_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QObject* self, QObject* filterObj ```
void q_object_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QObject* self, QObject* obj ```
void q_object_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_object_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_object_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_object_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_object_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QObject* self ```
void q_object_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QObject* self ```
void q_object_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QObject* self, const char* name, QVariant* value ```
bool q_object_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QObject* self, const char* name ```
QVariant* q_object_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QObject* self ```
const char** q_object_dynamic_property_names(void* self) {
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

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QObject* self ```
QBindingStorage* q_object_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QObject* self ```
QBindingStorage* q_object_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObject* self ```
void q_object_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// ``` QObject* self, void (*slot)(QObject*) ```
void q_object_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QObject* self ```
QObject* q_object_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QObject* self, const char* classname ```
bool q_object_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QObject* self ```
void q_object_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// ``` QObject* self ```
QObject* q_object_sender(void* self) {
    return QObject_Sender((QObject*)self);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, QObject* (*slot)() ```
void q_object_on_sender(void* self, QObject* (*slot)()) {
    QObject_OnSender((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self ```
QObject* q_object_qbase_sender(void* self) {
    return QObject_QBaseSender((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// ``` QObject* self ```
int32_t q_object_sender_signal_index(void* self) {
    return QObject_SenderSignalIndex((QObject*)self);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, int32_t (*slot)() ```
void q_object_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QObject_OnSenderSignalIndex((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self ```
int32_t q_object_qbase_sender_signal_index(void* self) {
    return QObject_QBaseSenderSignalIndex((QObject*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// ``` QObject* self, const char* signal ```
int32_t q_object_receivers(void* self, const char* signal) {
    return QObject_Receivers((QObject*)self, signal);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, int32_t (*slot)(QObject*, const char*) ```
void q_object_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QObject_OnReceivers((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, const char* signal ```
int32_t q_object_qbase_receivers(void* self, const char* signal) {
    return QObject_QBaseReceivers((QObject*)self, signal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// ``` QObject* self, QMetaMethod* signal ```
bool q_object_is_signal_connected(void* self, void* signal) {
    return QObject_IsSignalConnected((QObject*)self, (QMetaMethod*)signal);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, bool (*slot)(QObject*, QMetaMethod*) ```
void q_object_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QObject_OnIsSignalConnected((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QMetaMethod* signal ```
bool q_object_qbase_is_signal_connected(void* self, void* signal) {
    return QObject_QBaseIsSignalConnected((QObject*)self, (QMetaMethod*)signal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// ``` QObject* self, QTimerEvent* event ```
void q_object_timer_event(void* self, void* event) {
    QObject_TimerEvent((QObject*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QTimerEvent*) ```
void q_object_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QObject_OnTimerEvent((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QTimerEvent* event ```
void q_object_qbase_timer_event(void* self, void* event) {
    QObject_QBaseTimerEvent((QObject*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// ``` QObject* self, QChildEvent* event ```
void q_object_child_event(void* self, void* event) {
    QObject_ChildEvent((QObject*)self, (QChildEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QChildEvent*) ```
void q_object_on_child_event(void* self, void (*slot)(void*, void*)) {
    QObject_OnChildEvent((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QChildEvent* event ```
void q_object_qbase_child_event(void* self, void* event) {
    QObject_QBaseChildEvent((QObject*)self, (QChildEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// ``` QObject* self, QEvent* event ```
void q_object_custom_event(void* self, void* event) {
    QObject_CustomEvent((QObject*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QEvent*) ```
void q_object_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QObject_OnCustomEvent((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QEvent* event ```
void q_object_qbase_custom_event(void* self, void* event) {
    QObject_QBaseCustomEvent((QObject*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_connect_notify(void* self, void* signal) {
    QObject_ConnectNotify((QObject*)self, (QMetaMethod*)signal);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QMetaMethod*) ```
void q_object_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QObject_OnConnectNotify((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_qbase_connect_notify(void* self, void* signal) {
    QObject_QBaseConnectNotify((QObject*)self, (QMetaMethod*)signal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_disconnect_notify(void* self, void* signal) {
    QObject_DisconnectNotify((QObject*)self, (QMetaMethod*)signal);
}

/// Allows for overriding the related default method
///
/// ``` QObject* self, void (*slot)(QObject*, QMetaMethod*) ```
void q_object_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QObject_OnDisconnectNotify((QObject*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QObject* self, QMetaMethod* signal ```
void q_object_qbase_disconnect_notify(void* self, void* signal) {
    QObject_QBaseDisconnectNotify((QObject*)self, (QMetaMethod*)signal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_object_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_object_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QObject* self, int interval, enum Qt__TimerType timerType ```
int32_t q_object_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_object_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_object_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QObject* self, QObject* param1 ```
void q_object_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// ``` QObject* self, void (*slot)(QObject*, QObject*) ```
void q_object_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QObject* self ```
void q_object_delete(void* self) {
    QObject_Delete((QObject*)(self));
}

/// https://doc.qt.io/qt-6/qsignalblocker.html

/// q_signalblocker_new constructs a new QSignalBlocker object.
///
/// ``` QObject* o ```
QSignalBlocker* q_signalblocker_new(void* o) {
    return QSignalBlocker_new((QObject*)o);
}

/// q_signalblocker_new2 constructs a new QSignalBlocker object.
///
/// ``` QObject* o ```
QSignalBlocker* q_signalblocker_new2(void* o) {
    return QSignalBlocker_new2((QObject*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#reblock)
///
/// ``` QSignalBlocker* self ```
void q_signalblocker_reblock(void* self) {
    QSignalBlocker_Reblock((QSignalBlocker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsignalblocker.html#unblock)
///
/// ``` QSignalBlocker* self ```
void q_signalblocker_unblock(void* self) {
    QSignalBlocker_Unblock((QSignalBlocker*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSignalBlocker* self ```
void q_signalblocker_delete(void* self) {
    QSignalBlocker_Delete((QSignalBlocker*)(self));
}