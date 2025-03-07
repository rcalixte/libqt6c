#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "libqsslcipher.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "libqudpsocket.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqdtls.hpp"
#include "libqdtls.h"

/// https://doc.qt.io/qt-6/qdtlsclientverifier.html

/// q_dtlsclientverifier_new constructs a new QDtlsClientVerifier object.
///
///
QDtlsClientVerifier* q_dtlsclientverifier_new() {
    return QDtlsClientVerifier_new();
}

/// q_dtlsclientverifier_new2 constructs a new QDtlsClientVerifier object.
///
/// ``` QObject* parent ```
QDtlsClientVerifier* q_dtlsclientverifier_new2(void* parent) {
    return QDtlsClientVerifier_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDtlsClientVerifier* self ```
QMetaObject* q_dtlsclientverifier_meta_object(void* self) {
    return QDtlsClientVerifier_MetaObject((QDtlsClientVerifier*)self);
}

/// ``` QDtlsClientVerifier* self, const char* param1 ```
void* q_dtlsclientverifier_metacast(void* self, const char* param1) {
    return QDtlsClientVerifier_Metacast((QDtlsClientVerifier*)self, param1);
}

/// ``` QDtlsClientVerifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtlsclientverifier_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDtlsClientVerifier_Metacall((QDtlsClientVerifier*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDtlsClientVerifier* self, int32_t (*slot)(QDtlsClientVerifier*, enum QMetaObject__Call, int, void*) ```
void q_dtlsclientverifier_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDtlsClientVerifier_OnMetacall((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDtlsClientVerifier* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtlsclientverifier_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDtlsClientVerifier_QBaseMetacall((QDtlsClientVerifier*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dtlsclientverifier_tr(const char* s) {
    libqt_string _str = QDtlsClientVerifier_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#setCookieGeneratorParameters)
///
/// ``` QDtlsClientVerifier* self, QDtlsClientVerifier__GeneratorParameters* params ```
bool q_dtlsclientverifier_set_cookie_generator_parameters(void* self, void* params) {
    return QDtlsClientVerifier_SetCookieGeneratorParameters((QDtlsClientVerifier*)self, (QDtlsClientVerifier__GeneratorParameters*)params);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#cookieGeneratorParameters)
///
/// ``` QDtlsClientVerifier* self ```
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier_cookie_generator_parameters(void* self) {
    return QDtlsClientVerifier_CookieGeneratorParameters((QDtlsClientVerifier*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifyClient)
///
/// ``` QDtlsClientVerifier* self, QUdpSocket* socket, const char* dgram, QHostAddress* address, unsigned short port ```
bool q_dtlsclientverifier_verify_client(void* self, void* socket, const char* dgram, void* address, unsigned short port) {
    return QDtlsClientVerifier_VerifyClient((QDtlsClientVerifier*)self, (QUdpSocket*)socket, qstring(dgram), (QHostAddress*)address, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#verifiedHello)
///
/// ``` QDtlsClientVerifier* self ```
char* q_dtlsclientverifier_verified_hello(void* self) {
    libqt_string _str = QDtlsClientVerifier_VerifiedHello((QDtlsClientVerifier*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsError)
///
/// ``` QDtlsClientVerifier* self ```
int64_t q_dtlsclientverifier_dtls_error(void* self) {
    return QDtlsClientVerifier_DtlsError((QDtlsClientVerifier*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier.html#dtlsErrorString)
///
/// ``` QDtlsClientVerifier* self ```
const char* q_dtlsclientverifier_dtls_error_string(void* self) {
    libqt_string _str = QDtlsClientVerifier_DtlsErrorString((QDtlsClientVerifier*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dtlsclientverifier_tr2(const char* s, const char* c) {
    libqt_string _str = QDtlsClientVerifier_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dtlsclientverifier_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDtlsClientVerifier_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDtlsClientVerifier* self ```
const char* q_dtlsclientverifier_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDtlsClientVerifier* self, const char* name ```
void q_dtlsclientverifier_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDtlsClientVerifier* self ```
bool q_dtlsclientverifier_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDtlsClientVerifier* self, bool b ```
bool q_dtlsclientverifier_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDtlsClientVerifier* self ```
QThread* q_dtlsclientverifier_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDtlsClientVerifier* self, QThread* thread ```
void q_dtlsclientverifier_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtlsClientVerifier* self, int interval ```
int32_t q_dtlsclientverifier_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDtlsClientVerifier* self, int id ```
void q_dtlsclientverifier_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDtlsClientVerifier* self ```
libqt_list /* of QObject* */ q_dtlsclientverifier_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDtlsClientVerifier* self, QObject* parent ```
void q_dtlsclientverifier_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDtlsClientVerifier* self, QObject* filterObj ```
void q_dtlsclientverifier_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDtlsClientVerifier* self, QObject* obj ```
void q_dtlsclientverifier_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dtlsclientverifier_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtlsClientVerifier* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dtlsclientverifier_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dtlsclientverifier_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dtlsclientverifier_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDtlsClientVerifier* self, const char* name, QVariant* value ```
bool q_dtlsclientverifier_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDtlsClientVerifier* self, const char* name ```
QVariant* q_dtlsclientverifier_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDtlsClientVerifier* self ```
const char** q_dtlsclientverifier_dynamic_property_names(void* self) {
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
/// ``` QDtlsClientVerifier* self ```
QBindingStorage* q_dtlsclientverifier_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDtlsClientVerifier* self ```
QBindingStorage* q_dtlsclientverifier_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QObject*) ```
void q_dtlsclientverifier_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDtlsClientVerifier* self ```
QObject* q_dtlsclientverifier_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDtlsClientVerifier* self, const char* classname ```
bool q_dtlsclientverifier_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtlsClientVerifier* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dtlsclientverifier_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtlsclientverifier_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtlsClientVerifier* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtlsclientverifier_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtlsClientVerifier* self, QObject* param1 ```
void q_dtlsclientverifier_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QObject*, QObject*) ```
void q_dtlsclientverifier_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
bool q_dtlsclientverifier_event(void* self, void* event) {
    return QDtlsClientVerifier_Event((QDtlsClientVerifier*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
bool q_dtlsclientverifier_qbase_event(void* self, void* event) {
    return QDtlsClientVerifier_QBaseEvent((QDtlsClientVerifier*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, bool (*slot)(QDtlsClientVerifier*, QEvent*) ```
void q_dtlsclientverifier_on_event(void* self, bool (*slot)(void*, void*)) {
    QDtlsClientVerifier_OnEvent((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QObject* watched, QEvent* event ```
bool q_dtlsclientverifier_event_filter(void* self, void* watched, void* event) {
    return QDtlsClientVerifier_EventFilter((QDtlsClientVerifier*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QObject* watched, QEvent* event ```
bool q_dtlsclientverifier_qbase_event_filter(void* self, void* watched, void* event) {
    return QDtlsClientVerifier_QBaseEventFilter((QDtlsClientVerifier*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, bool (*slot)(QDtlsClientVerifier*, QObject*, QEvent*) ```
void q_dtlsclientverifier_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDtlsClientVerifier_OnEventFilter((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QTimerEvent* event ```
void q_dtlsclientverifier_timer_event(void* self, void* event) {
    QDtlsClientVerifier_TimerEvent((QDtlsClientVerifier*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QTimerEvent* event ```
void q_dtlsclientverifier_qbase_timer_event(void* self, void* event) {
    QDtlsClientVerifier_QBaseTimerEvent((QDtlsClientVerifier*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QTimerEvent*) ```
void q_dtlsclientverifier_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDtlsClientVerifier_OnTimerEvent((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QChildEvent* event ```
void q_dtlsclientverifier_child_event(void* self, void* event) {
    QDtlsClientVerifier_ChildEvent((QDtlsClientVerifier*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QChildEvent* event ```
void q_dtlsclientverifier_qbase_child_event(void* self, void* event) {
    QDtlsClientVerifier_QBaseChildEvent((QDtlsClientVerifier*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QChildEvent*) ```
void q_dtlsclientverifier_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDtlsClientVerifier_OnChildEvent((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
void q_dtlsclientverifier_custom_event(void* self, void* event) {
    QDtlsClientVerifier_CustomEvent((QDtlsClientVerifier*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QEvent* event ```
void q_dtlsclientverifier_qbase_custom_event(void* self, void* event) {
    QDtlsClientVerifier_QBaseCustomEvent((QDtlsClientVerifier*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QEvent*) ```
void q_dtlsclientverifier_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDtlsClientVerifier_OnCustomEvent((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_connect_notify(void* self, void* signal) {
    QDtlsClientVerifier_ConnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_qbase_connect_notify(void* self, void* signal) {
    QDtlsClientVerifier_QBaseConnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QMetaMethod*) ```
void q_dtlsclientverifier_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDtlsClientVerifier_OnConnectNotify((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_disconnect_notify(void* self, void* signal) {
    QDtlsClientVerifier_DisconnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
void q_dtlsclientverifier_qbase_disconnect_notify(void* self, void* signal) {
    QDtlsClientVerifier_QBaseDisconnectNotify((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, void (*slot)(QDtlsClientVerifier*, QMetaMethod*) ```
void q_dtlsclientverifier_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDtlsClientVerifier_OnDisconnectNotify((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
QObject* q_dtlsclientverifier_sender(void* self) {
    return QDtlsClientVerifier_Sender((QDtlsClientVerifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
QObject* q_dtlsclientverifier_qbase_sender(void* self) {
    return QDtlsClientVerifier_QBaseSender((QDtlsClientVerifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QObject* (*slot)() ```
void q_dtlsclientverifier_on_sender(void* self, QObject* (*slot)()) {
    QDtlsClientVerifier_OnSender((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
int32_t q_dtlsclientverifier_sender_signal_index(void* self) {
    return QDtlsClientVerifier_SenderSignalIndex((QDtlsClientVerifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self ```
int32_t q_dtlsclientverifier_qbase_sender_signal_index(void* self) {
    return QDtlsClientVerifier_QBaseSenderSignalIndex((QDtlsClientVerifier*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, int32_t (*slot)() ```
void q_dtlsclientverifier_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDtlsClientVerifier_OnSenderSignalIndex((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, const char* signal ```
int32_t q_dtlsclientverifier_receivers(void* self, const char* signal) {
    return QDtlsClientVerifier_Receivers((QDtlsClientVerifier*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, const char* signal ```
int32_t q_dtlsclientverifier_qbase_receivers(void* self, const char* signal) {
    return QDtlsClientVerifier_QBaseReceivers((QDtlsClientVerifier*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, int32_t (*slot)(QDtlsClientVerifier*, const char*) ```
void q_dtlsclientverifier_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDtlsClientVerifier_OnReceivers((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
bool q_dtlsclientverifier_is_signal_connected(void* self, void* signal) {
    return QDtlsClientVerifier_IsSignalConnected((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, QMetaMethod* signal ```
bool q_dtlsclientverifier_qbase_is_signal_connected(void* self, void* signal) {
    return QDtlsClientVerifier_QBaseIsSignalConnected((QDtlsClientVerifier*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtlsClientVerifier* self, bool (*slot)(QDtlsClientVerifier*, QMetaMethod*) ```
void q_dtlsclientverifier_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDtlsClientVerifier_OnIsSignalConnected((QDtlsClientVerifier*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDtlsClientVerifier* self ```
void q_dtlsclientverifier_delete(void* self) {
    QDtlsClientVerifier_Delete((QDtlsClientVerifier*)(self));
}

/// https://doc.qt.io/qt-6/qdtls.html

/// q_dtls_new constructs a new QDtls object.
///
/// ``` enum QSslSocket__SslMode mode ```
QDtls* q_dtls_new(int64_t mode) {
    return QDtls_new(mode);
}

/// q_dtls_new2 constructs a new QDtls object.
///
/// ``` enum QSslSocket__SslMode mode, QObject* parent ```
QDtls* q_dtls_new2(int64_t mode, void* parent) {
    return QDtls_new2(mode, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDtls* self ```
QMetaObject* q_dtls_meta_object(void* self) {
    return QDtls_MetaObject((QDtls*)self);
}

/// ``` QDtls* self, const char* param1 ```
void* q_dtls_metacast(void* self, const char* param1) {
    return QDtls_Metacast((QDtls*)self, param1);
}

/// ``` QDtls* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtls_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDtls_Metacall((QDtls*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDtls* self, int32_t (*slot)(QDtls*, enum QMetaObject__Call, int, void*) ```
void q_dtls_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDtls_OnMetacall((QDtls*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDtls* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dtls_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDtls_QBaseMetacall((QDtls*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dtls_tr(const char* s) {
    libqt_string _str = QDtls_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setPeer)
///
/// ``` QDtls* self, QHostAddress* address, unsigned short port ```
bool q_dtls_set_peer(void* self, void* address, unsigned short port) {
    return QDtls_SetPeer((QDtls*)self, (QHostAddress*)address, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setPeerVerificationName)
///
/// ``` QDtls* self, const char* name ```
bool q_dtls_set_peer_verification_name(void* self, const char* name) {
    return QDtls_SetPeerVerificationName((QDtls*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerAddress)
///
/// ``` QDtls* self ```
QHostAddress* q_dtls_peer_address(void* self) {
    return QDtls_PeerAddress((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerPort)
///
/// ``` QDtls* self ```
unsigned short q_dtls_peer_port(void* self) {
    return QDtls_PeerPort((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerVerificationName)
///
/// ``` QDtls* self ```
const char* q_dtls_peer_verification_name(void* self) {
    libqt_string _str = QDtls_PeerVerificationName((QDtls*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#sslMode)
///
/// ``` QDtls* self ```
int64_t q_dtls_ssl_mode(void* self) {
    return QDtls_SslMode((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setMtuHint)
///
/// ``` QDtls* self, unsigned short mtuHint ```
void q_dtls_set_mtu_hint(void* self, unsigned short mtuHint) {
    QDtls_SetMtuHint((QDtls*)self, mtuHint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#mtuHint)
///
/// ``` QDtls* self ```
unsigned short q_dtls_mtu_hint(void* self) {
    return QDtls_MtuHint((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setCookieGeneratorParameters)
///
/// ``` QDtls* self, QDtlsClientVerifier__GeneratorParameters* params ```
bool q_dtls_set_cookie_generator_parameters(void* self, void* params) {
    return QDtls_SetCookieGeneratorParameters((QDtls*)self, (QDtlsClientVerifier__GeneratorParameters*)params);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#cookieGeneratorParameters)
///
/// ``` QDtls* self ```
QDtlsClientVerifier__GeneratorParameters* q_dtls_cookie_generator_parameters(void* self) {
    return QDtls_CookieGeneratorParameters((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setDtlsConfiguration)
///
/// ``` QDtls* self, QSslConfiguration* configuration ```
bool q_dtls_set_dtls_configuration(void* self, void* configuration) {
    return QDtls_SetDtlsConfiguration((QDtls*)self, (QSslConfiguration*)configuration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#dtlsConfiguration)
///
/// ``` QDtls* self ```
QSslConfiguration* q_dtls_dtls_configuration(void* self) {
    return QDtls_DtlsConfiguration((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#handshakeState)
///
/// ``` QDtls* self ```
int64_t q_dtls_handshake_state(void* self) {
    return QDtls_HandshakeState((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_do_handshake(void* self, void* socket) {
    return QDtls_DoHandshake((QDtls*)self, (QUdpSocket*)socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#handleTimeout)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_handle_timeout(void* self, void* socket) {
    return QDtls_HandleTimeout((QDtls*)self, (QUdpSocket*)socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#resumeHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_resume_handshake(void* self, void* socket) {
    return QDtls_ResumeHandshake((QDtls*)self, (QUdpSocket*)socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#abortHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_abort_handshake(void* self, void* socket) {
    return QDtls_AbortHandshake((QDtls*)self, (QUdpSocket*)socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#shutdown)
///
/// ``` QDtls* self, QUdpSocket* socket ```
bool q_dtls_shutdown(void* self, void* socket) {
    return QDtls_Shutdown((QDtls*)self, (QUdpSocket*)socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#isConnectionEncrypted)
///
/// ``` QDtls* self ```
bool q_dtls_is_connection_encrypted(void* self) {
    return QDtls_IsConnectionEncrypted((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#sessionCipher)
///
/// ``` QDtls* self ```
QSslCipher* q_dtls_session_cipher(void* self) {
    return QDtls_SessionCipher((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#sessionProtocol)
///
/// ``` QDtls* self ```
int64_t q_dtls_session_protocol(void* self) {
    return QDtls_SessionProtocol((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#writeDatagramEncrypted)
///
/// ``` QDtls* self, QUdpSocket* socket, const char* dgram ```
long long q_dtls_write_datagram_encrypted(void* self, void* socket, const char* dgram) {
    return QDtls_WriteDatagramEncrypted((QDtls*)self, (QUdpSocket*)socket, qstring(dgram));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#decryptDatagram)
///
/// ``` QDtls* self, QUdpSocket* socket, const char* dgram ```
char* q_dtls_decrypt_datagram(void* self, void* socket, const char* dgram) {
    libqt_string _str = QDtls_DecryptDatagram((QDtls*)self, (QUdpSocket*)socket, qstring(dgram));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#dtlsError)
///
/// ``` QDtls* self ```
int64_t q_dtls_dtls_error(void* self) {
    return QDtls_DtlsError((QDtls*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#dtlsErrorString)
///
/// ``` QDtls* self ```
const char* q_dtls_dtls_error_string(void* self) {
    libqt_string _str = QDtls_DtlsErrorString((QDtls*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#peerVerificationErrors)
///
/// ``` QDtls* self ```
libqt_list /* of QSslError* */ q_dtls_peer_verification_errors(void* self) {
    libqt_list _arr = QDtls_PeerVerificationErrors((QDtls*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#ignoreVerificationErrors)
///
/// ``` QDtls* self, QSslError* errorsToIgnore[] ```
void q_dtls_ignore_verification_errors(void* self, void* errorsToIgnore[]) {
    QSslError** errorsToIgnore_arr = (QSslError**)errorsToIgnore;
    size_t errorsToIgnore_len = 0;
    while (errorsToIgnore_arr[errorsToIgnore_len] != NULL) {
        errorsToIgnore_len++;
    }
    libqt_list errorsToIgnore_list = {
        .len = errorsToIgnore_len,
        .data = {(QSslError*)errorsToIgnore},
    };
    QDtls_IgnoreVerificationErrors((QDtls*)self, errorsToIgnore_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#pskRequired)
///
/// ``` QDtls* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_dtls_psk_required(void* self, void* authenticator) {
    QDtls_PskRequired((QDtls*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

/// ``` QDtls* self, void (*slot)(QDtls*, QSslPreSharedKeyAuthenticator*) ```
void q_dtls_on_psk_required(void* self, void (*slot)(void*, void*)) {
    QDtls_Connect_PskRequired((QDtls*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#handshakeTimeout)
///
/// ``` QDtls* self ```
void q_dtls_handshake_timeout(void* self) {
    QDtls_HandshakeTimeout((QDtls*)self);
}

/// ``` QDtls* self, void (*slot)(QDtls*) ```
void q_dtls_on_handshake_timeout(void* self, void (*slot)(void*)) {
    QDtls_Connect_HandshakeTimeout((QDtls*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dtls_tr2(const char* s, const char* c) {
    libqt_string _str = QDtls_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dtls_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDtls_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#setPeer)
///
/// ``` QDtls* self, QHostAddress* address, unsigned short port, const char* verificationName ```
bool q_dtls_set_peer3(void* self, void* address, unsigned short port, const char* verificationName) {
    return QDtls_SetPeer3((QDtls*)self, (QHostAddress*)address, port, qstring(verificationName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtls.html#doHandshake)
///
/// ``` QDtls* self, QUdpSocket* socket, const char* dgram ```
bool q_dtls_do_handshake2(void* self, void* socket, const char* dgram) {
    return QDtls_DoHandshake2((QDtls*)self, (QUdpSocket*)socket, qstring(dgram));
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDtls* self ```
const char* q_dtls_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDtls* self, const char* name ```
void q_dtls_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDtls* self ```
bool q_dtls_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDtls* self ```
bool q_dtls_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDtls* self ```
bool q_dtls_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDtls* self ```
bool q_dtls_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDtls* self, bool b ```
bool q_dtls_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDtls* self ```
QThread* q_dtls_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDtls* self, QThread* thread ```
void q_dtls_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtls* self, int interval ```
int32_t q_dtls_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDtls* self, int id ```
void q_dtls_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDtls* self ```
libqt_list /* of QObject* */ q_dtls_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDtls* self, QObject* parent ```
void q_dtls_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDtls* self, QObject* filterObj ```
void q_dtls_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDtls* self, QObject* obj ```
void q_dtls_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dtls_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtls* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dtls_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dtls_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dtls_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDtls* self ```
void q_dtls_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDtls* self ```
void q_dtls_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDtls* self, const char* name, QVariant* value ```
bool q_dtls_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDtls* self, const char* name ```
QVariant* q_dtls_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDtls* self ```
const char** q_dtls_dynamic_property_names(void* self) {
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
/// ``` QDtls* self ```
QBindingStorage* q_dtls_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDtls* self ```
QBindingStorage* q_dtls_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtls* self ```
void q_dtls_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDtls* self, void (*slot)(QObject*) ```
void q_dtls_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDtls* self ```
QObject* q_dtls_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDtls* self, const char* classname ```
bool q_dtls_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDtls* self ```
void q_dtls_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDtls* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dtls_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtls_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDtls* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dtls_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDtls* self, QObject* param1 ```
void q_dtls_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDtls* self, void (*slot)(QObject*, QObject*) ```
void q_dtls_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
bool q_dtls_event(void* self, void* event) {
    return QDtls_Event((QDtls*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
bool q_dtls_qbase_event(void* self, void* event) {
    return QDtls_QBaseEvent((QDtls*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, bool (*slot)(QDtls*, QEvent*) ```
void q_dtls_on_event(void* self, bool (*slot)(void*, void*)) {
    QDtls_OnEvent((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QObject* watched, QEvent* event ```
bool q_dtls_event_filter(void* self, void* watched, void* event) {
    return QDtls_EventFilter((QDtls*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QObject* watched, QEvent* event ```
bool q_dtls_qbase_event_filter(void* self, void* watched, void* event) {
    return QDtls_QBaseEventFilter((QDtls*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, bool (*slot)(QDtls*, QObject*, QEvent*) ```
void q_dtls_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDtls_OnEventFilter((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QTimerEvent* event ```
void q_dtls_timer_event(void* self, void* event) {
    QDtls_TimerEvent((QDtls*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QTimerEvent* event ```
void q_dtls_qbase_timer_event(void* self, void* event) {
    QDtls_QBaseTimerEvent((QDtls*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QTimerEvent*) ```
void q_dtls_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDtls_OnTimerEvent((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QChildEvent* event ```
void q_dtls_child_event(void* self, void* event) {
    QDtls_ChildEvent((QDtls*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QChildEvent* event ```
void q_dtls_qbase_child_event(void* self, void* event) {
    QDtls_QBaseChildEvent((QDtls*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QChildEvent*) ```
void q_dtls_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDtls_OnChildEvent((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
void q_dtls_custom_event(void* self, void* event) {
    QDtls_CustomEvent((QDtls*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QEvent* event ```
void q_dtls_qbase_custom_event(void* self, void* event) {
    QDtls_QBaseCustomEvent((QDtls*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QEvent*) ```
void q_dtls_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDtls_OnCustomEvent((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_connect_notify(void* self, void* signal) {
    QDtls_ConnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_qbase_connect_notify(void* self, void* signal) {
    QDtls_QBaseConnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QMetaMethod*) ```
void q_dtls_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDtls_OnConnectNotify((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_disconnect_notify(void* self, void* signal) {
    QDtls_DisconnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
void q_dtls_qbase_disconnect_notify(void* self, void* signal) {
    QDtls_QBaseDisconnectNotify((QDtls*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, void (*slot)(QDtls*, QMetaMethod*) ```
void q_dtls_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDtls_OnDisconnectNotify((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self ```
QObject* q_dtls_sender(void* self) {
    return QDtls_Sender((QDtls*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self ```
QObject* q_dtls_qbase_sender(void* self) {
    return QDtls_QBaseSender((QDtls*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, QObject* (*slot)() ```
void q_dtls_on_sender(void* self, QObject* (*slot)()) {
    QDtls_OnSender((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self ```
int32_t q_dtls_sender_signal_index(void* self) {
    return QDtls_SenderSignalIndex((QDtls*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self ```
int32_t q_dtls_qbase_sender_signal_index(void* self) {
    return QDtls_QBaseSenderSignalIndex((QDtls*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, int32_t (*slot)() ```
void q_dtls_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDtls_OnSenderSignalIndex((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, const char* signal ```
int32_t q_dtls_receivers(void* self, const char* signal) {
    return QDtls_Receivers((QDtls*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, const char* signal ```
int32_t q_dtls_qbase_receivers(void* self, const char* signal) {
    return QDtls_QBaseReceivers((QDtls*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, int32_t (*slot)(QDtls*, const char*) ```
void q_dtls_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDtls_OnReceivers((QDtls*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
bool q_dtls_is_signal_connected(void* self, void* signal) {
    return QDtls_IsSignalConnected((QDtls*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDtls* self, QMetaMethod* signal ```
bool q_dtls_qbase_is_signal_connected(void* self, void* signal) {
    return QDtls_QBaseIsSignalConnected((QDtls*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDtls* self, bool (*slot)(QDtls*, QMetaMethod*) ```
void q_dtls_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDtls_OnIsSignalConnected((QDtls*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDtls* self ```
void q_dtls_delete(void* self) {
    QDtls_Delete((QDtls*)(self));
}

/// https://doc.qt.io/qt-6/qdtlsclientverifier-generatorparameters.html

/// q_dtlsclientverifier__generatorparameters_new constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
///
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new() {
    return QDtlsClientVerifier__GeneratorParameters_new();
}

/// q_dtlsclientverifier__generatorparameters_new2 constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
/// ``` enum QCryptographicHash__Algorithm a, const char* s ```
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new2(int64_t a, const char* s) {
    return QDtlsClientVerifier__GeneratorParameters_new2(a, qstring(s));
}

/// q_dtlsclientverifier__generatorparameters_new3 constructs a new QDtlsClientVerifier::GeneratorParameters object.
///
/// ``` QDtlsClientVerifier__GeneratorParameters* param1 ```
QDtlsClientVerifier__GeneratorParameters* q_dtlsclientverifier__generatorparameters_new3(void* param1) {
    return QDtlsClientVerifier__GeneratorParameters_new3((QDtlsClientVerifier__GeneratorParameters*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdtlsclientverifier__generatorparameters.html#operator=)
///
/// ``` QDtlsClientVerifier__GeneratorParameters* self, QDtlsClientVerifier__GeneratorParameters* param1 ```
void q_dtlsclientverifier__generatorparameters_operator_assign(void* self, void* param1) {
    QDtlsClientVerifier__GeneratorParameters_OperatorAssign((QDtlsClientVerifier__GeneratorParameters*)self, (QDtlsClientVerifier__GeneratorParameters*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QDtlsClientVerifier__GeneratorParameters* self ```
void q_dtlsclientverifier__generatorparameters_delete(void* self) {
    QDtlsClientVerifier__GeneratorParameters_Delete((QDtlsClientVerifier__GeneratorParameters*)(self));
}