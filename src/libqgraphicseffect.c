#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqbrush.hpp"
#include "libqevent.hpp"
#include "libqcolor.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpainter.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicseffect.h"

/// https://doc.qt.io/qt-6/qgraphicseffect.html

/// q_graphicseffect_new constructs a new QGraphicsEffect object.
///
///
QGraphicsEffect* q_graphicseffect_new() {
    return QGraphicsEffect_new();
}

/// q_graphicseffect_new2 constructs a new QGraphicsEffect object.
///
/// ``` QObject* parent ```
QGraphicsEffect* q_graphicseffect_new2(void* parent) {
    return QGraphicsEffect_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsEffect* self ```
QMetaObject* q_graphicseffect_meta_object(void* self) {
    return QGraphicsEffect_MetaObject((QGraphicsEffect*)self);
}

/// ``` QGraphicsEffect* self, const char* param1 ```
void* q_graphicseffect_metacast(void* self, const char* param1) {
    return QGraphicsEffect_Metacast((QGraphicsEffect*)self, param1);
}

/// ``` QGraphicsEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicseffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsEffect_Metacall((QGraphicsEffect*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, int32_t (*slot)(QGraphicsEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicseffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsEffect_OnMetacall((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicseffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsEffect_QBaseMetacall((QGraphicsEffect*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicseffect_tr(const char* s) {
    libqt_string _str = QGraphicsEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// ``` QGraphicsEffect* self, QRectF* sourceRect ```
QRectF* q_graphicseffect_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsEffect_BoundingRectFor((QGraphicsEffect*)self, (QRectF*)sourceRect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QRectF* (*slot)(QGraphicsEffect*, QRectF*) ```
void q_graphicseffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsEffect_OnBoundingRectFor((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, QRectF* sourceRect ```
QRectF* q_graphicseffect_qbase_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsEffect_QBaseBoundingRectFor((QGraphicsEffect*)self, (QRectF*)sourceRect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsEffect* self ```
QRectF* q_graphicseffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsEffect* self, bool enable ```
void q_graphicseffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsEffect* self, bool enabled ```
void q_graphicseffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicseffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#draw)
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_draw(void* self, void* painter) {
    QGraphicsEffect_Draw((QGraphicsEffect*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QPainter*) ```
void q_graphicseffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnDraw((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_qbase_draw(void* self, void* painter) {
    QGraphicsEffect_QBaseDraw((QGraphicsEffect*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// ``` QGraphicsEffect* self, int flags ```
void q_graphicseffect_source_changed(void* self, int64_t flags) {
    QGraphicsEffect_SourceChanged((QGraphicsEffect*)self, flags);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, int) ```
void q_graphicseffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsEffect_OnSourceChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, int flags ```
void q_graphicseffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsEffect_QBaseSourceChanged((QGraphicsEffect*)self, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_update_bounding_rect(void* self) {
    QGraphicsEffect_UpdateBoundingRect((QGraphicsEffect*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)() ```
void q_graphicseffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsEffect_OnUpdateBoundingRect((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_qbase_update_bounding_rect(void* self) {
    QGraphicsEffect_QBaseUpdateBoundingRect((QGraphicsEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_source_is_pixmap(void* self) {
    return QGraphicsEffect_SourceIsPixmap((QGraphicsEffect*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, bool (*slot)() ```
void q_graphicseffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsEffect_OnSourceIsPixmap((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsEffect_QBaseSourceIsPixmap((QGraphicsEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// ``` QGraphicsEffect* self ```
QRectF* q_graphicseffect_source_bounding_rect(void* self) {
    return QGraphicsEffect_SourceBoundingRect((QGraphicsEffect*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QRectF* (*slot)() ```
void q_graphicseffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsEffect_OnSourceBoundingRect((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
QRectF* q_graphicseffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsEffect_QBaseSourceBoundingRect((QGraphicsEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_draw_source(void* self, void* painter) {
    QGraphicsEffect_DrawSource((QGraphicsEffect*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QPainter*) ```
void q_graphicseffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnDrawSource((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, QPainter* painter ```
void q_graphicseffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsEffect_QBaseDrawSource((QGraphicsEffect*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self ```
QPixmap* q_graphicseffect_source_pixmap(void* self) {
    return QGraphicsEffect_SourcePixmap((QGraphicsEffect*)self);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)() ```
void q_graphicseffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsEffect_OnSourcePixmap((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self ```
QPixmap* q_graphicseffect_qbase_source_pixmap(void* self) {
    return QGraphicsEffect_QBaseSourcePixmap((QGraphicsEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicseffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicseffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QRectF* q_graphicseffect_source_bounding_rect1(void* self, int64_t system) {
    return QGraphicsEffect_SourceBoundingRect1((QGraphicsEffect*)self, system);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QRectF* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem) ```
void q_graphicseffect_on_source_bounding_rect1(void* self, QRectF* (*slot)(void*, int64_t)) {
    QGraphicsEffect_OnSourceBoundingRect1((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QRectF* q_graphicseffect_qbase_source_bounding_rect1(void* self, int64_t system) {
    return QGraphicsEffect_QBaseSourceBoundingRect1((QGraphicsEffect*)self, system);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QPixmap* q_graphicseffect_source_pixmap1(void* self, int64_t system) {
    return QGraphicsEffect_SourcePixmap1((QGraphicsEffect*)self, system);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem) ```
void q_graphicseffect_on_source_pixmap1(void* self, QPixmap* (*slot)(void*, int64_t)) {
    QGraphicsEffect_OnSourcePixmap1((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system ```
QPixmap* q_graphicseffect_qbase_source_pixmap1(void* self, int64_t system) {
    return QGraphicsEffect_QBaseSourcePixmap1((QGraphicsEffect*)self, system);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset ```
QPixmap* q_graphicseffect_source_pixmap2(void* self, int64_t system, void* offset) {
    return QGraphicsEffect_SourcePixmap2((QGraphicsEffect*)self, system, (QPoint*)offset);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem, QPoint*) ```
void q_graphicseffect_on_source_pixmap2(void* self, QPixmap* (*slot)(void*, int64_t, void*)) {
    QGraphicsEffect_OnSourcePixmap2((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset ```
QPixmap* q_graphicseffect_qbase_source_pixmap2(void* self, int64_t system, void* offset) {
    return QGraphicsEffect_QBaseSourcePixmap2((QGraphicsEffect*)self, system, (QPoint*)offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset, enum QGraphicsEffect__PixmapPadMode mode ```
QPixmap* q_graphicseffect_source_pixmap3(void* self, int64_t system, void* offset, int64_t mode) {
    return QGraphicsEffect_SourcePixmap3((QGraphicsEffect*)self, system, (QPoint*)offset, mode);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsEffect* self, QPixmap* (*slot)(QGraphicsEffect*, enum Qt__CoordinateSystem, QPoint*, enum QGraphicsEffect__PixmapPadMode) ```
void q_graphicseffect_on_source_pixmap3(void* self, QPixmap* (*slot)(void*, int64_t, void*, int64_t)) {
    QGraphicsEffect_OnSourcePixmap3((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsEffect* self, enum Qt__CoordinateSystem system, QPoint* offset, enum QGraphicsEffect__PixmapPadMode mode ```
QPixmap* q_graphicseffect_qbase_source_pixmap3(void* self, int64_t system, void* offset, int64_t mode) {
    return QGraphicsEffect_QBaseSourcePixmap3((QGraphicsEffect*)self, system, (QPoint*)offset, mode);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsEffect* self ```
const char* q_graphicseffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsEffect* self, const char* name ```
void q_graphicseffect_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsEffect* self ```
bool q_graphicseffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsEffect* self, bool b ```
bool q_graphicseffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsEffect* self ```
QThread* q_graphicseffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsEffect* self, QThread* thread ```
void q_graphicseffect_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsEffect* self, int interval ```
int32_t q_graphicseffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsEffect* self, int id ```
void q_graphicseffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsEffect* self ```
libqt_list /* of QObject* */ q_graphicseffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsEffect* self, QObject* parent ```
void q_graphicseffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsEffect* self, QObject* filterObj ```
void q_graphicseffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsEffect* self, QObject* obj ```
void q_graphicseffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicseffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicseffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicseffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicseffect_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsEffect* self, const char* name, QVariant* value ```
bool q_graphicseffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsEffect* self, const char* name ```
QVariant* q_graphicseffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsEffect* self ```
const char** q_graphicseffect_dynamic_property_names(void* self) {
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
/// ``` QGraphicsEffect* self ```
QBindingStorage* q_graphicseffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsEffect* self ```
QBindingStorage* q_graphicseffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsEffect* self, void (*slot)(QObject*) ```
void q_graphicseffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsEffect* self ```
QObject* q_graphicseffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsEffect* self, const char* classname ```
bool q_graphicseffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicseffect_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicseffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicseffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsEffect* self, QObject* param1 ```
void q_graphicseffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicseffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
bool q_graphicseffect_event(void* self, void* event) {
    return QGraphicsEffect_Event((QGraphicsEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
bool q_graphicseffect_qbase_event(void* self, void* event) {
    return QGraphicsEffect_QBaseEvent((QGraphicsEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, bool (*slot)(QGraphicsEffect*, QEvent*) ```
void q_graphicseffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsEffect_OnEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QObject* watched, QEvent* event ```
bool q_graphicseffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsEffect_EventFilter((QGraphicsEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QObject* watched, QEvent* event ```
bool q_graphicseffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsEffect_QBaseEventFilter((QGraphicsEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, bool (*slot)(QGraphicsEffect*, QObject*, QEvent*) ```
void q_graphicseffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsEffect_OnEventFilter((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QTimerEvent* event ```
void q_graphicseffect_timer_event(void* self, void* event) {
    QGraphicsEffect_TimerEvent((QGraphicsEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QTimerEvent* event ```
void q_graphicseffect_qbase_timer_event(void* self, void* event) {
    QGraphicsEffect_QBaseTimerEvent((QGraphicsEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QTimerEvent*) ```
void q_graphicseffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnTimerEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QChildEvent* event ```
void q_graphicseffect_child_event(void* self, void* event) {
    QGraphicsEffect_ChildEvent((QGraphicsEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QChildEvent* event ```
void q_graphicseffect_qbase_child_event(void* self, void* event) {
    QGraphicsEffect_QBaseChildEvent((QGraphicsEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QChildEvent*) ```
void q_graphicseffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnChildEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
void q_graphicseffect_custom_event(void* self, void* event) {
    QGraphicsEffect_CustomEvent((QGraphicsEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QEvent* event ```
void q_graphicseffect_qbase_custom_event(void* self, void* event) {
    QGraphicsEffect_QBaseCustomEvent((QGraphicsEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QEvent*) ```
void q_graphicseffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnCustomEvent((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_connect_notify(void* self, void* signal) {
    QGraphicsEffect_ConnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsEffect_QBaseConnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QMetaMethod*) ```
void q_graphicseffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnConnectNotify((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_disconnect_notify(void* self, void* signal) {
    QGraphicsEffect_DisconnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
void q_graphicseffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsEffect_QBaseDisconnectNotify((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, void (*slot)(QGraphicsEffect*, QMetaMethod*) ```
void q_graphicseffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsEffect_OnDisconnectNotify((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self ```
QObject* q_graphicseffect_sender(void* self) {
    return QGraphicsEffect_Sender((QGraphicsEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self ```
QObject* q_graphicseffect_qbase_sender(void* self) {
    return QGraphicsEffect_QBaseSender((QGraphicsEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QObject* (*slot)() ```
void q_graphicseffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsEffect_OnSender((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self ```
int32_t q_graphicseffect_sender_signal_index(void* self) {
    return QGraphicsEffect_SenderSignalIndex((QGraphicsEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self ```
int32_t q_graphicseffect_qbase_sender_signal_index(void* self) {
    return QGraphicsEffect_QBaseSenderSignalIndex((QGraphicsEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, int32_t (*slot)() ```
void q_graphicseffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsEffect_OnSenderSignalIndex((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, const char* signal ```
int32_t q_graphicseffect_receivers(void* self, const char* signal) {
    return QGraphicsEffect_Receivers((QGraphicsEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, const char* signal ```
int32_t q_graphicseffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsEffect_QBaseReceivers((QGraphicsEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, int32_t (*slot)(QGraphicsEffect*, const char*) ```
void q_graphicseffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsEffect_OnReceivers((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
bool q_graphicseffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsEffect_IsSignalConnected((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsEffect* self, QMetaMethod* signal ```
bool q_graphicseffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsEffect_QBaseIsSignalConnected((QGraphicsEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsEffect* self, bool (*slot)(QGraphicsEffect*, QMetaMethod*) ```
void q_graphicseffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsEffect_OnIsSignalConnected((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsEffect* self ```
void q_graphicseffect_delete(void* self) {
    QGraphicsEffect_Delete((QGraphicsEffect*)(self));
}

/// https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html

/// q_graphicscolorizeeffect_new constructs a new QGraphicsColorizeEffect object.
///
///
QGraphicsColorizeEffect* q_graphicscolorizeeffect_new() {
    return QGraphicsColorizeEffect_new();
}

/// q_graphicscolorizeeffect_new2 constructs a new QGraphicsColorizeEffect object.
///
/// ``` QObject* parent ```
QGraphicsColorizeEffect* q_graphicscolorizeeffect_new2(void* parent) {
    return QGraphicsColorizeEffect_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsColorizeEffect* self ```
QMetaObject* q_graphicscolorizeeffect_meta_object(void* self) {
    return QGraphicsColorizeEffect_MetaObject((QGraphicsColorizeEffect*)self);
}

/// ``` QGraphicsColorizeEffect* self, const char* param1 ```
void* q_graphicscolorizeeffect_metacast(void* self, const char* param1) {
    return QGraphicsColorizeEffect_Metacast((QGraphicsColorizeEffect*)self, param1);
}

/// ``` QGraphicsColorizeEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicscolorizeeffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsColorizeEffect_Metacall((QGraphicsColorizeEffect*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsColorizeEffect* self, int32_t (*slot)(QGraphicsColorizeEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicscolorizeeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsColorizeEffect_OnMetacall((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsColorizeEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicscolorizeeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsColorizeEffect_QBaseMetacall((QGraphicsColorizeEffect*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicscolorizeeffect_tr(const char* s) {
    libqt_string _str = QGraphicsColorizeEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#color)
///
/// ``` QGraphicsColorizeEffect* self ```
QColor* q_graphicscolorizeeffect_color(void* self) {
    return QGraphicsColorizeEffect_Color((QGraphicsColorizeEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strength)
///
/// ``` QGraphicsColorizeEffect* self ```
double q_graphicscolorizeeffect_strength(void* self) {
    return QGraphicsColorizeEffect_Strength((QGraphicsColorizeEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setColor)
///
/// ``` QGraphicsColorizeEffect* self, QColor* c ```
void q_graphicscolorizeeffect_set_color(void* self, void* c) {
    QGraphicsColorizeEffect_SetColor((QGraphicsColorizeEffect*)self, (QColor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#setStrength)
///
/// ``` QGraphicsColorizeEffect* self, double strength ```
void q_graphicscolorizeeffect_set_strength(void* self, double strength) {
    QGraphicsColorizeEffect_SetStrength((QGraphicsColorizeEffect*)self, strength);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#colorChanged)
///
/// ``` QGraphicsColorizeEffect* self, QColor* color ```
void q_graphicscolorizeeffect_color_changed(void* self, void* color) {
    QGraphicsColorizeEffect_ColorChanged((QGraphicsColorizeEffect*)self, (QColor*)color);
}

/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QColor*) ```
void q_graphicscolorizeeffect_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_Connect_ColorChanged((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#strengthChanged)
///
/// ``` QGraphicsColorizeEffect* self, double strength ```
void q_graphicscolorizeeffect_strength_changed(void* self, double strength) {
    QGraphicsColorizeEffect_StrengthChanged((QGraphicsColorizeEffect*)self, strength);
}

/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, double) ```
void q_graphicscolorizeeffect_on_strength_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsColorizeEffect_Connect_StrengthChanged((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicscolorizeeffect.html#draw)
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_draw(void* self, void* painter) {
    QGraphicsColorizeEffect_Draw((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QPainter*) ```
void q_graphicscolorizeeffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnDraw((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_qbase_draw(void* self, void* painter) {
    QGraphicsColorizeEffect_QBaseDraw((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicscolorizeeffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsColorizeEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicscolorizeeffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsColorizeEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsColorizeEffect* self ```
QRectF* q_graphicscolorizeeffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsColorizeEffect* self, bool enable ```
void q_graphicscolorizeeffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsColorizeEffect* self, bool enabled ```
void q_graphicscolorizeeffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

/// Inherited from QGraphicsEffect
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicscolorizeeffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsColorizeEffect* self ```
const char* q_graphicscolorizeeffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsColorizeEffect* self, const char* name ```
void q_graphicscolorizeeffect_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsColorizeEffect* self, bool b ```
bool q_graphicscolorizeeffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsColorizeEffect* self ```
QThread* q_graphicscolorizeeffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsColorizeEffect* self, QThread* thread ```
void q_graphicscolorizeeffect_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsColorizeEffect* self, int interval ```
int32_t q_graphicscolorizeeffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsColorizeEffect* self, int id ```
void q_graphicscolorizeeffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsColorizeEffect* self ```
libqt_list /* of QObject* */ q_graphicscolorizeeffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsColorizeEffect* self, QObject* parent ```
void q_graphicscolorizeeffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsColorizeEffect* self, QObject* filterObj ```
void q_graphicscolorizeeffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsColorizeEffect* self, QObject* obj ```
void q_graphicscolorizeeffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsColorizeEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicscolorizeeffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicscolorizeeffect_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsColorizeEffect* self, const char* name, QVariant* value ```
bool q_graphicscolorizeeffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsColorizeEffect* self, const char* name ```
QVariant* q_graphicscolorizeeffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsColorizeEffect* self ```
const char** q_graphicscolorizeeffect_dynamic_property_names(void* self) {
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
/// ``` QGraphicsColorizeEffect* self ```
QBindingStorage* q_graphicscolorizeeffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsColorizeEffect* self ```
QBindingStorage* q_graphicscolorizeeffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QObject*) ```
void q_graphicscolorizeeffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsColorizeEffect* self ```
QObject* q_graphicscolorizeeffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsColorizeEffect* self, const char* classname ```
bool q_graphicscolorizeeffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsColorizeEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicscolorizeeffect_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsColorizeEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicscolorizeeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsColorizeEffect* self, QObject* param1 ```
void q_graphicscolorizeeffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicscolorizeeffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* sourceRect ```
QRectF* q_graphicscolorizeeffect_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsColorizeEffect_BoundingRectFor((QGraphicsColorizeEffect*)self, (QRectF*)sourceRect);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* sourceRect ```
QRectF* q_graphicscolorizeeffect_qbase_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsColorizeEffect_QBaseBoundingRectFor((QGraphicsColorizeEffect*)self, (QRectF*)sourceRect);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* (*slot)(QGraphicsColorizeEffect*, QRectF*) ```
void q_graphicscolorizeeffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnBoundingRectFor((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int flags ```
void q_graphicscolorizeeffect_source_changed(void* self, int64_t flags) {
    QGraphicsColorizeEffect_SourceChanged((QGraphicsColorizeEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int flags ```
void q_graphicscolorizeeffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsColorizeEffect_QBaseSourceChanged((QGraphicsColorizeEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, int) ```
void q_graphicscolorizeeffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsColorizeEffect_OnSourceChanged((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
bool q_graphicscolorizeeffect_event(void* self, void* event) {
    return QGraphicsColorizeEffect_Event((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
bool q_graphicscolorizeeffect_qbase_event(void* self, void* event) {
    return QGraphicsColorizeEffect_QBaseEvent((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)(QGraphicsColorizeEffect*, QEvent*) ```
void q_graphicscolorizeeffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QObject* watched, QEvent* event ```
bool q_graphicscolorizeeffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsColorizeEffect_EventFilter((QGraphicsColorizeEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QObject* watched, QEvent* event ```
bool q_graphicscolorizeeffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsColorizeEffect_QBaseEventFilter((QGraphicsColorizeEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)(QGraphicsColorizeEffect*, QObject*, QEvent*) ```
void q_graphicscolorizeeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsColorizeEffect_OnEventFilter((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QTimerEvent* event ```
void q_graphicscolorizeeffect_timer_event(void* self, void* event) {
    QGraphicsColorizeEffect_TimerEvent((QGraphicsColorizeEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QTimerEvent* event ```
void q_graphicscolorizeeffect_qbase_timer_event(void* self, void* event) {
    QGraphicsColorizeEffect_QBaseTimerEvent((QGraphicsColorizeEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QTimerEvent*) ```
void q_graphicscolorizeeffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnTimerEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QChildEvent* event ```
void q_graphicscolorizeeffect_child_event(void* self, void* event) {
    QGraphicsColorizeEffect_ChildEvent((QGraphicsColorizeEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QChildEvent* event ```
void q_graphicscolorizeeffect_qbase_child_event(void* self, void* event) {
    QGraphicsColorizeEffect_QBaseChildEvent((QGraphicsColorizeEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QChildEvent*) ```
void q_graphicscolorizeeffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnChildEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
void q_graphicscolorizeeffect_custom_event(void* self, void* event) {
    QGraphicsColorizeEffect_CustomEvent((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QEvent* event ```
void q_graphicscolorizeeffect_qbase_custom_event(void* self, void* event) {
    QGraphicsColorizeEffect_QBaseCustomEvent((QGraphicsColorizeEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QEvent*) ```
void q_graphicscolorizeeffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnCustomEvent((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_connect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_ConnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_QBaseConnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QMetaMethod*) ```
void q_graphicscolorizeeffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnConnectNotify((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_disconnect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_DisconnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
void q_graphicscolorizeeffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsColorizeEffect_QBaseDisconnectNotify((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QMetaMethod*) ```
void q_graphicscolorizeeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnDisconnectNotify((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_update_bounding_rect(void* self) {
    QGraphicsColorizeEffect_UpdateBoundingRect((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_qbase_update_bounding_rect(void* self) {
    QGraphicsColorizeEffect_QBaseUpdateBoundingRect((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)() ```
void q_graphicscolorizeeffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsColorizeEffect_OnUpdateBoundingRect((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_source_is_pixmap(void* self) {
    return QGraphicsColorizeEffect_SourceIsPixmap((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
bool q_graphicscolorizeeffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsColorizeEffect_QBaseSourceIsPixmap((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)() ```
void q_graphicscolorizeeffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsColorizeEffect_OnSourceIsPixmap((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QRectF* q_graphicscolorizeeffect_source_bounding_rect(void* self) {
    return QGraphicsColorizeEffect_SourceBoundingRect((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QRectF* q_graphicscolorizeeffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsColorizeEffect_QBaseSourceBoundingRect((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QRectF* (*slot)() ```
void q_graphicscolorizeeffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsColorizeEffect_OnSourceBoundingRect((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_draw_source(void* self, void* painter) {
    QGraphicsColorizeEffect_DrawSource((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QPainter* painter ```
void q_graphicscolorizeeffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsColorizeEffect_QBaseDrawSource((QGraphicsColorizeEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, void (*slot)(QGraphicsColorizeEffect*, QPainter*) ```
void q_graphicscolorizeeffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnDrawSource((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QPixmap* q_graphicscolorizeeffect_source_pixmap(void* self) {
    return QGraphicsColorizeEffect_SourcePixmap((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QPixmap* q_graphicscolorizeeffect_qbase_source_pixmap(void* self) {
    return QGraphicsColorizeEffect_QBaseSourcePixmap((QGraphicsColorizeEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QPixmap* (*slot)() ```
void q_graphicscolorizeeffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsColorizeEffect_OnSourcePixmap((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QObject* q_graphicscolorizeeffect_sender(void* self) {
    return QGraphicsColorizeEffect_Sender((QGraphicsColorizeEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
QObject* q_graphicscolorizeeffect_qbase_sender(void* self) {
    return QGraphicsColorizeEffect_QBaseSender((QGraphicsColorizeEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QObject* (*slot)() ```
void q_graphicscolorizeeffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsColorizeEffect_OnSender((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
int32_t q_graphicscolorizeeffect_sender_signal_index(void* self) {
    return QGraphicsColorizeEffect_SenderSignalIndex((QGraphicsColorizeEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self ```
int32_t q_graphicscolorizeeffect_qbase_sender_signal_index(void* self) {
    return QGraphicsColorizeEffect_QBaseSenderSignalIndex((QGraphicsColorizeEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int32_t (*slot)() ```
void q_graphicscolorizeeffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsColorizeEffect_OnSenderSignalIndex((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, const char* signal ```
int32_t q_graphicscolorizeeffect_receivers(void* self, const char* signal) {
    return QGraphicsColorizeEffect_Receivers((QGraphicsColorizeEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, const char* signal ```
int32_t q_graphicscolorizeeffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsColorizeEffect_QBaseReceivers((QGraphicsColorizeEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, int32_t (*slot)(QGraphicsColorizeEffect*, const char*) ```
void q_graphicscolorizeeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsColorizeEffect_OnReceivers((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
bool q_graphicscolorizeeffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsColorizeEffect_IsSignalConnected((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, QMetaMethod* signal ```
bool q_graphicscolorizeeffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsColorizeEffect_QBaseIsSignalConnected((QGraphicsColorizeEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsColorizeEffect* self, bool (*slot)(QGraphicsColorizeEffect*, QMetaMethod*) ```
void q_graphicscolorizeeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsColorizeEffect_OnIsSignalConnected((QGraphicsColorizeEffect*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsColorizeEffect* self ```
void q_graphicscolorizeeffect_delete(void* self) {
    QGraphicsColorizeEffect_Delete((QGraphicsColorizeEffect*)(self));
}

/// https://doc.qt.io/qt-6/qgraphicsblureffect.html

/// q_graphicsblureffect_new constructs a new QGraphicsBlurEffect object.
///
///
QGraphicsBlurEffect* q_graphicsblureffect_new() {
    return QGraphicsBlurEffect_new();
}

/// q_graphicsblureffect_new2 constructs a new QGraphicsBlurEffect object.
///
/// ``` QObject* parent ```
QGraphicsBlurEffect* q_graphicsblureffect_new2(void* parent) {
    return QGraphicsBlurEffect_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsBlurEffect* self ```
QMetaObject* q_graphicsblureffect_meta_object(void* self) {
    return QGraphicsBlurEffect_MetaObject((QGraphicsBlurEffect*)self);
}

/// ``` QGraphicsBlurEffect* self, const char* param1 ```
void* q_graphicsblureffect_metacast(void* self, const char* param1) {
    return QGraphicsBlurEffect_Metacast((QGraphicsBlurEffect*)self, param1);
}

/// ``` QGraphicsBlurEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsblureffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsBlurEffect_Metacall((QGraphicsBlurEffect*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsBlurEffect* self, int32_t (*slot)(QGraphicsBlurEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicsblureffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsBlurEffect_OnMetacall((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsBlurEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsblureffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsBlurEffect_QBaseMetacall((QGraphicsBlurEffect*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsblureffect_tr(const char* s) {
    libqt_string _str = QGraphicsBlurEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#boundingRectFor)
///
/// ``` QGraphicsBlurEffect* self, QRectF* rect ```
QRectF* q_graphicsblureffect_bounding_rect_for(void* self, void* rect) {
    return QGraphicsBlurEffect_BoundingRectFor((QGraphicsBlurEffect*)self, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsBlurEffect* self, QRectF* (*slot)(QGraphicsBlurEffect*, QRectF*) ```
void q_graphicsblureffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnBoundingRectFor((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsBlurEffect* self, QRectF* rect ```
QRectF* q_graphicsblureffect_qbase_bounding_rect_for(void* self, void* rect) {
    return QGraphicsBlurEffect_QBaseBoundingRectFor((QGraphicsBlurEffect*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadius)
///
/// ``` QGraphicsBlurEffect* self ```
double q_graphicsblureffect_blur_radius(void* self) {
    return QGraphicsBlurEffect_BlurRadius((QGraphicsBlurEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHints)
///
/// ``` QGraphicsBlurEffect* self ```
int64_t q_graphicsblureffect_blur_hints(void* self) {
    return QGraphicsBlurEffect_BlurHints((QGraphicsBlurEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurRadius)
///
/// ``` QGraphicsBlurEffect* self, double blurRadius ```
void q_graphicsblureffect_set_blur_radius(void* self, double blurRadius) {
    QGraphicsBlurEffect_SetBlurRadius((QGraphicsBlurEffect*)self, blurRadius);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#setBlurHints)
///
/// ``` QGraphicsBlurEffect* self, int hints ```
void q_graphicsblureffect_set_blur_hints(void* self, int64_t hints) {
    QGraphicsBlurEffect_SetBlurHints((QGraphicsBlurEffect*)self, hints);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurRadiusChanged)
///
/// ``` QGraphicsBlurEffect* self, double blurRadius ```
void q_graphicsblureffect_blur_radius_changed(void* self, double blurRadius) {
    QGraphicsBlurEffect_BlurRadiusChanged((QGraphicsBlurEffect*)self, blurRadius);
}

/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, double) ```
void q_graphicsblureffect_on_blur_radius_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsBlurEffect_Connect_BlurRadiusChanged((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#blurHintsChanged)
///
/// ``` QGraphicsBlurEffect* self, int hints ```
void q_graphicsblureffect_blur_hints_changed(void* self, int64_t hints) {
    QGraphicsBlurEffect_BlurHintsChanged((QGraphicsBlurEffect*)self, hints);
}

/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, int) ```
void q_graphicsblureffect_on_blur_hints_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsBlurEffect_Connect_BlurHintsChanged((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsblureffect.html#draw)
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_draw(void* self, void* painter) {
    QGraphicsBlurEffect_Draw((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QPainter*) ```
void q_graphicsblureffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnDraw((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_qbase_draw(void* self, void* painter) {
    QGraphicsBlurEffect_QBaseDraw((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsblureffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsBlurEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsblureffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsBlurEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsBlurEffect* self ```
QRectF* q_graphicsblureffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsBlurEffect* self, bool enable ```
void q_graphicsblureffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsBlurEffect* self, bool enabled ```
void q_graphicsblureffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

/// Inherited from QGraphicsEffect
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicsblureffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsBlurEffect* self ```
const char* q_graphicsblureffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsBlurEffect* self, const char* name ```
void q_graphicsblureffect_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsBlurEffect* self, bool b ```
bool q_graphicsblureffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsBlurEffect* self ```
QThread* q_graphicsblureffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsBlurEffect* self, QThread* thread ```
void q_graphicsblureffect_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsBlurEffect* self, int interval ```
int32_t q_graphicsblureffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsBlurEffect* self, int id ```
void q_graphicsblureffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsBlurEffect* self ```
libqt_list /* of QObject* */ q_graphicsblureffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsBlurEffect* self, QObject* parent ```
void q_graphicsblureffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsBlurEffect* self, QObject* filterObj ```
void q_graphicsblureffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsBlurEffect* self, QObject* obj ```
void q_graphicsblureffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsblureffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsBlurEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsblureffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsblureffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsblureffect_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsBlurEffect* self, const char* name, QVariant* value ```
bool q_graphicsblureffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsBlurEffect* self, const char* name ```
QVariant* q_graphicsblureffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsBlurEffect* self ```
const char** q_graphicsblureffect_dynamic_property_names(void* self) {
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
/// ``` QGraphicsBlurEffect* self ```
QBindingStorage* q_graphicsblureffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsBlurEffect* self ```
QBindingStorage* q_graphicsblureffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QObject*) ```
void q_graphicsblureffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsBlurEffect* self ```
QObject* q_graphicsblureffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsBlurEffect* self, const char* classname ```
bool q_graphicsblureffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsBlurEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsblureffect_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsblureffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsBlurEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsblureffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsBlurEffect* self, QObject* param1 ```
void q_graphicsblureffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsblureffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int flags ```
void q_graphicsblureffect_source_changed(void* self, int64_t flags) {
    QGraphicsBlurEffect_SourceChanged((QGraphicsBlurEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int flags ```
void q_graphicsblureffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsBlurEffect_QBaseSourceChanged((QGraphicsBlurEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, int) ```
void q_graphicsblureffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsBlurEffect_OnSourceChanged((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
bool q_graphicsblureffect_event(void* self, void* event) {
    return QGraphicsBlurEffect_Event((QGraphicsBlurEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
bool q_graphicsblureffect_qbase_event(void* self, void* event) {
    return QGraphicsBlurEffect_QBaseEvent((QGraphicsBlurEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)(QGraphicsBlurEffect*, QEvent*) ```
void q_graphicsblureffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsblureffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsBlurEffect_EventFilter((QGraphicsBlurEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsblureffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsBlurEffect_QBaseEventFilter((QGraphicsBlurEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)(QGraphicsBlurEffect*, QObject*, QEvent*) ```
void q_graphicsblureffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsBlurEffect_OnEventFilter((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QTimerEvent* event ```
void q_graphicsblureffect_timer_event(void* self, void* event) {
    QGraphicsBlurEffect_TimerEvent((QGraphicsBlurEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QTimerEvent* event ```
void q_graphicsblureffect_qbase_timer_event(void* self, void* event) {
    QGraphicsBlurEffect_QBaseTimerEvent((QGraphicsBlurEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QTimerEvent*) ```
void q_graphicsblureffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnTimerEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QChildEvent* event ```
void q_graphicsblureffect_child_event(void* self, void* event) {
    QGraphicsBlurEffect_ChildEvent((QGraphicsBlurEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QChildEvent* event ```
void q_graphicsblureffect_qbase_child_event(void* self, void* event) {
    QGraphicsBlurEffect_QBaseChildEvent((QGraphicsBlurEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QChildEvent*) ```
void q_graphicsblureffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnChildEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
void q_graphicsblureffect_custom_event(void* self, void* event) {
    QGraphicsBlurEffect_CustomEvent((QGraphicsBlurEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QEvent* event ```
void q_graphicsblureffect_qbase_custom_event(void* self, void* event) {
    QGraphicsBlurEffect_QBaseCustomEvent((QGraphicsBlurEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QEvent*) ```
void q_graphicsblureffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnCustomEvent((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_connect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_ConnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_QBaseConnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QMetaMethod*) ```
void q_graphicsblureffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnConnectNotify((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_disconnect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_DisconnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
void q_graphicsblureffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsBlurEffect_QBaseDisconnectNotify((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QMetaMethod*) ```
void q_graphicsblureffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnDisconnectNotify((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_update_bounding_rect(void* self) {
    QGraphicsBlurEffect_UpdateBoundingRect((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_qbase_update_bounding_rect(void* self) {
    QGraphicsBlurEffect_QBaseUpdateBoundingRect((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)() ```
void q_graphicsblureffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsBlurEffect_OnUpdateBoundingRect((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_source_is_pixmap(void* self) {
    return QGraphicsBlurEffect_SourceIsPixmap((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
bool q_graphicsblureffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsBlurEffect_QBaseSourceIsPixmap((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)() ```
void q_graphicsblureffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsBlurEffect_OnSourceIsPixmap((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QRectF* q_graphicsblureffect_source_bounding_rect(void* self) {
    return QGraphicsBlurEffect_SourceBoundingRect((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QRectF* q_graphicsblureffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsBlurEffect_QBaseSourceBoundingRect((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QRectF* (*slot)() ```
void q_graphicsblureffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsBlurEffect_OnSourceBoundingRect((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_draw_source(void* self, void* painter) {
    QGraphicsBlurEffect_DrawSource((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QPainter* painter ```
void q_graphicsblureffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsBlurEffect_QBaseDrawSource((QGraphicsBlurEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, void (*slot)(QGraphicsBlurEffect*, QPainter*) ```
void q_graphicsblureffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnDrawSource((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QPixmap* q_graphicsblureffect_source_pixmap(void* self) {
    return QGraphicsBlurEffect_SourcePixmap((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QPixmap* q_graphicsblureffect_qbase_source_pixmap(void* self) {
    return QGraphicsBlurEffect_QBaseSourcePixmap((QGraphicsBlurEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QPixmap* (*slot)() ```
void q_graphicsblureffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsBlurEffect_OnSourcePixmap((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QObject* q_graphicsblureffect_sender(void* self) {
    return QGraphicsBlurEffect_Sender((QGraphicsBlurEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
QObject* q_graphicsblureffect_qbase_sender(void* self) {
    return QGraphicsBlurEffect_QBaseSender((QGraphicsBlurEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QObject* (*slot)() ```
void q_graphicsblureffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsBlurEffect_OnSender((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
int32_t q_graphicsblureffect_sender_signal_index(void* self) {
    return QGraphicsBlurEffect_SenderSignalIndex((QGraphicsBlurEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self ```
int32_t q_graphicsblureffect_qbase_sender_signal_index(void* self) {
    return QGraphicsBlurEffect_QBaseSenderSignalIndex((QGraphicsBlurEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int32_t (*slot)() ```
void q_graphicsblureffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsBlurEffect_OnSenderSignalIndex((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, const char* signal ```
int32_t q_graphicsblureffect_receivers(void* self, const char* signal) {
    return QGraphicsBlurEffect_Receivers((QGraphicsBlurEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, const char* signal ```
int32_t q_graphicsblureffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsBlurEffect_QBaseReceivers((QGraphicsBlurEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, int32_t (*slot)(QGraphicsBlurEffect*, const char*) ```
void q_graphicsblureffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsBlurEffect_OnReceivers((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
bool q_graphicsblureffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsBlurEffect_IsSignalConnected((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, QMetaMethod* signal ```
bool q_graphicsblureffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsBlurEffect_QBaseIsSignalConnected((QGraphicsBlurEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsBlurEffect* self, bool (*slot)(QGraphicsBlurEffect*, QMetaMethod*) ```
void q_graphicsblureffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsBlurEffect_OnIsSignalConnected((QGraphicsBlurEffect*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsBlurEffect* self ```
void q_graphicsblureffect_delete(void* self) {
    QGraphicsBlurEffect_Delete((QGraphicsBlurEffect*)(self));
}

/// https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html

/// q_graphicsdropshadoweffect_new constructs a new QGraphicsDropShadowEffect object.
///
///
QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new() {
    return QGraphicsDropShadowEffect_new();
}

/// q_graphicsdropshadoweffect_new2 constructs a new QGraphicsDropShadowEffect object.
///
/// ``` QObject* parent ```
QGraphicsDropShadowEffect* q_graphicsdropshadoweffect_new2(void* parent) {
    return QGraphicsDropShadowEffect_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsDropShadowEffect* self ```
QMetaObject* q_graphicsdropshadoweffect_meta_object(void* self) {
    return QGraphicsDropShadowEffect_MetaObject((QGraphicsDropShadowEffect*)self);
}

/// ``` QGraphicsDropShadowEffect* self, const char* param1 ```
void* q_graphicsdropshadoweffect_metacast(void* self, const char* param1) {
    return QGraphicsDropShadowEffect_Metacast((QGraphicsDropShadowEffect*)self, param1);
}

/// ``` QGraphicsDropShadowEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsdropshadoweffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsDropShadowEffect_Metacall((QGraphicsDropShadowEffect*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsDropShadowEffect* self, int32_t (*slot)(QGraphicsDropShadowEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicsdropshadoweffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsDropShadowEffect_OnMetacall((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsDropShadowEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsdropshadoweffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsDropShadowEffect_QBaseMetacall((QGraphicsDropShadowEffect*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsdropshadoweffect_tr(const char* s) {
    libqt_string _str = QGraphicsDropShadowEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#boundingRectFor)
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* rect ```
QRectF* q_graphicsdropshadoweffect_bounding_rect_for(void* self, void* rect) {
    return QGraphicsDropShadowEffect_BoundingRectFor((QGraphicsDropShadowEffect*)self, (QRectF*)rect);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* (*slot)(QGraphicsDropShadowEffect*, QRectF*) ```
void q_graphicsdropshadoweffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnBoundingRectFor((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* rect ```
QRectF* q_graphicsdropshadoweffect_qbase_bounding_rect_for(void* self, void* rect) {
    return QGraphicsDropShadowEffect_QBaseBoundingRectFor((QGraphicsDropShadowEffect*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offset)
///
/// ``` QGraphicsDropShadowEffect* self ```
QPointF* q_graphicsdropshadoweffect_offset(void* self) {
    return QGraphicsDropShadowEffect_Offset((QGraphicsDropShadowEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#xOffset)
///
/// ``` QGraphicsDropShadowEffect* self ```
double q_graphicsdropshadoweffect_x_offset(void* self) {
    return QGraphicsDropShadowEffect_XOffset((QGraphicsDropShadowEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#yOffset)
///
/// ``` QGraphicsDropShadowEffect* self ```
double q_graphicsdropshadoweffect_y_offset(void* self) {
    return QGraphicsDropShadowEffect_YOffset((QGraphicsDropShadowEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadius)
///
/// ``` QGraphicsDropShadowEffect* self ```
double q_graphicsdropshadoweffect_blur_radius(void* self) {
    return QGraphicsDropShadowEffect_BlurRadius((QGraphicsDropShadowEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#color)
///
/// ``` QGraphicsDropShadowEffect* self ```
QColor* q_graphicsdropshadoweffect_color(void* self) {
    return QGraphicsDropShadowEffect_Color((QGraphicsDropShadowEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// ``` QGraphicsDropShadowEffect* self, QPointF* ofs ```
void q_graphicsdropshadoweffect_set_offset(void* self, void* ofs) {
    QGraphicsDropShadowEffect_SetOffset((QGraphicsDropShadowEffect*)self, (QPointF*)ofs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double dx, double dy ```
void q_graphicsdropshadoweffect_set_offset2(void* self, double dx, double dy) {
    QGraphicsDropShadowEffect_SetOffset2((QGraphicsDropShadowEffect*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double d ```
void q_graphicsdropshadoweffect_set_offset_with_qreal(void* self, double d) {
    QGraphicsDropShadowEffect_SetOffsetWithQreal((QGraphicsDropShadowEffect*)self, d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setXOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double dx ```
void q_graphicsdropshadoweffect_set_x_offset(void* self, double dx) {
    QGraphicsDropShadowEffect_SetXOffset((QGraphicsDropShadowEffect*)self, dx);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setYOffset)
///
/// ``` QGraphicsDropShadowEffect* self, double dy ```
void q_graphicsdropshadoweffect_set_y_offset(void* self, double dy) {
    QGraphicsDropShadowEffect_SetYOffset((QGraphicsDropShadowEffect*)self, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setBlurRadius)
///
/// ``` QGraphicsDropShadowEffect* self, double blurRadius ```
void q_graphicsdropshadoweffect_set_blur_radius(void* self, double blurRadius) {
    QGraphicsDropShadowEffect_SetBlurRadius((QGraphicsDropShadowEffect*)self, blurRadius);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#setColor)
///
/// ``` QGraphicsDropShadowEffect* self, QColor* color ```
void q_graphicsdropshadoweffect_set_color(void* self, void* color) {
    QGraphicsDropShadowEffect_SetColor((QGraphicsDropShadowEffect*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#offsetChanged)
///
/// ``` QGraphicsDropShadowEffect* self, QPointF* offset ```
void q_graphicsdropshadoweffect_offset_changed(void* self, void* offset) {
    QGraphicsDropShadowEffect_OffsetChanged((QGraphicsDropShadowEffect*)self, (QPointF*)offset);
}

/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QPointF*) ```
void q_graphicsdropshadoweffect_on_offset_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_Connect_OffsetChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#blurRadiusChanged)
///
/// ``` QGraphicsDropShadowEffect* self, double blurRadius ```
void q_graphicsdropshadoweffect_blur_radius_changed(void* self, double blurRadius) {
    QGraphicsDropShadowEffect_BlurRadiusChanged((QGraphicsDropShadowEffect*)self, blurRadius);
}

/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, double) ```
void q_graphicsdropshadoweffect_on_blur_radius_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsDropShadowEffect_Connect_BlurRadiusChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#colorChanged)
///
/// ``` QGraphicsDropShadowEffect* self, QColor* color ```
void q_graphicsdropshadoweffect_color_changed(void* self, void* color) {
    QGraphicsDropShadowEffect_ColorChanged((QGraphicsDropShadowEffect*)self, (QColor*)color);
}

/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QColor*) ```
void q_graphicsdropshadoweffect_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_Connect_ColorChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsdropshadoweffect.html#draw)
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_draw(void* self, void* painter) {
    QGraphicsDropShadowEffect_Draw((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QPainter*) ```
void q_graphicsdropshadoweffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnDraw((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_qbase_draw(void* self, void* painter) {
    QGraphicsDropShadowEffect_QBaseDraw((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsdropshadoweffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsDropShadowEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsdropshadoweffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsDropShadowEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsDropShadowEffect* self ```
QRectF* q_graphicsdropshadoweffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsDropShadowEffect* self, bool enable ```
void q_graphicsdropshadoweffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsDropShadowEffect* self, bool enabled ```
void q_graphicsdropshadoweffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

/// Inherited from QGraphicsEffect
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicsdropshadoweffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsDropShadowEffect* self ```
const char* q_graphicsdropshadoweffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsDropShadowEffect* self, const char* name ```
void q_graphicsdropshadoweffect_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsDropShadowEffect* self, bool b ```
bool q_graphicsdropshadoweffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsDropShadowEffect* self ```
QThread* q_graphicsdropshadoweffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsDropShadowEffect* self, QThread* thread ```
void q_graphicsdropshadoweffect_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsDropShadowEffect* self, int interval ```
int32_t q_graphicsdropshadoweffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsDropShadowEffect* self, int id ```
void q_graphicsdropshadoweffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsDropShadowEffect* self ```
libqt_list /* of QObject* */ q_graphicsdropshadoweffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* parent ```
void q_graphicsdropshadoweffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* filterObj ```
void q_graphicsdropshadoweffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* obj ```
void q_graphicsdropshadoweffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsdropshadoweffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsdropshadoweffect_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsDropShadowEffect* self, const char* name, QVariant* value ```
bool q_graphicsdropshadoweffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsDropShadowEffect* self, const char* name ```
QVariant* q_graphicsdropshadoweffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsDropShadowEffect* self ```
const char** q_graphicsdropshadoweffect_dynamic_property_names(void* self) {
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
/// ``` QGraphicsDropShadowEffect* self ```
QBindingStorage* q_graphicsdropshadoweffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsDropShadowEffect* self ```
QBindingStorage* q_graphicsdropshadoweffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QObject*) ```
void q_graphicsdropshadoweffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsDropShadowEffect* self ```
QObject* q_graphicsdropshadoweffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsDropShadowEffect* self, const char* classname ```
bool q_graphicsdropshadoweffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsDropShadowEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsdropshadoweffect_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsdropshadoweffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsDropShadowEffect* self, QObject* param1 ```
void q_graphicsdropshadoweffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsdropshadoweffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int flags ```
void q_graphicsdropshadoweffect_source_changed(void* self, int64_t flags) {
    QGraphicsDropShadowEffect_SourceChanged((QGraphicsDropShadowEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int flags ```
void q_graphicsdropshadoweffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsDropShadowEffect_QBaseSourceChanged((QGraphicsDropShadowEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, int) ```
void q_graphicsdropshadoweffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsDropShadowEffect_OnSourceChanged((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
bool q_graphicsdropshadoweffect_event(void* self, void* event) {
    return QGraphicsDropShadowEffect_Event((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
bool q_graphicsdropshadoweffect_qbase_event(void* self, void* event) {
    return QGraphicsDropShadowEffect_QBaseEvent((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)(QGraphicsDropShadowEffect*, QEvent*) ```
void q_graphicsdropshadoweffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsdropshadoweffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsDropShadowEffect_EventFilter((QGraphicsDropShadowEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsdropshadoweffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsDropShadowEffect_QBaseEventFilter((QGraphicsDropShadowEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)(QGraphicsDropShadowEffect*, QObject*, QEvent*) ```
void q_graphicsdropshadoweffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsDropShadowEffect_OnEventFilter((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QTimerEvent* event ```
void q_graphicsdropshadoweffect_timer_event(void* self, void* event) {
    QGraphicsDropShadowEffect_TimerEvent((QGraphicsDropShadowEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QTimerEvent* event ```
void q_graphicsdropshadoweffect_qbase_timer_event(void* self, void* event) {
    QGraphicsDropShadowEffect_QBaseTimerEvent((QGraphicsDropShadowEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QTimerEvent*) ```
void q_graphicsdropshadoweffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnTimerEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QChildEvent* event ```
void q_graphicsdropshadoweffect_child_event(void* self, void* event) {
    QGraphicsDropShadowEffect_ChildEvent((QGraphicsDropShadowEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QChildEvent* event ```
void q_graphicsdropshadoweffect_qbase_child_event(void* self, void* event) {
    QGraphicsDropShadowEffect_QBaseChildEvent((QGraphicsDropShadowEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QChildEvent*) ```
void q_graphicsdropshadoweffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnChildEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
void q_graphicsdropshadoweffect_custom_event(void* self, void* event) {
    QGraphicsDropShadowEffect_CustomEvent((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QEvent* event ```
void q_graphicsdropshadoweffect_qbase_custom_event(void* self, void* event) {
    QGraphicsDropShadowEffect_QBaseCustomEvent((QGraphicsDropShadowEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QEvent*) ```
void q_graphicsdropshadoweffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnCustomEvent((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_connect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_ConnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_QBaseConnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QMetaMethod*) ```
void q_graphicsdropshadoweffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnConnectNotify((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_disconnect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_DisconnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
void q_graphicsdropshadoweffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsDropShadowEffect_QBaseDisconnectNotify((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QMetaMethod*) ```
void q_graphicsdropshadoweffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnDisconnectNotify((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_update_bounding_rect(void* self) {
    QGraphicsDropShadowEffect_UpdateBoundingRect((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_qbase_update_bounding_rect(void* self) {
    QGraphicsDropShadowEffect_QBaseUpdateBoundingRect((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)() ```
void q_graphicsdropshadoweffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsDropShadowEffect_OnUpdateBoundingRect((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_source_is_pixmap(void* self) {
    return QGraphicsDropShadowEffect_SourceIsPixmap((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
bool q_graphicsdropshadoweffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsDropShadowEffect_QBaseSourceIsPixmap((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)() ```
void q_graphicsdropshadoweffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsDropShadowEffect_OnSourceIsPixmap((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QRectF* q_graphicsdropshadoweffect_source_bounding_rect(void* self) {
    return QGraphicsDropShadowEffect_SourceBoundingRect((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QRectF* q_graphicsdropshadoweffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsDropShadowEffect_QBaseSourceBoundingRect((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QRectF* (*slot)() ```
void q_graphicsdropshadoweffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsDropShadowEffect_OnSourceBoundingRect((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_draw_source(void* self, void* painter) {
    QGraphicsDropShadowEffect_DrawSource((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QPainter* painter ```
void q_graphicsdropshadoweffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsDropShadowEffect_QBaseDrawSource((QGraphicsDropShadowEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, void (*slot)(QGraphicsDropShadowEffect*, QPainter*) ```
void q_graphicsdropshadoweffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnDrawSource((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QPixmap* q_graphicsdropshadoweffect_source_pixmap(void* self) {
    return QGraphicsDropShadowEffect_SourcePixmap((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QPixmap* q_graphicsdropshadoweffect_qbase_source_pixmap(void* self) {
    return QGraphicsDropShadowEffect_QBaseSourcePixmap((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QPixmap* (*slot)() ```
void q_graphicsdropshadoweffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsDropShadowEffect_OnSourcePixmap((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QObject* q_graphicsdropshadoweffect_sender(void* self) {
    return QGraphicsDropShadowEffect_Sender((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
QObject* q_graphicsdropshadoweffect_qbase_sender(void* self) {
    return QGraphicsDropShadowEffect_QBaseSender((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QObject* (*slot)() ```
void q_graphicsdropshadoweffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsDropShadowEffect_OnSender((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
int32_t q_graphicsdropshadoweffect_sender_signal_index(void* self) {
    return QGraphicsDropShadowEffect_SenderSignalIndex((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self ```
int32_t q_graphicsdropshadoweffect_qbase_sender_signal_index(void* self) {
    return QGraphicsDropShadowEffect_QBaseSenderSignalIndex((QGraphicsDropShadowEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int32_t (*slot)() ```
void q_graphicsdropshadoweffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsDropShadowEffect_OnSenderSignalIndex((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, const char* signal ```
int32_t q_graphicsdropshadoweffect_receivers(void* self, const char* signal) {
    return QGraphicsDropShadowEffect_Receivers((QGraphicsDropShadowEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, const char* signal ```
int32_t q_graphicsdropshadoweffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsDropShadowEffect_QBaseReceivers((QGraphicsDropShadowEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, int32_t (*slot)(QGraphicsDropShadowEffect*, const char*) ```
void q_graphicsdropshadoweffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsDropShadowEffect_OnReceivers((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
bool q_graphicsdropshadoweffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsDropShadowEffect_IsSignalConnected((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, QMetaMethod* signal ```
bool q_graphicsdropshadoweffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsDropShadowEffect_QBaseIsSignalConnected((QGraphicsDropShadowEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsDropShadowEffect* self, bool (*slot)(QGraphicsDropShadowEffect*, QMetaMethod*) ```
void q_graphicsdropshadoweffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsDropShadowEffect_OnIsSignalConnected((QGraphicsDropShadowEffect*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsDropShadowEffect* self ```
void q_graphicsdropshadoweffect_delete(void* self) {
    QGraphicsDropShadowEffect_Delete((QGraphicsDropShadowEffect*)(self));
}

/// https://doc.qt.io/qt-6/qgraphicsopacityeffect.html

/// q_graphicsopacityeffect_new constructs a new QGraphicsOpacityEffect object.
///
///
QGraphicsOpacityEffect* q_graphicsopacityeffect_new() {
    return QGraphicsOpacityEffect_new();
}

/// q_graphicsopacityeffect_new2 constructs a new QGraphicsOpacityEffect object.
///
/// ``` QObject* parent ```
QGraphicsOpacityEffect* q_graphicsopacityeffect_new2(void* parent) {
    return QGraphicsOpacityEffect_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QGraphicsOpacityEffect* self ```
QMetaObject* q_graphicsopacityeffect_meta_object(void* self) {
    return QGraphicsOpacityEffect_MetaObject((QGraphicsOpacityEffect*)self);
}

/// ``` QGraphicsOpacityEffect* self, const char* param1 ```
void* q_graphicsopacityeffect_metacast(void* self, const char* param1) {
    return QGraphicsOpacityEffect_Metacast((QGraphicsOpacityEffect*)self, param1);
}

/// ``` QGraphicsOpacityEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsopacityeffect_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsOpacityEffect_Metacall((QGraphicsOpacityEffect*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsOpacityEffect* self, int32_t (*slot)(QGraphicsOpacityEffect*, enum QMetaObject__Call, int, void*) ```
void q_graphicsopacityeffect_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QGraphicsOpacityEffect_OnMetacall((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsOpacityEffect* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_graphicsopacityeffect_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QGraphicsOpacityEffect_QBaseMetacall((QGraphicsOpacityEffect*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_graphicsopacityeffect_tr(const char* s) {
    libqt_string _str = QGraphicsOpacityEffect_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacity)
///
/// ``` QGraphicsOpacityEffect* self ```
double q_graphicsopacityeffect_opacity(void* self) {
    return QGraphicsOpacityEffect_Opacity((QGraphicsOpacityEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMask)
///
/// ``` QGraphicsOpacityEffect* self ```
QBrush* q_graphicsopacityeffect_opacity_mask(void* self) {
    return QGraphicsOpacityEffect_OpacityMask((QGraphicsOpacityEffect*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacity)
///
/// ``` QGraphicsOpacityEffect* self, double opacity ```
void q_graphicsopacityeffect_set_opacity(void* self, double opacity) {
    QGraphicsOpacityEffect_SetOpacity((QGraphicsOpacityEffect*)self, opacity);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#setOpacityMask)
///
/// ``` QGraphicsOpacityEffect* self, QBrush* mask ```
void q_graphicsopacityeffect_set_opacity_mask(void* self, void* mask) {
    QGraphicsOpacityEffect_SetOpacityMask((QGraphicsOpacityEffect*)self, (QBrush*)mask);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityChanged)
///
/// ``` QGraphicsOpacityEffect* self, double opacity ```
void q_graphicsopacityeffect_opacity_changed(void* self, double opacity) {
    QGraphicsOpacityEffect_OpacityChanged((QGraphicsOpacityEffect*)self, opacity);
}

/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, double) ```
void q_graphicsopacityeffect_on_opacity_changed(void* self, void (*slot)(void*, double)) {
    QGraphicsOpacityEffect_Connect_OpacityChanged((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#opacityMaskChanged)
///
/// ``` QGraphicsOpacityEffect* self, QBrush* mask ```
void q_graphicsopacityeffect_opacity_mask_changed(void* self, void* mask) {
    QGraphicsOpacityEffect_OpacityMaskChanged((QGraphicsOpacityEffect*)self, (QBrush*)mask);
}

/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QBrush*) ```
void q_graphicsopacityeffect_on_opacity_mask_changed(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_Connect_OpacityMaskChanged((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicsopacityeffect.html#draw)
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_draw(void* self, void* painter) {
    QGraphicsOpacityEffect_Draw((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

/// Allows for overriding the related default method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QPainter*) ```
void q_graphicsopacityeffect_on_draw(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnDraw((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_qbase_draw(void* self, void* painter) {
    QGraphicsOpacityEffect_QBaseDraw((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_graphicsopacityeffect_tr2(const char* s, const char* c) {
    libqt_string _str = QGraphicsOpacityEffect_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_graphicsopacityeffect_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QGraphicsOpacityEffect_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRect)
///
/// ``` QGraphicsOpacityEffect* self ```
QRectF* q_graphicsopacityeffect_bounding_rect(void* self) {
    return QGraphicsEffect_BoundingRect((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#isEnabled)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_enabled(void* self) {
    return QGraphicsEffect_IsEnabled((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#setEnabled)
///
/// ``` QGraphicsOpacityEffect* self, bool enable ```
void q_graphicsopacityeffect_set_enabled(void* self, bool enable) {
    QGraphicsEffect_SetEnabled((QGraphicsEffect*)self, enable);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#update)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_update(void* self) {
    QGraphicsEffect_Update((QGraphicsEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#enabledChanged)
///
/// ``` QGraphicsOpacityEffect* self, bool enabled ```
void q_graphicsopacityeffect_enabled_changed(void* self, bool enabled) {
    QGraphicsEffect_EnabledChanged((QGraphicsEffect*)self, enabled);
}

/// Inherited from QGraphicsEffect
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsEffect*, bool) ```
void q_graphicsopacityeffect_on_enabled_changed(void* self, void (*slot)(void*, bool)) {
    QGraphicsEffect_Connect_EnabledChanged((QGraphicsEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QGraphicsOpacityEffect* self ```
const char* q_graphicsopacityeffect_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QGraphicsOpacityEffect* self, const char* name ```
void q_graphicsopacityeffect_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QGraphicsOpacityEffect* self, bool b ```
bool q_graphicsopacityeffect_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QGraphicsOpacityEffect* self ```
QThread* q_graphicsopacityeffect_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QGraphicsOpacityEffect* self, QThread* thread ```
void q_graphicsopacityeffect_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsOpacityEffect* self, int interval ```
int32_t q_graphicsopacityeffect_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QGraphicsOpacityEffect* self, int id ```
void q_graphicsopacityeffect_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QGraphicsOpacityEffect* self ```
libqt_list /* of QObject* */ q_graphicsopacityeffect_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QGraphicsOpacityEffect* self, QObject* parent ```
void q_graphicsopacityeffect_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QGraphicsOpacityEffect* self, QObject* filterObj ```
void q_graphicsopacityeffect_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QGraphicsOpacityEffect* self, QObject* obj ```
void q_graphicsopacityeffect_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_graphicsopacityeffect_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsOpacityEffect* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_graphicsopacityeffect_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_graphicsopacityeffect_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_graphicsopacityeffect_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QGraphicsOpacityEffect* self, const char* name, QVariant* value ```
bool q_graphicsopacityeffect_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QGraphicsOpacityEffect* self, const char* name ```
QVariant* q_graphicsopacityeffect_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QGraphicsOpacityEffect* self ```
const char** q_graphicsopacityeffect_dynamic_property_names(void* self) {
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
/// ``` QGraphicsOpacityEffect* self ```
QBindingStorage* q_graphicsopacityeffect_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QGraphicsOpacityEffect* self ```
QBindingStorage* q_graphicsopacityeffect_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QObject*) ```
void q_graphicsopacityeffect_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QGraphicsOpacityEffect* self ```
QObject* q_graphicsopacityeffect_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QGraphicsOpacityEffect* self, const char* classname ```
bool q_graphicsopacityeffect_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QGraphicsOpacityEffect* self, int interval, enum Qt__TimerType timerType ```
int32_t q_graphicsopacityeffect_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsopacityeffect_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QGraphicsOpacityEffect* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_graphicsopacityeffect_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QGraphicsOpacityEffect* self, QObject* param1 ```
void q_graphicsopacityeffect_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QObject*, QObject*) ```
void q_graphicsopacityeffect_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#boundingRectFor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* sourceRect ```
QRectF* q_graphicsopacityeffect_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsOpacityEffect_BoundingRectFor((QGraphicsOpacityEffect*)self, (QRectF*)sourceRect);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* sourceRect ```
QRectF* q_graphicsopacityeffect_qbase_bounding_rect_for(void* self, void* sourceRect) {
    return QGraphicsOpacityEffect_QBaseBoundingRectFor((QGraphicsOpacityEffect*)self, (QRectF*)sourceRect);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* (*slot)(QGraphicsOpacityEffect*, QRectF*) ```
void q_graphicsopacityeffect_on_bounding_rect_for(void* self, QRectF* (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnBoundingRectFor((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int flags ```
void q_graphicsopacityeffect_source_changed(void* self, int64_t flags) {
    QGraphicsOpacityEffect_SourceChanged((QGraphicsOpacityEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int flags ```
void q_graphicsopacityeffect_qbase_source_changed(void* self, int64_t flags) {
    QGraphicsOpacityEffect_QBaseSourceChanged((QGraphicsOpacityEffect*)self, flags);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, int) ```
void q_graphicsopacityeffect_on_source_changed(void* self, void (*slot)(void*, int64_t)) {
    QGraphicsOpacityEffect_OnSourceChanged((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
bool q_graphicsopacityeffect_event(void* self, void* event) {
    return QGraphicsOpacityEffect_Event((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
bool q_graphicsopacityeffect_qbase_event(void* self, void* event) {
    return QGraphicsOpacityEffect_QBaseEvent((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)(QGraphicsOpacityEffect*, QEvent*) ```
void q_graphicsopacityeffect_on_event(void* self, bool (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsopacityeffect_event_filter(void* self, void* watched, void* event) {
    return QGraphicsOpacityEffect_EventFilter((QGraphicsOpacityEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QObject* watched, QEvent* event ```
bool q_graphicsopacityeffect_qbase_event_filter(void* self, void* watched, void* event) {
    return QGraphicsOpacityEffect_QBaseEventFilter((QGraphicsOpacityEffect*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)(QGraphicsOpacityEffect*, QObject*, QEvent*) ```
void q_graphicsopacityeffect_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QGraphicsOpacityEffect_OnEventFilter((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QTimerEvent* event ```
void q_graphicsopacityeffect_timer_event(void* self, void* event) {
    QGraphicsOpacityEffect_TimerEvent((QGraphicsOpacityEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QTimerEvent* event ```
void q_graphicsopacityeffect_qbase_timer_event(void* self, void* event) {
    QGraphicsOpacityEffect_QBaseTimerEvent((QGraphicsOpacityEffect*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QTimerEvent*) ```
void q_graphicsopacityeffect_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnTimerEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QChildEvent* event ```
void q_graphicsopacityeffect_child_event(void* self, void* event) {
    QGraphicsOpacityEffect_ChildEvent((QGraphicsOpacityEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QChildEvent* event ```
void q_graphicsopacityeffect_qbase_child_event(void* self, void* event) {
    QGraphicsOpacityEffect_QBaseChildEvent((QGraphicsOpacityEffect*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QChildEvent*) ```
void q_graphicsopacityeffect_on_child_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnChildEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
void q_graphicsopacityeffect_custom_event(void* self, void* event) {
    QGraphicsOpacityEffect_CustomEvent((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QEvent* event ```
void q_graphicsopacityeffect_qbase_custom_event(void* self, void* event) {
    QGraphicsOpacityEffect_QBaseCustomEvent((QGraphicsOpacityEffect*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QEvent*) ```
void q_graphicsopacityeffect_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnCustomEvent((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_connect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_ConnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_qbase_connect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_QBaseConnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QMetaMethod*) ```
void q_graphicsopacityeffect_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnConnectNotify((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_disconnect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_DisconnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
void q_graphicsopacityeffect_qbase_disconnect_notify(void* self, void* signal) {
    QGraphicsOpacityEffect_QBaseDisconnectNotify((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QMetaMethod*) ```
void q_graphicsopacityeffect_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnDisconnectNotify((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#updateBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_update_bounding_rect(void* self) {
    QGraphicsOpacityEffect_UpdateBoundingRect((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_qbase_update_bounding_rect(void* self) {
    QGraphicsOpacityEffect_QBaseUpdateBoundingRect((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)() ```
void q_graphicsopacityeffect_on_update_bounding_rect(void* self, void (*slot)()) {
    QGraphicsOpacityEffect_OnUpdateBoundingRect((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceIsPixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_source_is_pixmap(void* self) {
    return QGraphicsOpacityEffect_SourceIsPixmap((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
bool q_graphicsopacityeffect_qbase_source_is_pixmap(void* self) {
    return QGraphicsOpacityEffect_QBaseSourceIsPixmap((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)() ```
void q_graphicsopacityeffect_on_source_is_pixmap(void* self, bool (*slot)()) {
    QGraphicsOpacityEffect_OnSourceIsPixmap((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourceBoundingRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QRectF* q_graphicsopacityeffect_source_bounding_rect(void* self) {
    return QGraphicsOpacityEffect_SourceBoundingRect((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QRectF* q_graphicsopacityeffect_qbase_source_bounding_rect(void* self) {
    return QGraphicsOpacityEffect_QBaseSourceBoundingRect((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QRectF* (*slot)() ```
void q_graphicsopacityeffect_on_source_bounding_rect(void* self, QRectF* (*slot)()) {
    QGraphicsOpacityEffect_OnSourceBoundingRect((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#drawSource)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_draw_source(void* self, void* painter) {
    QGraphicsOpacityEffect_DrawSource((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QPainter* painter ```
void q_graphicsopacityeffect_qbase_draw_source(void* self, void* painter) {
    QGraphicsOpacityEffect_QBaseDrawSource((QGraphicsOpacityEffect*)self, (QPainter*)painter);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, void (*slot)(QGraphicsOpacityEffect*, QPainter*) ```
void q_graphicsopacityeffect_on_draw_source(void* self, void (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnDrawSource((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QGraphicsEffect
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgraphicseffect.html#sourcePixmap)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QPixmap* q_graphicsopacityeffect_source_pixmap(void* self) {
    return QGraphicsOpacityEffect_SourcePixmap((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QPixmap* q_graphicsopacityeffect_qbase_source_pixmap(void* self) {
    return QGraphicsOpacityEffect_QBaseSourcePixmap((QGraphicsOpacityEffect*)self);
}

/// Inherited from QGraphicsEffect
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QPixmap* (*slot)() ```
void q_graphicsopacityeffect_on_source_pixmap(void* self, QPixmap* (*slot)()) {
    QGraphicsOpacityEffect_OnSourcePixmap((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QObject* q_graphicsopacityeffect_sender(void* self) {
    return QGraphicsOpacityEffect_Sender((QGraphicsOpacityEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
QObject* q_graphicsopacityeffect_qbase_sender(void* self) {
    return QGraphicsOpacityEffect_QBaseSender((QGraphicsOpacityEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QObject* (*slot)() ```
void q_graphicsopacityeffect_on_sender(void* self, QObject* (*slot)()) {
    QGraphicsOpacityEffect_OnSender((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
int32_t q_graphicsopacityeffect_sender_signal_index(void* self) {
    return QGraphicsOpacityEffect_SenderSignalIndex((QGraphicsOpacityEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self ```
int32_t q_graphicsopacityeffect_qbase_sender_signal_index(void* self) {
    return QGraphicsOpacityEffect_QBaseSenderSignalIndex((QGraphicsOpacityEffect*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int32_t (*slot)() ```
void q_graphicsopacityeffect_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QGraphicsOpacityEffect_OnSenderSignalIndex((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, const char* signal ```
int32_t q_graphicsopacityeffect_receivers(void* self, const char* signal) {
    return QGraphicsOpacityEffect_Receivers((QGraphicsOpacityEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, const char* signal ```
int32_t q_graphicsopacityeffect_qbase_receivers(void* self, const char* signal) {
    return QGraphicsOpacityEffect_QBaseReceivers((QGraphicsOpacityEffect*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, int32_t (*slot)(QGraphicsOpacityEffect*, const char*) ```
void q_graphicsopacityeffect_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QGraphicsOpacityEffect_OnReceivers((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
bool q_graphicsopacityeffect_is_signal_connected(void* self, void* signal) {
    return QGraphicsOpacityEffect_IsSignalConnected((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, QMetaMethod* signal ```
bool q_graphicsopacityeffect_qbase_is_signal_connected(void* self, void* signal) {
    return QGraphicsOpacityEffect_QBaseIsSignalConnected((QGraphicsOpacityEffect*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QGraphicsOpacityEffect* self, bool (*slot)(QGraphicsOpacityEffect*, QMetaMethod*) ```
void q_graphicsopacityeffect_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QGraphicsOpacityEffect_OnIsSignalConnected((QGraphicsOpacityEffect*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QGraphicsOpacityEffect* self ```
void q_graphicsopacityeffect_delete(void* self) {
    QGraphicsOpacityEffect_Delete((QGraphicsOpacityEffect*)(self));
}