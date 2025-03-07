#include "../libqanystringview.hpp"
#include "libqaudioengine.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqambientsound.hpp"
#include "libqambientsound.h"

/// https://doc.qt.io/qt-6/qambientsound.html

/// q_ambientsound_new constructs a new QAmbientSound object.
///
/// ``` QAudioEngine* engine ```
QAmbientSound* q_ambientsound_new(void* engine) {
    return QAmbientSound_new((QAudioEngine*)engine);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAmbientSound* self ```
QMetaObject* q_ambientsound_meta_object(void* self) {
    return QAmbientSound_MetaObject((QAmbientSound*)self);
}

/// ``` QAmbientSound* self, const char* param1 ```
void* q_ambientsound_metacast(void* self, const char* param1) {
    return QAmbientSound_Metacast((QAmbientSound*)self, param1);
}

/// ``` QAmbientSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_ambientsound_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAmbientSound_Metacall((QAmbientSound*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAmbientSound* self, int32_t (*slot)(QAmbientSound*, enum QMetaObject__Call, int, void*) ```
void q_ambientsound_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAmbientSound_OnMetacall((QAmbientSound*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAmbientSound* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_ambientsound_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAmbientSound_QBaseMetacall((QAmbientSound*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_ambientsound_tr(const char* s) {
    libqt_string _str = QAmbientSound_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setSource)
///
/// ``` QAmbientSound* self, QUrl* url ```
void q_ambientsound_set_source(void* self, void* url) {
    QAmbientSound_SetSource((QAmbientSound*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#source)
///
/// ``` QAmbientSound* self ```
QUrl* q_ambientsound_source(void* self) {
    return QAmbientSound_Source((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#loops)
///
/// ``` QAmbientSound* self ```
int32_t q_ambientsound_loops(void* self) {
    return QAmbientSound_Loops((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setLoops)
///
/// ``` QAmbientSound* self, int loops ```
void q_ambientsound_set_loops(void* self, int loops) {
    QAmbientSound_SetLoops((QAmbientSound*)self, loops);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#autoPlay)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_auto_play(void* self) {
    return QAmbientSound_AutoPlay((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setAutoPlay)
///
/// ``` QAmbientSound* self, bool autoPlay ```
void q_ambientsound_set_auto_play(void* self, bool autoPlay) {
    QAmbientSound_SetAutoPlay((QAmbientSound*)self, autoPlay);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#setVolume)
///
/// ``` QAmbientSound* self, float volume ```
void q_ambientsound_set_volume(void* self, float volume) {
    QAmbientSound_SetVolume((QAmbientSound*)self, volume);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#volume)
///
/// ``` QAmbientSound* self ```
float q_ambientsound_volume(void* self) {
    return QAmbientSound_Volume((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#engine)
///
/// ``` QAmbientSound* self ```
QAudioEngine* q_ambientsound_engine(void* self) {
    return QAmbientSound_Engine((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#sourceChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_source_changed(void* self) {
    QAmbientSound_SourceChanged((QAmbientSound*)self);
}

/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_source_changed(void* self, void (*slot)(void*)) {
    QAmbientSound_Connect_SourceChanged((QAmbientSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#loopsChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_loops_changed(void* self) {
    QAmbientSound_LoopsChanged((QAmbientSound*)self);
}

/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_loops_changed(void* self, void (*slot)(void*)) {
    QAmbientSound_Connect_LoopsChanged((QAmbientSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#autoPlayChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_auto_play_changed(void* self) {
    QAmbientSound_AutoPlayChanged((QAmbientSound*)self);
}

/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_auto_play_changed(void* self, void (*slot)(void*)) {
    QAmbientSound_Connect_AutoPlayChanged((QAmbientSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#volumeChanged)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_volume_changed(void* self) {
    QAmbientSound_VolumeChanged((QAmbientSound*)self);
}

/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*) ```
void q_ambientsound_on_volume_changed(void* self, void (*slot)(void*)) {
    QAmbientSound_Connect_VolumeChanged((QAmbientSound*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#play)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_play(void* self) {
    QAmbientSound_Play((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#pause)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_pause(void* self) {
    QAmbientSound_Pause((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qambientsound.html#stop)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_stop(void* self) {
    QAmbientSound_Stop((QAmbientSound*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_ambientsound_tr2(const char* s, const char* c) {
    libqt_string _str = QAmbientSound_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_ambientsound_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAmbientSound_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAmbientSound* self ```
const char* q_ambientsound_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAmbientSound* self, const char* name ```
void q_ambientsound_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAmbientSound* self ```
bool q_ambientsound_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAmbientSound* self, bool b ```
bool q_ambientsound_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAmbientSound* self ```
QThread* q_ambientsound_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAmbientSound* self, QThread* thread ```
void q_ambientsound_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAmbientSound* self, int interval ```
int32_t q_ambientsound_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAmbientSound* self, int id ```
void q_ambientsound_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAmbientSound* self ```
libqt_list /* of QObject* */ q_ambientsound_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAmbientSound* self, QObject* parent ```
void q_ambientsound_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAmbientSound* self, QObject* filterObj ```
void q_ambientsound_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAmbientSound* self, QObject* obj ```
void q_ambientsound_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_ambientsound_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAmbientSound* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_ambientsound_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_ambientsound_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_ambientsound_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAmbientSound* self, const char* name, QVariant* value ```
bool q_ambientsound_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAmbientSound* self, const char* name ```
QVariant* q_ambientsound_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAmbientSound* self ```
const char** q_ambientsound_dynamic_property_names(void* self) {
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
/// ``` QAmbientSound* self ```
QBindingStorage* q_ambientsound_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAmbientSound* self ```
QBindingStorage* q_ambientsound_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAmbientSound* self, void (*slot)(QObject*) ```
void q_ambientsound_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAmbientSound* self ```
QObject* q_ambientsound_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAmbientSound* self, const char* classname ```
bool q_ambientsound_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAmbientSound* self ```
void q_ambientsound_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAmbientSound* self, int interval, enum Qt__TimerType timerType ```
int32_t q_ambientsound_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_ambientsound_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAmbientSound* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_ambientsound_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAmbientSound* self, QObject* param1 ```
void q_ambientsound_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAmbientSound* self, void (*slot)(QObject*, QObject*) ```
void q_ambientsound_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
bool q_ambientsound_event(void* self, void* event) {
    return QAmbientSound_Event((QAmbientSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
bool q_ambientsound_qbase_event(void* self, void* event) {
    return QAmbientSound_QBaseEvent((QAmbientSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, bool (*slot)(QAmbientSound*, QEvent*) ```
void q_ambientsound_on_event(void* self, bool (*slot)(void*, void*)) {
    QAmbientSound_OnEvent((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QObject* watched, QEvent* event ```
bool q_ambientsound_event_filter(void* self, void* watched, void* event) {
    return QAmbientSound_EventFilter((QAmbientSound*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QObject* watched, QEvent* event ```
bool q_ambientsound_qbase_event_filter(void* self, void* watched, void* event) {
    return QAmbientSound_QBaseEventFilter((QAmbientSound*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, bool (*slot)(QAmbientSound*, QObject*, QEvent*) ```
void q_ambientsound_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAmbientSound_OnEventFilter((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QTimerEvent* event ```
void q_ambientsound_timer_event(void* self, void* event) {
    QAmbientSound_TimerEvent((QAmbientSound*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QTimerEvent* event ```
void q_ambientsound_qbase_timer_event(void* self, void* event) {
    QAmbientSound_QBaseTimerEvent((QAmbientSound*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QTimerEvent*) ```
void q_ambientsound_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAmbientSound_OnTimerEvent((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QChildEvent* event ```
void q_ambientsound_child_event(void* self, void* event) {
    QAmbientSound_ChildEvent((QAmbientSound*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QChildEvent* event ```
void q_ambientsound_qbase_child_event(void* self, void* event) {
    QAmbientSound_QBaseChildEvent((QAmbientSound*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QChildEvent*) ```
void q_ambientsound_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAmbientSound_OnChildEvent((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
void q_ambientsound_custom_event(void* self, void* event) {
    QAmbientSound_CustomEvent((QAmbientSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QEvent* event ```
void q_ambientsound_qbase_custom_event(void* self, void* event) {
    QAmbientSound_QBaseCustomEvent((QAmbientSound*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QEvent*) ```
void q_ambientsound_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAmbientSound_OnCustomEvent((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_connect_notify(void* self, void* signal) {
    QAmbientSound_ConnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_qbase_connect_notify(void* self, void* signal) {
    QAmbientSound_QBaseConnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QMetaMethod*) ```
void q_ambientsound_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAmbientSound_OnConnectNotify((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_disconnect_notify(void* self, void* signal) {
    QAmbientSound_DisconnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
void q_ambientsound_qbase_disconnect_notify(void* self, void* signal) {
    QAmbientSound_QBaseDisconnectNotify((QAmbientSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, void (*slot)(QAmbientSound*, QMetaMethod*) ```
void q_ambientsound_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAmbientSound_OnDisconnectNotify((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self ```
QObject* q_ambientsound_sender(void* self) {
    return QAmbientSound_Sender((QAmbientSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self ```
QObject* q_ambientsound_qbase_sender(void* self) {
    return QAmbientSound_QBaseSender((QAmbientSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, QObject* (*slot)() ```
void q_ambientsound_on_sender(void* self, QObject* (*slot)()) {
    QAmbientSound_OnSender((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self ```
int32_t q_ambientsound_sender_signal_index(void* self) {
    return QAmbientSound_SenderSignalIndex((QAmbientSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self ```
int32_t q_ambientsound_qbase_sender_signal_index(void* self) {
    return QAmbientSound_QBaseSenderSignalIndex((QAmbientSound*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, int32_t (*slot)() ```
void q_ambientsound_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAmbientSound_OnSenderSignalIndex((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, const char* signal ```
int32_t q_ambientsound_receivers(void* self, const char* signal) {
    return QAmbientSound_Receivers((QAmbientSound*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, const char* signal ```
int32_t q_ambientsound_qbase_receivers(void* self, const char* signal) {
    return QAmbientSound_QBaseReceivers((QAmbientSound*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, int32_t (*slot)(QAmbientSound*, const char*) ```
void q_ambientsound_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAmbientSound_OnReceivers((QAmbientSound*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
bool q_ambientsound_is_signal_connected(void* self, void* signal) {
    return QAmbientSound_IsSignalConnected((QAmbientSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAmbientSound* self, QMetaMethod* signal ```
bool q_ambientsound_qbase_is_signal_connected(void* self, void* signal) {
    return QAmbientSound_QBaseIsSignalConnected((QAmbientSound*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAmbientSound* self, bool (*slot)(QAmbientSound*, QMetaMethod*) ```
void q_ambientsound_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAmbientSound_OnIsSignalConnected((QAmbientSound*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAmbientSound* self ```
void q_ambientsound_delete(void* self) {
    QAmbientSound_Delete((QAmbientSound*)(self));
}