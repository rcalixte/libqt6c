#include "../libqanystringview.hpp"
#include "libqaudioengine.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqquaternion.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqvectornd.hpp"
#include "../libqcoreevent.hpp"
#include "libqaudioroom.hpp"
#include "libqaudioroom.h"

/// https://doc.qt.io/qt-6/qaudioroom.html

/// q_audioroom_new constructs a new QAudioRoom object.
///
/// ``` QAudioEngine* engine ```
QAudioRoom* q_audioroom_new(void* engine) {
    return QAudioRoom_new((QAudioEngine*)engine);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAudioRoom* self ```
QMetaObject* q_audioroom_meta_object(void* self) {
    return QAudioRoom_MetaObject((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, const char* param1 ```
void* q_audioroom_metacast(void* self, const char* param1) {
    return QAudioRoom_Metacast((QAudioRoom*)self, param1);
}

/// ``` QAudioRoom* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioroom_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioRoom_Metacall((QAudioRoom*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAudioRoom* self, int32_t (*slot)(QAudioRoom*, enum QMetaObject__Call, int, void*) ```
void q_audioroom_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAudioRoom_OnMetacall((QAudioRoom*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAudioRoom* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_audioroom_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAudioRoom_QBaseMetacall((QAudioRoom*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_audioroom_tr(const char* s) {
    libqt_string _str = QAudioRoom_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setPosition)
///
/// ``` QAudioRoom* self, QVector3D* pos ```
void q_audioroom_set_position(void* self, void* pos) {
    QAudioRoom_SetPosition((QAudioRoom*)self, (QVector3D*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#position)
///
/// ``` QAudioRoom* self ```
QVector3D* q_audioroom_position(void* self) {
    return QAudioRoom_Position((QAudioRoom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setDimensions)
///
/// ``` QAudioRoom* self, QVector3D* dim ```
void q_audioroom_set_dimensions(void* self, void* dim) {
    QAudioRoom_SetDimensions((QAudioRoom*)self, (QVector3D*)dim);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#dimensions)
///
/// ``` QAudioRoom* self ```
QVector3D* q_audioroom_dimensions(void* self) {
    return QAudioRoom_Dimensions((QAudioRoom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setRotation)
///
/// ``` QAudioRoom* self, QQuaternion* q ```
void q_audioroom_set_rotation(void* self, void* q) {
    QAudioRoom_SetRotation((QAudioRoom*)self, (QQuaternion*)q);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#rotation)
///
/// ``` QAudioRoom* self ```
QQuaternion* q_audioroom_rotation(void* self) {
    return QAudioRoom_Rotation((QAudioRoom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setWallMaterial)
///
/// ``` QAudioRoom* self, enum QAudioRoom__Wall wall, enum QAudioRoom__Material material ```
void q_audioroom_set_wall_material(void* self, int64_t wall, int64_t material) {
    QAudioRoom_SetWallMaterial((QAudioRoom*)self, wall, material);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#wallMaterial)
///
/// ``` QAudioRoom* self, enum QAudioRoom__Wall wall ```
int64_t q_audioroom_wall_material(void* self, int64_t wall) {
    return QAudioRoom_WallMaterial((QAudioRoom*)self, wall);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReflectionGain)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reflection_gain(void* self, float factor) {
    QAudioRoom_SetReflectionGain((QAudioRoom*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGain)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reflection_gain(void* self) {
    return QAudioRoom_ReflectionGain((QAudioRoom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReverbGain)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reverb_gain(void* self, float factor) {
    QAudioRoom_SetReverbGain((QAudioRoom*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbGain)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reverb_gain(void* self) {
    return QAudioRoom_ReverbGain((QAudioRoom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReverbTime)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reverb_time(void* self, float factor) {
    QAudioRoom_SetReverbTime((QAudioRoom*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbTime)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reverb_time(void* self) {
    return QAudioRoom_ReverbTime((QAudioRoom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#setReverbBrightness)
///
/// ``` QAudioRoom* self, float factor ```
void q_audioroom_set_reverb_brightness(void* self, float factor) {
    QAudioRoom_SetReverbBrightness((QAudioRoom*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightness)
///
/// ``` QAudioRoom* self ```
float q_audioroom_reverb_brightness(void* self) {
    return QAudioRoom_ReverbBrightness((QAudioRoom*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#positionChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_position_changed(void* self) {
    QAudioRoom_PositionChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_position_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_PositionChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#dimensionsChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_dimensions_changed(void* self) {
    QAudioRoom_DimensionsChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_dimensions_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_DimensionsChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#rotationChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_rotation_changed(void* self) {
    QAudioRoom_RotationChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_rotation_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_RotationChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#wallsChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_walls_changed(void* self) {
    QAudioRoom_WallsChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_walls_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_WallsChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reflectionGainChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reflection_gain_changed(void* self) {
    QAudioRoom_ReflectionGainChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reflection_gain_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_ReflectionGainChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbGainChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reverb_gain_changed(void* self) {
    QAudioRoom_ReverbGainChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reverb_gain_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_ReverbGainChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbTimeChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reverb_time_changed(void* self) {
    QAudioRoom_ReverbTimeChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reverb_time_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_ReverbTimeChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qaudioroom.html#reverbBrightnessChanged)
///
/// ``` QAudioRoom* self ```
void q_audioroom_reverb_brightness_changed(void* self) {
    QAudioRoom_ReverbBrightnessChanged((QAudioRoom*)self);
}

/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*) ```
void q_audioroom_on_reverb_brightness_changed(void* self, void (*slot)(void*)) {
    QAudioRoom_Connect_ReverbBrightnessChanged((QAudioRoom*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_audioroom_tr2(const char* s, const char* c) {
    libqt_string _str = QAudioRoom_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_audioroom_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAudioRoom_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAudioRoom* self ```
const char* q_audioroom_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAudioRoom* self, const char* name ```
void q_audioroom_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAudioRoom* self ```
bool q_audioroom_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAudioRoom* self, bool b ```
bool q_audioroom_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAudioRoom* self ```
QThread* q_audioroom_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAudioRoom* self, QThread* thread ```
void q_audioroom_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioRoom* self, int interval ```
int32_t q_audioroom_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAudioRoom* self, int id ```
void q_audioroom_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAudioRoom* self ```
libqt_list /* of QObject* */ q_audioroom_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAudioRoom* self, QObject* parent ```
void q_audioroom_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAudioRoom* self, QObject* filterObj ```
void q_audioroom_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAudioRoom* self, QObject* obj ```
void q_audioroom_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_audioroom_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioRoom* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_audioroom_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_audioroom_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_audioroom_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAudioRoom* self ```
void q_audioroom_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAudioRoom* self ```
void q_audioroom_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAudioRoom* self, const char* name, QVariant* value ```
bool q_audioroom_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAudioRoom* self, const char* name ```
QVariant* q_audioroom_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAudioRoom* self ```
const char** q_audioroom_dynamic_property_names(void* self) {
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
/// ``` QAudioRoom* self ```
QBindingStorage* q_audioroom_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAudioRoom* self ```
QBindingStorage* q_audioroom_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioRoom* self ```
void q_audioroom_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAudioRoom* self, void (*slot)(QObject*) ```
void q_audioroom_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAudioRoom* self ```
QObject* q_audioroom_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAudioRoom* self, const char* classname ```
bool q_audioroom_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAudioRoom* self ```
void q_audioroom_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAudioRoom* self, int interval, enum Qt__TimerType timerType ```
int32_t q_audioroom_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioroom_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAudioRoom* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_audioroom_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAudioRoom* self, QObject* param1 ```
void q_audioroom_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAudioRoom* self, void (*slot)(QObject*, QObject*) ```
void q_audioroom_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
bool q_audioroom_event(void* self, void* event) {
    return QAudioRoom_Event((QAudioRoom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
bool q_audioroom_qbase_event(void* self, void* event) {
    return QAudioRoom_QBaseEvent((QAudioRoom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, bool (*slot)(QAudioRoom*, QEvent*) ```
void q_audioroom_on_event(void* self, bool (*slot)(void*, void*)) {
    QAudioRoom_OnEvent((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QObject* watched, QEvent* event ```
bool q_audioroom_event_filter(void* self, void* watched, void* event) {
    return QAudioRoom_EventFilter((QAudioRoom*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QObject* watched, QEvent* event ```
bool q_audioroom_qbase_event_filter(void* self, void* watched, void* event) {
    return QAudioRoom_QBaseEventFilter((QAudioRoom*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, bool (*slot)(QAudioRoom*, QObject*, QEvent*) ```
void q_audioroom_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAudioRoom_OnEventFilter((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QTimerEvent* event ```
void q_audioroom_timer_event(void* self, void* event) {
    QAudioRoom_TimerEvent((QAudioRoom*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QTimerEvent* event ```
void q_audioroom_qbase_timer_event(void* self, void* event) {
    QAudioRoom_QBaseTimerEvent((QAudioRoom*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QTimerEvent*) ```
void q_audioroom_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAudioRoom_OnTimerEvent((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QChildEvent* event ```
void q_audioroom_child_event(void* self, void* event) {
    QAudioRoom_ChildEvent((QAudioRoom*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QChildEvent* event ```
void q_audioroom_qbase_child_event(void* self, void* event) {
    QAudioRoom_QBaseChildEvent((QAudioRoom*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QChildEvent*) ```
void q_audioroom_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAudioRoom_OnChildEvent((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
void q_audioroom_custom_event(void* self, void* event) {
    QAudioRoom_CustomEvent((QAudioRoom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QEvent* event ```
void q_audioroom_qbase_custom_event(void* self, void* event) {
    QAudioRoom_QBaseCustomEvent((QAudioRoom*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QEvent*) ```
void q_audioroom_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAudioRoom_OnCustomEvent((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_connect_notify(void* self, void* signal) {
    QAudioRoom_ConnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_qbase_connect_notify(void* self, void* signal) {
    QAudioRoom_QBaseConnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QMetaMethod*) ```
void q_audioroom_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioRoom_OnConnectNotify((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_disconnect_notify(void* self, void* signal) {
    QAudioRoom_DisconnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
void q_audioroom_qbase_disconnect_notify(void* self, void* signal) {
    QAudioRoom_QBaseDisconnectNotify((QAudioRoom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, void (*slot)(QAudioRoom*, QMetaMethod*) ```
void q_audioroom_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAudioRoom_OnDisconnectNotify((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self ```
QObject* q_audioroom_sender(void* self) {
    return QAudioRoom_Sender((QAudioRoom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self ```
QObject* q_audioroom_qbase_sender(void* self) {
    return QAudioRoom_QBaseSender((QAudioRoom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, QObject* (*slot)() ```
void q_audioroom_on_sender(void* self, QObject* (*slot)()) {
    QAudioRoom_OnSender((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self ```
int32_t q_audioroom_sender_signal_index(void* self) {
    return QAudioRoom_SenderSignalIndex((QAudioRoom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self ```
int32_t q_audioroom_qbase_sender_signal_index(void* self) {
    return QAudioRoom_QBaseSenderSignalIndex((QAudioRoom*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, int32_t (*slot)() ```
void q_audioroom_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAudioRoom_OnSenderSignalIndex((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, const char* signal ```
int32_t q_audioroom_receivers(void* self, const char* signal) {
    return QAudioRoom_Receivers((QAudioRoom*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, const char* signal ```
int32_t q_audioroom_qbase_receivers(void* self, const char* signal) {
    return QAudioRoom_QBaseReceivers((QAudioRoom*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, int32_t (*slot)(QAudioRoom*, const char*) ```
void q_audioroom_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAudioRoom_OnReceivers((QAudioRoom*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
bool q_audioroom_is_signal_connected(void* self, void* signal) {
    return QAudioRoom_IsSignalConnected((QAudioRoom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAudioRoom* self, QMetaMethod* signal ```
bool q_audioroom_qbase_is_signal_connected(void* self, void* signal) {
    return QAudioRoom_QBaseIsSignalConnected((QAudioRoom*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAudioRoom* self, bool (*slot)(QAudioRoom*, QMetaMethod*) ```
void q_audioroom_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAudioRoom_OnIsSignalConnected((QAudioRoom*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAudioRoom* self ```
void q_audioroom_delete(void* self) {
    QAudioRoom_Delete((QAudioRoom*)(self));
}