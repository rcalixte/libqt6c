#include "../libqanystringview.hpp"
#include "libqaudiobuffer.hpp"
#include "libqaudioformat.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqaudiodecoder.hpp"
#include "libqaudiodecoder.h"

/// https://doc.qt.io/qt-6/qaudiodecoder.html

/// q_audiodecoder_new constructs a new QAudioDecoder object.
///
///
QAudioDecoder* q_audiodecoder_new() {
    return QAudioDecoder_new();
}

/// q_audiodecoder_new2 constructs a new QAudioDecoder object.
///
/// ``` QObject* parent ```
QAudioDecoder* q_audiodecoder_new2(void* parent) {
    return QAudioDecoder_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioDecoder* self ```
QMetaObject* q_audiodecoder_meta_object(void* self) {
    return QAudioDecoder_MetaObject((QAudioDecoder*)self);
}

/// ``` QAudioDecoder* self, const char* param1 ```
void* q_audiodecoder_metacast(void* self, const char* param1) {
    return QAudioDecoder_Metacast((QAudioDecoder*)self, param1);
}

/// ``` QAudioDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiodecoder_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioDecoder_Metacall((QAudioDecoder*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAudioDecoder* self, int32_t (*slot)(QAudioDecoder*, enum QMetaObject__Call, int, void*) ```
void q_audiodecoder_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioDecoder_OnMetacall((QAudioDecoder*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAudioDecoder* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiodecoder_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioDecoder_QBaseMetacall((QAudioDecoder*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiodecoder_tr(const char* s) {
    libqt_string _str = QAudioDecoder_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#isSupported)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_supported(void* self) {
    return QAudioDecoder_IsSupported((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecoding)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_decoding(void* self) {
    return QAudioDecoder_IsDecoding((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#source)
///
/// ``` QAudioDecoder* self ```
QUrl* q_audiodecoder_source(void* self) {
    return QAudioDecoder_Source((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#setSource)
///
/// ``` QAudioDecoder* self, QUrl* fileName ```
void q_audiodecoder_set_source(void* self, void* fileName) {
    QAudioDecoder_SetSource((QAudioDecoder*)self, (QUrl*)fileName);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceDevice)
///
/// ``` QAudioDecoder* self ```
QIODevice* q_audiodecoder_source_device(void* self) {
    return QAudioDecoder_SourceDevice((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#setSourceDevice)
///
/// ``` QAudioDecoder* self, QIODevice* device ```
void q_audiodecoder_set_source_device(void* self, void* device) {
    QAudioDecoder_SetSourceDevice((QAudioDecoder*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#audioFormat)
///
/// ``` QAudioDecoder* self ```
QAudioFormat* q_audiodecoder_audio_format(void* self) {
    return QAudioDecoder_AudioFormat((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#setAudioFormat)
///
/// ``` QAudioDecoder* self, QAudioFormat* format ```
void q_audiodecoder_set_audio_format(void* self, void* format) {
    QAudioDecoder_SetAudioFormat((QAudioDecoder*)self, (QAudioFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// ``` QAudioDecoder* self ```
int64_t q_audiodecoder_error(void* self) {
    return QAudioDecoder_Error((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#errorString)
///
/// ``` QAudioDecoder* self ```
const char* q_audiodecoder_error_string(void* self) {
    libqt_string _str = QAudioDecoder_ErrorString((QAudioDecoder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#read)
///
/// ``` QAudioDecoder* self ```
QAudioBuffer* q_audiodecoder_read(void* self) {
    return QAudioDecoder_Read((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailable)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_buffer_available(void* self) {
    return QAudioDecoder_BufferAvailable((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#position)
///
/// ``` QAudioDecoder* self ```
long long q_audiodecoder_position(void* self) {
    return QAudioDecoder_Position((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#duration)
///
/// ``` QAudioDecoder* self ```
long long q_audiodecoder_duration(void* self) {
    return QAudioDecoder_Duration((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#start)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_start(void* self) {
    QAudioDecoder_Start((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#stop)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_stop(void* self) {
    QAudioDecoder_Stop((QAudioDecoder*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferAvailableChanged)
///
/// ``` QAudioDecoder* self, bool param1 ```
void q_audiodecoder_buffer_available_changed(void* self, bool param1) {
    QAudioDecoder_BufferAvailableChanged((QAudioDecoder*)self, param1);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, bool) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#bufferReady)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_buffer_ready(void* self) {
    QAudioDecoder_BufferReady((QAudioDecoder*)self);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#finished)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_finished(void* self) {
    QAudioDecoder_Finished((QAudioDecoder*)self);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#isDecodingChanged)
///
/// ``` QAudioDecoder* self, bool param1 ```
void q_audiodecoder_is_decoding_changed(void* self, bool param1) {
    QAudioDecoder_IsDecodingChanged((QAudioDecoder*)self, param1);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, bool) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#formatChanged)
///
/// ``` QAudioDecoder* self, QAudioFormat* format ```
void q_audiodecoder_format_changed(void* self, void* format) {
    QAudioDecoder_FormatChanged((QAudioDecoder*)self, (QAudioFormat*)format);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QAudioFormat*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#error)
///
/// ``` QAudioDecoder* self, enum QAudioDecoder__Error errorVal ```
void q_audiodecoder_error_with_error_val(void* self, int64_t errorVal) {
    QAudioDecoder_ErrorWithErrorVal((QAudioDecoder*)self, errorVal);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, enum QAudioDecoder__Error) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#sourceChanged)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_source_changed(void* self) {
    QAudioDecoder_SourceChanged((QAudioDecoder*)self);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#positionChanged)
///
/// ``` QAudioDecoder* self, long long position ```
void q_audiodecoder_position_changed(void* self, long long position) {
    QAudioDecoder_PositionChanged((QAudioDecoder*)self, position);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, long long) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiodecoder.html#durationChanged)
///
/// ``` QAudioDecoder* self, long long duration ```
void q_audiodecoder_duration_changed(void* self, long long duration) {
    QAudioDecoder_DurationChanged((QAudioDecoder*)self, duration);
}

/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, long long) ```

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiodecoder_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioDecoder_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiodecoder_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioDecoder_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioDecoder* self ```
const char* q_audiodecoder_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioDecoder* self, const char* name ```
void q_audiodecoder_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioDecoder* self ```
bool q_audiodecoder_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioDecoder* self, bool b ```
bool q_audiodecoder_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioDecoder* self ```
QThread* q_audiodecoder_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioDecoder* self, QThread* thread ```
void q_audiodecoder_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioDecoder* self, int interval ```
int32_t q_audiodecoder_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioDecoder* self, int id ```
void q_audiodecoder_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioDecoder* self ```
libqt_list /* of QObject* */ q_audiodecoder_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioDecoder* self, QObject* parent ```
void q_audiodecoder_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioDecoder* self, QObject* filterObj ```
void q_audiodecoder_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioDecoder* self, QObject* obj ```
void q_audiodecoder_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiodecoder_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioDecoder* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiodecoder_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiodecoder_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiodecoder_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioDecoder* self, const char* name, QVariant* value ```
bool q_audiodecoder_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioDecoder* self, const char* name ```
QVariant* q_audiodecoder_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioDecoder* self ```
const char** q_audiodecoder_dynamic_property_names(void* self) {
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
/// ``` QAudioDecoder* self ```
QBindingStorage* q_audiodecoder_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioDecoder* self ```
QBindingStorage* q_audiodecoder_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioDecoder* self, void (*slot)(QObject*) ```
void q_audiodecoder_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioDecoder* self ```
QObject* q_audiodecoder_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioDecoder* self, const char* classname ```
bool q_audiodecoder_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioDecoder* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiodecoder_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiodecoder_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioDecoder* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiodecoder_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioDecoder* self, QObject* param1 ```
void q_audiodecoder_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAudioDecoder* self, void (*slot)(QObject*, QObject*) ```
void q_audiodecoder_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
bool q_audiodecoder_event(void* self, void* event) {
    return QAudioDecoder_Event((QAudioDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
bool q_audiodecoder_qbase_event(void* self, void* event) {
    return QAudioDecoder_QBaseEvent((QAudioDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, bool (*slot)(QAudioDecoder*, QEvent*) ```
void q_audiodecoder_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioDecoder_OnEvent((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QObject* watched, QEvent* event ```
bool q_audiodecoder_event_filter(void* self, void* watched, void* event) {
    return QAudioDecoder_EventFilter((QAudioDecoder*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QObject* watched, QEvent* event ```
bool q_audiodecoder_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioDecoder_QBaseEventFilter((QAudioDecoder*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, bool (*slot)(QAudioDecoder*, QObject*, QEvent*) ```
void q_audiodecoder_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioDecoder_OnEventFilter((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QTimerEvent* event ```
void q_audiodecoder_timer_event(void* self, void* event) {
    QAudioDecoder_TimerEvent((QAudioDecoder*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QTimerEvent* event ```
void q_audiodecoder_qbase_timer_event(void* self, void* event) {
    QAudioDecoder_QBaseTimerEvent((QAudioDecoder*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QTimerEvent*) ```
void q_audiodecoder_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioDecoder_OnTimerEvent((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QChildEvent* event ```
void q_audiodecoder_child_event(void* self, void* event) {
    QAudioDecoder_ChildEvent((QAudioDecoder*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QChildEvent* event ```
void q_audiodecoder_qbase_child_event(void* self, void* event) {
    QAudioDecoder_QBaseChildEvent((QAudioDecoder*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QChildEvent*) ```
void q_audiodecoder_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioDecoder_OnChildEvent((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
void q_audiodecoder_custom_event(void* self, void* event) {
    QAudioDecoder_CustomEvent((QAudioDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QEvent* event ```
void q_audiodecoder_qbase_custom_event(void* self, void* event) {
    QAudioDecoder_QBaseCustomEvent((QAudioDecoder*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QEvent*) ```
void q_audiodecoder_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioDecoder_OnCustomEvent((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_connect_notify(void* self, void* signal) {
    QAudioDecoder_ConnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_qbase_connect_notify(void* self, void* signal) {
    QAudioDecoder_QBaseConnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QMetaMethod*) ```
void q_audiodecoder_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioDecoder_OnConnectNotify((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_disconnect_notify(void* self, void* signal) {
    QAudioDecoder_DisconnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
void q_audiodecoder_qbase_disconnect_notify(void* self, void* signal) {
    QAudioDecoder_QBaseDisconnectNotify((QAudioDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, void (*slot)(QAudioDecoder*, QMetaMethod*) ```
void q_audiodecoder_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioDecoder_OnDisconnectNotify((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self ```
QObject* q_audiodecoder_sender(void* self) {
    return QAudioDecoder_Sender((QAudioDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self ```
QObject* q_audiodecoder_qbase_sender(void* self) {
    return QAudioDecoder_QBaseSender((QAudioDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, QObject* (*slot)() ```
void q_audiodecoder_on_sender(void* self, QObject* (*slot)()) {
    QAudioDecoder_OnSender((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self ```
int32_t q_audiodecoder_sender_signal_index(void* self) {
    return QAudioDecoder_SenderSignalIndex((QAudioDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self ```
int32_t q_audiodecoder_qbase_sender_signal_index(void* self) {
    return QAudioDecoder_QBaseSenderSignalIndex((QAudioDecoder*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, int32_t (*slot)() ```
void q_audiodecoder_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioDecoder_OnSenderSignalIndex((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, const char* signal ```
int32_t q_audiodecoder_receivers(void* self, const char* signal) {
    return QAudioDecoder_Receivers((QAudioDecoder*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, const char* signal ```
int32_t q_audiodecoder_qbase_receivers(void* self, const char* signal) {
    return QAudioDecoder_QBaseReceivers((QAudioDecoder*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, int32_t (*slot)(QAudioDecoder*, const char*) ```
void q_audiodecoder_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioDecoder_OnReceivers((QAudioDecoder*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
bool q_audiodecoder_is_signal_connected(void* self, void* signal) {
    return QAudioDecoder_IsSignalConnected((QAudioDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioDecoder* self, QMetaMethod* signal ```
bool q_audiodecoder_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioDecoder_QBaseIsSignalConnected((QAudioDecoder*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioDecoder* self, bool (*slot)(QAudioDecoder*, QMetaMethod*) ```
void q_audiodecoder_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioDecoder_OnIsSignalConnected((QAudioDecoder*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioDecoder* self ```
void q_audiodecoder_delete(void* self) {
    QAudioDecoder_Delete((QAudioDecoder*)(self));
}