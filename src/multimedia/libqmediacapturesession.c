#include "../libqanystringview.hpp"
#include "libqaudioinput.hpp"
#include "libqaudiooutput.hpp"
#include "../libqbindingstorage.hpp"
#include "libqcamera.hpp"
#include "../libqevent.hpp"
#include "libqimagecapture.hpp"
#include "libqmediarecorder.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqvideosink.hpp"
#include "../libqcoreevent.hpp"
#include "libqmediacapturesession.hpp"
#include "libqmediacapturesession.h"

/// https://doc.qt.io/qt-6/qmediacapturesession.html

/// q_mediacapturesession_new constructs a new QMediaCaptureSession object.
///
///
QMediaCaptureSession* q_mediacapturesession_new() {
    return QMediaCaptureSession_new();
}

/// q_mediacapturesession_new2 constructs a new QMediaCaptureSession object.
///
/// ``` QObject* parent ```
QMediaCaptureSession* q_mediacapturesession_new2(void* parent) {
    return QMediaCaptureSession_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMediaCaptureSession* self ```
QMetaObject* q_mediacapturesession_meta_object(void* self) {
    return QMediaCaptureSession_MetaObject((QMediaCaptureSession*)self);
}

/// ``` QMediaCaptureSession* self, const char* param1 ```
void* q_mediacapturesession_metacast(void* self, const char* param1) {
    return QMediaCaptureSession_Metacast((QMediaCaptureSession*)self, param1);
}

/// ``` QMediaCaptureSession* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediacapturesession_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaCaptureSession_Metacall((QMediaCaptureSession*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMediaCaptureSession* self, int32_t (*slot)(QMediaCaptureSession*, enum QMetaObject__Call, int, void*) ```
void q_mediacapturesession_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMediaCaptureSession_OnMetacall((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMediaCaptureSession* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mediacapturesession_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMediaCaptureSession_QBaseMetacall((QMediaCaptureSession*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mediacapturesession_tr(const char* s) {
    libqt_string _str = QMediaCaptureSession_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInput)
///
/// ``` QMediaCaptureSession* self ```
QAudioInput* q_mediacapturesession_audio_input(void* self) {
    return QMediaCaptureSession_AudioInput((QMediaCaptureSession*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioInput)
///
/// ``` QMediaCaptureSession* self, QAudioInput* input ```
void q_mediacapturesession_set_audio_input(void* self, void* input) {
    QMediaCaptureSession_SetAudioInput((QMediaCaptureSession*)self, (QAudioInput*)input);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#camera)
///
/// ``` QMediaCaptureSession* self ```
QCamera* q_mediacapturesession_camera(void* self) {
    return QMediaCaptureSession_Camera((QMediaCaptureSession*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setCamera)
///
/// ``` QMediaCaptureSession* self, QCamera* camera ```
void q_mediacapturesession_set_camera(void* self, void* camera) {
    QMediaCaptureSession_SetCamera((QMediaCaptureSession*)self, (QCamera*)camera);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCapture)
///
/// ``` QMediaCaptureSession* self ```
QImageCapture* q_mediacapturesession_image_capture(void* self) {
    return QMediaCaptureSession_ImageCapture((QMediaCaptureSession*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setImageCapture)
///
/// ``` QMediaCaptureSession* self, QImageCapture* imageCapture ```
void q_mediacapturesession_set_image_capture(void* self, void* imageCapture) {
    QMediaCaptureSession_SetImageCapture((QMediaCaptureSession*)self, (QImageCapture*)imageCapture);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#recorder)
///
/// ``` QMediaCaptureSession* self ```
QMediaRecorder* q_mediacapturesession_recorder(void* self) {
    return QMediaCaptureSession_Recorder((QMediaCaptureSession*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setRecorder)
///
/// ``` QMediaCaptureSession* self, QMediaRecorder* recorder ```
void q_mediacapturesession_set_recorder(void* self, void* recorder) {
    QMediaCaptureSession_SetRecorder((QMediaCaptureSession*)self, (QMediaRecorder*)recorder);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoOutput)
///
/// ``` QMediaCaptureSession* self, QObject* output ```
void q_mediacapturesession_set_video_output(void* self, void* output) {
    QMediaCaptureSession_SetVideoOutput((QMediaCaptureSession*)self, (QObject*)output);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutput)
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_video_output(void* self) {
    return QMediaCaptureSession_VideoOutput((QMediaCaptureSession*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setVideoSink)
///
/// ``` QMediaCaptureSession* self, QVideoSink* sink ```
void q_mediacapturesession_set_video_sink(void* self, void* sink) {
    QMediaCaptureSession_SetVideoSink((QMediaCaptureSession*)self, (QVideoSink*)sink);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoSink)
///
/// ``` QMediaCaptureSession* self ```
QVideoSink* q_mediacapturesession_video_sink(void* self) {
    return QMediaCaptureSession_VideoSink((QMediaCaptureSession*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#setAudioOutput)
///
/// ``` QMediaCaptureSession* self, QAudioOutput* output ```
void q_mediacapturesession_set_audio_output(void* self, void* output) {
    QMediaCaptureSession_SetAudioOutput((QMediaCaptureSession*)self, (QAudioOutput*)output);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutput)
///
/// ``` QMediaCaptureSession* self ```
QAudioOutput* q_mediacapturesession_audio_output(void* self) {
    return QMediaCaptureSession_AudioOutput((QMediaCaptureSession*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioInputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_audio_input_changed(void* self) {
    QMediaCaptureSession_AudioInputChanged((QMediaCaptureSession*)self);
}

/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_audio_input_changed(void* self, void (*slot)(void*)) {
    QMediaCaptureSession_Connect_AudioInputChanged((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#cameraChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_camera_changed(void* self) {
    QMediaCaptureSession_CameraChanged((QMediaCaptureSession*)self);
}

/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_camera_changed(void* self, void (*slot)(void*)) {
    QMediaCaptureSession_Connect_CameraChanged((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#imageCaptureChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_image_capture_changed(void* self) {
    QMediaCaptureSession_ImageCaptureChanged((QMediaCaptureSession*)self);
}

/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_image_capture_changed(void* self, void (*slot)(void*)) {
    QMediaCaptureSession_Connect_ImageCaptureChanged((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#recorderChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_recorder_changed(void* self) {
    QMediaCaptureSession_RecorderChanged((QMediaCaptureSession*)self);
}

/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_recorder_changed(void* self, void (*slot)(void*)) {
    QMediaCaptureSession_Connect_RecorderChanged((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#videoOutputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_video_output_changed(void* self) {
    QMediaCaptureSession_VideoOutputChanged((QMediaCaptureSession*)self);
}

/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_video_output_changed(void* self, void (*slot)(void*)) {
    QMediaCaptureSession_Connect_VideoOutputChanged((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediacapturesession.html#audioOutputChanged)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_audio_output_changed(void* self) {
    QMediaCaptureSession_AudioOutputChanged((QMediaCaptureSession*)self);
}

/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*) ```
void q_mediacapturesession_on_audio_output_changed(void* self, void (*slot)(void*)) {
    QMediaCaptureSession_Connect_AudioOutputChanged((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mediacapturesession_tr2(const char* s, const char* c) {
    libqt_string _str = QMediaCaptureSession_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mediacapturesession_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMediaCaptureSession_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMediaCaptureSession* self ```
const char* q_mediacapturesession_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMediaCaptureSession* self, const char* name ```
void q_mediacapturesession_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMediaCaptureSession* self ```
bool q_mediacapturesession_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMediaCaptureSession* self, bool b ```
bool q_mediacapturesession_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMediaCaptureSession* self ```
QThread* q_mediacapturesession_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMediaCaptureSession* self, QThread* thread ```
void q_mediacapturesession_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaCaptureSession* self, int interval ```
int32_t q_mediacapturesession_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMediaCaptureSession* self, int id ```
void q_mediacapturesession_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMediaCaptureSession* self ```
libqt_list /* of QObject* */ q_mediacapturesession_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QMediaCaptureSession* self, QObject* parent ```
void q_mediacapturesession_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMediaCaptureSession* self, QObject* filterObj ```
void q_mediacapturesession_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMediaCaptureSession* self, QObject* obj ```
void q_mediacapturesession_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mediacapturesession_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaCaptureSession* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mediacapturesession_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mediacapturesession_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mediacapturesession_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMediaCaptureSession* self, const char* name, QVariant* value ```
bool q_mediacapturesession_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMediaCaptureSession* self, const char* name ```
QVariant* q_mediacapturesession_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMediaCaptureSession* self ```
const char** q_mediacapturesession_dynamic_property_names(void* self) {
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
/// ``` QMediaCaptureSession* self ```
QBindingStorage* q_mediacapturesession_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMediaCaptureSession* self ```
QBindingStorage* q_mediacapturesession_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMediaCaptureSession* self, void (*slot)(QObject*) ```
void q_mediacapturesession_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMediaCaptureSession* self, const char* classname ```
bool q_mediacapturesession_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMediaCaptureSession* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mediacapturesession_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediacapturesession_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMediaCaptureSession* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mediacapturesession_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMediaCaptureSession* self, QObject* param1 ```
void q_mediacapturesession_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMediaCaptureSession* self, void (*slot)(QObject*, QObject*) ```
void q_mediacapturesession_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
bool q_mediacapturesession_event(void* self, void* event) {
    return QMediaCaptureSession_Event((QMediaCaptureSession*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
bool q_mediacapturesession_qbase_event(void* self, void* event) {
    return QMediaCaptureSession_QBaseEvent((QMediaCaptureSession*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, bool (*slot)(QMediaCaptureSession*, QEvent*) ```
void q_mediacapturesession_on_event(void* self, bool (*slot)(void*, void*)) {
    QMediaCaptureSession_OnEvent((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QObject* watched, QEvent* event ```
bool q_mediacapturesession_event_filter(void* self, void* watched, void* event) {
    return QMediaCaptureSession_EventFilter((QMediaCaptureSession*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QObject* watched, QEvent* event ```
bool q_mediacapturesession_qbase_event_filter(void* self, void* watched, void* event) {
    return QMediaCaptureSession_QBaseEventFilter((QMediaCaptureSession*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, bool (*slot)(QMediaCaptureSession*, QObject*, QEvent*) ```
void q_mediacapturesession_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMediaCaptureSession_OnEventFilter((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QTimerEvent* event ```
void q_mediacapturesession_timer_event(void* self, void* event) {
    QMediaCaptureSession_TimerEvent((QMediaCaptureSession*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QTimerEvent* event ```
void q_mediacapturesession_qbase_timer_event(void* self, void* event) {
    QMediaCaptureSession_QBaseTimerEvent((QMediaCaptureSession*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QTimerEvent*) ```
void q_mediacapturesession_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMediaCaptureSession_OnTimerEvent((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QChildEvent* event ```
void q_mediacapturesession_child_event(void* self, void* event) {
    QMediaCaptureSession_ChildEvent((QMediaCaptureSession*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QChildEvent* event ```
void q_mediacapturesession_qbase_child_event(void* self, void* event) {
    QMediaCaptureSession_QBaseChildEvent((QMediaCaptureSession*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QChildEvent*) ```
void q_mediacapturesession_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMediaCaptureSession_OnChildEvent((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
void q_mediacapturesession_custom_event(void* self, void* event) {
    QMediaCaptureSession_CustomEvent((QMediaCaptureSession*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QEvent* event ```
void q_mediacapturesession_qbase_custom_event(void* self, void* event) {
    QMediaCaptureSession_QBaseCustomEvent((QMediaCaptureSession*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QEvent*) ```
void q_mediacapturesession_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMediaCaptureSession_OnCustomEvent((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_connect_notify(void* self, void* signal) {
    QMediaCaptureSession_ConnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_qbase_connect_notify(void* self, void* signal) {
    QMediaCaptureSession_QBaseConnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QMetaMethod*) ```
void q_mediacapturesession_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaCaptureSession_OnConnectNotify((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_disconnect_notify(void* self, void* signal) {
    QMediaCaptureSession_DisconnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
void q_mediacapturesession_qbase_disconnect_notify(void* self, void* signal) {
    QMediaCaptureSession_QBaseDisconnectNotify((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, void (*slot)(QMediaCaptureSession*, QMetaMethod*) ```
void q_mediacapturesession_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMediaCaptureSession_OnDisconnectNotify((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_sender(void* self) {
    return QMediaCaptureSession_Sender((QMediaCaptureSession*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
QObject* q_mediacapturesession_qbase_sender(void* self) {
    return QMediaCaptureSession_QBaseSender((QMediaCaptureSession*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QObject* (*slot)() ```
void q_mediacapturesession_on_sender(void* self, QObject* (*slot)()) {
    QMediaCaptureSession_OnSender((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
int32_t q_mediacapturesession_sender_signal_index(void* self) {
    return QMediaCaptureSession_SenderSignalIndex((QMediaCaptureSession*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self ```
int32_t q_mediacapturesession_qbase_sender_signal_index(void* self) {
    return QMediaCaptureSession_QBaseSenderSignalIndex((QMediaCaptureSession*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, int32_t (*slot)() ```
void q_mediacapturesession_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMediaCaptureSession_OnSenderSignalIndex((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, const char* signal ```
int32_t q_mediacapturesession_receivers(void* self, const char* signal) {
    return QMediaCaptureSession_Receivers((QMediaCaptureSession*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, const char* signal ```
int32_t q_mediacapturesession_qbase_receivers(void* self, const char* signal) {
    return QMediaCaptureSession_QBaseReceivers((QMediaCaptureSession*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, int32_t (*slot)(QMediaCaptureSession*, const char*) ```
void q_mediacapturesession_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMediaCaptureSession_OnReceivers((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
bool q_mediacapturesession_is_signal_connected(void* self, void* signal) {
    return QMediaCaptureSession_IsSignalConnected((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, QMetaMethod* signal ```
bool q_mediacapturesession_qbase_is_signal_connected(void* self, void* signal) {
    return QMediaCaptureSession_QBaseIsSignalConnected((QMediaCaptureSession*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMediaCaptureSession* self, bool (*slot)(QMediaCaptureSession*, QMetaMethod*) ```
void q_mediacapturesession_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMediaCaptureSession_OnIsSignalConnected((QMediaCaptureSession*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMediaCaptureSession* self ```
void q_mediacapturesession_delete(void* self) {
    QMediaCaptureSession_Delete((QMediaCaptureSession*)(self));
}