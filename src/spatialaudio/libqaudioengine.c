#include "../libqanystringview.hpp"
#include "../multimedia/libqaudiodevice.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqaudioengine.hpp"
#include "libqaudioengine.h"

/// https://doc.qt.io/qt-6/qaudioengine.html

/// q_audioengine_new constructs a new QAudioEngine object.
///
///
QAudioEngine* q_audioengine_new() {
    return QAudioEngine_new();
}

/// q_audioengine_new2 constructs a new QAudioEngine object.
///
/// ``` QObject* parent ```
QAudioEngine* q_audioengine_new2(void* parent) {
    return QAudioEngine_new2((QObject*)parent);
}

/// q_audioengine_new3 constructs a new QAudioEngine object.
///
/// ``` int sampleRate ```
QAudioEngine* q_audioengine_new3(int sampleRate) {
    return QAudioEngine_new3(sampleRate);
}

/// q_audioengine_new4 constructs a new QAudioEngine object.
///
/// ``` int sampleRate, QObject* parent ```
QAudioEngine* q_audioengine_new4(int sampleRate, void* parent) {
    return QAudioEngine_new4(sampleRate, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioEngine* self ```
QMetaObject* q_audioengine_meta_object(void* self) {
    return QAudioEngine_MetaObject((QAudioEngine*)self);
}

/// ``` QAudioEngine* self, const char* param1 ```
void* q_audioengine_metacast(void* self, const char* param1) {
    return QAudioEngine_Metacast((QAudioEngine*)self, param1);
}

/// ``` QAudioEngine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioengine_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioEngine_Metacall((QAudioEngine*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAudioEngine* self, int32_t (*slot)(QAudioEngine*, enum QMetaObject__Call, int, void*) ```
void q_audioengine_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioEngine_OnMetacall((QAudioEngine*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAudioEngine* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioengine_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioEngine_QBaseMetacall((QAudioEngine*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audioengine_tr(const char* s) {
    libqt_string _str = QAudioEngine_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setOutputMode)
///
/// ``` QAudioEngine* self, enum QAudioEngine__OutputMode mode ```
void q_audioengine_set_output_mode(void* self, int64_t mode) {
    QAudioEngine_SetOutputMode((QAudioEngine*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputMode)
///
/// ``` QAudioEngine* self ```
int64_t q_audioengine_output_mode(void* self) {
    return QAudioEngine_OutputMode((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#sampleRate)
///
/// ``` QAudioEngine* self ```
int32_t q_audioengine_sample_rate(void* self) {
    return QAudioEngine_SampleRate((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setOutputDevice)
///
/// ``` QAudioEngine* self, QAudioDevice* device ```
void q_audioengine_set_output_device(void* self, void* device) {
    QAudioEngine_SetOutputDevice((QAudioEngine*)self, (QAudioDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputDevice)
///
/// ``` QAudioEngine* self ```
QAudioDevice* q_audioengine_output_device(void* self) {
    return QAudioEngine_OutputDevice((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setMasterVolume)
///
/// ``` QAudioEngine* self, float volume ```
void q_audioengine_set_master_volume(void* self, float volume) {
    QAudioEngine_SetMasterVolume((QAudioEngine*)self, volume);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#masterVolume)
///
/// ``` QAudioEngine* self ```
float q_audioengine_master_volume(void* self) {
    return QAudioEngine_MasterVolume((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setPaused)
///
/// ``` QAudioEngine* self, bool paused ```
void q_audioengine_set_paused(void* self, bool paused) {
    QAudioEngine_SetPaused((QAudioEngine*)self, paused);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#paused)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_paused(void* self) {
    return QAudioEngine_Paused((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setRoomEffectsEnabled)
///
/// ``` QAudioEngine* self, bool enabled ```
void q_audioengine_set_room_effects_enabled(void* self, bool enabled) {
    QAudioEngine_SetRoomEffectsEnabled((QAudioEngine*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#roomEffectsEnabled)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_room_effects_enabled(void* self) {
    return QAudioEngine_RoomEffectsEnabled((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#setDistanceScale)
///
/// ``` QAudioEngine* self, float scale ```
void q_audioengine_set_distance_scale(void* self, float scale) {
    QAudioEngine_SetDistanceScale((QAudioEngine*)self, scale);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#distanceScale)
///
/// ``` QAudioEngine* self ```
float q_audioengine_distance_scale(void* self) {
    return QAudioEngine_DistanceScale((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputModeChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_output_mode_changed(void* self) {
    QAudioEngine_OutputModeChanged((QAudioEngine*)self);
}

/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_output_mode_changed(void* self, void (*slot)(void*)) {
    QAudioEngine_Connect_OutputModeChanged((QAudioEngine*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#outputDeviceChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_output_device_changed(void* self) {
    QAudioEngine_OutputDeviceChanged((QAudioEngine*)self);
}

/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_output_device_changed(void* self, void (*slot)(void*)) {
    QAudioEngine_Connect_OutputDeviceChanged((QAudioEngine*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#masterVolumeChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_master_volume_changed(void* self) {
    QAudioEngine_MasterVolumeChanged((QAudioEngine*)self);
}

/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_master_volume_changed(void* self, void (*slot)(void*)) {
    QAudioEngine_Connect_MasterVolumeChanged((QAudioEngine*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#pausedChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_paused_changed(void* self) {
    QAudioEngine_PausedChanged((QAudioEngine*)self);
}

/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_paused_changed(void* self, void (*slot)(void*)) {
    QAudioEngine_Connect_PausedChanged((QAudioEngine*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#distanceScaleChanged)
///
/// ``` QAudioEngine* self ```
void q_audioengine_distance_scale_changed(void* self) {
    QAudioEngine_DistanceScaleChanged((QAudioEngine*)self);
}

/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*) ```
void q_audioengine_on_distance_scale_changed(void* self, void (*slot)(void*)) {
    QAudioEngine_Connect_DistanceScaleChanged((QAudioEngine*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#start)
///
/// ``` QAudioEngine* self ```
void q_audioengine_start(void* self) {
    QAudioEngine_Start((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#stop)
///
/// ``` QAudioEngine* self ```
void q_audioengine_stop(void* self) {
    QAudioEngine_Stop((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#pause)
///
/// ``` QAudioEngine* self ```
void q_audioengine_pause(void* self) {
    QAudioEngine_Pause((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioengine.html#resume)
///
/// ``` QAudioEngine* self ```
void q_audioengine_resume(void* self) {
    QAudioEngine_Resume((QAudioEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audioengine_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioEngine_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audioengine_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioEngine_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioEngine* self ```
const char* q_audioengine_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioEngine* self, const char* name ```
void q_audioengine_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioEngine* self ```
bool q_audioengine_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioEngine* self, bool b ```
bool q_audioengine_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioEngine* self ```
QThread* q_audioengine_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioEngine* self, QThread* thread ```
void q_audioengine_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioEngine* self, int interval ```
int32_t q_audioengine_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioEngine* self, int id ```
void q_audioengine_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioEngine* self ```
libqt_list /* of QObject* */ q_audioengine_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioEngine* self, QObject* parent ```
void q_audioengine_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioEngine* self, QObject* filterObj ```
void q_audioengine_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioEngine* self, QObject* obj ```
void q_audioengine_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audioengine_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioEngine* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audioengine_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audioengine_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audioengine_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioEngine* self ```
void q_audioengine_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioEngine* self ```
void q_audioengine_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioEngine* self, const char* name, QVariant* value ```
bool q_audioengine_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioEngine* self, const char* name ```
QVariant* q_audioengine_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioEngine* self ```
const char** q_audioengine_dynamic_property_names(void* self) {
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
/// ``` QAudioEngine* self ```
QBindingStorage* q_audioengine_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioEngine* self ```
QBindingStorage* q_audioengine_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioEngine* self ```
void q_audioengine_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioEngine* self, void (*slot)(QObject*) ```
void q_audioengine_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioEngine* self ```
QObject* q_audioengine_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioEngine* self, const char* classname ```
bool q_audioengine_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioEngine* self ```
void q_audioengine_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioEngine* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audioengine_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioengine_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioEngine* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioengine_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioEngine* self, QObject* param1 ```
void q_audioengine_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAudioEngine* self, void (*slot)(QObject*, QObject*) ```
void q_audioengine_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
bool q_audioengine_event(void* self, void* event) {
    return QAudioEngine_Event((QAudioEngine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
bool q_audioengine_qbase_event(void* self, void* event) {
    return QAudioEngine_QBaseEvent((QAudioEngine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, bool (*slot)(QAudioEngine*, QEvent*) ```
void q_audioengine_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioEngine_OnEvent((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QObject* watched, QEvent* event ```
bool q_audioengine_event_filter(void* self, void* watched, void* event) {
    return QAudioEngine_EventFilter((QAudioEngine*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QObject* watched, QEvent* event ```
bool q_audioengine_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioEngine_QBaseEventFilter((QAudioEngine*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, bool (*slot)(QAudioEngine*, QObject*, QEvent*) ```
void q_audioengine_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioEngine_OnEventFilter((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QTimerEvent* event ```
void q_audioengine_timer_event(void* self, void* event) {
    QAudioEngine_TimerEvent((QAudioEngine*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QTimerEvent* event ```
void q_audioengine_qbase_timer_event(void* self, void* event) {
    QAudioEngine_QBaseTimerEvent((QAudioEngine*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QTimerEvent*) ```
void q_audioengine_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioEngine_OnTimerEvent((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QChildEvent* event ```
void q_audioengine_child_event(void* self, void* event) {
    QAudioEngine_ChildEvent((QAudioEngine*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QChildEvent* event ```
void q_audioengine_qbase_child_event(void* self, void* event) {
    QAudioEngine_QBaseChildEvent((QAudioEngine*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QChildEvent*) ```
void q_audioengine_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioEngine_OnChildEvent((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
void q_audioengine_custom_event(void* self, void* event) {
    QAudioEngine_CustomEvent((QAudioEngine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QEvent* event ```
void q_audioengine_qbase_custom_event(void* self, void* event) {
    QAudioEngine_QBaseCustomEvent((QAudioEngine*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QEvent*) ```
void q_audioengine_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioEngine_OnCustomEvent((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_connect_notify(void* self, void* signal) {
    QAudioEngine_ConnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_qbase_connect_notify(void* self, void* signal) {
    QAudioEngine_QBaseConnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QMetaMethod*) ```
void q_audioengine_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioEngine_OnConnectNotify((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_disconnect_notify(void* self, void* signal) {
    QAudioEngine_DisconnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
void q_audioengine_qbase_disconnect_notify(void* self, void* signal) {
    QAudioEngine_QBaseDisconnectNotify((QAudioEngine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, void (*slot)(QAudioEngine*, QMetaMethod*) ```
void q_audioengine_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioEngine_OnDisconnectNotify((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self ```
QObject* q_audioengine_sender(void* self) {
    return QAudioEngine_Sender((QAudioEngine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self ```
QObject* q_audioengine_qbase_sender(void* self) {
    return QAudioEngine_QBaseSender((QAudioEngine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, QObject* (*slot)() ```
void q_audioengine_on_sender(void* self, QObject* (*slot)()) {
    QAudioEngine_OnSender((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self ```
int32_t q_audioengine_sender_signal_index(void* self) {
    return QAudioEngine_SenderSignalIndex((QAudioEngine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self ```
int32_t q_audioengine_qbase_sender_signal_index(void* self) {
    return QAudioEngine_QBaseSenderSignalIndex((QAudioEngine*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, int32_t (*slot)() ```
void q_audioengine_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioEngine_OnSenderSignalIndex((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, const char* signal ```
int32_t q_audioengine_receivers(void* self, const char* signal) {
    return QAudioEngine_Receivers((QAudioEngine*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, const char* signal ```
int32_t q_audioengine_qbase_receivers(void* self, const char* signal) {
    return QAudioEngine_QBaseReceivers((QAudioEngine*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, int32_t (*slot)(QAudioEngine*, const char*) ```
void q_audioengine_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioEngine_OnReceivers((QAudioEngine*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
bool q_audioengine_is_signal_connected(void* self, void* signal) {
    return QAudioEngine_IsSignalConnected((QAudioEngine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioEngine* self, QMetaMethod* signal ```
bool q_audioengine_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioEngine_QBaseIsSignalConnected((QAudioEngine*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioEngine* self, bool (*slot)(QAudioEngine*, QMetaMethod*) ```
void q_audioengine_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioEngine_OnIsSignalConnected((QAudioEngine*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioEngine* self ```
void q_audioengine_delete(void* self) {
    QAudioEngine_Delete((QAudioEngine*)(self));
}