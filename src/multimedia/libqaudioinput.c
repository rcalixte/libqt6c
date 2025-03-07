#include "../libqanystringview.hpp"
#include "libqaudiodevice.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqaudioinput.hpp"
#include "libqaudioinput.h"

/// https://doc.qt.io/qt-6/qaudioinput.html

/// q_audioinput_new constructs a new QAudioInput object.
///
///
QAudioInput* q_audioinput_new() {
    return QAudioInput_new();
}

/// q_audioinput_new2 constructs a new QAudioInput object.
///
/// ``` QAudioDevice* deviceInfo ```
QAudioInput* q_audioinput_new2(void* deviceInfo) {
    return QAudioInput_new2((QAudioDevice*)deviceInfo);
}

/// q_audioinput_new3 constructs a new QAudioInput object.
///
/// ``` QObject* parent ```
QAudioInput* q_audioinput_new3(void* parent) {
    return QAudioInput_new3((QObject*)parent);
}

/// q_audioinput_new4 constructs a new QAudioInput object.
///
/// ``` QAudioDevice* deviceInfo, QObject* parent ```
QAudioInput* q_audioinput_new4(void* deviceInfo, void* parent) {
    return QAudioInput_new4((QAudioDevice*)deviceInfo, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioInput* self ```
QMetaObject* q_audioinput_meta_object(void* self) {
    return QAudioInput_MetaObject((QAudioInput*)self);
}

/// ``` QAudioInput* self, const char* param1 ```
void* q_audioinput_metacast(void* self, const char* param1) {
    return QAudioInput_Metacast((QAudioInput*)self, param1);
}

/// ``` QAudioInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioinput_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioInput_Metacall((QAudioInput*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAudioInput* self, int32_t (*slot)(QAudioInput*, enum QMetaObject__Call, int, void*) ```
void q_audioinput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioInput_OnMetacall((QAudioInput*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAudioInput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioinput_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioInput_QBaseMetacall((QAudioInput*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audioinput_tr(const char* s) {
    libqt_string _str = QAudioInput_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#device)
///
/// ``` QAudioInput* self ```
QAudioDevice* q_audioinput_device(void* self) {
    return QAudioInput_Device((QAudioInput*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volume)
///
/// ``` QAudioInput* self ```
float q_audioinput_volume(void* self) {
    return QAudioInput_Volume((QAudioInput*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#isMuted)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_muted(void* self) {
    return QAudioInput_IsMuted((QAudioInput*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setDevice)
///
/// ``` QAudioInput* self, QAudioDevice* device ```
void q_audioinput_set_device(void* self, void* device) {
    QAudioInput_SetDevice((QAudioInput*)self, (QAudioDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setVolume)
///
/// ``` QAudioInput* self, float volume ```
void q_audioinput_set_volume(void* self, float volume) {
    QAudioInput_SetVolume((QAudioInput*)self, volume);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#setMuted)
///
/// ``` QAudioInput* self, bool muted ```
void q_audioinput_set_muted(void* self, bool muted) {
    QAudioInput_SetMuted((QAudioInput*)self, muted);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#deviceChanged)
///
/// ``` QAudioInput* self ```
void q_audioinput_device_changed(void* self) {
    QAudioInput_DeviceChanged((QAudioInput*)self);
}

/// ``` QAudioInput* self, void (*slot)(QAudioInput*) ```
void q_audioinput_on_device_changed(void* self, void (*slot)(void*)) {
    QAudioInput_Connect_DeviceChanged((QAudioInput*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#volumeChanged)
///
/// ``` QAudioInput* self, float volume ```
void q_audioinput_volume_changed(void* self, float volume) {
    QAudioInput_VolumeChanged((QAudioInput*)self, volume);
}

/// ``` QAudioInput* self, void (*slot)(QAudioInput*, float) ```
void q_audioinput_on_volume_changed(void* self, void (*slot)(void*, float)) {
    QAudioInput_Connect_VolumeChanged((QAudioInput*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioinput.html#mutedChanged)
///
/// ``` QAudioInput* self, bool muted ```
void q_audioinput_muted_changed(void* self, bool muted) {
    QAudioInput_MutedChanged((QAudioInput*)self, muted);
}

/// ``` QAudioInput* self, void (*slot)(QAudioInput*, bool) ```
void q_audioinput_on_muted_changed(void* self, void (*slot)(void*, bool)) {
    QAudioInput_Connect_MutedChanged((QAudioInput*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audioinput_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioInput_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audioinput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioInput_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioInput* self ```
const char* q_audioinput_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioInput* self, const char* name ```
void q_audioinput_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioInput* self ```
bool q_audioinput_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioInput* self ```
bool q_audioinput_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioInput* self, bool b ```
bool q_audioinput_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioInput* self ```
QThread* q_audioinput_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioInput* self, QThread* thread ```
void q_audioinput_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioInput* self, int interval ```
int32_t q_audioinput_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioInput* self, int id ```
void q_audioinput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioInput* self ```
libqt_list /* of QObject* */ q_audioinput_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioInput* self, QObject* parent ```
void q_audioinput_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioInput* self, QObject* filterObj ```
void q_audioinput_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioInput* self, QObject* obj ```
void q_audioinput_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audioinput_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioInput* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audioinput_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audioinput_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audioinput_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioInput* self ```
void q_audioinput_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioInput* self ```
void q_audioinput_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioInput* self, const char* name, QVariant* value ```
bool q_audioinput_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioInput* self, const char* name ```
QVariant* q_audioinput_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioInput* self ```
const char** q_audioinput_dynamic_property_names(void* self) {
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
/// ``` QAudioInput* self ```
QBindingStorage* q_audioinput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioInput* self ```
QBindingStorage* q_audioinput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioInput* self ```
void q_audioinput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioInput* self, void (*slot)(QObject*) ```
void q_audioinput_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioInput* self ```
QObject* q_audioinput_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioInput* self, const char* classname ```
bool q_audioinput_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioInput* self ```
void q_audioinput_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioInput* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audioinput_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioinput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioInput* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioinput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioInput* self, QObject* param1 ```
void q_audioinput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAudioInput* self, void (*slot)(QObject*, QObject*) ```
void q_audioinput_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
bool q_audioinput_event(void* self, void* event) {
    return QAudioInput_Event((QAudioInput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
bool q_audioinput_qbase_event(void* self, void* event) {
    return QAudioInput_QBaseEvent((QAudioInput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, bool (*slot)(QAudioInput*, QEvent*) ```
void q_audioinput_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioInput_OnEvent((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QObject* watched, QEvent* event ```
bool q_audioinput_event_filter(void* self, void* watched, void* event) {
    return QAudioInput_EventFilter((QAudioInput*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QObject* watched, QEvent* event ```
bool q_audioinput_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioInput_QBaseEventFilter((QAudioInput*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, bool (*slot)(QAudioInput*, QObject*, QEvent*) ```
void q_audioinput_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioInput_OnEventFilter((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QTimerEvent* event ```
void q_audioinput_timer_event(void* self, void* event) {
    QAudioInput_TimerEvent((QAudioInput*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QTimerEvent* event ```
void q_audioinput_qbase_timer_event(void* self, void* event) {
    QAudioInput_QBaseTimerEvent((QAudioInput*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QTimerEvent*) ```
void q_audioinput_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioInput_OnTimerEvent((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QChildEvent* event ```
void q_audioinput_child_event(void* self, void* event) {
    QAudioInput_ChildEvent((QAudioInput*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QChildEvent* event ```
void q_audioinput_qbase_child_event(void* self, void* event) {
    QAudioInput_QBaseChildEvent((QAudioInput*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QChildEvent*) ```
void q_audioinput_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioInput_OnChildEvent((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
void q_audioinput_custom_event(void* self, void* event) {
    QAudioInput_CustomEvent((QAudioInput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QEvent* event ```
void q_audioinput_qbase_custom_event(void* self, void* event) {
    QAudioInput_QBaseCustomEvent((QAudioInput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QEvent*) ```
void q_audioinput_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioInput_OnCustomEvent((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_connect_notify(void* self, void* signal) {
    QAudioInput_ConnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_qbase_connect_notify(void* self, void* signal) {
    QAudioInput_QBaseConnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QMetaMethod*) ```
void q_audioinput_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioInput_OnConnectNotify((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_disconnect_notify(void* self, void* signal) {
    QAudioInput_DisconnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
void q_audioinput_qbase_disconnect_notify(void* self, void* signal) {
    QAudioInput_QBaseDisconnectNotify((QAudioInput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, void (*slot)(QAudioInput*, QMetaMethod*) ```
void q_audioinput_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioInput_OnDisconnectNotify((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self ```
QObject* q_audioinput_sender(void* self) {
    return QAudioInput_Sender((QAudioInput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self ```
QObject* q_audioinput_qbase_sender(void* self) {
    return QAudioInput_QBaseSender((QAudioInput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, QObject* (*slot)() ```
void q_audioinput_on_sender(void* self, QObject* (*slot)()) {
    QAudioInput_OnSender((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self ```
int32_t q_audioinput_sender_signal_index(void* self) {
    return QAudioInput_SenderSignalIndex((QAudioInput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self ```
int32_t q_audioinput_qbase_sender_signal_index(void* self) {
    return QAudioInput_QBaseSenderSignalIndex((QAudioInput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, int32_t (*slot)() ```
void q_audioinput_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioInput_OnSenderSignalIndex((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, const char* signal ```
int32_t q_audioinput_receivers(void* self, const char* signal) {
    return QAudioInput_Receivers((QAudioInput*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, const char* signal ```
int32_t q_audioinput_qbase_receivers(void* self, const char* signal) {
    return QAudioInput_QBaseReceivers((QAudioInput*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, int32_t (*slot)(QAudioInput*, const char*) ```
void q_audioinput_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioInput_OnReceivers((QAudioInput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
bool q_audioinput_is_signal_connected(void* self, void* signal) {
    return QAudioInput_IsSignalConnected((QAudioInput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioInput* self, QMetaMethod* signal ```
bool q_audioinput_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioInput_QBaseIsSignalConnected((QAudioInput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioInput* self, bool (*slot)(QAudioInput*, QMetaMethod*) ```
void q_audioinput_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioInput_OnIsSignalConnected((QAudioInput*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioInput* self ```
void q_audioinput_delete(void* self) {
    QAudioInput_Delete((QAudioInput*)(self));
}