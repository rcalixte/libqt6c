#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqnetworkinformation.hpp"
#include "libqnetworkinformation.h"

/// https://doc.qt.io/qt-6/qnetworkinformation.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkInformation* self ```
QMetaObject* q_networkinformation_meta_object(void* self) {
    return QNetworkInformation_MetaObject((QNetworkInformation*)self);
}

/// ``` QNetworkInformation* self, const char* param1 ```
void* q_networkinformation_metacast(void* self, const char* param1) {
    return QNetworkInformation_Metacast((QNetworkInformation*)self, param1);
}

/// ``` QNetworkInformation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkinformation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkInformation_Metacall((QNetworkInformation*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkinformation_tr(const char* s) {
    libqt_string _str = QNetworkInformation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#reachability)
///
/// ``` QNetworkInformation* self ```
int64_t q_networkinformation_reachability(void* self) {
    return QNetworkInformation_Reachability((QNetworkInformation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortal)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_behind_captive_portal(void* self) {
    return QNetworkInformation_IsBehindCaptivePortal((QNetworkInformation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMedium)
///
/// ``` QNetworkInformation* self ```
int64_t q_networkinformation_transport_medium(void* self) {
    return QNetworkInformation_TransportMedium((QNetworkInformation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isMetered)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_metered(void* self) {
    return QNetworkInformation_IsMetered((QNetworkInformation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#backendName)
///
/// ``` QNetworkInformation* self ```
const char* q_networkinformation_backend_name(void* self) {
    libqt_string _str = QNetworkInformation_BackendName((QNetworkInformation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#supports)
///
/// ``` QNetworkInformation* self, int features ```
bool q_networkinformation_supports(void* self, int64_t features) {
    return QNetworkInformation_Supports((QNetworkInformation*)self, features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#supportedFeatures)
///
/// ``` QNetworkInformation* self ```
int64_t q_networkinformation_supported_features(void* self) {
    return QNetworkInformation_SupportedFeatures((QNetworkInformation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#loadDefaultBackend)
///
///
bool q_networkinformation_load_default_backend() {
    return QNetworkInformation_LoadDefaultBackend();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#loadBackendByFeatures)
///
/// ``` int features ```
bool q_networkinformation_load_backend_by_features(int64_t features) {
    return QNetworkInformation_LoadBackendByFeatures(features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#load)
///
/// ``` int features ```
bool q_networkinformation_load_with_features(int64_t features) {
    return QNetworkInformation_LoadWithFeatures(features);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#availableBackends)
///
///
const char** q_networkinformation_available_backends() {
    libqt_list _arr = QNetworkInformation_AvailableBackends();
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

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#instance)
///
///
QNetworkInformation* q_networkinformation_instance() {
    return QNetworkInformation_Instance();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#reachabilityChanged)
///
/// ``` QNetworkInformation* self, enum QNetworkInformation__Reachability newReachability ```
void q_networkinformation_reachability_changed(void* self, int64_t newReachability) {
    QNetworkInformation_ReachabilityChanged((QNetworkInformation*)self, newReachability);
}

/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, enum QNetworkInformation__Reachability) ```
void q_networkinformation_on_reachability_changed(void* self, void (*slot)(void*, int64_t)) {
    QNetworkInformation_Connect_ReachabilityChanged((QNetworkInformation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isBehindCaptivePortalChanged)
///
/// ``` QNetworkInformation* self, bool state ```
void q_networkinformation_is_behind_captive_portal_changed(void* self, bool state) {
    QNetworkInformation_IsBehindCaptivePortalChanged((QNetworkInformation*)self, state);
}

/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, bool) ```
void q_networkinformation_on_is_behind_captive_portal_changed(void* self, void (*slot)(void*, bool)) {
    QNetworkInformation_Connect_IsBehindCaptivePortalChanged((QNetworkInformation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#transportMediumChanged)
///
/// ``` QNetworkInformation* self, enum QNetworkInformation__TransportMedium current ```
void q_networkinformation_transport_medium_changed(void* self, int64_t current) {
    QNetworkInformation_TransportMediumChanged((QNetworkInformation*)self, current);
}

/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, enum QNetworkInformation__TransportMedium) ```
void q_networkinformation_on_transport_medium_changed(void* self, void (*slot)(void*, int64_t)) {
    QNetworkInformation_Connect_TransportMediumChanged((QNetworkInformation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinformation.html#isMeteredChanged)
///
/// ``` QNetworkInformation* self, bool isMetered ```
void q_networkinformation_is_metered_changed(void* self, bool isMetered) {
    QNetworkInformation_IsMeteredChanged((QNetworkInformation*)self, isMetered);
}

/// ``` QNetworkInformation* self, void (*slot)(QNetworkInformation*, bool) ```
void q_networkinformation_on_is_metered_changed(void* self, void (*slot)(void*, bool)) {
    QNetworkInformation_Connect_IsMeteredChanged((QNetworkInformation*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkinformation_tr2(const char* s, const char* c) {
    libqt_string _str = QNetworkInformation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkinformation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QNetworkInformation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QNetworkInformation* self, QEvent* event ```
bool q_networkinformation_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QNetworkInformation* self, QObject* watched, QEvent* event ```
bool q_networkinformation_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkInformation* self ```
const char* q_networkinformation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkInformation* self, const char* name ```
void q_networkinformation_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkInformation* self ```
bool q_networkinformation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkInformation* self, bool b ```
bool q_networkinformation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkInformation* self ```
QThread* q_networkinformation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkInformation* self, QThread* thread ```
void q_networkinformation_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkInformation* self, int interval ```
int32_t q_networkinformation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkInformation* self, int id ```
void q_networkinformation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkInformation* self ```
libqt_list /* of QObject* */ q_networkinformation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkInformation* self, QObject* parent ```
void q_networkinformation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkInformation* self, QObject* filterObj ```
void q_networkinformation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkInformation* self, QObject* obj ```
void q_networkinformation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkinformation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkInformation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkinformation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkinformation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkinformation_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkInformation* self, const char* name, QVariant* value ```
bool q_networkinformation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkInformation* self, const char* name ```
QVariant* q_networkinformation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkInformation* self ```
const char** q_networkinformation_dynamic_property_names(void* self) {
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
/// ``` QNetworkInformation* self ```
QBindingStorage* q_networkinformation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkInformation* self ```
QBindingStorage* q_networkinformation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QNetworkInformation* self, void (*slot)(QObject*) ```
void q_networkinformation_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkInformation* self ```
QObject* q_networkinformation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkInformation* self, const char* classname ```
bool q_networkinformation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkInformation* self ```
void q_networkinformation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkInformation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkinformation_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkinformation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkInformation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkinformation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkInformation* self, QObject* param1 ```
void q_networkinformation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QNetworkInformation* self, void (*slot)(QObject*, QObject*) ```
void q_networkinformation_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}
