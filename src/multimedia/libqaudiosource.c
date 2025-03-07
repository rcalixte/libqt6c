#include "../libqanystringview.hpp"
#include "libqaudiodevice.hpp"
#include "libqaudioformat.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqaudiosource.hpp"
#include "libqaudiosource.h"

/// https://doc.qt.io/qt-6/qaudiosource.html

/// q_audiosource_new constructs a new QAudioSource object.
///
///
QAudioSource* q_audiosource_new() {
    return QAudioSource_new();
}

/// q_audiosource_new2 constructs a new QAudioSource object.
///
/// ``` QAudioDevice* audioDeviceInfo ```
QAudioSource* q_audiosource_new2(void* audioDeviceInfo) {
    return QAudioSource_new2((QAudioDevice*)audioDeviceInfo);
}

/// q_audiosource_new3 constructs a new QAudioSource object.
///
/// ``` QAudioFormat* format ```
QAudioSource* q_audiosource_new3(void* format) {
    return QAudioSource_new3((QAudioFormat*)format);
}

/// q_audiosource_new4 constructs a new QAudioSource object.
///
/// ``` QAudioFormat* format, QObject* parent ```
QAudioSource* q_audiosource_new4(void* format, void* parent) {
    return QAudioSource_new4((QAudioFormat*)format, (QObject*)parent);
}

/// q_audiosource_new5 constructs a new QAudioSource object.
///
/// ``` QAudioDevice* audioDeviceInfo, QAudioFormat* format ```
QAudioSource* q_audiosource_new5(void* audioDeviceInfo, void* format) {
    return QAudioSource_new5((QAudioDevice*)audioDeviceInfo, (QAudioFormat*)format);
}

/// q_audiosource_new6 constructs a new QAudioSource object.
///
/// ``` QAudioDevice* audioDeviceInfo, QAudioFormat* format, QObject* parent ```
QAudioSource* q_audiosource_new6(void* audioDeviceInfo, void* format, void* parent) {
    return QAudioSource_new6((QAudioDevice*)audioDeviceInfo, (QAudioFormat*)format, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioSource* self ```
QMetaObject* q_audiosource_meta_object(void* self) {
    return QAudioSource_MetaObject((QAudioSource*)self);
}

/// ``` QAudioSource* self, const char* param1 ```
void* q_audiosource_metacast(void* self, const char* param1) {
    return QAudioSource_Metacast((QAudioSource*)self, param1);
}

/// ``` QAudioSource* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiosource_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioSource_Metacall((QAudioSource*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAudioSource* self, int32_t (*slot)(QAudioSource*, enum QMetaObject__Call, int, void*) ```
void q_audiosource_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioSource_OnMetacall((QAudioSource*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAudioSource* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audiosource_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioSource_QBaseMetacall((QAudioSource*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audiosource_tr(const char* s) {
    libqt_string _str = QAudioSource_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#isNull)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_null(void* self) {
    return QAudioSource_IsNull((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#format)
///
/// ``` QAudioSource* self ```
QAudioFormat* q_audiosource_format(void* self) {
    return QAudioSource_Format((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#start)
///
/// ``` QAudioSource* self, QIODevice* device ```
void q_audiosource_start(void* self, void* device) {
    QAudioSource_Start((QAudioSource*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#start)
///
/// ``` QAudioSource* self ```
QIODevice* q_audiosource_start2(void* self) {
    return QAudioSource_Start2((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#stop)
///
/// ``` QAudioSource* self ```
void q_audiosource_stop(void* self) {
    QAudioSource_Stop((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#reset)
///
/// ``` QAudioSource* self ```
void q_audiosource_reset(void* self) {
    QAudioSource_Reset((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#suspend)
///
/// ``` QAudioSource* self ```
void q_audiosource_suspend(void* self) {
    QAudioSource_Suspend((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#resume)
///
/// ``` QAudioSource* self ```
void q_audiosource_resume(void* self) {
    QAudioSource_Resume((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#setBufferSize)
///
/// ``` QAudioSource* self, int64_t bytes ```
void q_audiosource_set_buffer_size(void* self, int64_t bytes) {
    QAudioSource_SetBufferSize((QAudioSource*)self, bytes);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#bufferSize)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_buffer_size(void* self) {
    return QAudioSource_BufferSize((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#bytesAvailable)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_bytes_available(void* self) {
    return QAudioSource_BytesAvailable((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#setVolume)
///
/// ``` QAudioSource* self, double volume ```
void q_audiosource_set_volume(void* self, double volume) {
    QAudioSource_SetVolume((QAudioSource*)self, volume);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#volume)
///
/// ``` QAudioSource* self ```
double q_audiosource_volume(void* self) {
    return QAudioSource_Volume((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#processedUSecs)
///
/// ``` QAudioSource* self ```
long long q_audiosource_processed_u_secs(void* self) {
    return QAudioSource_ProcessedUSecs((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#elapsedUSecs)
///
/// ``` QAudioSource* self ```
long long q_audiosource_elapsed_u_secs(void* self) {
    return QAudioSource_ElapsedUSecs((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#error)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_error(void* self) {
    return QAudioSource_Error((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#state)
///
/// ``` QAudioSource* self ```
int64_t q_audiosource_state(void* self) {
    return QAudioSource_State((QAudioSource*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudiosource.html#stateChanged)
///
/// ``` QAudioSource* self, enum QAudio__State state ```
void q_audiosource_state_changed(void* self, int64_t state) {
    QAudioSource_StateChanged((QAudioSource*)self, state);
}

/// ``` QAudioSource* self, void (*slot)(QAudioSource*, enum QAudio__State) ```
void q_audiosource_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QAudioSource_Connect_StateChanged((QAudioSource*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audiosource_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioSource_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audiosource_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioSource_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioSource* self ```
const char* q_audiosource_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioSource* self, const char* name ```
void q_audiosource_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioSource* self ```
bool q_audiosource_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioSource* self ```
bool q_audiosource_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioSource* self, bool b ```
bool q_audiosource_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioSource* self ```
QThread* q_audiosource_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioSource* self, QThread* thread ```
void q_audiosource_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioSource* self, int interval ```
int32_t q_audiosource_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioSource* self, int id ```
void q_audiosource_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioSource* self ```
libqt_list /* of QObject* */ q_audiosource_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioSource* self, QObject* parent ```
void q_audiosource_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioSource* self, QObject* filterObj ```
void q_audiosource_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioSource* self, QObject* obj ```
void q_audiosource_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audiosource_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioSource* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audiosource_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audiosource_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audiosource_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioSource* self ```
void q_audiosource_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioSource* self ```
void q_audiosource_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioSource* self, const char* name, QVariant* value ```
bool q_audiosource_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioSource* self, const char* name ```
QVariant* q_audiosource_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioSource* self ```
const char** q_audiosource_dynamic_property_names(void* self) {
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
/// ``` QAudioSource* self ```
QBindingStorage* q_audiosource_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioSource* self ```
QBindingStorage* q_audiosource_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSource* self ```
void q_audiosource_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioSource* self, void (*slot)(QObject*) ```
void q_audiosource_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioSource* self ```
QObject* q_audiosource_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioSource* self, const char* classname ```
bool q_audiosource_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioSource* self ```
void q_audiosource_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioSource* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audiosource_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiosource_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioSource* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audiosource_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioSource* self, QObject* param1 ```
void q_audiosource_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAudioSource* self, void (*slot)(QObject*, QObject*) ```
void q_audiosource_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
bool q_audiosource_event(void* self, void* event) {
    return QAudioSource_Event((QAudioSource*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
bool q_audiosource_qbase_event(void* self, void* event) {
    return QAudioSource_QBaseEvent((QAudioSource*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, bool (*slot)(QAudioSource*, QEvent*) ```
void q_audiosource_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioSource_OnEvent((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QObject* watched, QEvent* event ```
bool q_audiosource_event_filter(void* self, void* watched, void* event) {
    return QAudioSource_EventFilter((QAudioSource*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QObject* watched, QEvent* event ```
bool q_audiosource_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioSource_QBaseEventFilter((QAudioSource*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, bool (*slot)(QAudioSource*, QObject*, QEvent*) ```
void q_audiosource_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioSource_OnEventFilter((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QTimerEvent* event ```
void q_audiosource_timer_event(void* self, void* event) {
    QAudioSource_TimerEvent((QAudioSource*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QTimerEvent* event ```
void q_audiosource_qbase_timer_event(void* self, void* event) {
    QAudioSource_QBaseTimerEvent((QAudioSource*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QTimerEvent*) ```
void q_audiosource_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioSource_OnTimerEvent((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QChildEvent* event ```
void q_audiosource_child_event(void* self, void* event) {
    QAudioSource_ChildEvent((QAudioSource*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QChildEvent* event ```
void q_audiosource_qbase_child_event(void* self, void* event) {
    QAudioSource_QBaseChildEvent((QAudioSource*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QChildEvent*) ```
void q_audiosource_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioSource_OnChildEvent((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
void q_audiosource_custom_event(void* self, void* event) {
    QAudioSource_CustomEvent((QAudioSource*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QEvent* event ```
void q_audiosource_qbase_custom_event(void* self, void* event) {
    QAudioSource_QBaseCustomEvent((QAudioSource*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QEvent*) ```
void q_audiosource_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioSource_OnCustomEvent((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_connect_notify(void* self, void* signal) {
    QAudioSource_ConnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_qbase_connect_notify(void* self, void* signal) {
    QAudioSource_QBaseConnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QMetaMethod*) ```
void q_audiosource_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioSource_OnConnectNotify((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_disconnect_notify(void* self, void* signal) {
    QAudioSource_DisconnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
void q_audiosource_qbase_disconnect_notify(void* self, void* signal) {
    QAudioSource_QBaseDisconnectNotify((QAudioSource*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, void (*slot)(QAudioSource*, QMetaMethod*) ```
void q_audiosource_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioSource_OnDisconnectNotify((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self ```
QObject* q_audiosource_sender(void* self) {
    return QAudioSource_Sender((QAudioSource*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self ```
QObject* q_audiosource_qbase_sender(void* self) {
    return QAudioSource_QBaseSender((QAudioSource*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, QObject* (*slot)() ```
void q_audiosource_on_sender(void* self, QObject* (*slot)()) {
    QAudioSource_OnSender((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self ```
int32_t q_audiosource_sender_signal_index(void* self) {
    return QAudioSource_SenderSignalIndex((QAudioSource*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self ```
int32_t q_audiosource_qbase_sender_signal_index(void* self) {
    return QAudioSource_QBaseSenderSignalIndex((QAudioSource*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, int32_t (*slot)() ```
void q_audiosource_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioSource_OnSenderSignalIndex((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, const char* signal ```
int32_t q_audiosource_receivers(void* self, const char* signal) {
    return QAudioSource_Receivers((QAudioSource*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, const char* signal ```
int32_t q_audiosource_qbase_receivers(void* self, const char* signal) {
    return QAudioSource_QBaseReceivers((QAudioSource*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, int32_t (*slot)(QAudioSource*, const char*) ```
void q_audiosource_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioSource_OnReceivers((QAudioSource*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
bool q_audiosource_is_signal_connected(void* self, void* signal) {
    return QAudioSource_IsSignalConnected((QAudioSource*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioSource* self, QMetaMethod* signal ```
bool q_audiosource_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioSource_QBaseIsSignalConnected((QAudioSource*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioSource* self, bool (*slot)(QAudioSource*, QMetaMethod*) ```
void q_audiosource_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioSource_OnIsSignalConnected((QAudioSource*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioSource* self ```
void q_audiosource_delete(void* self) {
    QAudioSource_Delete((QAudioSource*)(self));
}