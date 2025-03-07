#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqgraphicsitem.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqtimeline.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicsitemanimation.hpp"
#include "libqgraphicsitemanimation.h"

/// https://doc.qt.io/qt-6/qgraphicsitemanimation.html

/// q_graphicsitemanimation_new constructs a new QGraphicsItemAnimation object.
///
///
QGraphicsItemAnimation* q_graphicsitemanimation_new() {
    return QGraphicsItemAnimation_new();
}

/// q_graphicsitemanimation_new2 constructs a new QGraphicsItemAnimation object.
///
/// ``` QObject* parent ```
QGraphicsItemAnimation* q_graphicsitemanimation_new2(void* parent) {
    return QGraphicsItemAnimation_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsItemAnimation* self ```
QMetaObject* q_graphicsitemanimation_meta_object(void* self) {
    return QGraphicsItemAnimation_MetaObject((QGraphicsItemAnimation*)self);
}

/// ``` QGraphicsItemAnimation* self, const char* param1 ```
void* q_graphicsitemanimation_metacast(void* self, const char* param1) {
    return QGraphicsItemAnimation_Metacast((QGraphicsItemAnimation*)self, param1);
}

/// ``` QGraphicsItemAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsitemanimation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsItemAnimation_Metacall((QGraphicsItemAnimation*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemAnimation* self, int32_t (*slot)(QGraphicsItemAnimation*, enum QMetaObject__Call, int, void*) ```
void q_graphicsitemanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsItemAnimation_OnMetacall((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsItemAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsitemanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsItemAnimation_QBaseMetacall((QGraphicsItemAnimation*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsitemanimation_tr(const char* s) {
    libqt_string _str = QGraphicsItemAnimation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#item)
///
/// ``` QGraphicsItemAnimation* self ```
QGraphicsItem* q_graphicsitemanimation_item(void* self) {
    return QGraphicsItemAnimation_Item((QGraphicsItemAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setItem)
///
/// ``` QGraphicsItemAnimation* self, QGraphicsItem* item ```
void q_graphicsitemanimation_set_item(void* self, void* item) {
    QGraphicsItemAnimation_SetItem((QGraphicsItemAnimation*)self, (QGraphicsItem*)item);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#timeLine)
///
/// ``` QGraphicsItemAnimation* self ```
QTimeLine* q_graphicsitemanimation_time_line(void* self) {
    return QGraphicsItemAnimation_TimeLine((QGraphicsItemAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTimeLine)
///
/// ``` QGraphicsItemAnimation* self, QTimeLine* timeLine ```
void q_graphicsitemanimation_set_time_line(void* self, void* timeLine) {
    QGraphicsItemAnimation_SetTimeLine((QGraphicsItemAnimation*)self, (QTimeLine*)timeLine);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
QPointF* q_graphicsitemanimation_pos_at(void* self, double step) {
    return QGraphicsItemAnimation_PosAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#posList)
///
/// ``` QGraphicsItemAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_pos_list(void* self) {
    libqt_list _arr = QGraphicsItemAnimation_PosList((QGraphicsItemAnimation*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setPosAt)
///
/// ``` QGraphicsItemAnimation* self, double step, QPointF* pos ```
void q_graphicsitemanimation_set_pos_at(void* self, double step, void* pos) {
    QGraphicsItemAnimation_SetPosAt((QGraphicsItemAnimation*)self, step, (QPointF*)pos);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#transformAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
QTransform* q_graphicsitemanimation_transform_at(void* self, double step) {
    return QGraphicsItemAnimation_TransformAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
double q_graphicsitemanimation_rotation_at(void* self, double step) {
    return QGraphicsItemAnimation_RotationAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#rotationList)
///
/// ``` QGraphicsItemAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and double  */ q_graphicsitemanimation_rotation_list(void* self) {
    libqt_list _arr = QGraphicsItemAnimation_RotationList((QGraphicsItemAnimation*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setRotationAt)
///
/// ``` QGraphicsItemAnimation* self, double step, double angle ```
void q_graphicsitemanimation_set_rotation_at(void* self, double step, double angle) {
    QGraphicsItemAnimation_SetRotationAt((QGraphicsItemAnimation*)self, step, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#xTranslationAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
double q_graphicsitemanimation_x_translation_at(void* self, double step) {
    return QGraphicsItemAnimation_XTranslationAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#yTranslationAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
double q_graphicsitemanimation_y_translation_at(void* self, double step) {
    return QGraphicsItemAnimation_YTranslationAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#translationList)
///
/// ``` QGraphicsItemAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_translation_list(void* self) {
    libqt_list _arr = QGraphicsItemAnimation_TranslationList((QGraphicsItemAnimation*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setTranslationAt)
///
/// ``` QGraphicsItemAnimation* self, double step, double dx, double dy ```
void q_graphicsitemanimation_set_translation_at(void* self, double step, double dx, double dy) {
    QGraphicsItemAnimation_SetTranslationAt((QGraphicsItemAnimation*)self, step, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalScaleAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
double q_graphicsitemanimation_vertical_scale_at(void* self, double step) {
    return QGraphicsItemAnimation_VerticalScaleAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalScaleAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
double q_graphicsitemanimation_horizontal_scale_at(void* self, double step) {
    return QGraphicsItemAnimation_HorizontalScaleAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#scaleList)
///
/// ``` QGraphicsItemAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_scale_list(void* self) {
    libqt_list _arr = QGraphicsItemAnimation_ScaleList((QGraphicsItemAnimation*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setScaleAt)
///
/// ``` QGraphicsItemAnimation* self, double step, double sx, double sy ```
void q_graphicsitemanimation_set_scale_at(void* self, double step, double sx, double sy) {
    QGraphicsItemAnimation_SetScaleAt((QGraphicsItemAnimation*)self, step, sx, sy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#verticalShearAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
double q_graphicsitemanimation_vertical_shear_at(void* self, double step) {
    return QGraphicsItemAnimation_VerticalShearAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#horizontalShearAt)
///
/// ``` QGraphicsItemAnimation* self, double step ```
double q_graphicsitemanimation_horizontal_shear_at(void* self, double step) {
    return QGraphicsItemAnimation_HorizontalShearAt((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#shearList)
///
/// ``` QGraphicsItemAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and QPointF*  */ q_graphicsitemanimation_shear_list(void* self) {
    libqt_list _arr = QGraphicsItemAnimation_ShearList((QGraphicsItemAnimation*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setShearAt)
///
/// ``` QGraphicsItemAnimation* self, double step, double sh, double sv ```
void q_graphicsitemanimation_set_shear_at(void* self, double step, double sh, double sv) {
    QGraphicsItemAnimation_SetShearAt((QGraphicsItemAnimation*)self, step, sh, sv);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#clear)
///
/// ``` QGraphicsItemAnimation* self ```
void q_graphicsitemanimation_clear(void* self) {
    QGraphicsItemAnimation_Clear((QGraphicsItemAnimation*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#setStep)
///
/// ``` QGraphicsItemAnimation* self, double x ```
void q_graphicsitemanimation_set_step(void* self, double x) {
    QGraphicsItemAnimation_SetStep((QGraphicsItemAnimation*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#beforeAnimationStep)
///
/// ``` QGraphicsItemAnimation* self, double step ```
void q_graphicsitemanimation_before_animation_step(void* self, double step) {
    QGraphicsItemAnimation_BeforeAnimationStep((QGraphicsItemAnimation*)self, step);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QGraphicsItemAnimation*, double) ```
void q_graphicsitemanimation_on_before_animation_step(void* self, void (*slot)(void*, double)) {
    QGraphicsItemAnimation_OnBeforeAnimationStep((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsItemAnimation* self, double step ```
void q_graphicsitemanimation_qbase_before_animation_step(void* self, double step) {
    QGraphicsItemAnimation_QBaseBeforeAnimationStep((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitemanimation.html#afterAnimationStep)
///
/// ``` QGraphicsItemAnimation* self, double step ```
void q_graphicsitemanimation_after_animation_step(void* self, double step) {
    QGraphicsItemAnimation_AfterAnimationStep((QGraphicsItemAnimation*)self, step);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QGraphicsItemAnimation*, double) ```
void q_graphicsitemanimation_on_after_animation_step(void* self, void (*slot)(void*, double)) {
    QGraphicsItemAnimation_OnAfterAnimationStep((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsItemAnimation* self, double step ```
void q_graphicsitemanimation_qbase_after_animation_step(void* self, double step) {
    QGraphicsItemAnimation_QBaseAfterAnimationStep((QGraphicsItemAnimation*)self, step);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsitemanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsItemAnimation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsitemanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsItemAnimation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsItemAnimation* self ```
const char* q_graphicsitemanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsItemAnimation* self, const char* name ```
void q_graphicsitemanimation_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsItemAnimation* self ```
bool q_graphicsitemanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsItemAnimation* self ```
bool q_graphicsitemanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsItemAnimation* self ```
bool q_graphicsitemanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsItemAnimation* self ```
bool q_graphicsitemanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsItemAnimation* self, bool b ```
bool q_graphicsitemanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsItemAnimation* self ```
QThread* q_graphicsitemanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsItemAnimation* self, QThread* thread ```
void q_graphicsitemanimation_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsItemAnimation* self, int interval ```
int32_t q_graphicsitemanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsItemAnimation* self, int id ```
void q_graphicsitemanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsItemAnimation* self ```
libqt_list /* of QObject* */ q_graphicsitemanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsItemAnimation* self, QObject* parent ```
void q_graphicsitemanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsItemAnimation* self, QObject* filterObj ```
void q_graphicsitemanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsItemAnimation* self, QObject* obj ```
void q_graphicsitemanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsitemanimation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsItemAnimation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsitemanimation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsitemanimation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsitemanimation_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsItemAnimation* self ```
void q_graphicsitemanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsItemAnimation* self ```
void q_graphicsitemanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsItemAnimation* self, const char* name, QVariant* value ```
bool q_graphicsitemanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsItemAnimation* self, const char* name ```
QVariant* q_graphicsitemanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsItemAnimation* self ```
const char** q_graphicsitemanimation_dynamic_property_names(void* self) {
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
/// ``` QGraphicsItemAnimation* self ```
QBindingStorage* q_graphicsitemanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsItemAnimation* self ```
QBindingStorage* q_graphicsitemanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsItemAnimation* self ```
void q_graphicsitemanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QObject*) ```
void q_graphicsitemanimation_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsItemAnimation* self ```
QObject* q_graphicsitemanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsItemAnimation* self, const char* classname ```
bool q_graphicsitemanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsItemAnimation* self ```
void q_graphicsitemanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsItemAnimation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsitemanimation_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsitemanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsItemAnimation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsitemanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsItemAnimation* self, QObject* param1 ```
void q_graphicsitemanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsitemanimation_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QEvent* event ```
bool q_graphicsitemanimation_event(void* self, void* event) {
    return QGraphicsItemAnimation_Event((QGraphicsItemAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QEvent* event ```
bool q_graphicsitemanimation_qbase_event(void* self, void* event) {
    return QGraphicsItemAnimation_QBaseEvent((QGraphicsItemAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, bool (*slot)(QGraphicsItemAnimation*, QEvent*) ```
void q_graphicsitemanimation_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsItemAnimation_OnEvent((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QObject* watched, QEvent* event ```
bool q_graphicsitemanimation_event_filter(void* self, void* watched, void* event) {
    return QGraphicsItemAnimation_EventFilter((QGraphicsItemAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QObject* watched, QEvent* event ```
bool q_graphicsitemanimation_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsItemAnimation_QBaseEventFilter((QGraphicsItemAnimation*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, bool (*slot)(QGraphicsItemAnimation*, QObject*, QEvent*) ```
void q_graphicsitemanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsItemAnimation_OnEventFilter((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QTimerEvent* event ```
void q_graphicsitemanimation_timer_event(void* self, void* event) {
    QGraphicsItemAnimation_TimerEvent((QGraphicsItemAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QTimerEvent* event ```
void q_graphicsitemanimation_qbase_timer_event(void* self, void* event) {
    QGraphicsItemAnimation_QBaseTimerEvent((QGraphicsItemAnimation*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QGraphicsItemAnimation*, QTimerEvent*) ```
void q_graphicsitemanimation_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsItemAnimation_OnTimerEvent((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QChildEvent* event ```
void q_graphicsitemanimation_child_event(void* self, void* event) {
    QGraphicsItemAnimation_ChildEvent((QGraphicsItemAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QChildEvent* event ```
void q_graphicsitemanimation_qbase_child_event(void* self, void* event) {
    QGraphicsItemAnimation_QBaseChildEvent((QGraphicsItemAnimation*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QGraphicsItemAnimation*, QChildEvent*) ```
void q_graphicsitemanimation_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsItemAnimation_OnChildEvent((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QEvent* event ```
void q_graphicsitemanimation_custom_event(void* self, void* event) {
    QGraphicsItemAnimation_CustomEvent((QGraphicsItemAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QEvent* event ```
void q_graphicsitemanimation_qbase_custom_event(void* self, void* event) {
    QGraphicsItemAnimation_QBaseCustomEvent((QGraphicsItemAnimation*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QGraphicsItemAnimation*, QEvent*) ```
void q_graphicsitemanimation_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsItemAnimation_OnCustomEvent((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QMetaMethod* signal ```
void q_graphicsitemanimation_connect_notify(void* self, void* signal) {
    QGraphicsItemAnimation_ConnectNotify((QGraphicsItemAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QMetaMethod* signal ```
void q_graphicsitemanimation_qbase_connect_notify(void* self, void* signal) {
    QGraphicsItemAnimation_QBaseConnectNotify((QGraphicsItemAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QGraphicsItemAnimation*, QMetaMethod*) ```
void q_graphicsitemanimation_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsItemAnimation_OnConnectNotify((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QMetaMethod* signal ```
void q_graphicsitemanimation_disconnect_notify(void* self, void* signal) {
    QGraphicsItemAnimation_DisconnectNotify((QGraphicsItemAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QMetaMethod* signal ```
void q_graphicsitemanimation_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsItemAnimation_QBaseDisconnectNotify((QGraphicsItemAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, void (*slot)(QGraphicsItemAnimation*, QMetaMethod*) ```
void q_graphicsitemanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsItemAnimation_OnDisconnectNotify((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self ```
QObject* q_graphicsitemanimation_sender(void* self) {
    return QGraphicsItemAnimation_Sender((QGraphicsItemAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self ```
QObject* q_graphicsitemanimation_qbase_sender(void* self) {
    return QGraphicsItemAnimation_QBaseSender((QGraphicsItemAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QObject* (*slot)() ```
void q_graphicsitemanimation_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsItemAnimation_OnSender((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self ```
int32_t q_graphicsitemanimation_sender_signal_index(void* self) {
    return QGraphicsItemAnimation_SenderSignalIndex((QGraphicsItemAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self ```
int32_t q_graphicsitemanimation_qbase_sender_signal_index(void* self) {
    return QGraphicsItemAnimation_QBaseSenderSignalIndex((QGraphicsItemAnimation*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, int32_t (*slot)() ```
void q_graphicsitemanimation_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsItemAnimation_OnSenderSignalIndex((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, const char* signal ```
int32_t q_graphicsitemanimation_receivers(void* self, const char* signal) {
    return QGraphicsItemAnimation_Receivers((QGraphicsItemAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, const char* signal ```
int32_t q_graphicsitemanimation_qbase_receivers(void* self, const char* signal) {
    return QGraphicsItemAnimation_QBaseReceivers((QGraphicsItemAnimation*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, int32_t (*slot)(QGraphicsItemAnimation*, const char*) ```
void q_graphicsitemanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsItemAnimation_OnReceivers((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QMetaMethod* signal ```
bool q_graphicsitemanimation_is_signal_connected(void* self, void* signal) {
    return QGraphicsItemAnimation_IsSignalConnected((QGraphicsItemAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, QMetaMethod* signal ```
bool q_graphicsitemanimation_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsItemAnimation_QBaseIsSignalConnected((QGraphicsItemAnimation*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsItemAnimation* self, bool (*slot)(QGraphicsItemAnimation*, QMetaMethod*) ```
void q_graphicsitemanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsItemAnimation_OnIsSignalConnected((QGraphicsItemAnimation*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsItemAnimation* self ```
void q_graphicsitemanimation_delete(void* self) {
    QGraphicsItemAnimation_Delete((QGraphicsItemAnimation*)(self));
}