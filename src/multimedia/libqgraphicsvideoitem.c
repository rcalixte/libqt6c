#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqcursor.hpp"
#include "../libqgraphicseffect.hpp"
#include "../libqgraphicsitem.hpp"
#include "../libqgraphicsscene.hpp"
#include "../libqgraphicstransform.hpp"
#include "../libqgraphicswidget.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpainter.hpp"
#include "../libqpainterpath.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqstyleoption.hpp"
#include "../libqthread.hpp"
#include "../libqtransform.hpp"
#include "../libqvariant.hpp"
#include "libqvideosink.hpp"
#include "../libqwidget.hpp"
#include "../libqcoreevent.hpp"
#include "libqgraphicsvideoitem.hpp"
#include "libqgraphicsvideoitem.h"

/// https://doc.qt.io/qt-6/qgraphicsvideoitem.html

/// q_graphicsvideoitem_new constructs a new QGraphicsVideoItem object.
///
///
QGraphicsVideoItem* q_graphicsvideoitem_new() {
    return QGraphicsVideoItem_new();
}

/// q_graphicsvideoitem_new2 constructs a new QGraphicsVideoItem object.
///
/// ``` QGraphicsItem* parent ```
QGraphicsVideoItem* q_graphicsvideoitem_new2(void* parent) {
    return QGraphicsVideoItem_new2((QGraphicsItem*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsVideoItem* self ```
QMetaObject* q_graphicsvideoitem_meta_object(void* self) {
    return QGraphicsVideoItem_MetaObject((QGraphicsVideoItem*)self);
}

/// ``` QGraphicsVideoItem* self, const char* param1 ```
void* q_graphicsvideoitem_metacast(void* self, const char* param1) {
    return QGraphicsVideoItem_Metacast((QGraphicsVideoItem*)self, param1);
}

/// ``` QGraphicsVideoItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsvideoitem_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsVideoItem_Metacall((QGraphicsVideoItem*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)(QGraphicsVideoItem*, enum QMetaObject__Call, int, void*) ```
void q_graphicsvideoitem_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsVideoItem_OnMetacall((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsvideoitem_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsVideoItem_QBaseMetacall((QGraphicsVideoItem*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsvideoitem_tr(const char* s) {
    libqt_string _str = QGraphicsVideoItem_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#videoSink)
///
/// ``` QGraphicsVideoItem* self ```
QVideoSink* q_graphicsvideoitem_video_sink(void* self) {
    return QGraphicsVideoItem_VideoSink((QGraphicsVideoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#aspectRatioMode)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_aspect_ratio_mode(void* self) {
    return QGraphicsVideoItem_AspectRatioMode((QGraphicsVideoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setAspectRatioMode)
///
/// ``` QGraphicsVideoItem* self, enum Qt__AspectRatioMode mode ```
void q_graphicsvideoitem_set_aspect_ratio_mode(void* self, int64_t mode) {
    QGraphicsVideoItem_SetAspectRatioMode((QGraphicsVideoItem*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#offset)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_offset(void* self) {
    return QGraphicsVideoItem_Offset((QGraphicsVideoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setOffset)
///
/// ``` QGraphicsVideoItem* self, QPointF* offset ```
void q_graphicsvideoitem_set_offset(void* self, void* offset) {
    QGraphicsVideoItem_SetOffset((QGraphicsVideoItem*)self, (QPointF*)offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#size)
///
/// ``` QGraphicsVideoItem* self ```
QSizeF* q_graphicsvideoitem_size(void* self) {
    return QGraphicsVideoItem_Size((QGraphicsVideoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#setSize)
///
/// ``` QGraphicsVideoItem* self, QSizeF* size ```
void q_graphicsvideoitem_set_size(void* self, void* size) {
    QGraphicsVideoItem_SetSize((QGraphicsVideoItem*)self, (QSizeF*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSize)
///
/// ``` QGraphicsVideoItem* self ```
QSizeF* q_graphicsvideoitem_native_size(void* self) {
    return QGraphicsVideoItem_NativeSize((QGraphicsVideoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#boundingRect)
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_bounding_rect(void* self) {
    return QGraphicsVideoItem_BoundingRect((QGraphicsVideoItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, QRectF* (*slot)() ```
void q_graphicsvideoitem_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsVideoItem_OnBoundingRect((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_qbase_bounding_rect(void* self) {
    return QGraphicsVideoItem_QBaseBoundingRect((QGraphicsVideoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#paint)
///
/// ``` QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsvideoitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsVideoItem_Paint((QGraphicsVideoItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicsvideoitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsVideoItem_OnPaint((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicsvideoitem_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsVideoItem_QBasePaint((QGraphicsVideoItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#type)
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_type(void* self) {
    return QGraphicsVideoItem_Type((QGraphicsVideoItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)() ```
void q_graphicsvideoitem_on_type(void* self, int32_t (*slot)()) {
    QGraphicsVideoItem_OnType((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_qbase_type(void* self) {
    return QGraphicsVideoItem_QBaseType((QGraphicsVideoItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#nativeSizeChanged)
///
/// ``` QGraphicsVideoItem* self, QSizeF* size ```
void q_graphicsvideoitem_native_size_changed(void* self, void* size) {
    QGraphicsVideoItem_NativeSizeChanged((QGraphicsVideoItem*)self, (QSizeF*)size);
}

/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QSizeF*) ```
void q_graphicsvideoitem_on_native_size_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_Connect_NativeSizeChanged((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#timerEvent)
///
/// ``` QGraphicsVideoItem* self, QTimerEvent* event ```
void q_graphicsvideoitem_timer_event(void* self, void* event) {
    QGraphicsVideoItem_TimerEvent((QGraphicsVideoItem*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QTimerEvent*) ```
void q_graphicsvideoitem_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnTimerEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, QTimerEvent* event ```
void q_graphicsvideoitem_qbase_timer_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseTimerEvent((QGraphicsVideoItem*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsvideoitem.html#itemChange)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsvideoitem_item_change(void* self, int64_t change, void* value) {
    return QGraphicsVideoItem_ItemChange((QGraphicsVideoItem*)self, change, (QVariant*)value);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsVideoItem* self, QVariant* (*slot)(QGraphicsVideoItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicsvideoitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QGraphicsVideoItem_OnItemChange((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicsvideoitem_qbase_item_change(void* self, int64_t change, void* value) {
    return QGraphicsVideoItem_QBaseItemChange((QGraphicsVideoItem*)self, change, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsvideoitem_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsVideoItem_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsvideoitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsVideoItem_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsVideoItem* self, enum Qt__GestureType typeVal ```
void q_graphicsvideoitem_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsVideoItem* self, enum Qt__GestureType typeVal ```
void q_graphicsvideoitem_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicsvideoitem_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsVideoItem* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicsvideoitem_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsVideoItem* self ```
const char* q_graphicsvideoitem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsVideoItem* self, const char* name ```
void q_graphicsvideoitem_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsVideoItem* self, bool b ```
bool q_graphicsvideoitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsVideoItem* self ```
QThread* q_graphicsvideoitem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsVideoItem* self, QThread* thread ```
void q_graphicsvideoitem_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsVideoItem* self, int interval ```
int32_t q_graphicsvideoitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsVideoItem* self, int id ```
void q_graphicsvideoitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QObject* */ q_graphicsvideoitem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsVideoItem* self, QObject* parent ```
void q_graphicsvideoitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsVideoItem* self, QObject* filterObj ```
void q_graphicsvideoitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsVideoItem* self, QObject* obj ```
void q_graphicsvideoitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsvideoitem_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsVideoItem* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsvideoitem_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsvideoitem_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsvideoitem_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsVideoItem* self, const char* name, QVariant* value ```
bool q_graphicsvideoitem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsVideoItem* self, const char* name ```
QVariant* q_graphicsvideoitem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsVideoItem* self ```
const char** q_graphicsvideoitem_dynamic_property_names(void* self) {
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
/// ``` QGraphicsVideoItem* self ```
QBindingStorage* q_graphicsvideoitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsVideoItem* self ```
QBindingStorage* q_graphicsvideoitem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QObject*) ```
void q_graphicsvideoitem_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsVideoItem* self ```
QObject* q_graphicsvideoitem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsVideoItem* self, const char* classname ```
bool q_graphicsvideoitem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsVideoItem* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsvideoitem_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsvideoitem_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsVideoItem* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsvideoitem_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsVideoItem* self, QObject* param1 ```
void q_graphicsvideoitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsvideoitem_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsScene* q_graphicsvideoitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsObject* q_graphicsvideoitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsWidget* q_graphicsvideoitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsWidget* q_graphicsvideoitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsWidget* q_graphicsvideoitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* parent ```
void q_graphicsvideoitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsObject* q_graphicsvideoitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsObject* q_graphicsvideoitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItemGroup* q_graphicsvideoitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItemGroup* group ```
void q_graphicsvideoitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicsvideoitem_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsVideoItem* self, int flags ```
void q_graphicsvideoitem_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicsvideoitem_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicsvideoitem_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsVideoItem* self ```
const char* q_graphicsvideoitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsVideoItem* self, const char* toolTip ```
void q_graphicsvideoitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsVideoItem* self ```
QCursor* q_graphicsvideoitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsVideoItem* self, QCursor* cursor ```
void q_graphicsvideoitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* parent ```
bool q_graphicsvideoitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsVideoItem* self, bool visible ```
void q_graphicsvideoitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsVideoItem* self, bool selected ```
void q_graphicsvideoitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsVideoItem* self, bool on ```
void q_graphicsvideoitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsVideoItem* self, double opacity ```
void q_graphicsvideoitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsEffect* q_graphicsvideoitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsVideoItem* self, QGraphicsEffect* effect ```
void q_graphicsvideoitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsVideoItem* self, int buttons ```
void q_graphicsvideoitem_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsVideoItem* self, bool enabled ```
void q_graphicsvideoitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsVideoItem* self, bool active ```
void q_graphicsvideoitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item ```
void q_graphicsvideoitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsVideoItem* self ```
QGraphicsItem* q_graphicsvideoitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsVideoItem* self, double x ```
void q_graphicsvideoitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsVideoItem* self, double y ```
void q_graphicsvideoitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsVideoItem* self, QPointF* pos ```
void q_graphicsvideoitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
void q_graphicsvideoitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsVideoItem* self, double dx, double dy ```
void q_graphicsvideoitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
void q_graphicsvideoitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsVideoItem* self ```
QTransform* q_graphicsvideoitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsVideoItem* self ```
QTransform* q_graphicsvideoitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsVideoItem* self, QTransform* viewportTransform ```
QTransform* q_graphicsvideoitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other ```
QTransform* q_graphicsvideoitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsVideoItem* self, QTransform* matrix ```
void q_graphicsvideoitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsVideoItem* self, double angle ```
void q_graphicsvideoitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsVideoItem* self, double scale ```
void q_graphicsvideoitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicsvideoitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsVideoItem* self, QGraphicsTransform* transformations[] ```
void q_graphicsvideoitem_set_transformations(void* self, void* transformations[]) {
    QGraphicsTransform** transformations_arr = (QGraphicsTransform**)transformations;
    size_t transformations_len = 0;
    while (transformations_arr[transformations_len] != NULL) {
        transformations_len++;
    }
    libqt_list transformations_list = {
        .len = transformations_len,
        .data = {(QGraphicsTransform*)transformations},
    };
    QGraphicsItem_SetTransformations((QGraphicsItem*)self, transformations_list);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformOriginPoint)
///
/// ``` QGraphicsVideoItem* self ```
QPointF* q_graphicsvideoitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsVideoItem* self, QPointF* origin ```
void q_graphicsvideoitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsVideoItem* self, double ax, double ay ```
void q_graphicsvideoitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsVideoItem* self, double z ```
void q_graphicsvideoitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* sibling ```
void q_graphicsvideoitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsVideoItem* self ```
QRectF* q_graphicsvideoitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsVideoItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
bool q_graphicsvideoitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsVideoItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicsvideoitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsVideoItem* self ```
double q_graphicsvideoitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsVideoItem* self, double granularity ```
void q_graphicsvideoitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double width, double height ```
void q_graphicsvideoitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsVideoItem* self, double dx, double dy ```
void q_graphicsvideoitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsvideoitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicsvideoitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
QPointF* q_graphicsvideoitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
QRectF* q_graphicsvideoitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path ```
QPainterPath* q_graphicsvideoitem_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsvideoitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicsvideoitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y ```
QPointF* q_graphicsvideoitem_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h ```
QRectF* q_graphicsvideoitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* child ```
bool q_graphicsvideoitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicsvideoitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsVideoItem* self ```
bool q_graphicsvideoitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsVideoItem* self, int key ```
QVariant* q_graphicsvideoitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsVideoItem* self, int key, QVariant* value ```
void q_graphicsvideoitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsVideoItem* self ```
int64_t q_graphicsvideoitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsVideoItem* self, int hints ```
void q_graphicsvideoitem_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* filterItem ```
void q_graphicsvideoitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* filterItem ```
void q_graphicsvideoitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicsvideoitem_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicsvideoitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsVideoItem* self, enum Qt__FocusReason focusReason ```
void q_graphicsvideoitem_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
void q_graphicsvideoitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect, int xmargin ```
void q_graphicsvideoitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicsvideoitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicsvideoitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsVideoItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicsvideoitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicsvideoitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsVideoItem* self, QTransform* matrix, bool combine ```
void q_graphicsvideoitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsVideoItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicsvideoitem_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
bool q_graphicsvideoitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsVideoItem* self, QRectF* rect ```
void q_graphicsvideoitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsVideoItem* self, double dx, double dy, QRectF* rect ```
void q_graphicsvideoitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* ev ```
bool q_graphicsvideoitem_event(void* self, void* ev) {
    return QGraphicsVideoItem_Event((QGraphicsVideoItem*)self, (QEvent*)ev);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* ev ```
bool q_graphicsvideoitem_qbase_event(void* self, void* ev) {
    return QGraphicsVideoItem_QBaseEvent((QGraphicsVideoItem*)self, (QEvent*)ev);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QEvent*) ```
void q_graphicsvideoitem_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QObject* watched, QEvent* event ```
bool q_graphicsvideoitem_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_EventFilter((QGraphicsVideoItem*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QObject* watched, QEvent* event ```
bool q_graphicsvideoitem_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_QBaseEventFilter((QGraphicsVideoItem*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QObject*, QEvent*) ```
void q_graphicsvideoitem_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsVideoItem_OnEventFilter((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QChildEvent* event ```
void q_graphicsvideoitem_child_event(void* self, void* event) {
    QGraphicsVideoItem_ChildEvent((QGraphicsVideoItem*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QChildEvent* event ```
void q_graphicsvideoitem_qbase_child_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseChildEvent((QGraphicsVideoItem*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QChildEvent*) ```
void q_graphicsvideoitem_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnChildEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
void q_graphicsvideoitem_custom_event(void* self, void* event) {
    QGraphicsVideoItem_CustomEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
void q_graphicsvideoitem_qbase_custom_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseCustomEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QEvent*) ```
void q_graphicsvideoitem_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnCustomEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_connect_notify(void* self, void* signal) {
    QGraphicsVideoItem_ConnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_qbase_connect_notify(void* self, void* signal) {
    QGraphicsVideoItem_QBaseConnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QMetaMethod*) ```
void q_graphicsvideoitem_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnConnectNotify((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_disconnect_notify(void* self, void* signal) {
    QGraphicsVideoItem_DisconnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
void q_graphicsvideoitem_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsVideoItem_QBaseDisconnectNotify((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QMetaMethod*) ```
void q_graphicsvideoitem_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnDisconnectNotify((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int phase ```
void q_graphicsvideoitem_advance(void* self, int phase) {
    QGraphicsVideoItem_Advance((QGraphicsVideoItem*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int phase ```
void q_graphicsvideoitem_qbase_advance(void* self, int phase) {
    QGraphicsVideoItem_QBaseAdvance((QGraphicsVideoItem*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, int) ```
void q_graphicsvideoitem_on_advance(void* self, void (*slot)(void*, int)) {
    QGraphicsVideoItem_OnAdvance((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_shape(void* self) {
    return QGraphicsVideoItem_Shape((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_qbase_shape(void* self) {
    return QGraphicsVideoItem_QBaseShape((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* (*slot)() ```
void q_graphicsvideoitem_on_shape(void* self, QPainterPath* (*slot)()) {
    QGraphicsVideoItem_OnShape((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
bool q_graphicsvideoitem_contains(void* self, void* point) {
    return QGraphicsVideoItem_Contains((QGraphicsVideoItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPointF* point ```
bool q_graphicsvideoitem_qbase_contains(void* self, void* point) {
    return QGraphicsVideoItem_QBaseContains((QGraphicsVideoItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QPointF*) ```
void q_graphicsvideoitem_on_contains(void* self, bool (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnContains((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsVideoItem_CollidesWithItem((QGraphicsVideoItem*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsVideoItem_QBaseCollidesWithItem((QGraphicsVideoItem*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicsvideoitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsVideoItem_OnCollidesWithItem((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsVideoItem_CollidesWithPath((QGraphicsVideoItem*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicsvideoitem_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsVideoItem_QBaseCollidesWithPath((QGraphicsVideoItem*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicsvideoitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsVideoItem_OnCollidesWithPath((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item ```
bool q_graphicsvideoitem_is_obscured_by(void* self, void* item) {
    return QGraphicsVideoItem_IsObscuredBy((QGraphicsVideoItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* item ```
bool q_graphicsvideoitem_qbase_is_obscured_by(void* self, void* item) {
    return QGraphicsVideoItem_QBaseIsObscuredBy((QGraphicsVideoItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QGraphicsItem*) ```
void q_graphicsvideoitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnIsObscuredBy((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_opaque_area(void* self) {
    return QGraphicsVideoItem_OpaqueArea((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QPainterPath* q_graphicsvideoitem_qbase_opaque_area(void* self) {
    return QGraphicsVideoItem_QBaseOpaqueArea((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QPainterPath* (*slot)() ```
void q_graphicsvideoitem_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QGraphicsVideoItem_OnOpaqueArea((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsvideoitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_SceneEventFilter((QGraphicsVideoItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicsvideoitem_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsVideoItem_QBaseSceneEventFilter((QGraphicsVideoItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QGraphicsItem*, QEvent*) ```
void q_graphicsvideoitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsVideoItem_OnSceneEventFilter((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
bool q_graphicsvideoitem_scene_event(void* self, void* event) {
    return QGraphicsVideoItem_SceneEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QEvent* event ```
bool q_graphicsvideoitem_qbase_scene_event(void* self, void* event) {
    return QGraphicsVideoItem_QBaseSceneEvent((QGraphicsVideoItem*)self, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QEvent*) ```
void q_graphicsvideoitem_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnSceneEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsvideoitem_context_menu_event(void* self, void* event) {
    QGraphicsVideoItem_ContextMenuEvent((QGraphicsVideoItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicsvideoitem_qbase_context_menu_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseContextMenuEvent((QGraphicsVideoItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicsvideoitem_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnContextMenuEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drag_enter_event(void* self, void* event) {
    QGraphicsVideoItem_DragEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDragEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnDragEnterEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drag_leave_event(void* self, void* event) {
    QGraphicsVideoItem_DragLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDragLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnDragLeaveEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drag_move_event(void* self, void* event) {
    QGraphicsVideoItem_DragMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drag_move_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDragMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnDragMoveEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_drop_event(void* self, void* event) {
    QGraphicsVideoItem_DropEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicsvideoitem_qbase_drop_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseDropEvent((QGraphicsVideoItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicsvideoitem_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnDropEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_focus_in_event(void* self, void* event) {
    QGraphicsVideoItem_FocusInEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_qbase_focus_in_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseFocusInEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QFocusEvent*) ```
void q_graphicsvideoitem_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnFocusInEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_focus_out_event(void* self, void* event) {
    QGraphicsVideoItem_FocusOutEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QFocusEvent* event ```
void q_graphicsvideoitem_qbase_focus_out_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseFocusOutEvent((QGraphicsVideoItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QFocusEvent*) ```
void q_graphicsvideoitem_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnFocusOutEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_hover_enter_event(void* self, void* event) {
    QGraphicsVideoItem_HoverEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_qbase_hover_enter_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseHoverEnterEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsvideoitem_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnHoverEnterEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_hover_move_event(void* self, void* event) {
    QGraphicsVideoItem_HoverMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_qbase_hover_move_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseHoverMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsvideoitem_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnHoverMoveEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_hover_leave_event(void* self, void* event) {
    QGraphicsVideoItem_HoverLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicsvideoitem_qbase_hover_leave_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseHoverLeaveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicsvideoitem_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnHoverLeaveEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_key_press_event(void* self, void* event) {
    QGraphicsVideoItem_KeyPressEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_qbase_key_press_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseKeyPressEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QKeyEvent*) ```
void q_graphicsvideoitem_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnKeyPressEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_key_release_event(void* self, void* event) {
    QGraphicsVideoItem_KeyReleaseEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QKeyEvent* event ```
void q_graphicsvideoitem_qbase_key_release_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseKeyReleaseEvent((QGraphicsVideoItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QKeyEvent*) ```
void q_graphicsvideoitem_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnKeyReleaseEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_press_event(void* self, void* event) {
    QGraphicsVideoItem_MousePressEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMousePressEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnMousePressEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_move_event(void* self, void* event) {
    QGraphicsVideoItem_MouseMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMouseMoveEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnMouseMoveEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_release_event(void* self, void* event) {
    QGraphicsVideoItem_MouseReleaseEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMouseReleaseEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnMouseReleaseEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsVideoItem_MouseDoubleClickEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicsvideoitem_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseMouseDoubleClickEvent((QGraphicsVideoItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicsvideoitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnMouseDoubleClickEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsvideoitem_wheel_event(void* self, void* event) {
    QGraphicsVideoItem_WheelEvent((QGraphicsVideoItem*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicsvideoitem_qbase_wheel_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseWheelEvent((QGraphicsVideoItem*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicsvideoitem_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnWheelEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QInputMethodEvent* event ```
void q_graphicsvideoitem_input_method_event(void* self, void* event) {
    QGraphicsVideoItem_InputMethodEvent((QGraphicsVideoItem*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QInputMethodEvent* event ```
void q_graphicsvideoitem_qbase_input_method_event(void* self, void* event) {
    QGraphicsVideoItem_QBaseInputMethodEvent((QGraphicsVideoItem*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, QInputMethodEvent*) ```
void q_graphicsvideoitem_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnInputMethodEvent((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsvideoitem_input_method_query(void* self, int64_t query) {
    return QGraphicsVideoItem_InputMethodQuery((QGraphicsVideoItem*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicsvideoitem_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsVideoItem_QBaseInputMethodQuery((QGraphicsVideoItem*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* (*slot)(QGraphicsVideoItem*, enum Qt__InputMethodQuery) ```
void q_graphicsvideoitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsVideoItem_OnInputMethodQuery((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsvideoitem_supports_extension(void* self, int64_t extension) {
    return QGraphicsVideoItem_SupportsExtension((QGraphicsVideoItem*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicsvideoitem_qbase_supports_extension(void* self, int64_t extension) {
    return QGraphicsVideoItem_QBaseSupportsExtension((QGraphicsVideoItem*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, enum QGraphicsItem__Extension) ```
void q_graphicsvideoitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QGraphicsVideoItem_OnSupportsExtension((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsvideoitem_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsVideoItem_SetExtension((QGraphicsVideoItem*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicsvideoitem_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsVideoItem_QBaseSetExtension((QGraphicsVideoItem*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)(QGraphicsVideoItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicsvideoitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QGraphicsVideoItem_OnSetExtension((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* variant ```
QVariant* q_graphicsvideoitem_extension(void* self, void* variant) {
    return QGraphicsVideoItem_Extension((QGraphicsVideoItem*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* variant ```
QVariant* q_graphicsvideoitem_qbase_extension(void* self, void* variant) {
    return QGraphicsVideoItem_QBaseExtension((QGraphicsVideoItem*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QVariant* (*slot)(QGraphicsVideoItem*, QVariant*) ```
void q_graphicsvideoitem_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnExtension((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_update_micro_focus(void* self) {
    QGraphicsVideoItem_UpdateMicroFocus((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_update_micro_focus(void* self) {
    QGraphicsVideoItem_QBaseUpdateMicroFocus((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_update_micro_focus(void* self, void (*slot)()) {
    QGraphicsVideoItem_OnUpdateMicroFocus((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QObject* q_graphicsvideoitem_sender(void* self) {
    return QGraphicsVideoItem_Sender((QGraphicsVideoItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
QObject* q_graphicsvideoitem_qbase_sender(void* self) {
    return QGraphicsVideoItem_QBaseSender((QGraphicsVideoItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QObject* (*slot)() ```
void q_graphicsvideoitem_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsVideoItem_OnSender((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_sender_signal_index(void* self) {
    return QGraphicsVideoItem_SenderSignalIndex((QGraphicsVideoItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
int32_t q_graphicsvideoitem_qbase_sender_signal_index(void* self) {
    return QGraphicsVideoItem_QBaseSenderSignalIndex((QGraphicsVideoItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)() ```
void q_graphicsvideoitem_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsVideoItem_OnSenderSignalIndex((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, const char* signal ```
int32_t q_graphicsvideoitem_receivers(void* self, const char* signal) {
    return QGraphicsVideoItem_Receivers((QGraphicsVideoItem*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, const char* signal ```
int32_t q_graphicsvideoitem_qbase_receivers(void* self, const char* signal) {
    return QGraphicsVideoItem_QBaseReceivers((QGraphicsVideoItem*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, int32_t (*slot)(QGraphicsVideoItem*, const char*) ```
void q_graphicsvideoitem_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsVideoItem_OnReceivers((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
bool q_graphicsvideoitem_is_signal_connected(void* self, void* signal) {
    return QGraphicsVideoItem_IsSignalConnected((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, QMetaMethod* signal ```
bool q_graphicsvideoitem_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsVideoItem_QBaseIsSignalConnected((QGraphicsVideoItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, bool (*slot)(QGraphicsVideoItem*, QMetaMethod*) ```
void q_graphicsvideoitem_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsVideoItem_OnIsSignalConnected((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_add_to_index(void* self) {
    QGraphicsVideoItem_AddToIndex((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_add_to_index(void* self) {
    QGraphicsVideoItem_QBaseAddToIndex((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_add_to_index(void* self, void (*slot)()) {
    QGraphicsVideoItem_OnAddToIndex((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_remove_from_index(void* self) {
    QGraphicsVideoItem_RemoveFromIndex((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_remove_from_index(void* self) {
    QGraphicsVideoItem_QBaseRemoveFromIndex((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_remove_from_index(void* self, void (*slot)()) {
    QGraphicsVideoItem_OnRemoveFromIndex((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_prepare_geometry_change(void* self) {
    QGraphicsVideoItem_PrepareGeometryChange((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_qbase_prepare_geometry_change(void* self) {
    QGraphicsVideoItem_QBasePrepareGeometryChange((QGraphicsVideoItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsVideoItem* self, void (*slot)() ```
void q_graphicsvideoitem_on_prepare_geometry_change(void* self, void (*slot)()) {
    QGraphicsVideoItem_OnPrepareGeometryChange((QGraphicsVideoItem*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsVideoItem* self ```
void q_graphicsvideoitem_delete(void* self) {
    QGraphicsVideoItem_Delete((QGraphicsVideoItem*)(self));
}