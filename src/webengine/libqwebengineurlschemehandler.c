#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqwebengineurlrequestjob.hpp"
#include "../libqcoreevent.hpp"
#include "libqwebengineurlschemehandler.hpp"
#include "libqwebengineurlschemehandler.h"

/// https://doc.qt.io/qt-6/qwebengineurlschemehandler.html

/// q_webengineurlschemehandler_new constructs a new QWebEngineUrlSchemeHandler object.
///
///
QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new() {
    return QWebEngineUrlSchemeHandler_new();
}

/// q_webengineurlschemehandler_new2 constructs a new QWebEngineUrlSchemeHandler object.
///
/// ``` QObject* parent ```
QWebEngineUrlSchemeHandler* q_webengineurlschemehandler_new2(void* parent) {
    return QWebEngineUrlSchemeHandler_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QMetaObject* q_webengineurlschemehandler_meta_object(void* self) {
    return QWebEngineUrlSchemeHandler_MetaObject((QWebEngineUrlSchemeHandler*)self);
}

/// ``` QWebEngineUrlSchemeHandler* self, const char* param1 ```
void* q_webengineurlschemehandler_metacast(void* self, const char* param1) {
    return QWebEngineUrlSchemeHandler_Metacast((QWebEngineUrlSchemeHandler*)self, param1);
}

/// ``` QWebEngineUrlSchemeHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlschemehandler_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineUrlSchemeHandler_Metacall((QWebEngineUrlSchemeHandler*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineUrlSchemeHandler* self, int32_t (*slot)(QWebEngineUrlSchemeHandler*, enum QMetaObject__Call, int, void*) ```
void q_webengineurlschemehandler_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QWebEngineUrlSchemeHandler_OnMetacall((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineUrlSchemeHandler* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webengineurlschemehandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QWebEngineUrlSchemeHandler_QBaseMetacall((QWebEngineUrlSchemeHandler*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webengineurlschemehandler_tr(const char* s) {
    libqt_string _str = QWebEngineUrlSchemeHandler_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineurlschemehandler.html#requestStarted)
///
/// ``` QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1 ```
void q_webengineurlschemehandler_request_started(void* self, void* param1) {
    QWebEngineUrlSchemeHandler_RequestStarted((QWebEngineUrlSchemeHandler*)self, (QWebEngineUrlRequestJob*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QWebEngineUrlRequestJob*) ```
void q_webengineurlschemehandler_on_request_started(void* self, void (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnRequestStarted((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1 ```
void q_webengineurlschemehandler_qbase_request_started(void* self, void* param1) {
    QWebEngineUrlSchemeHandler_QBaseRequestStarted((QWebEngineUrlSchemeHandler*)self, (QWebEngineUrlRequestJob*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webengineurlschemehandler_tr2(const char* s, const char* c) {
    libqt_string _str = QWebEngineUrlSchemeHandler_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webengineurlschemehandler_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QWebEngineUrlSchemeHandler_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
const char* q_webengineurlschemehandler_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* name ```
void q_webengineurlschemehandler_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
bool q_webengineurlschemehandler_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineUrlSchemeHandler* self, bool b ```
bool q_webengineurlschemehandler_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QThread* q_webengineurlschemehandler_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineUrlSchemeHandler* self, QThread* thread ```
void q_webengineurlschemehandler_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlSchemeHandler* self, int interval ```
int32_t q_webengineurlschemehandler_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineUrlSchemeHandler* self, int id ```
void q_webengineurlschemehandler_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
libqt_list /* of QObject* */ q_webengineurlschemehandler_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* parent ```
void q_webengineurlschemehandler_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* filterObj ```
void q_webengineurlschemehandler_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* obj ```
void q_webengineurlschemehandler_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webengineurlschemehandler_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webengineurlschemehandler_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webengineurlschemehandler_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webengineurlschemehandler_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* name, QVariant* value ```
bool q_webengineurlschemehandler_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* name ```
QVariant* q_webengineurlschemehandler_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
const char** q_webengineurlschemehandler_dynamic_property_names(void* self) {
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
/// ``` QWebEngineUrlSchemeHandler* self ```
QBindingStorage* q_webengineurlschemehandler_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QBindingStorage* q_webengineurlschemehandler_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QObject*) ```
void q_webengineurlschemehandler_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QObject* q_webengineurlschemehandler_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* classname ```
bool q_webengineurlschemehandler_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineUrlSchemeHandler* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webengineurlschemehandler_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlschemehandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webengineurlschemehandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* param1 ```
void q_webengineurlschemehandler_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QObject*, QObject*) ```
void q_webengineurlschemehandler_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
bool q_webengineurlschemehandler_event(void* self, void* event) {
    return QWebEngineUrlSchemeHandler_Event((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
bool q_webengineurlschemehandler_qbase_event(void* self, void* event) {
    return QWebEngineUrlSchemeHandler_QBaseEvent((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, bool (*slot)(QWebEngineUrlSchemeHandler*, QEvent*) ```
void q_webengineurlschemehandler_on_event(void* self, bool (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event ```
bool q_webengineurlschemehandler_event_filter(void* self, void* watched, void* event) {
    return QWebEngineUrlSchemeHandler_EventFilter((QWebEngineUrlSchemeHandler*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* watched, QEvent* event ```
bool q_webengineurlschemehandler_qbase_event_filter(void* self, void* watched, void* event) {
    return QWebEngineUrlSchemeHandler_QBaseEventFilter((QWebEngineUrlSchemeHandler*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, bool (*slot)(QWebEngineUrlSchemeHandler*, QObject*, QEvent*) ```
void q_webengineurlschemehandler_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QWebEngineUrlSchemeHandler_OnEventFilter((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QTimerEvent* event ```
void q_webengineurlschemehandler_timer_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_TimerEvent((QWebEngineUrlSchemeHandler*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QTimerEvent* event ```
void q_webengineurlschemehandler_qbase_timer_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_QBaseTimerEvent((QWebEngineUrlSchemeHandler*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QTimerEvent*) ```
void q_webengineurlschemehandler_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnTimerEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QChildEvent* event ```
void q_webengineurlschemehandler_child_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_ChildEvent((QWebEngineUrlSchemeHandler*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QChildEvent* event ```
void q_webengineurlschemehandler_qbase_child_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_QBaseChildEvent((QWebEngineUrlSchemeHandler*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QChildEvent*) ```
void q_webengineurlschemehandler_on_child_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnChildEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
void q_webengineurlschemehandler_custom_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_CustomEvent((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QEvent* event ```
void q_webengineurlschemehandler_qbase_custom_event(void* self, void* event) {
    QWebEngineUrlSchemeHandler_QBaseCustomEvent((QWebEngineUrlSchemeHandler*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QEvent*) ```
void q_webengineurlschemehandler_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnCustomEvent((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_connect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_ConnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_qbase_connect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_QBaseConnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QMetaMethod*) ```
void q_webengineurlschemehandler_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnConnectNotify((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_disconnect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_DisconnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
void q_webengineurlschemehandler_qbase_disconnect_notify(void* self, void* signal) {
    QWebEngineUrlSchemeHandler_QBaseDisconnectNotify((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, void (*slot)(QWebEngineUrlSchemeHandler*, QMetaMethod*) ```
void q_webengineurlschemehandler_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnDisconnectNotify((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QObject* q_webengineurlschemehandler_sender(void* self) {
    return QWebEngineUrlSchemeHandler_Sender((QWebEngineUrlSchemeHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
QObject* q_webengineurlschemehandler_qbase_sender(void* self) {
    return QWebEngineUrlSchemeHandler_QBaseSender((QWebEngineUrlSchemeHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QObject* (*slot)() ```
void q_webengineurlschemehandler_on_sender(void* self, QObject* (*slot)()) {
    QWebEngineUrlSchemeHandler_OnSender((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
int32_t q_webengineurlschemehandler_sender_signal_index(void* self) {
    return QWebEngineUrlSchemeHandler_SenderSignalIndex((QWebEngineUrlSchemeHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self ```
int32_t q_webengineurlschemehandler_qbase_sender_signal_index(void* self) {
    return QWebEngineUrlSchemeHandler_QBaseSenderSignalIndex((QWebEngineUrlSchemeHandler*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, int32_t (*slot)() ```
void q_webengineurlschemehandler_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QWebEngineUrlSchemeHandler_OnSenderSignalIndex((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* signal ```
int32_t q_webengineurlschemehandler_receivers(void* self, const char* signal) {
    return QWebEngineUrlSchemeHandler_Receivers((QWebEngineUrlSchemeHandler*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, const char* signal ```
int32_t q_webengineurlschemehandler_qbase_receivers(void* self, const char* signal) {
    return QWebEngineUrlSchemeHandler_QBaseReceivers((QWebEngineUrlSchemeHandler*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, int32_t (*slot)(QWebEngineUrlSchemeHandler*, const char*) ```
void q_webengineurlschemehandler_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QWebEngineUrlSchemeHandler_OnReceivers((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
bool q_webengineurlschemehandler_is_signal_connected(void* self, void* signal) {
    return QWebEngineUrlSchemeHandler_IsSignalConnected((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, QMetaMethod* signal ```
bool q_webengineurlschemehandler_qbase_is_signal_connected(void* self, void* signal) {
    return QWebEngineUrlSchemeHandler_QBaseIsSignalConnected((QWebEngineUrlSchemeHandler*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QWebEngineUrlSchemeHandler* self, bool (*slot)(QWebEngineUrlSchemeHandler*, QMetaMethod*) ```
void q_webengineurlschemehandler_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QWebEngineUrlSchemeHandler_OnIsSignalConnected((QWebEngineUrlSchemeHandler*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineUrlSchemeHandler* self ```
void q_webengineurlschemehandler_delete(void* self) {
    QWebEngineUrlSchemeHandler_Delete((QWebEngineUrlSchemeHandler*)(self));
}