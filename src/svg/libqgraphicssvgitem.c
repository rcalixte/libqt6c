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
#include "libqsvgrenderer.hpp"
#include "../libqthread.hpp"
#include "../libqtransform.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "../libqcoreevent.hpp"
#include "libqgraphicssvgitem.hpp"
#include "libqgraphicssvgitem.h"

/// https://doc.qt.io/qt-6/qgraphicssvgitem.html

/// q_graphicssvgitem_new constructs a new QGraphicsSvgItem object.
///
///
QGraphicsSvgItem* q_graphicssvgitem_new() {
    return QGraphicsSvgItem_new();
}

/// q_graphicssvgitem_new2 constructs a new QGraphicsSvgItem object.
///
/// ``` const char* fileName ```
QGraphicsSvgItem* q_graphicssvgitem_new2(const char* fileName) {
    return QGraphicsSvgItem_new2(qstring(fileName));
}

/// q_graphicssvgitem_new3 constructs a new QGraphicsSvgItem object.
///
/// ``` QGraphicsItem* parentItem ```
QGraphicsSvgItem* q_graphicssvgitem_new3(void* parentItem) {
    return QGraphicsSvgItem_new3((QGraphicsItem*)parentItem);
}

/// q_graphicssvgitem_new4 constructs a new QGraphicsSvgItem object.
///
/// ``` const char* fileName, QGraphicsItem* parentItem ```
QGraphicsSvgItem* q_graphicssvgitem_new4(const char* fileName, void* parentItem) {
    return QGraphicsSvgItem_new4(qstring(fileName), (QGraphicsItem*)parentItem);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsSvgItem* self ```
QMetaObject* q_graphicssvgitem_meta_object(void* self) {
    return QGraphicsSvgItem_MetaObject((QGraphicsSvgItem*)self);
}

/// ``` QGraphicsSvgItem* self, const char* param1 ```
void* q_graphicssvgitem_metacast(void* self, const char* param1) {
    return QGraphicsSvgItem_Metacast((QGraphicsSvgItem*)self, param1);
}

/// ``` QGraphicsSvgItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicssvgitem_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsSvgItem_Metacall((QGraphicsSvgItem*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)(QGraphicsSvgItem*, enum QMetaObject__Call, int, void*) ```
void q_graphicssvgitem_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsSvgItem_OnMetacall((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicssvgitem_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsSvgItem_QBaseMetacall((QGraphicsSvgItem*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicssvgitem_tr(const char* s) {
    libqt_string _str = QGraphicsSvgItem_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setSharedRenderer)
///
/// ``` QGraphicsSvgItem* self, QSvgRenderer* renderer ```
void q_graphicssvgitem_set_shared_renderer(void* self, void* renderer) {
    QGraphicsSvgItem_SetSharedRenderer((QGraphicsSvgItem*)self, (QSvgRenderer*)renderer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#renderer)
///
/// ``` QGraphicsSvgItem* self ```
QSvgRenderer* q_graphicssvgitem_renderer(void* self) {
    return QGraphicsSvgItem_Renderer((QGraphicsSvgItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setElementId)
///
/// ``` QGraphicsSvgItem* self, const char* id ```
void q_graphicssvgitem_set_element_id(void* self, const char* id) {
    QGraphicsSvgItem_SetElementId((QGraphicsSvgItem*)self, qstring(id));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#elementId)
///
/// ``` QGraphicsSvgItem* self ```
const char* q_graphicssvgitem_element_id(void* self) {
    libqt_string _str = QGraphicsSvgItem_ElementId((QGraphicsSvgItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setCachingEnabled)
///
/// ``` QGraphicsSvgItem* self, bool cachingEnabled ```
void q_graphicssvgitem_set_caching_enabled(void* self, bool cachingEnabled) {
    QGraphicsSvgItem_SetCachingEnabled((QGraphicsSvgItem*)self, cachingEnabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#isCachingEnabled)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_caching_enabled(void* self) {
    return QGraphicsSvgItem_IsCachingEnabled((QGraphicsSvgItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#setMaximumCacheSize)
///
/// ``` QGraphicsSvgItem* self, QSize* size ```
void q_graphicssvgitem_set_maximum_cache_size(void* self, void* size) {
    QGraphicsSvgItem_SetMaximumCacheSize((QGraphicsSvgItem*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#maximumCacheSize)
///
/// ``` QGraphicsSvgItem* self ```
QSize* q_graphicssvgitem_maximum_cache_size(void* self) {
    return QGraphicsSvgItem_MaximumCacheSize((QGraphicsSvgItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#boundingRect)
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_bounding_rect(void* self) {
    return QGraphicsSvgItem_BoundingRect((QGraphicsSvgItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, QRectF* (*slot)() ```
void q_graphicssvgitem_on_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsSvgItem_OnBoundingRect((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_qbase_bounding_rect(void* self) {
    return QGraphicsSvgItem_QBaseBoundingRect((QGraphicsSvgItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#paint)
///
/// ``` QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicssvgitem_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsSvgItem_Paint((QGraphicsSvgItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QPainter*, QStyleOptionGraphicsItem*, QWidget*) ```
void q_graphicssvgitem_on_paint(void* self, void (*slot)(void*, void*, void*, void*)) {
    QGraphicsSvgItem_OnPaint((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget ```
void q_graphicssvgitem_qbase_paint(void* self, void* painter, void* option, void* widget) {
    QGraphicsSvgItem_QBasePaint((QGraphicsSvgItem*)self, (QPainter*)painter, (QStyleOptionGraphicsItem*)option, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicssvgitem.html#type)
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_type(void* self) {
    return QGraphicsSvgItem_Type((QGraphicsSvgItem*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)() ```
void q_graphicssvgitem_on_type(void* self, int32_t (*slot)()) {
    QGraphicsSvgItem_OnType((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_qbase_type(void* self) {
    return QGraphicsSvgItem_QBaseType((QGraphicsSvgItem*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicssvgitem_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsSvgItem_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicssvgitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsSvgItem_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsSvgItem* self, enum Qt__GestureType typeVal ```
void q_graphicssvgitem_grab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_GrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#ungrabGesture)
///
/// ``` QGraphicsSvgItem* self, enum Qt__GestureType typeVal ```
void q_graphicssvgitem_ungrab_gesture(void* self, int64_t typeVal) {
    QGraphicsObject_UngrabGesture((QGraphicsObject*)self, typeVal);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#parentChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_parent_changed(void* self) {
    QGraphicsObject_ParentChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_parent_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ParentChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#opacityChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_opacity_changed(void* self) {
    QGraphicsObject_OpacityChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_opacity_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_OpacityChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#visibleChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_visible_changed(void* self) {
    QGraphicsObject_VisibleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_visible_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_VisibleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#enabledChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_enabled_changed(void* self) {
    QGraphicsObject_EnabledChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_enabled_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_EnabledChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#xChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_x_changed(void* self) {
    QGraphicsObject_XChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_x_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_XChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#yChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_y_changed(void* self) {
    QGraphicsObject_YChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_y_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_YChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#zChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_z_changed(void* self) {
    QGraphicsObject_ZChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_z_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ZChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#rotationChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_rotation_changed(void* self) {
    QGraphicsObject_RotationChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_rotation_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_RotationChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#scaleChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_scale_changed(void* self) {
    QGraphicsObject_ScaleChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_scale_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ScaleChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#childrenChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_children_changed(void* self) {
    QGraphicsObject_ChildrenChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_children_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_ChildrenChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#widthChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_width_changed(void* self) {
    QGraphicsObject_WidthChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_width_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_WidthChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#heightChanged)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_height_changed(void* self) {
    QGraphicsObject_HeightChanged((QGraphicsObject*)self);
}

/// Inherited from QGraphicsObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsObject*) ```
void q_graphicssvgitem_on_height_changed(void* self, void (*slot)(void*)) {
    QGraphicsObject_Connect_HeightChanged((QGraphicsObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#grabGesture)
///
/// ``` QGraphicsSvgItem* self, enum Qt__GestureType typeVal, int flags ```
void q_graphicssvgitem_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QGraphicsObject_GrabGesture2((QGraphicsObject*)self, typeVal, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsSvgItem* self ```
const char* q_graphicssvgitem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsSvgItem* self, const char* name ```
void q_graphicssvgitem_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsSvgItem* self, bool b ```
bool q_graphicssvgitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsSvgItem* self ```
QThread* q_graphicssvgitem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsSvgItem* self, QThread* thread ```
void q_graphicssvgitem_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsSvgItem* self, int interval ```
int32_t q_graphicssvgitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsSvgItem* self, int id ```
void q_graphicssvgitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QObject* */ q_graphicssvgitem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsSvgItem* self, QObject* parent ```
void q_graphicssvgitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsSvgItem* self, QObject* filterObj ```
void q_graphicssvgitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsSvgItem* self, QObject* obj ```
void q_graphicssvgitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicssvgitem_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsSvgItem* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicssvgitem_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicssvgitem_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicssvgitem_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsSvgItem* self, const char* name, QVariant* value ```
bool q_graphicssvgitem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsSvgItem* self, const char* name ```
QVariant* q_graphicssvgitem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsSvgItem* self ```
const char** q_graphicssvgitem_dynamic_property_names(void* self) {
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
/// ``` QGraphicsSvgItem* self ```
QBindingStorage* q_graphicssvgitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsSvgItem* self ```
QBindingStorage* q_graphicssvgitem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QObject*) ```
void q_graphicssvgitem_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsSvgItem* self ```
QObject* q_graphicssvgitem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsSvgItem* self, const char* classname ```
bool q_graphicssvgitem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsSvgItem* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicssvgitem_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicssvgitem_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsSvgItem* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicssvgitem_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsSvgItem* self, QObject* param1 ```
void q_graphicssvgitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QObject*, QObject*) ```
void q_graphicssvgitem_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scene)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsScene* q_graphicssvgitem_scene(void* self) {
    return QGraphicsItem_Scene((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_parent_item(void* self) {
    return QGraphicsItem_ParentItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_top_level_item(void* self) {
    return QGraphicsItem_TopLevelItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentObject)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsObject* q_graphicssvgitem_parent_object(void* self) {
    return QGraphicsItem_ParentObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#parentWidget)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsWidget* q_graphicssvgitem_parent_widget(void* self) {
    return QGraphicsItem_ParentWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#topLevelWidget)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsWidget* q_graphicssvgitem_top_level_widget(void* self) {
    return QGraphicsItem_TopLevelWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#window)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsWidget* q_graphicssvgitem_window(void* self) {
    return QGraphicsItem_Window((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panel)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_panel(void* self) {
    return QGraphicsItem_Panel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setParentItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* parent ```
void q_graphicssvgitem_set_parent_item(void* self, void* parent) {
    QGraphicsItem_SetParentItem((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childItems)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_child_items(void* self) {
    libqt_list _arr = QGraphicsItem_ChildItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWidget)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_widget(void* self) {
    return QGraphicsItem_IsWidget((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isWindow)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_window(void* self) {
    return QGraphicsItem_IsWindow((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isPanel)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_panel(void* self) {
    return QGraphicsItem_IsPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsObject* q_graphicssvgitem_to_graphics_object(void* self) {
    return QGraphicsItem_ToGraphicsObject((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toGraphicsObject)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsObject* q_graphicssvgitem_to_graphics_object2(void* self) {
    return QGraphicsItem_ToGraphicsObject2((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#group)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItemGroup* q_graphicssvgitem_group(void* self) {
    return QGraphicsItem_Group((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGroup)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItemGroup* group ```
void q_graphicssvgitem_set_group(void* self, void* group) {
    QGraphicsItem_SetGroup((QGraphicsItem*)self, (QGraphicsItemGroup*)group);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#flags)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_flags(void* self) {
    return QGraphicsItem_Flags((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemFlag flag ```
void q_graphicssvgitem_set_flag(void* self, int64_t flag) {
    QGraphicsItem_SetFlag((QGraphicsItem*)self, flag);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlags)
///
/// ``` QGraphicsSvgItem* self, int flags ```
void q_graphicssvgitem_set_flags(void* self, int64_t flags) {
    QGraphicsItem_SetFlags((QGraphicsItem*)self, flags);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cacheMode)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_cache_mode(void* self) {
    return QGraphicsItem_CacheMode((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__CacheMode mode ```
void q_graphicssvgitem_set_cache_mode(void* self, int64_t mode) {
    QGraphicsItem_SetCacheMode((QGraphicsItem*)self, mode);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#panelModality)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_panel_modality(void* self) {
    return QGraphicsItem_PanelModality((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPanelModality)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__PanelModality panelModality ```
void q_graphicssvgitem_set_panel_modality(void* self, int64_t panelModality) {
    QGraphicsItem_SetPanelModality((QGraphicsItem*)self, panelModality);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isBlockedByModalPanel)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_blocked_by_modal_panel(void* self) {
    return QGraphicsItem_IsBlockedByModalPanel((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#toolTip)
///
/// ``` QGraphicsSvgItem* self ```
const char* q_graphicssvgitem_tool_tip(void* self) {
    libqt_string _str = QGraphicsItem_ToolTip((QGraphicsItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setToolTip)
///
/// ``` QGraphicsSvgItem* self, const char* toolTip ```
void q_graphicssvgitem_set_tool_tip(void* self, const char* toolTip) {
    QGraphicsItem_SetToolTip((QGraphicsItem*)self, qstring(toolTip));
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#cursor)
///
/// ``` QGraphicsSvgItem* self ```
QCursor* q_graphicssvgitem_cursor(void* self) {
    return QGraphicsItem_Cursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCursor)
///
/// ``` QGraphicsSvgItem* self, QCursor* cursor ```
void q_graphicssvgitem_set_cursor(void* self, void* cursor) {
    QGraphicsItem_SetCursor((QGraphicsItem*)self, (QCursor*)cursor);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasCursor)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_has_cursor(void* self) {
    return QGraphicsItem_HasCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#unsetCursor)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_unset_cursor(void* self) {
    QGraphicsItem_UnsetCursor((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisible)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_visible(void* self) {
    return QGraphicsItem_IsVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isVisibleTo)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* parent ```
bool q_graphicssvgitem_is_visible_to(void* self, void* parent) {
    return QGraphicsItem_IsVisibleTo((QGraphicsItem*)self, (QGraphicsItem*)parent);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setVisible)
///
/// ``` QGraphicsSvgItem* self, bool visible ```
void q_graphicssvgitem_set_visible(void* self, bool visible) {
    QGraphicsItem_SetVisible((QGraphicsItem*)self, visible);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hide)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_hide(void* self) {
    QGraphicsItem_Hide((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#show)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_show(void* self) {
    QGraphicsItem_Show((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isEnabled)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_enabled(void* self) {
    return QGraphicsItem_IsEnabled((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setEnabled)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_enabled(void* self, bool enabled) {
    QGraphicsItem_SetEnabled((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isSelected)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_selected(void* self) {
    return QGraphicsItem_IsSelected((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setSelected)
///
/// ``` QGraphicsSvgItem* self, bool selected ```
void q_graphicssvgitem_set_selected(void* self, bool selected) {
    QGraphicsItem_SetSelected((QGraphicsItem*)self, selected);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptDrops)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_accept_drops(void* self) {
    return QGraphicsItem_AcceptDrops((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptDrops)
///
/// ``` QGraphicsSvgItem* self, bool on ```
void q_graphicssvgitem_set_accept_drops(void* self, bool on) {
    QGraphicsItem_SetAcceptDrops((QGraphicsItem*)self, on);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opacity)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_opacity(void* self) {
    return QGraphicsItem_Opacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#effectiveOpacity)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_effective_opacity(void* self) {
    return QGraphicsItem_EffectiveOpacity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setOpacity)
///
/// ``` QGraphicsSvgItem* self, double opacity ```
void q_graphicssvgitem_set_opacity(void* self, double opacity) {
    QGraphicsItem_SetOpacity((QGraphicsItem*)self, opacity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#graphicsEffect)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsEffect* q_graphicssvgitem_graphics_effect(void* self) {
    return QGraphicsItem_GraphicsEffect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setGraphicsEffect)
///
/// ``` QGraphicsSvgItem* self, QGraphicsEffect* effect ```
void q_graphicssvgitem_set_graphics_effect(void* self, void* effect) {
    QGraphicsItem_SetGraphicsEffect((QGraphicsItem*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptedMouseButtons)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_accepted_mouse_buttons(void* self) {
    return QGraphicsItem_AcceptedMouseButtons((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptedMouseButtons)
///
/// ``` QGraphicsSvgItem* self, int buttons ```
void q_graphicssvgitem_set_accepted_mouse_buttons(void* self, int64_t buttons) {
    QGraphicsItem_SetAcceptedMouseButtons((QGraphicsItem*)self, buttons);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptHoverEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_accept_hover_events(void* self) {
    return QGraphicsItem_AcceptHoverEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptHoverEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_accept_hover_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptHoverEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#acceptTouchEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_accept_touch_events(void* self) {
    return QGraphicsItem_AcceptTouchEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setAcceptTouchEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_accept_touch_events(void* self, bool enabled) {
    QGraphicsItem_SetAcceptTouchEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#filtersChildEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_filters_child_events(void* self) {
    return QGraphicsItem_FiltersChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFiltersChildEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_filters_child_events(void* self, bool enabled) {
    QGraphicsItem_SetFiltersChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#handlesChildEvents)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_handles_child_events(void* self) {
    return QGraphicsItem_HandlesChildEvents((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setHandlesChildEvents)
///
/// ``` QGraphicsSvgItem* self, bool enabled ```
void q_graphicssvgitem_set_handles_child_events(void* self, bool enabled) {
    QGraphicsItem_SetHandlesChildEvents((QGraphicsItem*)self, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isActive)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_active(void* self) {
    return QGraphicsItem_IsActive((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setActive)
///
/// ``` QGraphicsSvgItem* self, bool active ```
void q_graphicssvgitem_set_active(void* self, bool active) {
    QGraphicsItem_SetActive((QGraphicsItem*)self, active);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hasFocus)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_has_focus(void* self) {
    return QGraphicsItem_HasFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_set_focus(void* self) {
    QGraphicsItem_SetFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clearFocus)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_clear_focus(void* self) {
    QGraphicsItem_ClearFocus((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusProxy)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_focus_proxy(void* self) {
    return QGraphicsItem_FocusProxy((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocusProxy)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item ```
void q_graphicssvgitem_set_focus_proxy(void* self, void* item) {
    QGraphicsItem_SetFocusProxy((QGraphicsItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_focus_item(void* self) {
    return QGraphicsItem_FocusItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusScopeItem)
///
/// ``` QGraphicsSvgItem* self ```
QGraphicsItem* q_graphicssvgitem_focus_scope_item(void* self) {
    return QGraphicsItem_FocusScopeItem((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabMouse)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_grab_mouse(void* self) {
    QGraphicsItem_GrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabMouse)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_ungrab_mouse(void* self) {
    QGraphicsItem_UngrabMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#grabKeyboard)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_grab_keyboard(void* self) {
    QGraphicsItem_GrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ungrabKeyboard)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_ungrab_keyboard(void* self) {
    QGraphicsItem_UngrabKeyboard((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#pos)
///
/// ``` QGraphicsSvgItem* self ```
QPointF* q_graphicssvgitem_pos(void* self) {
    return QGraphicsItem_Pos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#x)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_x(void* self) {
    return QGraphicsItem_X((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setX)
///
/// ``` QGraphicsSvgItem* self, double x ```
void q_graphicssvgitem_set_x(void* self, double x) {
    QGraphicsItem_SetX((QGraphicsItem*)self, x);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#y)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_y(void* self) {
    return QGraphicsItem_Y((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setY)
///
/// ``` QGraphicsSvgItem* self, double y ```
void q_graphicssvgitem_set_y(void* self, double y) {
    QGraphicsItem_SetY((QGraphicsItem*)self, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scenePos)
///
/// ``` QGraphicsSvgItem* self ```
QPointF* q_graphicssvgitem_scene_pos(void* self) {
    return QGraphicsItem_ScenePos((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsSvgItem* self, QPointF* pos ```
void q_graphicssvgitem_set_pos(void* self, void* pos) {
    QGraphicsItem_SetPos((QGraphicsItem*)self, (QPointF*)pos);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setPos)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
void q_graphicssvgitem_set_pos2(void* self, double x, double y) {
    QGraphicsItem_SetPos2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#moveBy)
///
/// ``` QGraphicsSvgItem* self, double dx, double dy ```
void q_graphicssvgitem_move_by(void* self, double dx, double dy) {
    QGraphicsItem_MoveBy((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_ensure_visible(void* self) {
    QGraphicsItem_EnsureVisible((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
void q_graphicssvgitem_ensure_visible2(void* self, double x, double y, double w, double h) {
    QGraphicsItem_EnsureVisible2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transform)
///
/// ``` QGraphicsSvgItem* self ```
QTransform* q_graphicssvgitem_transform(void* self) {
    return QGraphicsItem_Transform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneTransform)
///
/// ``` QGraphicsSvgItem* self ```
QTransform* q_graphicssvgitem_scene_transform(void* self) {
    return QGraphicsItem_SceneTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#deviceTransform)
///
/// ``` QGraphicsSvgItem* self, QTransform* viewportTransform ```
QTransform* q_graphicssvgitem_device_transform(void* self, void* viewportTransform) {
    return QGraphicsItem_DeviceTransform((QGraphicsItem*)self, (QTransform*)viewportTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other ```
QTransform* q_graphicssvgitem_item_transform(void* self, void* other) {
    return QGraphicsItem_ItemTransform((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsSvgItem* self, QTransform* matrix ```
void q_graphicssvgitem_set_transform(void* self, void* matrix) {
    QGraphicsItem_SetTransform((QGraphicsItem*)self, (QTransform*)matrix);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#resetTransform)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_reset_transform(void* self) {
    QGraphicsItem_ResetTransform((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setRotation)
///
/// ``` QGraphicsSvgItem* self, double angle ```
void q_graphicssvgitem_set_rotation(void* self, double angle) {
    QGraphicsItem_SetRotation((QGraphicsItem*)self, angle);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#rotation)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_rotation(void* self) {
    return QGraphicsItem_Rotation((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setScale)
///
/// ``` QGraphicsSvgItem* self, double scale ```
void q_graphicssvgitem_set_scale(void* self, double scale) {
    QGraphicsItem_SetScale((QGraphicsItem*)self, scale);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scale)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_scale(void* self) {
    return QGraphicsItem_Scale((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#transformations)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QGraphicsTransform* */ q_graphicssvgitem_transformations(void* self) {
    libqt_list _arr = QGraphicsItem_Transformations((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformations)
///
/// ``` QGraphicsSvgItem* self, QGraphicsTransform* transformations[] ```
void q_graphicssvgitem_set_transformations(void* self, void* transformations[]) {
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
/// ``` QGraphicsSvgItem* self ```
QPointF* q_graphicssvgitem_transform_origin_point(void* self) {
    return QGraphicsItem_TransformOriginPoint((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsSvgItem* self, QPointF* origin ```
void q_graphicssvgitem_set_transform_origin_point(void* self, void* origin) {
    QGraphicsItem_SetTransformOriginPoint((QGraphicsItem*)self, (QPointF*)origin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransformOriginPoint)
///
/// ``` QGraphicsSvgItem* self, double ax, double ay ```
void q_graphicssvgitem_set_transform_origin_point2(void* self, double ax, double ay) {
    QGraphicsItem_SetTransformOriginPoint2((QGraphicsItem*)self, ax, ay);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#zValue)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_z_value(void* self) {
    return QGraphicsItem_ZValue((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setZValue)
///
/// ``` QGraphicsSvgItem* self, double z ```
void q_graphicssvgitem_set_z_value(void* self, double z) {
    QGraphicsItem_SetZValue((QGraphicsItem*)self, z);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#stackBefore)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* sibling ```
void q_graphicssvgitem_stack_before(void* self, void* sibling) {
    QGraphicsItem_StackBefore((QGraphicsItem*)self, (QGraphicsItem*)sibling);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#childrenBoundingRect)
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_children_bounding_rect(void* self) {
    return QGraphicsItem_ChildrenBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneBoundingRect)
///
/// ``` QGraphicsSvgItem* self ```
QRectF* q_graphicssvgitem_scene_bounding_rect(void* self) {
    return QGraphicsItem_SceneBoundingRect((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isClipped)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_clipped(void* self) {
    return QGraphicsItem_IsClipped((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#clipPath)
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_clip_path(void* self) {
    return QGraphicsItem_ClipPath((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsSvgItem* self ```
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items(void* self) {
    libqt_list _arr = QGraphicsItem_CollidingItems((QGraphicsItem*)self);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_obscured(void* self) {
    return QGraphicsItem_IsObscured((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
bool q_graphicssvgitem_is_obscured2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_IsObscured2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegion)
///
/// ``` QGraphicsSvgItem* self, QTransform* itemToDeviceTransform ```
QRegion* q_graphicssvgitem_bounding_region(void* self, void* itemToDeviceTransform) {
    return QGraphicsItem_BoundingRegion((QGraphicsItem*)self, (QTransform*)itemToDeviceTransform);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#boundingRegionGranularity)
///
/// ``` QGraphicsSvgItem* self ```
double q_graphicssvgitem_bounding_region_granularity(void* self) {
    return QGraphicsItem_BoundingRegionGranularity((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setBoundingRegionGranularity)
///
/// ``` QGraphicsSvgItem* self, double granularity ```
void q_graphicssvgitem_set_bounding_region_granularity(void* self, double granularity) {
    QGraphicsItem_SetBoundingRegionGranularity((QGraphicsItem*)self, granularity);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_update(void* self) {
    QGraphicsItem_Update((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double width, double height ```
void q_graphicssvgitem_update2(void* self, double x, double y, double width, double height) {
    QGraphicsItem_Update2((QGraphicsItem*)self, x, y, width, height);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsSvgItem* self, double dx, double dy ```
void q_graphicssvgitem_scroll(void* self, double dx, double dy) {
    QGraphicsItem_Scroll((QGraphicsItem*)self, dx, dy);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicssvgitem_map_to_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_to_parent(void* self, void* point) {
    return QGraphicsItem_MapToParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_to_scene(void* self, void* point) {
    return QGraphicsItem_MapToScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectToItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_to_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectToParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_to_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectToScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_to_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapToItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_to_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapToParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_to_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapToSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPointF* point ```
QPointF* q_graphicssvgitem_map_from_item(void* self, void* item, void* point) {
    return QGraphicsItem_MapFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_from_parent(void* self, void* point) {
    return QGraphicsItem_MapFromParent((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
QPointF* q_graphicssvgitem_map_from_scene(void* self, void* point) {
    return QGraphicsItem_MapFromScene((QGraphicsItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QGraphicsItem_MapRectFromItem((QGraphicsItem*)self, (QGraphicsItem*)item, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_from_parent(void* self, void* rect) {
    return QGraphicsItem_MapRectFromParent((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
QRectF* q_graphicssvgitem_map_rect_from_scene(void* self, void* rect) {
    return QGraphicsItem_MapRectFromScene((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_from_item4(void* self, void* item, void* path) {
    return QGraphicsItem_MapFromItem4((QGraphicsItem*)self, (QGraphicsItem*)item, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_from_parent_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromParentWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path ```
QPainterPath* q_graphicssvgitem_map_from_scene_with_path(void* self, void* path) {
    return QGraphicsItem_MapFromSceneWithPath((QGraphicsItem*)self, (QPainterPath*)path);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicssvgitem_map_to_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapToItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_to_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapToParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapToScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_to_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapToScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_to_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_to_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectToScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_to_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectToScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y ```
QPointF* q_graphicssvgitem_map_from_item5(void* self, void* item, double x, double y) {
    return QGraphicsItem_MapFromItem5((QGraphicsItem*)self, (QGraphicsItem*)item, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_from_parent2(void* self, double x, double y) {
    return QGraphicsItem_MapFromParent2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapFromScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y ```
QPointF* q_graphicssvgitem_map_from_scene2(void* self, double x, double y) {
    return QGraphicsItem_MapFromScene2((QGraphicsItem*)self, x, y);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_from_item2(void* self, void* item, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromItem2((QGraphicsItem*)self, (QGraphicsItem*)item, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromParent)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_from_parent2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromParent2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mapRectFromScene)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h ```
QRectF* q_graphicssvgitem_map_rect_from_scene2(void* self, double x, double y, double w, double h) {
    return QGraphicsItem_MapRectFromScene2((QGraphicsItem*)self, x, y, w, h);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isAncestorOf)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* child ```
bool q_graphicssvgitem_is_ancestor_of(void* self, void* child) {
    return QGraphicsItem_IsAncestorOf((QGraphicsItem*)self, (QGraphicsItem*)child);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#commonAncestorItem)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other ```
QGraphicsItem* q_graphicssvgitem_common_ancestor_item(void* self, void* other) {
    return QGraphicsItem_CommonAncestorItem((QGraphicsItem*)self, (QGraphicsItem*)other);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isUnderMouse)
///
/// ``` QGraphicsSvgItem* self ```
bool q_graphicssvgitem_is_under_mouse(void* self) {
    return QGraphicsItem_IsUnderMouse((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#data)
///
/// ``` QGraphicsSvgItem* self, int key ```
QVariant* q_graphicssvgitem_data(void* self, int key) {
    return QGraphicsItem_Data((QGraphicsItem*)self, key);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setData)
///
/// ``` QGraphicsSvgItem* self, int key, QVariant* value ```
void q_graphicssvgitem_set_data(void* self, int key, void* value) {
    QGraphicsItem_SetData((QGraphicsItem*)self, key, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodHints)
///
/// ``` QGraphicsSvgItem* self ```
int64_t q_graphicssvgitem_input_method_hints(void* self) {
    return QGraphicsItem_InputMethodHints((QGraphicsItem*)self);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setInputMethodHints)
///
/// ``` QGraphicsSvgItem* self, int hints ```
void q_graphicssvgitem_set_input_method_hints(void* self, int64_t hints) {
    QGraphicsItem_SetInputMethodHints((QGraphicsItem*)self, hints);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#installSceneEventFilter)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* filterItem ```
void q_graphicssvgitem_install_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_InstallSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeSceneEventFilter)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* filterItem ```
void q_graphicssvgitem_remove_scene_event_filter(void* self, void* filterItem) {
    QGraphicsItem_RemoveSceneEventFilter((QGraphicsItem*)self, (QGraphicsItem*)filterItem);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFlag)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemFlag flag, bool enabled ```
void q_graphicssvgitem_set_flag2(void* self, int64_t flag, bool enabled) {
    QGraphicsItem_SetFlag2((QGraphicsItem*)self, flag, enabled);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setCacheMode)
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__CacheMode mode, QSize* cacheSize ```
void q_graphicssvgitem_set_cache_mode2(void* self, int64_t mode, void* cacheSize) {
    QGraphicsItem_SetCacheMode2((QGraphicsItem*)self, mode, (QSize*)cacheSize);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setFocus)
///
/// ``` QGraphicsSvgItem* self, enum Qt__FocusReason focusReason ```
void q_graphicssvgitem_set_focus1(void* self, int64_t focusReason) {
    QGraphicsItem_SetFocus1((QGraphicsItem*)self, focusReason);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
void q_graphicssvgitem_ensure_visible1(void* self, void* rect) {
    QGraphicsItem_EnsureVisible1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect, int xmargin ```
void q_graphicssvgitem_ensure_visible22(void* self, void* rect, int xmargin) {
    QGraphicsItem_EnsureVisible22((QGraphicsItem*)self, (QRectF*)rect, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect, int xmargin, int ymargin ```
void q_graphicssvgitem_ensure_visible3(void* self, void* rect, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible3((QGraphicsItem*)self, (QRectF*)rect, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h, int xmargin ```
void q_graphicssvgitem_ensure_visible5(void* self, double x, double y, double w, double h, int xmargin) {
    QGraphicsItem_EnsureVisible5((QGraphicsItem*)self, x, y, w, h, xmargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#ensureVisible)
///
/// ``` QGraphicsSvgItem* self, double x, double y, double w, double h, int xmargin, int ymargin ```
void q_graphicssvgitem_ensure_visible6(void* self, double x, double y, double w, double h, int xmargin, int ymargin) {
    QGraphicsItem_EnsureVisible6((QGraphicsItem*)self, x, y, w, h, xmargin, ymargin);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemTransform)
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other, bool* ok ```
QTransform* q_graphicssvgitem_item_transform2(void* self, void* other, bool* ok) {
    return QGraphicsItem_ItemTransform2((QGraphicsItem*)self, (QGraphicsItem*)other, (bool*)ok);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setTransform)
///
/// ``` QGraphicsSvgItem* self, QTransform* matrix, bool combine ```
void q_graphicssvgitem_set_transform2(void* self, void* matrix, bool combine) {
    QGraphicsItem_SetTransform2((QGraphicsItem*)self, (QTransform*)matrix, combine);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidingItems)
///
/// ``` QGraphicsSvgItem* self, enum Qt__ItemSelectionMode mode ```
libqt_list /* of QGraphicsItem* */ q_graphicssvgitem_colliding_items1(void* self, int64_t mode) {
    libqt_list _arr = QGraphicsItem_CollidingItems1((QGraphicsItem*)self, mode);
    return _arr;
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscured)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
bool q_graphicssvgitem_is_obscured1(void* self, void* rect) {
    return QGraphicsItem_IsObscured1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#update)
///
/// ``` QGraphicsSvgItem* self, QRectF* rect ```
void q_graphicssvgitem_update1(void* self, void* rect) {
    QGraphicsItem_Update1((QGraphicsItem*)self, (QRectF*)rect);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#scroll)
///
/// ``` QGraphicsSvgItem* self, double dx, double dy, QRectF* rect ```
void q_graphicssvgitem_scroll3(void* self, double dx, double dy, void* rect) {
    QGraphicsItem_Scroll3((QGraphicsItem*)self, dx, dy, (QRectF*)rect);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* ev ```
bool q_graphicssvgitem_event(void* self, void* ev) {
    return QGraphicsSvgItem_Event((QGraphicsSvgItem*)self, (QEvent*)ev);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* ev ```
bool q_graphicssvgitem_qbase_event(void* self, void* ev) {
    return QGraphicsSvgItem_QBaseEvent((QGraphicsSvgItem*)self, (QEvent*)ev);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QEvent*) ```
void q_graphicssvgitem_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QObject* watched, QEvent* event ```
bool q_graphicssvgitem_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_EventFilter((QGraphicsSvgItem*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QObject* watched, QEvent* event ```
bool q_graphicssvgitem_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_QBaseEventFilter((QGraphicsSvgItem*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QObject*, QEvent*) ```
void q_graphicssvgitem_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsSvgItem_OnEventFilter((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QTimerEvent* event ```
void q_graphicssvgitem_timer_event(void* self, void* event) {
    QGraphicsSvgItem_TimerEvent((QGraphicsSvgItem*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QTimerEvent* event ```
void q_graphicssvgitem_qbase_timer_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseTimerEvent((QGraphicsSvgItem*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QTimerEvent*) ```
void q_graphicssvgitem_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnTimerEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QChildEvent* event ```
void q_graphicssvgitem_child_event(void* self, void* event) {
    QGraphicsSvgItem_ChildEvent((QGraphicsSvgItem*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QChildEvent* event ```
void q_graphicssvgitem_qbase_child_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseChildEvent((QGraphicsSvgItem*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QChildEvent*) ```
void q_graphicssvgitem_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnChildEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
void q_graphicssvgitem_custom_event(void* self, void* event) {
    QGraphicsSvgItem_CustomEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
void q_graphicssvgitem_qbase_custom_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseCustomEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QEvent*) ```
void q_graphicssvgitem_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnCustomEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_connect_notify(void* self, void* signal) {
    QGraphicsSvgItem_ConnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_qbase_connect_notify(void* self, void* signal) {
    QGraphicsSvgItem_QBaseConnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QMetaMethod*) ```
void q_graphicssvgitem_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnConnectNotify((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_disconnect_notify(void* self, void* signal) {
    QGraphicsSvgItem_DisconnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
void q_graphicssvgitem_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsSvgItem_QBaseDisconnectNotify((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QMetaMethod*) ```
void q_graphicssvgitem_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnDisconnectNotify((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#advance)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int phase ```
void q_graphicssvgitem_advance(void* self, int phase) {
    QGraphicsSvgItem_Advance((QGraphicsSvgItem*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int phase ```
void q_graphicssvgitem_qbase_advance(void* self, int phase) {
    QGraphicsSvgItem_QBaseAdvance((QGraphicsSvgItem*)self, phase);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, int) ```
void q_graphicssvgitem_on_advance(void* self, void (*slot)(void*, int)) {
    QGraphicsSvgItem_OnAdvance((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#shape)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_shape(void* self) {
    return QGraphicsSvgItem_Shape((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_qbase_shape(void* self) {
    return QGraphicsSvgItem_QBaseShape((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* (*slot)() ```
void q_graphicssvgitem_on_shape(void* self, QPainterPath* (*slot)()) {
    QGraphicsSvgItem_OnShape((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contains)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
bool q_graphicssvgitem_contains(void* self, void* point) {
    return QGraphicsSvgItem_Contains((QGraphicsSvgItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPointF* point ```
bool q_graphicssvgitem_qbase_contains(void* self, void* point) {
    return QGraphicsSvgItem_QBaseContains((QGraphicsSvgItem*)self, (QPointF*)point);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QPointF*) ```
void q_graphicssvgitem_on_contains(void* self, bool (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnContains((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithItem)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsSvgItem_CollidesWithItem((QGraphicsSvgItem*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* other, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_qbase_collides_with_item(void* self, void* other, int64_t mode) {
    return QGraphicsSvgItem_QBaseCollidesWithItem((QGraphicsSvgItem*)self, (QGraphicsItem*)other, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QGraphicsItem*, enum Qt__ItemSelectionMode) ```
void q_graphicssvgitem_on_collides_with_item(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsSvgItem_OnCollidesWithItem((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#collidesWithPath)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsSvgItem_CollidesWithPath((QGraphicsSvgItem*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* path, enum Qt__ItemSelectionMode mode ```
bool q_graphicssvgitem_qbase_collides_with_path(void* self, void* path, int64_t mode) {
    return QGraphicsSvgItem_QBaseCollidesWithPath((QGraphicsSvgItem*)self, (QPainterPath*)path, mode);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QPainterPath*, enum Qt__ItemSelectionMode) ```
void q_graphicssvgitem_on_collides_with_path(void* self, bool (*slot)(void*, void*, int64_t)) {
    QGraphicsSvgItem_OnCollidesWithPath((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#isObscuredBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item ```
bool q_graphicssvgitem_is_obscured_by(void* self, void* item) {
    return QGraphicsSvgItem_IsObscuredBy((QGraphicsSvgItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* item ```
bool q_graphicssvgitem_qbase_is_obscured_by(void* self, void* item) {
    return QGraphicsSvgItem_QBaseIsObscuredBy((QGraphicsSvgItem*)self, (QGraphicsItem*)item);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QGraphicsItem*) ```
void q_graphicssvgitem_on_is_obscured_by(void* self, bool (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnIsObscuredBy((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#opaqueArea)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_opaque_area(void* self) {
    return QGraphicsSvgItem_OpaqueArea((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QPainterPath* q_graphicssvgitem_qbase_opaque_area(void* self) {
    return QGraphicsSvgItem_QBaseOpaqueArea((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QPainterPath* (*slot)() ```
void q_graphicssvgitem_on_opaque_area(void* self, QPainterPath* (*slot)()) {
    QGraphicsSvgItem_OnOpaqueArea((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicssvgitem_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_SceneEventFilter((QGraphicsSvgItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsItem* watched, QEvent* event ```
bool q_graphicssvgitem_qbase_scene_event_filter(void* self, void* watched, void* event) {
    return QGraphicsSvgItem_QBaseSceneEventFilter((QGraphicsSvgItem*)self, (QGraphicsItem*)watched, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QGraphicsItem*, QEvent*) ```
void q_graphicssvgitem_on_scene_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsSvgItem_OnSceneEventFilter((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#sceneEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
bool q_graphicssvgitem_scene_event(void* self, void* event) {
    return QGraphicsSvgItem_SceneEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QEvent* event ```
bool q_graphicssvgitem_qbase_scene_event(void* self, void* event) {
    return QGraphicsSvgItem_QBaseSceneEvent((QGraphicsSvgItem*)self, (QEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QEvent*) ```
void q_graphicssvgitem_on_scene_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnSceneEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicssvgitem_context_menu_event(void* self, void* event) {
    QGraphicsSvgItem_ContextMenuEvent((QGraphicsSvgItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneContextMenuEvent* event ```
void q_graphicssvgitem_qbase_context_menu_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseContextMenuEvent((QGraphicsSvgItem*)self, (QGraphicsSceneContextMenuEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneContextMenuEvent*) ```
void q_graphicssvgitem_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnContextMenuEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drag_enter_event(void* self, void* event) {
    QGraphicsSvgItem_DragEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drag_enter_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseDragEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnDragEnterEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drag_leave_event(void* self, void* event) {
    QGraphicsSvgItem_DragLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drag_leave_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseDragLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnDragLeaveEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drag_move_event(void* self, void* event) {
    QGraphicsSvgItem_DragMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drag_move_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseDragMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnDragMoveEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_drop_event(void* self, void* event) {
    QGraphicsSvgItem_DropEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneDragDropEvent* event ```
void q_graphicssvgitem_qbase_drop_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseDropEvent((QGraphicsSvgItem*)self, (QGraphicsSceneDragDropEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneDragDropEvent*) ```
void q_graphicssvgitem_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnDropEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_focus_in_event(void* self, void* event) {
    QGraphicsSvgItem_FocusInEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_qbase_focus_in_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseFocusInEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QFocusEvent*) ```
void q_graphicssvgitem_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnFocusInEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_focus_out_event(void* self, void* event) {
    QGraphicsSvgItem_FocusOutEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QFocusEvent* event ```
void q_graphicssvgitem_qbase_focus_out_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseFocusOutEvent((QGraphicsSvgItem*)self, (QFocusEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QFocusEvent*) ```
void q_graphicssvgitem_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnFocusOutEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_hover_enter_event(void* self, void* event) {
    QGraphicsSvgItem_HoverEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_qbase_hover_enter_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseHoverEnterEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssvgitem_on_hover_enter_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnHoverEnterEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_hover_move_event(void* self, void* event) {
    QGraphicsSvgItem_HoverMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_qbase_hover_move_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseHoverMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssvgitem_on_hover_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnHoverMoveEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#hoverLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_hover_leave_event(void* self, void* event) {
    QGraphicsSvgItem_HoverLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneHoverEvent* event ```
void q_graphicssvgitem_qbase_hover_leave_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseHoverLeaveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneHoverEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneHoverEvent*) ```
void q_graphicssvgitem_on_hover_leave_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnHoverLeaveEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_key_press_event(void* self, void* event) {
    QGraphicsSvgItem_KeyPressEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_qbase_key_press_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseKeyPressEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QKeyEvent*) ```
void q_graphicssvgitem_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnKeyPressEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_key_release_event(void* self, void* event) {
    QGraphicsSvgItem_KeyReleaseEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QKeyEvent* event ```
void q_graphicssvgitem_qbase_key_release_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseKeyReleaseEvent((QGraphicsSvgItem*)self, (QKeyEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QKeyEvent*) ```
void q_graphicssvgitem_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnKeyReleaseEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_press_event(void* self, void* event) {
    QGraphicsSvgItem_MousePressEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_press_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseMousePressEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnMousePressEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_move_event(void* self, void* event) {
    QGraphicsSvgItem_MouseMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_move_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseMouseMoveEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnMouseMoveEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_release_event(void* self, void* event) {
    QGraphicsSvgItem_MouseReleaseEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_release_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseMouseReleaseEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnMouseReleaseEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_mouse_double_click_event(void* self, void* event) {
    QGraphicsSvgItem_MouseDoubleClickEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneMouseEvent* event ```
void q_graphicssvgitem_qbase_mouse_double_click_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseMouseDoubleClickEvent((QGraphicsSvgItem*)self, (QGraphicsSceneMouseEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneMouseEvent*) ```
void q_graphicssvgitem_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnMouseDoubleClickEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicssvgitem_wheel_event(void* self, void* event) {
    QGraphicsSvgItem_WheelEvent((QGraphicsSvgItem*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QGraphicsSceneWheelEvent* event ```
void q_graphicssvgitem_qbase_wheel_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseWheelEvent((QGraphicsSvgItem*)self, (QGraphicsSceneWheelEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QGraphicsSceneWheelEvent*) ```
void q_graphicssvgitem_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnWheelEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QInputMethodEvent* event ```
void q_graphicssvgitem_input_method_event(void* self, void* event) {
    QGraphicsSvgItem_InputMethodEvent((QGraphicsSvgItem*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QInputMethodEvent* event ```
void q_graphicssvgitem_qbase_input_method_event(void* self, void* event) {
    QGraphicsSvgItem_QBaseInputMethodEvent((QGraphicsSvgItem*)self, (QInputMethodEvent*)event);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, QInputMethodEvent*) ```
void q_graphicssvgitem_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnInputMethodEvent((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicssvgitem_input_method_query(void* self, int64_t query) {
    return QGraphicsSvgItem_InputMethodQuery((QGraphicsSvgItem*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum Qt__InputMethodQuery query ```
QVariant* q_graphicssvgitem_qbase_input_method_query(void* self, int64_t query) {
    return QGraphicsSvgItem_QBaseInputMethodQuery((QGraphicsSvgItem*)self, query);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* (*slot)(QGraphicsSvgItem*, enum Qt__InputMethodQuery) ```
void q_graphicssvgitem_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QGraphicsSvgItem_OnInputMethodQuery((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#itemChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicssvgitem_item_change(void* self, int64_t change, void* value) {
    return QGraphicsSvgItem_ItemChange((QGraphicsSvgItem*)self, change, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__GraphicsItemChange change, QVariant* value ```
QVariant* q_graphicssvgitem_qbase_item_change(void* self, int64_t change, void* value) {
    return QGraphicsSvgItem_QBaseItemChange((QGraphicsSvgItem*)self, change, (QVariant*)value);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* (*slot)(QGraphicsSvgItem*, enum QGraphicsItem__GraphicsItemChange, QVariant*) ```
void q_graphicssvgitem_on_item_change(void* self, QVariant* (*slot)(void*, int64_t, void*)) {
    QGraphicsSvgItem_OnItemChange((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#supportsExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicssvgitem_supports_extension(void* self, int64_t extension) {
    return QGraphicsSvgItem_SupportsExtension((QGraphicsSvgItem*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension ```
bool q_graphicssvgitem_qbase_supports_extension(void* self, int64_t extension) {
    return QGraphicsSvgItem_QBaseSupportsExtension((QGraphicsSvgItem*)self, extension);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, enum QGraphicsItem__Extension) ```
void q_graphicssvgitem_on_supports_extension(void* self, bool (*slot)(void*, int64_t)) {
    QGraphicsSvgItem_OnSupportsExtension((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#setExtension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicssvgitem_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsSvgItem_SetExtension((QGraphicsSvgItem*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, enum QGraphicsItem__Extension extension, QVariant* variant ```
void q_graphicssvgitem_qbase_set_extension(void* self, int64_t extension, void* variant) {
    QGraphicsSvgItem_QBaseSetExtension((QGraphicsSvgItem*)self, extension, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)(QGraphicsSvgItem*, enum QGraphicsItem__Extension, QVariant*) ```
void q_graphicssvgitem_on_set_extension(void* self, void (*slot)(void*, int64_t, void*)) {
    QGraphicsSvgItem_OnSetExtension((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#extension)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* variant ```
QVariant* q_graphicssvgitem_extension(void* self, void* variant) {
    return QGraphicsSvgItem_Extension((QGraphicsSvgItem*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* variant ```
QVariant* q_graphicssvgitem_qbase_extension(void* self, void* variant) {
    return QGraphicsSvgItem_QBaseExtension((QGraphicsSvgItem*)self, (QVariant*)variant);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QVariant* (*slot)(QGraphicsSvgItem*, QVariant*) ```
void q_graphicssvgitem_on_extension(void* self, QVariant* (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnExtension((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsobject.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_update_micro_focus(void* self) {
    QGraphicsSvgItem_UpdateMicroFocus((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_update_micro_focus(void* self) {
    QGraphicsSvgItem_QBaseUpdateMicroFocus((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_update_micro_focus(void* self, void (*slot)()) {
    QGraphicsSvgItem_OnUpdateMicroFocus((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QObject* q_graphicssvgitem_sender(void* self) {
    return QGraphicsSvgItem_Sender((QGraphicsSvgItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
QObject* q_graphicssvgitem_qbase_sender(void* self) {
    return QGraphicsSvgItem_QBaseSender((QGraphicsSvgItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QObject* (*slot)() ```
void q_graphicssvgitem_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsSvgItem_OnSender((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_sender_signal_index(void* self) {
    return QGraphicsSvgItem_SenderSignalIndex((QGraphicsSvgItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
int32_t q_graphicssvgitem_qbase_sender_signal_index(void* self) {
    return QGraphicsSvgItem_QBaseSenderSignalIndex((QGraphicsSvgItem*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)() ```
void q_graphicssvgitem_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsSvgItem_OnSenderSignalIndex((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, const char* signal ```
int32_t q_graphicssvgitem_receivers(void* self, const char* signal) {
    return QGraphicsSvgItem_Receivers((QGraphicsSvgItem*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, const char* signal ```
int32_t q_graphicssvgitem_qbase_receivers(void* self, const char* signal) {
    return QGraphicsSvgItem_QBaseReceivers((QGraphicsSvgItem*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, int32_t (*slot)(QGraphicsSvgItem*, const char*) ```
void q_graphicssvgitem_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsSvgItem_OnReceivers((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
bool q_graphicssvgitem_is_signal_connected(void* self, void* signal) {
    return QGraphicsSvgItem_IsSignalConnected((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, QMetaMethod* signal ```
bool q_graphicssvgitem_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsSvgItem_QBaseIsSignalConnected((QGraphicsSvgItem*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, bool (*slot)(QGraphicsSvgItem*, QMetaMethod*) ```
void q_graphicssvgitem_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsSvgItem_OnIsSignalConnected((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#addToIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_add_to_index(void* self) {
    QGraphicsSvgItem_AddToIndex((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_add_to_index(void* self) {
    QGraphicsSvgItem_QBaseAddToIndex((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_add_to_index(void* self, void (*slot)()) {
    QGraphicsSvgItem_OnAddToIndex((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#removeFromIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_remove_from_index(void* self) {
    QGraphicsSvgItem_RemoveFromIndex((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_remove_from_index(void* self) {
    QGraphicsSvgItem_QBaseRemoveFromIndex((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_remove_from_index(void* self, void (*slot)()) {
    QGraphicsSvgItem_OnRemoveFromIndex((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsItem
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsitem.html#prepareGeometryChange)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_prepare_geometry_change(void* self) {
    QGraphicsSvgItem_PrepareGeometryChange((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_qbase_prepare_geometry_change(void* self) {
    QGraphicsSvgItem_QBasePrepareGeometryChange((QGraphicsSvgItem*)self);
}

/// Inherited from QGraphicsItem
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsSvgItem* self, void (*slot)() ```
void q_graphicssvgitem_on_prepare_geometry_change(void* self, void (*slot)()) {
    QGraphicsSvgItem_OnPrepareGeometryChange((QGraphicsSvgItem*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsSvgItem* self ```
void q_graphicssvgitem_delete(void* self) {
    QGraphicsSvgItem_Delete((QGraphicsSvgItem*)(self));
}