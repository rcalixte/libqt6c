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
#include "libqaudiooutput.hpp"
#include "libqaudiooutput.h"

/// https://doc.qt.io/qt-6/qaudiooutput.html

/// q_audiooutput_new constructs a new QAudioOutput object.
///
///
QAudioOutput* q_audiooutput_new() {
    return QAudioOutput_new();
}

/// q_audiooutput_new2 constructs a new QAudioOutput object.
///
/// ``` QAudioDevice* device ```
QAudioOutput* q_audiooutput_new2(void* device) {
    return QAudioOutput_new2((QAudioDevice*)device);
}

/// q_audiooutput_new3 constructs a new QAudioOutput object.
///
/// ``` QObject* parent ```
QAudioOutput* q_audiooutput_new3(void* parent) {
    return QAudioOutput_new3((QObject*)parent);
}

/// q_audiooutput_new4 constructs a new QAudioOutput object.
///
/// ``` QAudioDevice* device, QObject* parent ```
QAudioOutput* q_audiooutput_new4(void* device, void* parent) {
    return QAudioOutput_new4((QAudioDevice*)device, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioOutput* self ```
QMetaObject* q_audiooutput_meta_object(void* self) {
    return QAudioOutput_MetaObject((QAudioOutput*)self);
}

/// ``` QAudioOutput* self, const char* param1 ```
void* q_audiooutput_metacast(void* self, const char* param1) {
    return QAudioOutput_Metacast((QAudioOutput*)self, param1);
}

/// ``` QAudioOutput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiooutput_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioOutput_Metacall((QAudioOutput*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAudioOutput* self, int32_t (*slot)(QAudioOutput*, enum QMetaObject__Call, int, void*) ```
void q_audiooutput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioOutput_OnMetacall((QAudioOutput*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAudioOutput* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiooutput_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioOutput_QBaseMetacall((QAudioOutput*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiooutput_tr(const char* s) {
    libqt_string _str = QAudioOutput_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#device)
///
/// ``` QAudioOutput* self ```
QAudioDevice* q_audiooutput_device(void* self) {
    return QAudioOutput_Device((QAudioOutput*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#volume)
///
/// ``` QAudioOutput* self ```
float q_audiooutput_volume(void* self) {
    return QAudioOutput_Volume((QAudioOutput*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#isMuted)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_muted(void* self) {
    return QAudioOutput_IsMuted((QAudioOutput*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#setDevice)
///
/// ``` QAudioOutput* self, QAudioDevice* device ```
void q_audiooutput_set_device(void* self, void* device) {
    QAudioOutput_SetDevice((QAudioOutput*)self, (QAudioDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#setVolume)
///
/// ``` QAudioOutput* self, float volume ```
void q_audiooutput_set_volume(void* self, float volume) {
    QAudioOutput_SetVolume((QAudioOutput*)self, volume);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#setMuted)
///
/// ``` QAudioOutput* self, bool muted ```
void q_audiooutput_set_muted(void* self, bool muted) {
    QAudioOutput_SetMuted((QAudioOutput*)self, muted);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#deviceChanged)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_device_changed(void* self) {
    QAudioOutput_DeviceChanged((QAudioOutput*)self);
}

/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*) ```
void q_audiooutput_on_device_changed(void* self, void (*slot)(void*)) {
    QAudioOutput_Connect_DeviceChanged((QAudioOutput*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#volumeChanged)
///
/// ``` QAudioOutput* self, float volume ```
void q_audiooutput_volume_changed(void* self, float volume) {
    QAudioOutput_VolumeChanged((QAudioOutput*)self, volume);
}

/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, float) ```
void q_audiooutput_on_volume_changed(void* self, void (*slot)(void*, float)) {
    QAudioOutput_Connect_VolumeChanged((QAudioOutput*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiooutput.html#mutedChanged)
///
/// ``` QAudioOutput* self, bool muted ```
void q_audiooutput_muted_changed(void* self, bool muted) {
    QAudioOutput_MutedChanged((QAudioOutput*)self, muted);
}

/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, bool) ```
void q_audiooutput_on_muted_changed(void* self, void (*slot)(void*, bool)) {
    QAudioOutput_Connect_MutedChanged((QAudioOutput*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiooutput_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioOutput_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiooutput_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioOutput_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioOutput* self ```
const char* q_audiooutput_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioOutput* self, const char* name ```
void q_audiooutput_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioOutput* self ```
bool q_audiooutput_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioOutput* self, bool b ```
bool q_audiooutput_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioOutput* self ```
QThread* q_audiooutput_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioOutput* self, QThread* thread ```
void q_audiooutput_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioOutput* self, int interval ```
int32_t q_audiooutput_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioOutput* self, int id ```
void q_audiooutput_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioOutput* self ```
libqt_list /* of QObject* */ q_audiooutput_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioOutput* self, QObject* parent ```
void q_audiooutput_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioOutput* self, QObject* filterObj ```
void q_audiooutput_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioOutput* self, QObject* obj ```
void q_audiooutput_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiooutput_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioOutput* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiooutput_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiooutput_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiooutput_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioOutput* self, const char* name, QVariant* value ```
bool q_audiooutput_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioOutput* self, const char* name ```
QVariant* q_audiooutput_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioOutput* self ```
const char** q_audiooutput_dynamic_property_names(void* self) {
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
/// ``` QAudioOutput* self ```
QBindingStorage* q_audiooutput_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioOutput* self ```
QBindingStorage* q_audiooutput_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioOutput* self, void (*slot)(QObject*) ```
void q_audiooutput_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioOutput* self ```
QObject* q_audiooutput_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioOutput* self, const char* classname ```
bool q_audiooutput_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioOutput* self ```
void q_audiooutput_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioOutput* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiooutput_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiooutput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioOutput* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiooutput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioOutput* self, QObject* param1 ```
void q_audiooutput_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAudioOutput* self, void (*slot)(QObject*, QObject*) ```
void q_audiooutput_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
bool q_audiooutput_event(void* self, void* event) {
    return QAudioOutput_Event((QAudioOutput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
bool q_audiooutput_qbase_event(void* self, void* event) {
    return QAudioOutput_QBaseEvent((QAudioOutput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, bool (*slot)(QAudioOutput*, QEvent*) ```
void q_audiooutput_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioOutput_OnEvent((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QObject* watched, QEvent* event ```
bool q_audiooutput_event_filter(void* self, void* watched, void* event) {
    return QAudioOutput_EventFilter((QAudioOutput*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QObject* watched, QEvent* event ```
bool q_audiooutput_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioOutput_QBaseEventFilter((QAudioOutput*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, bool (*slot)(QAudioOutput*, QObject*, QEvent*) ```
void q_audiooutput_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioOutput_OnEventFilter((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QTimerEvent* event ```
void q_audiooutput_timer_event(void* self, void* event) {
    QAudioOutput_TimerEvent((QAudioOutput*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QTimerEvent* event ```
void q_audiooutput_qbase_timer_event(void* self, void* event) {
    QAudioOutput_QBaseTimerEvent((QAudioOutput*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QTimerEvent*) ```
void q_audiooutput_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioOutput_OnTimerEvent((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QChildEvent* event ```
void q_audiooutput_child_event(void* self, void* event) {
    QAudioOutput_ChildEvent((QAudioOutput*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QChildEvent* event ```
void q_audiooutput_qbase_child_event(void* self, void* event) {
    QAudioOutput_QBaseChildEvent((QAudioOutput*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QChildEvent*) ```
void q_audiooutput_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioOutput_OnChildEvent((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
void q_audiooutput_custom_event(void* self, void* event) {
    QAudioOutput_CustomEvent((QAudioOutput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QEvent* event ```
void q_audiooutput_qbase_custom_event(void* self, void* event) {
    QAudioOutput_QBaseCustomEvent((QAudioOutput*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QEvent*) ```
void q_audiooutput_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioOutput_OnCustomEvent((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_connect_notify(void* self, void* signal) {
    QAudioOutput_ConnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_qbase_connect_notify(void* self, void* signal) {
    QAudioOutput_QBaseConnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QMetaMethod*) ```
void q_audiooutput_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioOutput_OnConnectNotify((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_disconnect_notify(void* self, void* signal) {
    QAudioOutput_DisconnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
void q_audiooutput_qbase_disconnect_notify(void* self, void* signal) {
    QAudioOutput_QBaseDisconnectNotify((QAudioOutput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, void (*slot)(QAudioOutput*, QMetaMethod*) ```
void q_audiooutput_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioOutput_OnDisconnectNotify((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self ```
QObject* q_audiooutput_sender(void* self) {
    return QAudioOutput_Sender((QAudioOutput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self ```
QObject* q_audiooutput_qbase_sender(void* self) {
    return QAudioOutput_QBaseSender((QAudioOutput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, QObject* (*slot)() ```
void q_audiooutput_on_sender(void* self, QObject* (*slot)()) {
    QAudioOutput_OnSender((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self ```
int32_t q_audiooutput_sender_signal_index(void* self) {
    return QAudioOutput_SenderSignalIndex((QAudioOutput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self ```
int32_t q_audiooutput_qbase_sender_signal_index(void* self) {
    return QAudioOutput_QBaseSenderSignalIndex((QAudioOutput*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, int32_t (*slot)() ```
void q_audiooutput_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioOutput_OnSenderSignalIndex((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, const char* signal ```
int32_t q_audiooutput_receivers(void* self, const char* signal) {
    return QAudioOutput_Receivers((QAudioOutput*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, const char* signal ```
int32_t q_audiooutput_qbase_receivers(void* self, const char* signal) {
    return QAudioOutput_QBaseReceivers((QAudioOutput*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, int32_t (*slot)(QAudioOutput*, const char*) ```
void q_audiooutput_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioOutput_OnReceivers((QAudioOutput*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
bool q_audiooutput_is_signal_connected(void* self, void* signal) {
    return QAudioOutput_IsSignalConnected((QAudioOutput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioOutput* self, QMetaMethod* signal ```
bool q_audiooutput_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioOutput_QBaseIsSignalConnected((QAudioOutput*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioOutput* self, bool (*slot)(QAudioOutput*, QMetaMethod*) ```
void q_audiooutput_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioOutput_OnIsSignalConnected((QAudioOutput*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioOutput* self ```
void q_audiooutput_delete(void* self) {
    QAudioOutput_Delete((QAudioOutput*)(self));
}