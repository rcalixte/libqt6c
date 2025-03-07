#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqtransform.hpp"
#include "../libqvariant.hpp"
#include "../libqxmlstream.hpp"
#include "../libqcoreevent.hpp"
#include "libqsvgrenderer.hpp"
#include "libqsvgrenderer.h"

/// https://doc.qt.io/qt-6/qsvgrenderer.html

/// q_svgrenderer_new constructs a new QSvgRenderer object.
///
///
QSvgRenderer* q_svgrenderer_new() {
    return QSvgRenderer_new();
}

/// q_svgrenderer_new2 constructs a new QSvgRenderer object.
///
/// ``` const char* filename ```
QSvgRenderer* q_svgrenderer_new2(const char* filename) {
    return QSvgRenderer_new2(qstring(filename));
}

/// q_svgrenderer_new3 constructs a new QSvgRenderer object.
///
/// ``` const char* contents ```
QSvgRenderer* q_svgrenderer_new3(const char* contents) {
    return QSvgRenderer_new3(qstring(contents));
}

/// q_svgrenderer_new4 constructs a new QSvgRenderer object.
///
/// ``` QXmlStreamReader* contents ```
QSvgRenderer* q_svgrenderer_new4(void* contents) {
    return QSvgRenderer_new4((QXmlStreamReader*)contents);
}

/// q_svgrenderer_new5 constructs a new QSvgRenderer object.
///
/// ``` QObject* parent ```
QSvgRenderer* q_svgrenderer_new5(void* parent) {
    return QSvgRenderer_new5((QObject*)parent);
}

/// q_svgrenderer_new6 constructs a new QSvgRenderer object.
///
/// ``` const char* filename, QObject* parent ```
QSvgRenderer* q_svgrenderer_new6(const char* filename, void* parent) {
    return QSvgRenderer_new6(qstring(filename), (QObject*)parent);
}

/// q_svgrenderer_new7 constructs a new QSvgRenderer object.
///
/// ``` const char* contents, QObject* parent ```
QSvgRenderer* q_svgrenderer_new7(const char* contents, void* parent) {
    return QSvgRenderer_new7(qstring(contents), (QObject*)parent);
}

/// q_svgrenderer_new8 constructs a new QSvgRenderer object.
///
/// ``` QXmlStreamReader* contents, QObject* parent ```
QSvgRenderer* q_svgrenderer_new8(void* contents, void* parent) {
    return QSvgRenderer_new8((QXmlStreamReader*)contents, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSvgRenderer* self ```
QMetaObject* q_svgrenderer_meta_object(void* self) {
    return QSvgRenderer_MetaObject((QSvgRenderer*)self);
}

/// ``` QSvgRenderer* self, const char* param1 ```
void* q_svgrenderer_metacast(void* self, const char* param1) {
    return QSvgRenderer_Metacast((QSvgRenderer*)self, param1);
}

/// ``` QSvgRenderer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_svgrenderer_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSvgRenderer_Metacall((QSvgRenderer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSvgRenderer* self, int32_t (*slot)(QSvgRenderer*, enum QMetaObject__Call, int, void*) ```
void q_svgrenderer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSvgRenderer_OnMetacall((QSvgRenderer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSvgRenderer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_svgrenderer_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSvgRenderer_QBaseMetacall((QSvgRenderer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_svgrenderer_tr(const char* s) {
    libqt_string _str = QSvgRenderer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#isValid)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_valid(void* self) {
    return QSvgRenderer_IsValid((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#defaultSize)
///
/// ``` QSvgRenderer* self ```
QSize* q_svgrenderer_default_size(void* self) {
    return QSvgRenderer_DefaultSize((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBox)
///
/// ``` QSvgRenderer* self ```
QRect* q_svgrenderer_view_box(void* self) {
    return QSvgRenderer_ViewBox((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#viewBoxF)
///
/// ``` QSvgRenderer* self ```
QRectF* q_svgrenderer_view_box_f(void* self) {
    return QSvgRenderer_ViewBoxF((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
///
/// ``` QSvgRenderer* self, QRect* viewbox ```
void q_svgrenderer_set_view_box(void* self, void* viewbox) {
    QSvgRenderer_SetViewBox((QSvgRenderer*)self, (QRect*)viewbox);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setViewBox)
///
/// ``` QSvgRenderer* self, QRectF* viewbox ```
void q_svgrenderer_set_view_box_with_viewbox(void* self, void* viewbox) {
    QSvgRenderer_SetViewBoxWithViewbox((QSvgRenderer*)self, (QRectF*)viewbox);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#aspectRatioMode)
///
/// ``` QSvgRenderer* self ```
int64_t q_svgrenderer_aspect_ratio_mode(void* self) {
    return QSvgRenderer_AspectRatioMode((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setAspectRatioMode)
///
/// ``` QSvgRenderer* self, enum Qt__AspectRatioMode mode ```
void q_svgrenderer_set_aspect_ratio_mode(void* self, int64_t mode) {
    QSvgRenderer_SetAspectRatioMode((QSvgRenderer*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#animated)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_animated(void* self) {
    return QSvgRenderer_Animated((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#framesPerSecond)
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_frames_per_second(void* self) {
    return QSvgRenderer_FramesPerSecond((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setFramesPerSecond)
///
/// ``` QSvgRenderer* self, int num ```
void q_svgrenderer_set_frames_per_second(void* self, int num) {
    QSvgRenderer_SetFramesPerSecond((QSvgRenderer*)self, num);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#currentFrame)
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_current_frame(void* self) {
    return QSvgRenderer_CurrentFrame((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#setCurrentFrame)
///
/// ``` QSvgRenderer* self, int currentFrame ```
void q_svgrenderer_set_current_frame(void* self, int currentFrame) {
    QSvgRenderer_SetCurrentFrame((QSvgRenderer*)self, currentFrame);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#animationDuration)
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_animation_duration(void* self) {
    return QSvgRenderer_AnimationDuration((QSvgRenderer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#boundsOnElement)
///
/// ``` QSvgRenderer* self, const char* id ```
QRectF* q_svgrenderer_bounds_on_element(void* self, const char* id) {
    return QSvgRenderer_BoundsOnElement((QSvgRenderer*)self, qstring(id));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#elementExists)
///
/// ``` QSvgRenderer* self, const char* id ```
bool q_svgrenderer_element_exists(void* self, const char* id) {
    return QSvgRenderer_ElementExists((QSvgRenderer*)self, qstring(id));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#transformForElement)
///
/// ``` QSvgRenderer* self, const char* id ```
QTransform* q_svgrenderer_transform_for_element(void* self, const char* id) {
    return QSvgRenderer_TransformForElement((QSvgRenderer*)self, qstring(id));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// ``` QSvgRenderer* self, const char* filename ```
bool q_svgrenderer_load(void* self, const char* filename) {
    return QSvgRenderer_Load((QSvgRenderer*)self, qstring(filename));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// ``` QSvgRenderer* self, const char* contents ```
bool q_svgrenderer_load_with_contents(void* self, const char* contents) {
    return QSvgRenderer_LoadWithContents((QSvgRenderer*)self, qstring(contents));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#load)
///
/// ``` QSvgRenderer* self, QXmlStreamReader* contents ```
bool q_svgrenderer_load2(void* self, void* contents) {
    return QSvgRenderer_Load2((QSvgRenderer*)self, (QXmlStreamReader*)contents);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p ```
void q_svgrenderer_render(void* self, void* p) {
    QSvgRenderer_Render((QSvgRenderer*)self, (QPainter*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p, QRectF* bounds ```
void q_svgrenderer_render2(void* self, void* p, void* bounds) {
    QSvgRenderer_Render2((QSvgRenderer*)self, (QPainter*)p, (QRectF*)bounds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p, const char* elementId ```
void q_svgrenderer_render3(void* self, void* p, const char* elementId) {
    QSvgRenderer_Render3((QSvgRenderer*)self, (QPainter*)p, qstring(elementId));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#repaintNeeded)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_repaint_needed(void* self) {
    QSvgRenderer_RepaintNeeded((QSvgRenderer*)self);
}

/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*) ```
void q_svgrenderer_on_repaint_needed(void* self, void (*slot)(void*)) {
    QSvgRenderer_Connect_RepaintNeeded((QSvgRenderer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_svgrenderer_tr2(const char* s, const char* c) {
    libqt_string _str = QSvgRenderer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_svgrenderer_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSvgRenderer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsvgrenderer.html#render)
///
/// ``` QSvgRenderer* self, QPainter* p, const char* elementId, QRectF* bounds ```
void q_svgrenderer_render32(void* self, void* p, const char* elementId, void* bounds) {
    QSvgRenderer_Render32((QSvgRenderer*)self, (QPainter*)p, qstring(elementId), (QRectF*)bounds);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSvgRenderer* self ```
const char* q_svgrenderer_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSvgRenderer* self, const char* name ```
void q_svgrenderer_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSvgRenderer* self ```
bool q_svgrenderer_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSvgRenderer* self, bool b ```
bool q_svgrenderer_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSvgRenderer* self ```
QThread* q_svgrenderer_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSvgRenderer* self, QThread* thread ```
void q_svgrenderer_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSvgRenderer* self, int interval ```
int32_t q_svgrenderer_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSvgRenderer* self, int id ```
void q_svgrenderer_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSvgRenderer* self ```
libqt_list /* of QObject* */ q_svgrenderer_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSvgRenderer* self, QObject* parent ```
void q_svgrenderer_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSvgRenderer* self, QObject* filterObj ```
void q_svgrenderer_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSvgRenderer* self, QObject* obj ```
void q_svgrenderer_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_svgrenderer_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSvgRenderer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_svgrenderer_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_svgrenderer_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_svgrenderer_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSvgRenderer* self, const char* name, QVariant* value ```
bool q_svgrenderer_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSvgRenderer* self, const char* name ```
QVariant* q_svgrenderer_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSvgRenderer* self ```
const char** q_svgrenderer_dynamic_property_names(void* self) {
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
/// ``` QSvgRenderer* self ```
QBindingStorage* q_svgrenderer_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSvgRenderer* self ```
QBindingStorage* q_svgrenderer_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSvgRenderer* self, void (*slot)(QObject*) ```
void q_svgrenderer_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSvgRenderer* self ```
QObject* q_svgrenderer_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSvgRenderer* self, const char* classname ```
bool q_svgrenderer_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSvgRenderer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_svgrenderer_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_svgrenderer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSvgRenderer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_svgrenderer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSvgRenderer* self, QObject* param1 ```
void q_svgrenderer_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSvgRenderer* self, void (*slot)(QObject*, QObject*) ```
void q_svgrenderer_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
bool q_svgrenderer_event(void* self, void* event) {
    return QSvgRenderer_Event((QSvgRenderer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
bool q_svgrenderer_qbase_event(void* self, void* event) {
    return QSvgRenderer_QBaseEvent((QSvgRenderer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, bool (*slot)(QSvgRenderer*, QEvent*) ```
void q_svgrenderer_on_event(void* self, bool (*slot)(void*, void*)) {
    QSvgRenderer_OnEvent((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QObject* watched, QEvent* event ```
bool q_svgrenderer_event_filter(void* self, void* watched, void* event) {
    return QSvgRenderer_EventFilter((QSvgRenderer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QObject* watched, QEvent* event ```
bool q_svgrenderer_qbase_event_filter(void* self, void* watched, void* event) {
    return QSvgRenderer_QBaseEventFilter((QSvgRenderer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, bool (*slot)(QSvgRenderer*, QObject*, QEvent*) ```
void q_svgrenderer_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSvgRenderer_OnEventFilter((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QTimerEvent* event ```
void q_svgrenderer_timer_event(void* self, void* event) {
    QSvgRenderer_TimerEvent((QSvgRenderer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QTimerEvent* event ```
void q_svgrenderer_qbase_timer_event(void* self, void* event) {
    QSvgRenderer_QBaseTimerEvent((QSvgRenderer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QTimerEvent*) ```
void q_svgrenderer_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnTimerEvent((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QChildEvent* event ```
void q_svgrenderer_child_event(void* self, void* event) {
    QSvgRenderer_ChildEvent((QSvgRenderer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QChildEvent* event ```
void q_svgrenderer_qbase_child_event(void* self, void* event) {
    QSvgRenderer_QBaseChildEvent((QSvgRenderer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QChildEvent*) ```
void q_svgrenderer_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnChildEvent((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
void q_svgrenderer_custom_event(void* self, void* event) {
    QSvgRenderer_CustomEvent((QSvgRenderer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QEvent* event ```
void q_svgrenderer_qbase_custom_event(void* self, void* event) {
    QSvgRenderer_QBaseCustomEvent((QSvgRenderer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QEvent*) ```
void q_svgrenderer_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnCustomEvent((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_connect_notify(void* self, void* signal) {
    QSvgRenderer_ConnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_qbase_connect_notify(void* self, void* signal) {
    QSvgRenderer_QBaseConnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QMetaMethod*) ```
void q_svgrenderer_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnConnectNotify((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_disconnect_notify(void* self, void* signal) {
    QSvgRenderer_DisconnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
void q_svgrenderer_qbase_disconnect_notify(void* self, void* signal) {
    QSvgRenderer_QBaseDisconnectNotify((QSvgRenderer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, void (*slot)(QSvgRenderer*, QMetaMethod*) ```
void q_svgrenderer_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSvgRenderer_OnDisconnectNotify((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self ```
QObject* q_svgrenderer_sender(void* self) {
    return QSvgRenderer_Sender((QSvgRenderer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self ```
QObject* q_svgrenderer_qbase_sender(void* self) {
    return QSvgRenderer_QBaseSender((QSvgRenderer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, QObject* (*slot)() ```
void q_svgrenderer_on_sender(void* self, QObject* (*slot)()) {
    QSvgRenderer_OnSender((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_sender_signal_index(void* self) {
    return QSvgRenderer_SenderSignalIndex((QSvgRenderer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self ```
int32_t q_svgrenderer_qbase_sender_signal_index(void* self) {
    return QSvgRenderer_QBaseSenderSignalIndex((QSvgRenderer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, int32_t (*slot)() ```
void q_svgrenderer_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSvgRenderer_OnSenderSignalIndex((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, const char* signal ```
int32_t q_svgrenderer_receivers(void* self, const char* signal) {
    return QSvgRenderer_Receivers((QSvgRenderer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, const char* signal ```
int32_t q_svgrenderer_qbase_receivers(void* self, const char* signal) {
    return QSvgRenderer_QBaseReceivers((QSvgRenderer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, int32_t (*slot)(QSvgRenderer*, const char*) ```
void q_svgrenderer_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSvgRenderer_OnReceivers((QSvgRenderer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
bool q_svgrenderer_is_signal_connected(void* self, void* signal) {
    return QSvgRenderer_IsSignalConnected((QSvgRenderer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSvgRenderer* self, QMetaMethod* signal ```
bool q_svgrenderer_qbase_is_signal_connected(void* self, void* signal) {
    return QSvgRenderer_QBaseIsSignalConnected((QSvgRenderer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSvgRenderer* self, bool (*slot)(QSvgRenderer*, QMetaMethod*) ```
void q_svgrenderer_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSvgRenderer_OnIsSignalConnected((QSvgRenderer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSvgRenderer* self ```
void q_svgrenderer_delete(void* self) {
    QSvgRenderer_Delete((QSvgRenderer*)(self));
}