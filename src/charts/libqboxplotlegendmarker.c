#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqboxplotseries.hpp"
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
#include "../libqcoreevent.hpp"
#include "libqboxplotlegendmarker.hpp"
#include "libqboxplotlegendmarker.h"

/// https://doc.qt.io/qt-6/qboxplotlegendmarker.html

/// q_boxplotlegendmarker_new constructs a new QBoxPlotLegendMarker object.
///
/// ``` QBoxPlotSeries* series, QLegend* legend ```
QBoxPlotLegendMarker* q_boxplotlegendmarker_new(void* series, void* legend) {
    return QBoxPlotLegendMarker_new((QBoxPlotSeries*)series, (QLegend*)legend);
}

/// q_boxplotlegendmarker_new2 constructs a new QBoxPlotLegendMarker object.
///
/// ``` QBoxPlotSeries* series, QLegend* legend, QObject* parent ```
QBoxPlotLegendMarker* q_boxplotlegendmarker_new2(void* series, void* legend, void* parent) {
    return QBoxPlotLegendMarker_new2((QBoxPlotSeries*)series, (QLegend*)legend, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBoxPlotLegendMarker* self ```
QMetaObject* q_boxplotlegendmarker_meta_object(void* self) {
    return QBoxPlotLegendMarker_MetaObject((QBoxPlotLegendMarker*)self);
}

/// ``` QBoxPlotLegendMarker* self, const char* param1 ```
void* q_boxplotlegendmarker_metacast(void* self, const char* param1) {
    return QBoxPlotLegendMarker_Metacast((QBoxPlotLegendMarker*)self, param1);
}

/// ``` QBoxPlotLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotlegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxPlotLegendMarker_Metacall((QBoxPlotLegendMarker*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBoxPlotLegendMarker* self, int32_t (*slot)(QBoxPlotLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_boxplotlegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBoxPlotLegendMarker_OnMetacall((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxPlotLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotlegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxPlotLegendMarker_QBaseMetacall((QBoxPlotLegendMarker*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_boxplotlegendmarker_tr(const char* s) {
    libqt_string _str = QBoxPlotLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotlegendmarker.html#type)
///
/// ``` QBoxPlotLegendMarker* self ```
int64_t q_boxplotlegendmarker_type(void* self) {
    return QBoxPlotLegendMarker_Type((QBoxPlotLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxPlotLegendMarker* self, int64_t (*slot)() ```
void q_boxplotlegendmarker_on_type(void* self, int64_t (*slot)()) {
    QBoxPlotLegendMarker_OnType((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxPlotLegendMarker* self ```
int64_t q_boxplotlegendmarker_qbase_type(void* self) {
    return QBoxPlotLegendMarker_QBaseType((QBoxPlotLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotlegendmarker.html#series)
///
/// ``` QBoxPlotLegendMarker* self ```
QBoxPlotSeries* q_boxplotlegendmarker_series(void* self) {
    return QBoxPlotLegendMarker_Series((QBoxPlotLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxPlotLegendMarker* self, QBoxPlotSeries* (*slot)() ```
void q_boxplotlegendmarker_on_series(void* self, QBoxPlotSeries* (*slot)()) {
    QBoxPlotLegendMarker_OnSeries((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxPlotLegendMarker* self ```
QBoxPlotSeries* q_boxplotlegendmarker_qbase_series(void* self) {
    return QBoxPlotLegendMarker_QBaseSeries((QBoxPlotLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_boxplotlegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QBoxPlotLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_boxplotlegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBoxPlotLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QBoxPlotLegendMarker* self ```
const char* q_boxplotlegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QBoxPlotLegendMarker* self, const char* label ```
void q_boxplotlegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QBoxPlotLegendMarker* self ```
QBrush* q_boxplotlegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QBoxPlotLegendMarker* self, QBrush* brush ```
void q_boxplotlegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QBoxPlotLegendMarker* self ```
QFont* q_boxplotlegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QBoxPlotLegendMarker* self, QFont* font ```
void q_boxplotlegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QBoxPlotLegendMarker* self ```
QPen* q_boxplotlegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QBoxPlotLegendMarker* self, QPen* pen ```
void q_boxplotlegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QBoxPlotLegendMarker* self ```
QBrush* q_boxplotlegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QBoxPlotLegendMarker* self, QBrush* brush ```
void q_boxplotlegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QBoxPlotLegendMarker* self, bool visible ```
void q_boxplotlegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QBoxPlotLegendMarker* self ```
int64_t q_boxplotlegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QBoxPlotLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_boxplotlegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QBoxPlotLegendMarker* self, bool status ```
void q_boxplotlegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_boxplotlegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_boxplotlegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBoxPlotLegendMarker* self ```
const char* q_boxplotlegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBoxPlotLegendMarker* self, const char* name ```
void q_boxplotlegendmarker_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBoxPlotLegendMarker* self ```
bool q_boxplotlegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBoxPlotLegendMarker* self, bool b ```
bool q_boxplotlegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBoxPlotLegendMarker* self ```
QThread* q_boxplotlegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBoxPlotLegendMarker* self, QThread* thread ```
void q_boxplotlegendmarker_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotLegendMarker* self, int interval ```
int32_t q_boxplotlegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBoxPlotLegendMarker* self, int id ```
void q_boxplotlegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBoxPlotLegendMarker* self ```
libqt_list /* of QObject* */ q_boxplotlegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBoxPlotLegendMarker* self, QObject* parent ```
void q_boxplotlegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBoxPlotLegendMarker* self, QObject* filterObj ```
void q_boxplotlegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBoxPlotLegendMarker* self, QObject* obj ```
void q_boxplotlegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_boxplotlegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_boxplotlegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_boxplotlegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_boxplotlegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBoxPlotLegendMarker* self, const char* name, QVariant* value ```
bool q_boxplotlegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBoxPlotLegendMarker* self, const char* name ```
QVariant* q_boxplotlegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBoxPlotLegendMarker* self ```
const char** q_boxplotlegendmarker_dynamic_property_names(void* self) {
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
/// ``` QBoxPlotLegendMarker* self ```
QBindingStorage* q_boxplotlegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxPlotLegendMarker* self ```
QBindingStorage* q_boxplotlegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QObject*) ```
void q_boxplotlegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBoxPlotLegendMarker* self ```
QObject* q_boxplotlegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBoxPlotLegendMarker* self, const char* classname ```
bool q_boxplotlegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_boxplotlegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotlegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotlegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotLegendMarker* self, QObject* param1 ```
void q_boxplotlegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_boxplotlegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
bool q_boxplotlegendmarker_event(void* self, void* event) {
    return QBoxPlotLegendMarker_Event((QBoxPlotLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
bool q_boxplotlegendmarker_qbase_event(void* self, void* event) {
    return QBoxPlotLegendMarker_QBaseEvent((QBoxPlotLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, bool (*slot)(QBoxPlotLegendMarker*, QEvent*) ```
void q_boxplotlegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QBoxPlotLegendMarker_OnEvent((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QObject* watched, QEvent* event ```
bool q_boxplotlegendmarker_event_filter(void* self, void* watched, void* event) {
    return QBoxPlotLegendMarker_EventFilter((QBoxPlotLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QObject* watched, QEvent* event ```
bool q_boxplotlegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QBoxPlotLegendMarker_QBaseEventFilter((QBoxPlotLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, bool (*slot)(QBoxPlotLegendMarker*, QObject*, QEvent*) ```
void q_boxplotlegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBoxPlotLegendMarker_OnEventFilter((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QTimerEvent* event ```
void q_boxplotlegendmarker_timer_event(void* self, void* event) {
    QBoxPlotLegendMarker_TimerEvent((QBoxPlotLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QTimerEvent* event ```
void q_boxplotlegendmarker_qbase_timer_event(void* self, void* event) {
    QBoxPlotLegendMarker_QBaseTimerEvent((QBoxPlotLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QTimerEvent*) ```
void q_boxplotlegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBoxPlotLegendMarker_OnTimerEvent((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QChildEvent* event ```
void q_boxplotlegendmarker_child_event(void* self, void* event) {
    QBoxPlotLegendMarker_ChildEvent((QBoxPlotLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QChildEvent* event ```
void q_boxplotlegendmarker_qbase_child_event(void* self, void* event) {
    QBoxPlotLegendMarker_QBaseChildEvent((QBoxPlotLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QChildEvent*) ```
void q_boxplotlegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBoxPlotLegendMarker_OnChildEvent((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
void q_boxplotlegendmarker_custom_event(void* self, void* event) {
    QBoxPlotLegendMarker_CustomEvent((QBoxPlotLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QEvent* event ```
void q_boxplotlegendmarker_qbase_custom_event(void* self, void* event) {
    QBoxPlotLegendMarker_QBaseCustomEvent((QBoxPlotLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QEvent*) ```
void q_boxplotlegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBoxPlotLegendMarker_OnCustomEvent((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_connect_notify(void* self, void* signal) {
    QBoxPlotLegendMarker_ConnectNotify((QBoxPlotLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_qbase_connect_notify(void* self, void* signal) {
    QBoxPlotLegendMarker_QBaseConnectNotify((QBoxPlotLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QMetaMethod*) ```
void q_boxplotlegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxPlotLegendMarker_OnConnectNotify((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_disconnect_notify(void* self, void* signal) {
    QBoxPlotLegendMarker_DisconnectNotify((QBoxPlotLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
void q_boxplotlegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QBoxPlotLegendMarker_QBaseDisconnectNotify((QBoxPlotLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, void (*slot)(QBoxPlotLegendMarker*, QMetaMethod*) ```
void q_boxplotlegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxPlotLegendMarker_OnDisconnectNotify((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
QObject* q_boxplotlegendmarker_sender(void* self) {
    return QBoxPlotLegendMarker_Sender((QBoxPlotLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
QObject* q_boxplotlegendmarker_qbase_sender(void* self) {
    return QBoxPlotLegendMarker_QBaseSender((QBoxPlotLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QObject* (*slot)() ```
void q_boxplotlegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QBoxPlotLegendMarker_OnSender((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
int32_t q_boxplotlegendmarker_sender_signal_index(void* self) {
    return QBoxPlotLegendMarker_SenderSignalIndex((QBoxPlotLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self ```
int32_t q_boxplotlegendmarker_qbase_sender_signal_index(void* self) {
    return QBoxPlotLegendMarker_QBaseSenderSignalIndex((QBoxPlotLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, int32_t (*slot)() ```
void q_boxplotlegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBoxPlotLegendMarker_OnSenderSignalIndex((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, const char* signal ```
int32_t q_boxplotlegendmarker_receivers(void* self, const char* signal) {
    return QBoxPlotLegendMarker_Receivers((QBoxPlotLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, const char* signal ```
int32_t q_boxplotlegendmarker_qbase_receivers(void* self, const char* signal) {
    return QBoxPlotLegendMarker_QBaseReceivers((QBoxPlotLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, int32_t (*slot)(QBoxPlotLegendMarker*, const char*) ```
void q_boxplotlegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBoxPlotLegendMarker_OnReceivers((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
bool q_boxplotlegendmarker_is_signal_connected(void* self, void* signal) {
    return QBoxPlotLegendMarker_IsSignalConnected((QBoxPlotLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, QMetaMethod* signal ```
bool q_boxplotlegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QBoxPlotLegendMarker_QBaseIsSignalConnected((QBoxPlotLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotLegendMarker* self, bool (*slot)(QBoxPlotLegendMarker*, QMetaMethod*) ```
void q_boxplotlegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBoxPlotLegendMarker_OnIsSignalConnected((QBoxPlotLegendMarker*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBoxPlotLegendMarker* self ```
void q_boxplotlegendmarker_delete(void* self) {
    QBoxPlotLegendMarker_Delete((QBoxPlotLegendMarker*)(self));
}