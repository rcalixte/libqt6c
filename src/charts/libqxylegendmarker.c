#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqfont.hpp"
#include "libqlegend.hpp"
#include "libqlegendmarker.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqxyseries.hpp"
#include "../libqcoreevent.hpp"
#include "libqxylegendmarker.hpp"
#include "libqxylegendmarker.h"

/// https://doc.qt.io/qt-6/qxylegendmarker.html

/// q_xylegendmarker_new constructs a new QXYLegendMarker object.
///
/// ``` QXYSeries* series, QLegend* legend ```
QXYLegendMarker* q_xylegendmarker_new(void* series, void* legend) {
    return QXYLegendMarker_new((QXYSeries*)series, (QLegend*)legend);
}

/// q_xylegendmarker_new2 constructs a new QXYLegendMarker object.
///
/// ``` QXYSeries* series, QLegend* legend, QObject* parent ```
QXYLegendMarker* q_xylegendmarker_new2(void* series, void* legend, void* parent) {
    return QXYLegendMarker_new2((QXYSeries*)series, (QLegend*)legend, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QXYLegendMarker* self ```
QMetaObject* q_xylegendmarker_meta_object(void* self) {
    return QXYLegendMarker_MetaObject((QXYLegendMarker*)self);
}

/// ``` QXYLegendMarker* self, const char* param1 ```
void* q_xylegendmarker_metacast(void* self, const char* param1) {
    return QXYLegendMarker_Metacast((QXYLegendMarker*)self, param1);
}

/// ``` QXYLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_xylegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QXYLegendMarker_Metacall((QXYLegendMarker*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QXYLegendMarker* self, int32_t (*slot)(QXYLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_xylegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QXYLegendMarker_OnMetacall((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QXYLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_xylegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QXYLegendMarker_QBaseMetacall((QXYLegendMarker*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_xylegendmarker_tr(const char* s) {
    libqt_string _str = QXYLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxylegendmarker.html#type)
///
/// ``` QXYLegendMarker* self ```
int64_t q_xylegendmarker_type(void* self) {
    return QXYLegendMarker_Type((QXYLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QXYLegendMarker* self, int64_t (*slot)() ```
void q_xylegendmarker_on_type(void* self, int64_t (*slot)()) {
    QXYLegendMarker_OnType((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QXYLegendMarker* self ```
int64_t q_xylegendmarker_qbase_type(void* self) {
    return QXYLegendMarker_QBaseType((QXYLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qxylegendmarker.html#series)
///
/// ``` QXYLegendMarker* self ```
QXYSeries* q_xylegendmarker_series(void* self) {
    return QXYLegendMarker_Series((QXYLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QXYLegendMarker* self, QXYSeries* (*slot)() ```
void q_xylegendmarker_on_series(void* self, QXYSeries* (*slot)()) {
    QXYLegendMarker_OnSeries((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QXYLegendMarker* self ```
QXYSeries* q_xylegendmarker_qbase_series(void* self) {
    return QXYLegendMarker_QBaseSeries((QXYLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_xylegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QXYLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_xylegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QXYLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QXYLegendMarker* self ```
const char* q_xylegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QXYLegendMarker* self, const char* label ```
void q_xylegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QXYLegendMarker* self ```
QBrush* q_xylegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QXYLegendMarker* self, QBrush* brush ```
void q_xylegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QXYLegendMarker* self ```
QFont* q_xylegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QXYLegendMarker* self, QFont* font ```
void q_xylegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QXYLegendMarker* self ```
QPen* q_xylegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QXYLegendMarker* self, QPen* pen ```
void q_xylegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QXYLegendMarker* self ```
QBrush* q_xylegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QXYLegendMarker* self, QBrush* brush ```
void q_xylegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QXYLegendMarker* self ```
bool q_xylegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QXYLegendMarker* self, bool visible ```
void q_xylegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QXYLegendMarker* self ```
int64_t q_xylegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QXYLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_xylegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QXYLegendMarker* self, bool status ```
void q_xylegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_xylegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QXYLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_xylegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QXYLegendMarker* self ```
const char* q_xylegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QXYLegendMarker* self, const char* name ```
void q_xylegendmarker_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QXYLegendMarker* self ```
bool q_xylegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QXYLegendMarker* self ```
bool q_xylegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QXYLegendMarker* self ```
bool q_xylegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QXYLegendMarker* self ```
bool q_xylegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QXYLegendMarker* self, bool b ```
bool q_xylegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QXYLegendMarker* self ```
QThread* q_xylegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QXYLegendMarker* self, QThread* thread ```
void q_xylegendmarker_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QXYLegendMarker* self, int interval ```
int32_t q_xylegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QXYLegendMarker* self, int id ```
void q_xylegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QXYLegendMarker* self ```
libqt_list /* of QObject* */ q_xylegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QXYLegendMarker* self, QObject* parent ```
void q_xylegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QXYLegendMarker* self, QObject* filterObj ```
void q_xylegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QXYLegendMarker* self, QObject* obj ```
void q_xylegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_xylegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QXYLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_xylegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_xylegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_xylegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QXYLegendMarker* self, const char* name, QVariant* value ```
bool q_xylegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QXYLegendMarker* self, const char* name ```
QVariant* q_xylegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QXYLegendMarker* self ```
const char** q_xylegendmarker_dynamic_property_names(void* self) {
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
/// ``` QXYLegendMarker* self ```
QBindingStorage* q_xylegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QXYLegendMarker* self ```
QBindingStorage* q_xylegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QXYLegendMarker* self, void (*slot)(QObject*) ```
void q_xylegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QXYLegendMarker* self ```
QObject* q_xylegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QXYLegendMarker* self, const char* classname ```
bool q_xylegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QXYLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_xylegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_xylegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QXYLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_xylegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QXYLegendMarker* self, QObject* param1 ```
void q_xylegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QXYLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_xylegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QEvent* event ```
bool q_xylegendmarker_event(void* self, void* event) {
    return QXYLegendMarker_Event((QXYLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QEvent* event ```
bool q_xylegendmarker_qbase_event(void* self, void* event) {
    return QXYLegendMarker_QBaseEvent((QXYLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, bool (*slot)(QXYLegendMarker*, QEvent*) ```
void q_xylegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QXYLegendMarker_OnEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QObject* watched, QEvent* event ```
bool q_xylegendmarker_event_filter(void* self, void* watched, void* event) {
    return QXYLegendMarker_EventFilter((QXYLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QObject* watched, QEvent* event ```
bool q_xylegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QXYLegendMarker_QBaseEventFilter((QXYLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, bool (*slot)(QXYLegendMarker*, QObject*, QEvent*) ```
void q_xylegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QXYLegendMarker_OnEventFilter((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QTimerEvent* event ```
void q_xylegendmarker_timer_event(void* self, void* event) {
    QXYLegendMarker_TimerEvent((QXYLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QTimerEvent* event ```
void q_xylegendmarker_qbase_timer_event(void* self, void* event) {
    QXYLegendMarker_QBaseTimerEvent((QXYLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, void (*slot)(QXYLegendMarker*, QTimerEvent*) ```
void q_xylegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnTimerEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QChildEvent* event ```
void q_xylegendmarker_child_event(void* self, void* event) {
    QXYLegendMarker_ChildEvent((QXYLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QChildEvent* event ```
void q_xylegendmarker_qbase_child_event(void* self, void* event) {
    QXYLegendMarker_QBaseChildEvent((QXYLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, void (*slot)(QXYLegendMarker*, QChildEvent*) ```
void q_xylegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnChildEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QEvent* event ```
void q_xylegendmarker_custom_event(void* self, void* event) {
    QXYLegendMarker_CustomEvent((QXYLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QEvent* event ```
void q_xylegendmarker_qbase_custom_event(void* self, void* event) {
    QXYLegendMarker_QBaseCustomEvent((QXYLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, void (*slot)(QXYLegendMarker*, QEvent*) ```
void q_xylegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnCustomEvent((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QMetaMethod* signal ```
void q_xylegendmarker_connect_notify(void* self, void* signal) {
    QXYLegendMarker_ConnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QMetaMethod* signal ```
void q_xylegendmarker_qbase_connect_notify(void* self, void* signal) {
    QXYLegendMarker_QBaseConnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, void (*slot)(QXYLegendMarker*, QMetaMethod*) ```
void q_xylegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnConnectNotify((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QMetaMethod* signal ```
void q_xylegendmarker_disconnect_notify(void* self, void* signal) {
    QXYLegendMarker_DisconnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QMetaMethod* signal ```
void q_xylegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QXYLegendMarker_QBaseDisconnectNotify((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, void (*slot)(QXYLegendMarker*, QMetaMethod*) ```
void q_xylegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QXYLegendMarker_OnDisconnectNotify((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self ```
QObject* q_xylegendmarker_sender(void* self) {
    return QXYLegendMarker_Sender((QXYLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self ```
QObject* q_xylegendmarker_qbase_sender(void* self) {
    return QXYLegendMarker_QBaseSender((QXYLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QObject* (*slot)() ```
void q_xylegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QXYLegendMarker_OnSender((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self ```
int32_t q_xylegendmarker_sender_signal_index(void* self) {
    return QXYLegendMarker_SenderSignalIndex((QXYLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self ```
int32_t q_xylegendmarker_qbase_sender_signal_index(void* self) {
    return QXYLegendMarker_QBaseSenderSignalIndex((QXYLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, int32_t (*slot)() ```
void q_xylegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QXYLegendMarker_OnSenderSignalIndex((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, const char* signal ```
int32_t q_xylegendmarker_receivers(void* self, const char* signal) {
    return QXYLegendMarker_Receivers((QXYLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, const char* signal ```
int32_t q_xylegendmarker_qbase_receivers(void* self, const char* signal) {
    return QXYLegendMarker_QBaseReceivers((QXYLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, int32_t (*slot)(QXYLegendMarker*, const char*) ```
void q_xylegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QXYLegendMarker_OnReceivers((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QXYLegendMarker* self, QMetaMethod* signal ```
bool q_xylegendmarker_is_signal_connected(void* self, void* signal) {
    return QXYLegendMarker_IsSignalConnected((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QXYLegendMarker* self, QMetaMethod* signal ```
bool q_xylegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QXYLegendMarker_QBaseIsSignalConnected((QXYLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QXYLegendMarker* self, bool (*slot)(QXYLegendMarker*, QMetaMethod*) ```
void q_xylegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QXYLegendMarker_OnIsSignalConnected((QXYLegendMarker*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QXYLegendMarker* self ```
void q_xylegendmarker_delete(void* self) {
    QXYLegendMarker_Delete((QXYLegendMarker*)(self));
}