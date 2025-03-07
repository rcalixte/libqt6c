#include "../libqanystringview.hpp"
#include "libqaudiodevice.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqsoundeffect.hpp"
#include "libqsoundeffect.h"

/// https://doc.qt.io/qt-6/qsoundeffect.html

/// q_soundeffect_new constructs a new QSoundEffect object.
///
///
QSoundEffect* q_soundeffect_new() {
    return QSoundEffect_new();
}

/// q_soundeffect_new2 constructs a new QSoundEffect object.
///
/// ``` QAudioDevice* audioDevice ```
QSoundEffect* q_soundeffect_new2(void* audioDevice) {
    return QSoundEffect_new2((QAudioDevice*)audioDevice);
}

/// q_soundeffect_new3 constructs a new QSoundEffect object.
///
/// ``` QObject* parent ```
QSoundEffect* q_soundeffect_new3(void* parent) {
    return QSoundEffect_new3((QObject*)parent);
}

/// q_soundeffect_new4 constructs a new QSoundEffect object.
///
/// ``` QAudioDevice* audioDevice, QObject* parent ```
QSoundEffect* q_soundeffect_new4(void* audioDevice, void* parent) {
    return QSoundEffect_new4((QAudioDevice*)audioDevice, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSoundEffect* self ```
QMetaObject* q_soundeffect_meta_object(void* self) {
    return QSoundEffect_MetaObject((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, const char* param1 ```
void* q_soundeffect_metacast(void* self, const char* param1) {
    return QSoundEffect_Metacast((QSoundEffect*)self, param1);
}

/// ``` QSoundEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_soundeffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSoundEffect_Metacall((QSoundEffect*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSoundEffect* self, int32_t (*slot)(QSoundEffect*, enum QMetaObject__Call, int, void*) ```
void q_soundeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSoundEffect_OnMetacall((QSoundEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSoundEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_soundeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSoundEffect_QBaseMetacall((QSoundEffect*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_soundeffect_tr(const char* s) {
    libqt_string _str = QSoundEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#supportedMimeTypes)
///
///
const char** q_soundeffect_supported_mime_types() {
    libqt_list _arr = QSoundEffect_SupportedMimeTypes();
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

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#source)
///
/// ``` QSoundEffect* self ```
QUrl* q_soundeffect_source(void* self) {
    return QSoundEffect_Source((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setSource)
///
/// ``` QSoundEffect* self, QUrl* url ```
void q_soundeffect_set_source(void* self, void* url) {
    QSoundEffect_SetSource((QSoundEffect*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopCount)
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_loop_count(void* self) {
    return QSoundEffect_LoopCount((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemaining)
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_loops_remaining(void* self) {
    return QSoundEffect_LoopsRemaining((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setLoopCount)
///
/// ``` QSoundEffect* self, int loopCount ```
void q_soundeffect_set_loop_count(void* self, int loopCount) {
    QSoundEffect_SetLoopCount((QSoundEffect*)self, loopCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#audioDevice)
///
/// ``` QSoundEffect* self ```
QAudioDevice* q_soundeffect_audio_device(void* self) {
    return QSoundEffect_AudioDevice((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setAudioDevice)
///
/// ``` QSoundEffect* self, QAudioDevice* device ```
void q_soundeffect_set_audio_device(void* self, void* device) {
    QSoundEffect_SetAudioDevice((QSoundEffect*)self, (QAudioDevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#volume)
///
/// ``` QSoundEffect* self ```
float q_soundeffect_volume(void* self) {
    return QSoundEffect_Volume((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setVolume)
///
/// ``` QSoundEffect* self, float volume ```
void q_soundeffect_set_volume(void* self, float volume) {
    QSoundEffect_SetVolume((QSoundEffect*)self, volume);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#isMuted)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_muted(void* self) {
    return QSoundEffect_IsMuted((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#setMuted)
///
/// ``` QSoundEffect* self, bool muted ```
void q_soundeffect_set_muted(void* self, bool muted) {
    QSoundEffect_SetMuted((QSoundEffect*)self, muted);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#isLoaded)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_loaded(void* self) {
    return QSoundEffect_IsLoaded((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#isPlaying)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_playing(void* self) {
    return QSoundEffect_IsPlaying((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#status)
///
/// ``` QSoundEffect* self ```
int64_t q_soundeffect_status(void* self) {
    return QSoundEffect_Status((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#sourceChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_source_changed(void* self) {
    QSoundEffect_SourceChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_source_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_SourceChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopCountChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_loop_count_changed(void* self) {
    QSoundEffect_LoopCountChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_loop_count_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_LoopCountChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loopsRemainingChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_loops_remaining_changed(void* self) {
    QSoundEffect_LoopsRemainingChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_loops_remaining_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_LoopsRemainingChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#volumeChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_volume_changed(void* self) {
    QSoundEffect_VolumeChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_volume_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_VolumeChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#mutedChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_muted_changed(void* self) {
    QSoundEffect_MutedChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_muted_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_MutedChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#loadedChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_loaded_changed(void* self) {
    QSoundEffect_LoadedChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_loaded_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_LoadedChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#playingChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_playing_changed(void* self) {
    QSoundEffect_PlayingChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_playing_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_PlayingChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#statusChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_status_changed(void* self) {
    QSoundEffect_StatusChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_status_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_StatusChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#audioDeviceChanged)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_audio_device_changed(void* self) {
    QSoundEffect_AudioDeviceChanged((QSoundEffect*)self);
}

/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*) ```
void q_soundeffect_on_audio_device_changed(void* self, void (*slot)(void*)) {
    QSoundEffect_Connect_AudioDeviceChanged((QSoundEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#play)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_play(void* self) {
    QSoundEffect_Play((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsoundeffect.html#stop)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_stop(void* self) {
    QSoundEffect_Stop((QSoundEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_soundeffect_tr2(const char* s, const char* c) {
    libqt_string _str = QSoundEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_soundeffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSoundEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSoundEffect* self ```
const char* q_soundeffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSoundEffect* self, const char* name ```
void q_soundeffect_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSoundEffect* self ```
bool q_soundeffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSoundEffect* self, bool b ```
bool q_soundeffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSoundEffect* self ```
QThread* q_soundeffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSoundEffect* self, QThread* thread ```
void q_soundeffect_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSoundEffect* self, int interval ```
int32_t q_soundeffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSoundEffect* self, int id ```
void q_soundeffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSoundEffect* self ```
libqt_list /* of QObject* */ q_soundeffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSoundEffect* self, QObject* parent ```
void q_soundeffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSoundEffect* self, QObject* filterObj ```
void q_soundeffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSoundEffect* self, QObject* obj ```
void q_soundeffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_soundeffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSoundEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_soundeffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_soundeffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_soundeffect_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSoundEffect* self, const char* name, QVariant* value ```
bool q_soundeffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSoundEffect* self, const char* name ```
QVariant* q_soundeffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSoundEffect* self ```
const char** q_soundeffect_dynamic_property_names(void* self) {
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
/// ``` QSoundEffect* self ```
QBindingStorage* q_soundeffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSoundEffect* self ```
QBindingStorage* q_soundeffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSoundEffect* self, void (*slot)(QObject*) ```
void q_soundeffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSoundEffect* self ```
QObject* q_soundeffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSoundEffect* self, const char* classname ```
bool q_soundeffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSoundEffect* self ```
void q_soundeffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSoundEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_soundeffect_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_soundeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSoundEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_soundeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSoundEffect* self, QObject* param1 ```
void q_soundeffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSoundEffect* self, void (*slot)(QObject*, QObject*) ```
void q_soundeffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
bool q_soundeffect_event(void* self, void* event) {
    return QSoundEffect_Event((QSoundEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
bool q_soundeffect_qbase_event(void* self, void* event) {
    return QSoundEffect_QBaseEvent((QSoundEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, bool (*slot)(QSoundEffect*, QEvent*) ```
void q_soundeffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QSoundEffect_OnEvent((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QObject* watched, QEvent* event ```
bool q_soundeffect_event_filter(void* self, void* watched, void* event) {
    return QSoundEffect_EventFilter((QSoundEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QObject* watched, QEvent* event ```
bool q_soundeffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QSoundEffect_QBaseEventFilter((QSoundEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, bool (*slot)(QSoundEffect*, QObject*, QEvent*) ```
void q_soundeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSoundEffect_OnEventFilter((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QTimerEvent* event ```
void q_soundeffect_timer_event(void* self, void* event) {
    QSoundEffect_TimerEvent((QSoundEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QTimerEvent* event ```
void q_soundeffect_qbase_timer_event(void* self, void* event) {
    QSoundEffect_QBaseTimerEvent((QSoundEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QTimerEvent*) ```
void q_soundeffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnTimerEvent((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QChildEvent* event ```
void q_soundeffect_child_event(void* self, void* event) {
    QSoundEffect_ChildEvent((QSoundEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QChildEvent* event ```
void q_soundeffect_qbase_child_event(void* self, void* event) {
    QSoundEffect_QBaseChildEvent((QSoundEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QChildEvent*) ```
void q_soundeffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnChildEvent((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
void q_soundeffect_custom_event(void* self, void* event) {
    QSoundEffect_CustomEvent((QSoundEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QEvent* event ```
void q_soundeffect_qbase_custom_event(void* self, void* event) {
    QSoundEffect_QBaseCustomEvent((QSoundEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QEvent*) ```
void q_soundeffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnCustomEvent((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_connect_notify(void* self, void* signal) {
    QSoundEffect_ConnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_qbase_connect_notify(void* self, void* signal) {
    QSoundEffect_QBaseConnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QMetaMethod*) ```
void q_soundeffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnConnectNotify((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_disconnect_notify(void* self, void* signal) {
    QSoundEffect_DisconnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
void q_soundeffect_qbase_disconnect_notify(void* self, void* signal) {
    QSoundEffect_QBaseDisconnectNotify((QSoundEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, void (*slot)(QSoundEffect*, QMetaMethod*) ```
void q_soundeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSoundEffect_OnDisconnectNotify((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self ```
QObject* q_soundeffect_sender(void* self) {
    return QSoundEffect_Sender((QSoundEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self ```
QObject* q_soundeffect_qbase_sender(void* self) {
    return QSoundEffect_QBaseSender((QSoundEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, QObject* (*slot)() ```
void q_soundeffect_on_sender(void* self, QObject* (*slot)()) {
    QSoundEffect_OnSender((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_sender_signal_index(void* self) {
    return QSoundEffect_SenderSignalIndex((QSoundEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self ```
int32_t q_soundeffect_qbase_sender_signal_index(void* self) {
    return QSoundEffect_QBaseSenderSignalIndex((QSoundEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, int32_t (*slot)() ```
void q_soundeffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSoundEffect_OnSenderSignalIndex((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, const char* signal ```
int32_t q_soundeffect_receivers(void* self, const char* signal) {
    return QSoundEffect_Receivers((QSoundEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, const char* signal ```
int32_t q_soundeffect_qbase_receivers(void* self, const char* signal) {
    return QSoundEffect_QBaseReceivers((QSoundEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, int32_t (*slot)(QSoundEffect*, const char*) ```
void q_soundeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSoundEffect_OnReceivers((QSoundEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
bool q_soundeffect_is_signal_connected(void* self, void* signal) {
    return QSoundEffect_IsSignalConnected((QSoundEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSoundEffect* self, QMetaMethod* signal ```
bool q_soundeffect_qbase_is_signal_connected(void* self, void* signal) {
    return QSoundEffect_QBaseIsSignalConnected((QSoundEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSoundEffect* self, bool (*slot)(QSoundEffect*, QMetaMethod*) ```
void q_soundeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSoundEffect_OnIsSignalConnected((QSoundEffect*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSoundEffect* self ```
void q_soundeffect_delete(void* self) {
    QSoundEffect_Delete((QSoundEffect*)(self));
}