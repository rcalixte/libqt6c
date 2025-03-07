#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqhttpmultipart.hpp"
#include "libqhttpmultipart.h"

/// https://doc.qt.io/qt-6/qhttppart.html

/// q_httppart_new constructs a new QHttpPart object.
///
///
QHttpPart* q_httppart_new() {
    return QHttpPart_new();
}

/// q_httppart_new2 constructs a new QHttpPart object.
///
/// ``` QHttpPart* other ```
QHttpPart* q_httppart_new2(void* other) {
    return QHttpPart_new2((QHttpPart*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#operator=)
///
/// ``` QHttpPart* self, QHttpPart* other ```
void q_httppart_operator_assign(void* self, void* other) {
    QHttpPart_OperatorAssign((QHttpPart*)self, (QHttpPart*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#swap)
///
/// ``` QHttpPart* self, QHttpPart* other ```
void q_httppart_swap(void* self, void* other) {
    QHttpPart_Swap((QHttpPart*)self, (QHttpPart*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#operator==)
///
/// ``` QHttpPart* self, QHttpPart* other ```
bool q_httppart_operator_equal(void* self, void* other) {
    return QHttpPart_OperatorEqual((QHttpPart*)self, (QHttpPart*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#operator!=)
///
/// ``` QHttpPart* self, QHttpPart* other ```
bool q_httppart_operator_not_equal(void* self, void* other) {
    return QHttpPart_OperatorNotEqual((QHttpPart*)self, (QHttpPart*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#setHeader)
///
/// ``` QHttpPart* self, enum QNetworkRequest__KnownHeaders header, QVariant* value ```
void q_httppart_set_header(void* self, int64_t header, void* value) {
    QHttpPart_SetHeader((QHttpPart*)self, header, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#setRawHeader)
///
/// ``` QHttpPart* self, const char* headerName, const char* headerValue ```
void q_httppart_set_raw_header(void* self, const char* headerName, const char* headerValue) {
    QHttpPart_SetRawHeader((QHttpPart*)self, qstring(headerName), qstring(headerValue));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#setBody)
///
/// ``` QHttpPart* self, const char* body ```
void q_httppart_set_body(void* self, const char* body) {
    QHttpPart_SetBody((QHttpPart*)self, qstring(body));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttppart.html#setBodyDevice)
///
/// ``` QHttpPart* self, QIODevice* device ```
void q_httppart_set_body_device(void* self, void* device) {
    QHttpPart_SetBodyDevice((QHttpPart*)self, (QIODevice*)device);
}

/// Delete this object from C++ memory.
///
/// ``` QHttpPart* self ```
void q_httppart_delete(void* self) {
    QHttpPart_Delete((QHttpPart*)(self));
}

/// https://doc.qt.io/qt-6/qhttpmultipart.html

/// q_httpmultipart_new constructs a new QHttpMultiPart object.
///
///
QHttpMultiPart* q_httpmultipart_new() {
    return QHttpMultiPart_new();
}

/// q_httpmultipart_new2 constructs a new QHttpMultiPart object.
///
/// ``` enum QHttpMultiPart__ContentType contentType ```
QHttpMultiPart* q_httpmultipart_new2(int64_t contentType) {
    return QHttpMultiPart_new2(contentType);
}

/// q_httpmultipart_new3 constructs a new QHttpMultiPart object.
///
/// ``` QObject* parent ```
QHttpMultiPart* q_httpmultipart_new3(void* parent) {
    return QHttpMultiPart_new3((QObject*)parent);
}

/// q_httpmultipart_new4 constructs a new QHttpMultiPart object.
///
/// ``` enum QHttpMultiPart__ContentType contentType, QObject* parent ```
QHttpMultiPart* q_httpmultipart_new4(int64_t contentType, void* parent) {
    return QHttpMultiPart_new4(contentType, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHttpMultiPart* self ```
QMetaObject* q_httpmultipart_meta_object(void* self) {
    return QHttpMultiPart_MetaObject((QHttpMultiPart*)self);
}

/// ``` QHttpMultiPart* self, const char* param1 ```
void* q_httpmultipart_metacast(void* self, const char* param1) {
    return QHttpMultiPart_Metacast((QHttpMultiPart*)self, param1);
}

/// ``` QHttpMultiPart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_httpmultipart_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHttpMultiPart_Metacall((QHttpMultiPart*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHttpMultiPart* self, int32_t (*slot)(QHttpMultiPart*, enum QMetaObject__Call, int, void*) ```
void q_httpmultipart_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHttpMultiPart_OnMetacall((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHttpMultiPart* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_httpmultipart_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHttpMultiPart_QBaseMetacall((QHttpMultiPart*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_httpmultipart_tr(const char* s) {
    libqt_string _str = QHttpMultiPart_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttpmultipart.html#append)
///
/// ``` QHttpMultiPart* self, QHttpPart* httpPart ```
void q_httpmultipart_append(void* self, void* httpPart) {
    QHttpMultiPart_Append((QHttpMultiPart*)self, (QHttpPart*)httpPart);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttpmultipart.html#setContentType)
///
/// ``` QHttpMultiPart* self, enum QHttpMultiPart__ContentType contentType ```
void q_httpmultipart_set_content_type(void* self, int64_t contentType) {
    QHttpMultiPart_SetContentType((QHttpMultiPart*)self, contentType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttpmultipart.html#boundary)
///
/// ``` QHttpMultiPart* self ```
char* q_httpmultipart_boundary(void* self) {
    libqt_string _str = QHttpMultiPart_Boundary((QHttpMultiPart*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhttpmultipart.html#setBoundary)
///
/// ``` QHttpMultiPart* self, const char* boundary ```
void q_httpmultipart_set_boundary(void* self, const char* boundary) {
    QHttpMultiPart_SetBoundary((QHttpMultiPart*)self, qstring(boundary));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_httpmultipart_tr2(const char* s, const char* c) {
    libqt_string _str = QHttpMultiPart_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_httpmultipart_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHttpMultiPart_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHttpMultiPart* self ```
const char* q_httpmultipart_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHttpMultiPart* self, const char* name ```
void q_httpmultipart_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHttpMultiPart* self ```
bool q_httpmultipart_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHttpMultiPart* self ```
bool q_httpmultipart_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHttpMultiPart* self ```
bool q_httpmultipart_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHttpMultiPart* self ```
bool q_httpmultipart_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHttpMultiPart* self, bool b ```
bool q_httpmultipart_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHttpMultiPart* self ```
QThread* q_httpmultipart_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHttpMultiPart* self, QThread* thread ```
void q_httpmultipart_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHttpMultiPart* self, int interval ```
int32_t q_httpmultipart_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHttpMultiPart* self, int id ```
void q_httpmultipart_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHttpMultiPart* self ```
libqt_list /* of QObject* */ q_httpmultipart_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHttpMultiPart* self, QObject* parent ```
void q_httpmultipart_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHttpMultiPart* self, QObject* filterObj ```
void q_httpmultipart_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHttpMultiPart* self, QObject* obj ```
void q_httpmultipart_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_httpmultipart_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHttpMultiPart* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_httpmultipart_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_httpmultipart_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_httpmultipart_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHttpMultiPart* self ```
void q_httpmultipart_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHttpMultiPart* self ```
void q_httpmultipart_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHttpMultiPart* self, const char* name, QVariant* value ```
bool q_httpmultipart_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHttpMultiPart* self, const char* name ```
QVariant* q_httpmultipart_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHttpMultiPart* self ```
const char** q_httpmultipart_dynamic_property_names(void* self) {
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
/// ``` QHttpMultiPart* self ```
QBindingStorage* q_httpmultipart_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHttpMultiPart* self ```
QBindingStorage* q_httpmultipart_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHttpMultiPart* self ```
void q_httpmultipart_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHttpMultiPart* self, void (*slot)(QObject*) ```
void q_httpmultipart_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHttpMultiPart* self ```
QObject* q_httpmultipart_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHttpMultiPart* self, const char* classname ```
bool q_httpmultipart_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHttpMultiPart* self ```
void q_httpmultipart_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHttpMultiPart* self, int interval, enum Qt__TimerType timerType ```
int32_t q_httpmultipart_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_httpmultipart_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHttpMultiPart* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_httpmultipart_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHttpMultiPart* self, QObject* param1 ```
void q_httpmultipart_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHttpMultiPart* self, void (*slot)(QObject*, QObject*) ```
void q_httpmultipart_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QEvent* event ```
bool q_httpmultipart_event(void* self, void* event) {
    return QHttpMultiPart_Event((QHttpMultiPart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QEvent* event ```
bool q_httpmultipart_qbase_event(void* self, void* event) {
    return QHttpMultiPart_QBaseEvent((QHttpMultiPart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, bool (*slot)(QHttpMultiPart*, QEvent*) ```
void q_httpmultipart_on_event(void* self, bool (*slot)(void*, void*)) {
    QHttpMultiPart_OnEvent((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QObject* watched, QEvent* event ```
bool q_httpmultipart_event_filter(void* self, void* watched, void* event) {
    return QHttpMultiPart_EventFilter((QHttpMultiPart*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QObject* watched, QEvent* event ```
bool q_httpmultipart_qbase_event_filter(void* self, void* watched, void* event) {
    return QHttpMultiPart_QBaseEventFilter((QHttpMultiPart*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, bool (*slot)(QHttpMultiPart*, QObject*, QEvent*) ```
void q_httpmultipart_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHttpMultiPart_OnEventFilter((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QTimerEvent* event ```
void q_httpmultipart_timer_event(void* self, void* event) {
    QHttpMultiPart_TimerEvent((QHttpMultiPart*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QTimerEvent* event ```
void q_httpmultipart_qbase_timer_event(void* self, void* event) {
    QHttpMultiPart_QBaseTimerEvent((QHttpMultiPart*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, void (*slot)(QHttpMultiPart*, QTimerEvent*) ```
void q_httpmultipart_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHttpMultiPart_OnTimerEvent((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QChildEvent* event ```
void q_httpmultipart_child_event(void* self, void* event) {
    QHttpMultiPart_ChildEvent((QHttpMultiPart*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QChildEvent* event ```
void q_httpmultipart_qbase_child_event(void* self, void* event) {
    QHttpMultiPart_QBaseChildEvent((QHttpMultiPart*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, void (*slot)(QHttpMultiPart*, QChildEvent*) ```
void q_httpmultipart_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHttpMultiPart_OnChildEvent((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QEvent* event ```
void q_httpmultipart_custom_event(void* self, void* event) {
    QHttpMultiPart_CustomEvent((QHttpMultiPart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QEvent* event ```
void q_httpmultipart_qbase_custom_event(void* self, void* event) {
    QHttpMultiPart_QBaseCustomEvent((QHttpMultiPart*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, void (*slot)(QHttpMultiPart*, QEvent*) ```
void q_httpmultipart_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHttpMultiPart_OnCustomEvent((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QMetaMethod* signal ```
void q_httpmultipart_connect_notify(void* self, void* signal) {
    QHttpMultiPart_ConnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QMetaMethod* signal ```
void q_httpmultipart_qbase_connect_notify(void* self, void* signal) {
    QHttpMultiPart_QBaseConnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, void (*slot)(QHttpMultiPart*, QMetaMethod*) ```
void q_httpmultipart_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHttpMultiPart_OnConnectNotify((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QMetaMethod* signal ```
void q_httpmultipart_disconnect_notify(void* self, void* signal) {
    QHttpMultiPart_DisconnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QMetaMethod* signal ```
void q_httpmultipart_qbase_disconnect_notify(void* self, void* signal) {
    QHttpMultiPart_QBaseDisconnectNotify((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, void (*slot)(QHttpMultiPart*, QMetaMethod*) ```
void q_httpmultipart_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHttpMultiPart_OnDisconnectNotify((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self ```
QObject* q_httpmultipart_sender(void* self) {
    return QHttpMultiPart_Sender((QHttpMultiPart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self ```
QObject* q_httpmultipart_qbase_sender(void* self) {
    return QHttpMultiPart_QBaseSender((QHttpMultiPart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QObject* (*slot)() ```
void q_httpmultipart_on_sender(void* self, QObject* (*slot)()) {
    QHttpMultiPart_OnSender((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self ```
int32_t q_httpmultipart_sender_signal_index(void* self) {
    return QHttpMultiPart_SenderSignalIndex((QHttpMultiPart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self ```
int32_t q_httpmultipart_qbase_sender_signal_index(void* self) {
    return QHttpMultiPart_QBaseSenderSignalIndex((QHttpMultiPart*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, int32_t (*slot)() ```
void q_httpmultipart_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHttpMultiPart_OnSenderSignalIndex((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, const char* signal ```
int32_t q_httpmultipart_receivers(void* self, const char* signal) {
    return QHttpMultiPart_Receivers((QHttpMultiPart*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, const char* signal ```
int32_t q_httpmultipart_qbase_receivers(void* self, const char* signal) {
    return QHttpMultiPart_QBaseReceivers((QHttpMultiPart*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, int32_t (*slot)(QHttpMultiPart*, const char*) ```
void q_httpmultipart_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHttpMultiPart_OnReceivers((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHttpMultiPart* self, QMetaMethod* signal ```
bool q_httpmultipart_is_signal_connected(void* self, void* signal) {
    return QHttpMultiPart_IsSignalConnected((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHttpMultiPart* self, QMetaMethod* signal ```
bool q_httpmultipart_qbase_is_signal_connected(void* self, void* signal) {
    return QHttpMultiPart_QBaseIsSignalConnected((QHttpMultiPart*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHttpMultiPart* self, bool (*slot)(QHttpMultiPart*, QMetaMethod*) ```
void q_httpmultipart_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHttpMultiPart_OnIsSignalConnected((QHttpMultiPart*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHttpMultiPart* self ```
void q_httpmultipart_delete(void* self) {
    QHttpMultiPart_Delete((QHttpMultiPart*)(self));
}