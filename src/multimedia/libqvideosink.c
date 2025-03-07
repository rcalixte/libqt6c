#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqvideoframe.hpp"
#include "../libqcoreevent.hpp"
#include "libqvideosink.hpp"
#include "libqvideosink.h"

/// https://doc.qt.io/qt-6/qvideosink.html

/// q_videosink_new constructs a new QVideoSink object.
///
///
QVideoSink* q_videosink_new() {
    return QVideoSink_new();
}

/// q_videosink_new2 constructs a new QVideoSink object.
///
/// ``` QObject* parent ```
QVideoSink* q_videosink_new2(void* parent) {
    return QVideoSink_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVideoSink* self ```
QMetaObject* q_videosink_meta_object(void* self) {
    return QVideoSink_MetaObject((QVideoSink*)self);
}

/// ``` QVideoSink* self, const char* param1 ```
void* q_videosink_metacast(void* self, const char* param1) {
    return QVideoSink_Metacast((QVideoSink*)self, param1);
}

/// ``` QVideoSink* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videosink_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVideoSink_Metacall((QVideoSink*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QVideoSink* self, int32_t (*slot)(QVideoSink*, enum QMetaObject__Call, int, void*) ```
void q_videosink_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVideoSink_OnMetacall((QVideoSink*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QVideoSink* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_videosink_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVideoSink_QBaseMetacall((QVideoSink*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_videosink_tr(const char* s) {
    libqt_string _str = QVideoSink_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoSize)
///
/// ``` QVideoSink* self ```
QSize* q_videosink_video_size(void* self) {
    return QVideoSink_VideoSize((QVideoSink*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#subtitleText)
///
/// ``` QVideoSink* self ```
const char* q_videosink_subtitle_text(void* self) {
    libqt_string _str = QVideoSink_SubtitleText((QVideoSink*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#setSubtitleText)
///
/// ``` QVideoSink* self, const char* subtitle ```
void q_videosink_set_subtitle_text(void* self, const char* subtitle) {
    QVideoSink_SetSubtitleText((QVideoSink*)self, qstring(subtitle));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#setVideoFrame)
///
/// ``` QVideoSink* self, QVideoFrame* frame ```
void q_videosink_set_video_frame(void* self, void* frame) {
    QVideoSink_SetVideoFrame((QVideoSink*)self, (QVideoFrame*)frame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoFrame)
///
/// ``` QVideoSink* self ```
QVideoFrame* q_videosink_video_frame(void* self) {
    return QVideoSink_VideoFrame((QVideoSink*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoFrameChanged)
///
/// ``` QVideoSink* self, QVideoFrame* frame ```
void q_videosink_video_frame_changed(void* self, void* frame) {
    QVideoSink_VideoFrameChanged((QVideoSink*)self, (QVideoFrame*)frame);
}

/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QVideoFrame*) ```
void q_videosink_on_video_frame_changed(void* self, void (*slot)(void*, void*)) {
    QVideoSink_Connect_VideoFrameChanged((QVideoSink*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#subtitleTextChanged)
///
/// ``` QVideoSink* self, const char* subtitleText ```
void q_videosink_subtitle_text_changed(void* self, const char* subtitleText) {
    QVideoSink_SubtitleTextChanged((QVideoSink*)self, qstring(subtitleText));
}

/// ``` QVideoSink* self, void (*slot)(QVideoSink*, const char*) ```
void q_videosink_on_subtitle_text_changed(void* self, void (*slot)(void*, const char*)) {
    QVideoSink_Connect_SubtitleTextChanged((QVideoSink*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvideosink.html#videoSizeChanged)
///
/// ``` QVideoSink* self ```
void q_videosink_video_size_changed(void* self) {
    QVideoSink_VideoSizeChanged((QVideoSink*)self);
}

/// ``` QVideoSink* self, void (*slot)(QVideoSink*) ```
void q_videosink_on_video_size_changed(void* self, void (*slot)(void*)) {
    QVideoSink_Connect_VideoSizeChanged((QVideoSink*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_videosink_tr2(const char* s, const char* c) {
    libqt_string _str = QVideoSink_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_videosink_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVideoSink_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVideoSink* self ```
const char* q_videosink_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVideoSink* self, const char* name ```
void q_videosink_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVideoSink* self ```
bool q_videosink_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVideoSink* self ```
bool q_videosink_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVideoSink* self ```
bool q_videosink_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVideoSink* self ```
bool q_videosink_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVideoSink* self, bool b ```
bool q_videosink_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVideoSink* self ```
QThread* q_videosink_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVideoSink* self, QThread* thread ```
void q_videosink_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoSink* self, int interval ```
int32_t q_videosink_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVideoSink* self, int id ```
void q_videosink_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVideoSink* self ```
libqt_list /* of QObject* */ q_videosink_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVideoSink* self, QObject* parent ```
void q_videosink_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVideoSink* self, QObject* filterObj ```
void q_videosink_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVideoSink* self, QObject* obj ```
void q_videosink_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_videosink_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoSink* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_videosink_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_videosink_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_videosink_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVideoSink* self ```
void q_videosink_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVideoSink* self ```
void q_videosink_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVideoSink* self, const char* name, QVariant* value ```
bool q_videosink_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVideoSink* self, const char* name ```
QVariant* q_videosink_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVideoSink* self ```
const char** q_videosink_dynamic_property_names(void* self) {
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
/// ``` QVideoSink* self ```
QBindingStorage* q_videosink_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVideoSink* self ```
QBindingStorage* q_videosink_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoSink* self ```
void q_videosink_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QVideoSink* self, void (*slot)(QObject*) ```
void q_videosink_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVideoSink* self ```
QObject* q_videosink_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVideoSink* self, const char* classname ```
bool q_videosink_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVideoSink* self ```
void q_videosink_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVideoSink* self, int interval, enum Qt__TimerType timerType ```
int32_t q_videosink_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videosink_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVideoSink* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_videosink_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVideoSink* self, QObject* param1 ```
void q_videosink_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QVideoSink* self, void (*slot)(QObject*, QObject*) ```
void q_videosink_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
bool q_videosink_event(void* self, void* event) {
    return QVideoSink_Event((QVideoSink*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
bool q_videosink_qbase_event(void* self, void* event) {
    return QVideoSink_QBaseEvent((QVideoSink*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, bool (*slot)(QVideoSink*, QEvent*) ```
void q_videosink_on_event(void* self, bool (*slot)(void*, void*)) {
    QVideoSink_OnEvent((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QObject* watched, QEvent* event ```
bool q_videosink_event_filter(void* self, void* watched, void* event) {
    return QVideoSink_EventFilter((QVideoSink*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QObject* watched, QEvent* event ```
bool q_videosink_qbase_event_filter(void* self, void* watched, void* event) {
    return QVideoSink_QBaseEventFilter((QVideoSink*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, bool (*slot)(QVideoSink*, QObject*, QEvent*) ```
void q_videosink_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVideoSink_OnEventFilter((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QTimerEvent* event ```
void q_videosink_timer_event(void* self, void* event) {
    QVideoSink_TimerEvent((QVideoSink*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QTimerEvent* event ```
void q_videosink_qbase_timer_event(void* self, void* event) {
    QVideoSink_QBaseTimerEvent((QVideoSink*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QTimerEvent*) ```
void q_videosink_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVideoSink_OnTimerEvent((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QChildEvent* event ```
void q_videosink_child_event(void* self, void* event) {
    QVideoSink_ChildEvent((QVideoSink*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QChildEvent* event ```
void q_videosink_qbase_child_event(void* self, void* event) {
    QVideoSink_QBaseChildEvent((QVideoSink*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QChildEvent*) ```
void q_videosink_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVideoSink_OnChildEvent((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
void q_videosink_custom_event(void* self, void* event) {
    QVideoSink_CustomEvent((QVideoSink*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QEvent* event ```
void q_videosink_qbase_custom_event(void* self, void* event) {
    QVideoSink_QBaseCustomEvent((QVideoSink*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QEvent*) ```
void q_videosink_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVideoSink_OnCustomEvent((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_connect_notify(void* self, void* signal) {
    QVideoSink_ConnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_qbase_connect_notify(void* self, void* signal) {
    QVideoSink_QBaseConnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QMetaMethod*) ```
void q_videosink_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVideoSink_OnConnectNotify((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_disconnect_notify(void* self, void* signal) {
    QVideoSink_DisconnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
void q_videosink_qbase_disconnect_notify(void* self, void* signal) {
    QVideoSink_QBaseDisconnectNotify((QVideoSink*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, void (*slot)(QVideoSink*, QMetaMethod*) ```
void q_videosink_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVideoSink_OnDisconnectNotify((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self ```
QObject* q_videosink_sender(void* self) {
    return QVideoSink_Sender((QVideoSink*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self ```
QObject* q_videosink_qbase_sender(void* self) {
    return QVideoSink_QBaseSender((QVideoSink*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, QObject* (*slot)() ```
void q_videosink_on_sender(void* self, QObject* (*slot)()) {
    QVideoSink_OnSender((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self ```
int32_t q_videosink_sender_signal_index(void* self) {
    return QVideoSink_SenderSignalIndex((QVideoSink*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self ```
int32_t q_videosink_qbase_sender_signal_index(void* self) {
    return QVideoSink_QBaseSenderSignalIndex((QVideoSink*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, int32_t (*slot)() ```
void q_videosink_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVideoSink_OnSenderSignalIndex((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, const char* signal ```
int32_t q_videosink_receivers(void* self, const char* signal) {
    return QVideoSink_Receivers((QVideoSink*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, const char* signal ```
int32_t q_videosink_qbase_receivers(void* self, const char* signal) {
    return QVideoSink_QBaseReceivers((QVideoSink*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, int32_t (*slot)(QVideoSink*, const char*) ```
void q_videosink_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVideoSink_OnReceivers((QVideoSink*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
bool q_videosink_is_signal_connected(void* self, void* signal) {
    return QVideoSink_IsSignalConnected((QVideoSink*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVideoSink* self, QMetaMethod* signal ```
bool q_videosink_qbase_is_signal_connected(void* self, void* signal) {
    return QVideoSink_QBaseIsSignalConnected((QVideoSink*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVideoSink* self, bool (*slot)(QVideoSink*, QMetaMethod*) ```
void q_videosink_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVideoSink_OnIsSignalConnected((QVideoSink*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QVideoSink* self ```
void q_videosink_delete(void* self) {
    QVideoSink_Delete((QVideoSink*)(self));
}