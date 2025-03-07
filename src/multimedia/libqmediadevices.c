#include "../libqanystringview.hpp"
#include "libqaudiodevice.hpp"
#include "../libqbindingstorage.hpp"
#include "libqcameradevice.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqmediadevices.hpp"
#include "libqmediadevices.h"

/// https://doc.qt.io/qt-6/qmediadevices.html

/// q_mediadevices_new constructs a new QMediaDevices object.
///
///
QMediaDevices* q_mediadevices_new() {
    return QMediaDevices_new();
}

/// q_mediadevices_new2 constructs a new QMediaDevices object.
///
/// ``` QObject* parent ```
QMediaDevices* q_mediadevices_new2(void* parent) {
    return QMediaDevices_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaDevices* self ```
QMetaObject* q_mediadevices_meta_object(void* self) {
    return QMediaDevices_MetaObject((QMediaDevices*)self);
}

/// ``` QMediaDevices* self, const char* param1 ```
void* q_mediadevices_metacast(void* self, const char* param1) {
    return QMediaDevices_Metacast((QMediaDevices*)self, param1);
}

/// ``` QMediaDevices* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediadevices_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaDevices_Metacall((QMediaDevices*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMediaDevices* self, int32_t (*slot)(QMediaDevices*, enum QMetaObject__Call, int, void*) ```
void q_mediadevices_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMediaDevices_OnMetacall((QMediaDevices*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMediaDevices* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediadevices_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaDevices_QBaseMetacall((QMediaDevices*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediadevices_tr(const char* s) {
    libqt_string _str = QMediaDevices_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioInputs)
///
///
libqt_list /* of QAudioDevice* */ q_mediadevices_audio_inputs() {
    libqt_list _arr = QMediaDevices_AudioInputs();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioOutputs)
///
///
libqt_list /* of QAudioDevice* */ q_mediadevices_audio_outputs() {
    libqt_list _arr = QMediaDevices_AudioOutputs();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#videoInputs)
///
///
libqt_list /* of QCameraDevice* */ q_mediadevices_video_inputs() {
    libqt_list _arr = QMediaDevices_VideoInputs();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#defaultAudioInput)
///
///
QAudioDevice* q_mediadevices_default_audio_input() {
    return QMediaDevices_DefaultAudioInput();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#defaultAudioOutput)
///
///
QAudioDevice* q_mediadevices_default_audio_output() {
    return QMediaDevices_DefaultAudioOutput();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#defaultVideoInput)
///
///
QCameraDevice* q_mediadevices_default_video_input() {
    return QMediaDevices_DefaultVideoInput();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioInputsChanged)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_audio_inputs_changed(void* self) {
    QMediaDevices_AudioInputsChanged((QMediaDevices*)self);
}

/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*) ```
void q_mediadevices_on_audio_inputs_changed(void* self, void (*slot)(void*)) {
    QMediaDevices_Connect_AudioInputsChanged((QMediaDevices*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#audioOutputsChanged)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_audio_outputs_changed(void* self) {
    QMediaDevices_AudioOutputsChanged((QMediaDevices*)self);
}

/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*) ```
void q_mediadevices_on_audio_outputs_changed(void* self, void (*slot)(void*)) {
    QMediaDevices_Connect_AudioOutputsChanged((QMediaDevices*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediadevices.html#videoInputsChanged)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_video_inputs_changed(void* self) {
    QMediaDevices_VideoInputsChanged((QMediaDevices*)self);
}

/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*) ```
void q_mediadevices_on_video_inputs_changed(void* self, void (*slot)(void*)) {
    QMediaDevices_Connect_VideoInputsChanged((QMediaDevices*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediadevices_tr2(const char* s, const char* c) {
    libqt_string _str = QMediaDevices_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediadevices_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMediaDevices_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaDevices* self ```
const char* q_mediadevices_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaDevices* self, const char* name ```
void q_mediadevices_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaDevices* self ```
bool q_mediadevices_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaDevices* self, bool b ```
bool q_mediadevices_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaDevices* self ```
QThread* q_mediadevices_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaDevices* self, QThread* thread ```
void q_mediadevices_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaDevices* self, int interval ```
int32_t q_mediadevices_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaDevices* self, int id ```
void q_mediadevices_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaDevices* self ```
libqt_list /* of QObject* */ q_mediadevices_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaDevices* self, QObject* parent ```
void q_mediadevices_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaDevices* self, QObject* filterObj ```
void q_mediadevices_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaDevices* self, QObject* obj ```
void q_mediadevices_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediadevices_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaDevices* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediadevices_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediadevices_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediadevices_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaDevices* self, const char* name, QVariant* value ```
bool q_mediadevices_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaDevices* self, const char* name ```
QVariant* q_mediadevices_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaDevices* self ```
const char** q_mediadevices_dynamic_property_names(void* self) {
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
/// ``` QMediaDevices* self ```
QBindingStorage* q_mediadevices_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaDevices* self ```
QBindingStorage* q_mediadevices_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMediaDevices* self, void (*slot)(QObject*) ```
void q_mediadevices_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaDevices* self ```
QObject* q_mediadevices_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaDevices* self, const char* classname ```
bool q_mediadevices_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaDevices* self ```
void q_mediadevices_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaDevices* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediadevices_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediadevices_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaDevices* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediadevices_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaDevices* self, QObject* param1 ```
void q_mediadevices_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMediaDevices* self, void (*slot)(QObject*, QObject*) ```
void q_mediadevices_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
bool q_mediadevices_event(void* self, void* event) {
    return QMediaDevices_Event((QMediaDevices*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
bool q_mediadevices_qbase_event(void* self, void* event) {
    return QMediaDevices_QBaseEvent((QMediaDevices*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, bool (*slot)(QMediaDevices*, QEvent*) ```
void q_mediadevices_on_event(void* self, bool (*slot)(void*, void*)) {
    QMediaDevices_OnEvent((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QObject* watched, QEvent* event ```
bool q_mediadevices_event_filter(void* self, void* watched, void* event) {
    return QMediaDevices_EventFilter((QMediaDevices*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QObject* watched, QEvent* event ```
bool q_mediadevices_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaDevices_QBaseEventFilter((QMediaDevices*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, bool (*slot)(QMediaDevices*, QObject*, QEvent*) ```
void q_mediadevices_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMediaDevices_OnEventFilter((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QTimerEvent* event ```
void q_mediadevices_timer_event(void* self, void* event) {
    QMediaDevices_TimerEvent((QMediaDevices*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QTimerEvent* event ```
void q_mediadevices_qbase_timer_event(void* self, void* event) {
    QMediaDevices_QBaseTimerEvent((QMediaDevices*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QTimerEvent*) ```
void q_mediadevices_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMediaDevices_OnTimerEvent((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QChildEvent* event ```
void q_mediadevices_child_event(void* self, void* event) {
    QMediaDevices_ChildEvent((QMediaDevices*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QChildEvent* event ```
void q_mediadevices_qbase_child_event(void* self, void* event) {
    QMediaDevices_QBaseChildEvent((QMediaDevices*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QChildEvent*) ```
void q_mediadevices_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMediaDevices_OnChildEvent((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
void q_mediadevices_custom_event(void* self, void* event) {
    QMediaDevices_CustomEvent((QMediaDevices*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QEvent* event ```
void q_mediadevices_qbase_custom_event(void* self, void* event) {
    QMediaDevices_QBaseCustomEvent((QMediaDevices*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QEvent*) ```
void q_mediadevices_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMediaDevices_OnCustomEvent((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_connect_notify(void* self, void* signal) {
    QMediaDevices_ConnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_qbase_connect_notify(void* self, void* signal) {
    QMediaDevices_QBaseConnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QMetaMethod*) ```
void q_mediadevices_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaDevices_OnConnectNotify((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_disconnect_notify(void* self, void* signal) {
    QMediaDevices_DisconnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
void q_mediadevices_qbase_disconnect_notify(void* self, void* signal) {
    QMediaDevices_QBaseDisconnectNotify((QMediaDevices*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, void (*slot)(QMediaDevices*, QMetaMethod*) ```
void q_mediadevices_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaDevices_OnDisconnectNotify((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self ```
QObject* q_mediadevices_sender(void* self) {
    return QMediaDevices_Sender((QMediaDevices*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self ```
QObject* q_mediadevices_qbase_sender(void* self) {
    return QMediaDevices_QBaseSender((QMediaDevices*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, QObject* (*slot)() ```
void q_mediadevices_on_sender(void* self, QObject* (*slot)()) {
    QMediaDevices_OnSender((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self ```
int32_t q_mediadevices_sender_signal_index(void* self) {
    return QMediaDevices_SenderSignalIndex((QMediaDevices*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self ```
int32_t q_mediadevices_qbase_sender_signal_index(void* self) {
    return QMediaDevices_QBaseSenderSignalIndex((QMediaDevices*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, int32_t (*slot)() ```
void q_mediadevices_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMediaDevices_OnSenderSignalIndex((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, const char* signal ```
int32_t q_mediadevices_receivers(void* self, const char* signal) {
    return QMediaDevices_Receivers((QMediaDevices*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, const char* signal ```
int32_t q_mediadevices_qbase_receivers(void* self, const char* signal) {
    return QMediaDevices_QBaseReceivers((QMediaDevices*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, int32_t (*slot)(QMediaDevices*, const char*) ```
void q_mediadevices_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMediaDevices_OnReceivers((QMediaDevices*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
bool q_mediadevices_is_signal_connected(void* self, void* signal) {
    return QMediaDevices_IsSignalConnected((QMediaDevices*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaDevices* self, QMetaMethod* signal ```
bool q_mediadevices_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaDevices_QBaseIsSignalConnected((QMediaDevices*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaDevices* self, bool (*slot)(QMediaDevices*, QMetaMethod*) ```
void q_mediadevices_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMediaDevices_OnIsSignalConnected((QMediaDevices*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMediaDevices* self ```
void q_mediadevices_delete(void* self) {
    QMediaDevices_Delete((QMediaDevices*)(self));
}