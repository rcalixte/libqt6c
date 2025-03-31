#include "libqabstractbarseries.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "libqbarset.hpp"
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
#include "../libqcoreevent.hpp"
#include "libqbarlegendmarker.hpp"
#include "libqbarlegendmarker.h"

/// https://doc.qt.io/qt-6/qbarlegendmarker.html

/// q_barlegendmarker_new constructs a new QBarLegendMarker object.
///
/// ``` QAbstractBarSeries* series, QBarSet* barset, QLegend* legend ```
QBarLegendMarker* q_barlegendmarker_new(void* series, void* barset, void* legend) {
    return QBarLegendMarker_new((QAbstractBarSeries*)series, (QBarSet*)barset, (QLegend*)legend);
}

/// q_barlegendmarker_new2 constructs a new QBarLegendMarker object.
///
/// ``` QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent ```
QBarLegendMarker* q_barlegendmarker_new2(void* series, void* barset, void* legend, void* parent) {
    return QBarLegendMarker_new2((QAbstractBarSeries*)series, (QBarSet*)barset, (QLegend*)legend, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBarLegendMarker* self ```
QMetaObject* q_barlegendmarker_meta_object(void* self) {
    return QBarLegendMarker_MetaObject((QBarLegendMarker*)self);
}

/// ``` QBarLegendMarker* self, const char* param1 ```
void* q_barlegendmarker_metacast(void* self, const char* param1) {
    return QBarLegendMarker_Metacast((QBarLegendMarker*)self, param1);
}

/// ``` QBarLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barlegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarLegendMarker_Metacall((QBarLegendMarker*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBarLegendMarker* self, int32_t (*slot)(QBarLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_barlegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBarLegendMarker_OnMetacall((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_barlegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBarLegendMarker_QBaseMetacall((QBarLegendMarker*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_barlegendmarker_tr(const char* s) {
    libqt_string _str = QBarLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker.html#type)
///
/// ``` QBarLegendMarker* self ```
int64_t q_barlegendmarker_type(void* self) {
    return QBarLegendMarker_Type((QBarLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBarLegendMarker* self, int64_t (*slot)() ```
void q_barlegendmarker_on_type(void* self, int64_t (*slot)()) {
    QBarLegendMarker_OnType((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarLegendMarker* self ```
int64_t q_barlegendmarker_qbase_type(void* self) {
    return QBarLegendMarker_QBaseType((QBarLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker.html#series)
///
/// ``` QBarLegendMarker* self ```
QAbstractBarSeries* q_barlegendmarker_series(void* self) {
    return QBarLegendMarker_Series((QBarLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBarLegendMarker* self, QAbstractBarSeries* (*slot)() ```
void q_barlegendmarker_on_series(void* self, QAbstractBarSeries* (*slot)()) {
    QBarLegendMarker_OnSeries((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBarLegendMarker* self ```
QAbstractBarSeries* q_barlegendmarker_qbase_series(void* self) {
    return QBarLegendMarker_QBaseSeries((QBarLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbarlegendmarker.html#barset)
///
/// ``` QBarLegendMarker* self ```
QBarSet* q_barlegendmarker_barset(void* self) {
    return QBarLegendMarker_Barset((QBarLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_barlegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QBarLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_barlegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBarLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QBarLegendMarker* self ```
const char* q_barlegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QBarLegendMarker* self, const char* label ```
void q_barlegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QBarLegendMarker* self ```
QBrush* q_barlegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QBarLegendMarker* self, QBrush* brush ```
void q_barlegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QBarLegendMarker* self ```
QFont* q_barlegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QBarLegendMarker* self, QFont* font ```
void q_barlegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QBarLegendMarker* self ```
QPen* q_barlegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QBarLegendMarker* self, QPen* pen ```
void q_barlegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QBarLegendMarker* self ```
QBrush* q_barlegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QBarLegendMarker* self, QBrush* brush ```
void q_barlegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QBarLegendMarker* self ```
bool q_barlegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QBarLegendMarker* self, bool visible ```
void q_barlegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QBarLegendMarker* self ```
int64_t q_barlegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QBarLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_barlegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QBarLegendMarker* self, bool status ```
void q_barlegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_barlegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QBarLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_barlegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBarLegendMarker* self ```
const char* q_barlegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBarLegendMarker* self, const char* name ```
void q_barlegendmarker_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBarLegendMarker* self ```
bool q_barlegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBarLegendMarker* self ```
bool q_barlegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBarLegendMarker* self ```
bool q_barlegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBarLegendMarker* self ```
bool q_barlegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBarLegendMarker* self, bool b ```
bool q_barlegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBarLegendMarker* self ```
QThread* q_barlegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBarLegendMarker* self, QThread* thread ```
void q_barlegendmarker_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarLegendMarker* self, int interval ```
int32_t q_barlegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBarLegendMarker* self, int id ```
void q_barlegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBarLegendMarker* self ```
libqt_list /* of QObject* */ q_barlegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBarLegendMarker* self, QObject* parent ```
void q_barlegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBarLegendMarker* self, QObject* filterObj ```
void q_barlegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBarLegendMarker* self, QObject* obj ```
void q_barlegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_barlegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_barlegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_barlegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_barlegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBarLegendMarker* self, const char* name, QVariant* value ```
bool q_barlegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBarLegendMarker* self, const char* name ```
QVariant* q_barlegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBarLegendMarker* self ```
const char** q_barlegendmarker_dynamic_property_names(void* self) {
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
/// ``` QBarLegendMarker* self ```
QBindingStorage* q_barlegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBarLegendMarker* self ```
QBindingStorage* q_barlegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBarLegendMarker* self, void (*slot)(QObject*) ```
void q_barlegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBarLegendMarker* self ```
QObject* q_barlegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBarLegendMarker* self, const char* classname ```
bool q_barlegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBarLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_barlegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barlegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBarLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_barlegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBarLegendMarker* self, QObject* param1 ```
void q_barlegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBarLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_barlegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QEvent* event ```
bool q_barlegendmarker_event(void* self, void* event) {
    return QBarLegendMarker_Event((QBarLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QEvent* event ```
bool q_barlegendmarker_qbase_event(void* self, void* event) {
    return QBarLegendMarker_QBaseEvent((QBarLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, bool (*slot)(QBarLegendMarker*, QEvent*) ```
void q_barlegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QBarLegendMarker_OnEvent((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QObject* watched, QEvent* event ```
bool q_barlegendmarker_event_filter(void* self, void* watched, void* event) {
    return QBarLegendMarker_EventFilter((QBarLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QObject* watched, QEvent* event ```
bool q_barlegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QBarLegendMarker_QBaseEventFilter((QBarLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, bool (*slot)(QBarLegendMarker*, QObject*, QEvent*) ```
void q_barlegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBarLegendMarker_OnEventFilter((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QTimerEvent* event ```
void q_barlegendmarker_timer_event(void* self, void* event) {
    QBarLegendMarker_TimerEvent((QBarLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QTimerEvent* event ```
void q_barlegendmarker_qbase_timer_event(void* self, void* event) {
    QBarLegendMarker_QBaseTimerEvent((QBarLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, void (*slot)(QBarLegendMarker*, QTimerEvent*) ```
void q_barlegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBarLegendMarker_OnTimerEvent((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QChildEvent* event ```
void q_barlegendmarker_child_event(void* self, void* event) {
    QBarLegendMarker_ChildEvent((QBarLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QChildEvent* event ```
void q_barlegendmarker_qbase_child_event(void* self, void* event) {
    QBarLegendMarker_QBaseChildEvent((QBarLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, void (*slot)(QBarLegendMarker*, QChildEvent*) ```
void q_barlegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBarLegendMarker_OnChildEvent((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QEvent* event ```
void q_barlegendmarker_custom_event(void* self, void* event) {
    QBarLegendMarker_CustomEvent((QBarLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QEvent* event ```
void q_barlegendmarker_qbase_custom_event(void* self, void* event) {
    QBarLegendMarker_QBaseCustomEvent((QBarLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, void (*slot)(QBarLegendMarker*, QEvent*) ```
void q_barlegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBarLegendMarker_OnCustomEvent((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QMetaMethod* signal ```
void q_barlegendmarker_connect_notify(void* self, void* signal) {
    QBarLegendMarker_ConnectNotify((QBarLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QMetaMethod* signal ```
void q_barlegendmarker_qbase_connect_notify(void* self, void* signal) {
    QBarLegendMarker_QBaseConnectNotify((QBarLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, void (*slot)(QBarLegendMarker*, QMetaMethod*) ```
void q_barlegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBarLegendMarker_OnConnectNotify((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QMetaMethod* signal ```
void q_barlegendmarker_disconnect_notify(void* self, void* signal) {
    QBarLegendMarker_DisconnectNotify((QBarLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QMetaMethod* signal ```
void q_barlegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QBarLegendMarker_QBaseDisconnectNotify((QBarLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, void (*slot)(QBarLegendMarker*, QMetaMethod*) ```
void q_barlegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBarLegendMarker_OnDisconnectNotify((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self ```
QObject* q_barlegendmarker_sender(void* self) {
    return QBarLegendMarker_Sender((QBarLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self ```
QObject* q_barlegendmarker_qbase_sender(void* self) {
    return QBarLegendMarker_QBaseSender((QBarLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QObject* (*slot)() ```
void q_barlegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QBarLegendMarker_OnSender((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self ```
int32_t q_barlegendmarker_sender_signal_index(void* self) {
    return QBarLegendMarker_SenderSignalIndex((QBarLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self ```
int32_t q_barlegendmarker_qbase_sender_signal_index(void* self) {
    return QBarLegendMarker_QBaseSenderSignalIndex((QBarLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, int32_t (*slot)() ```
void q_barlegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBarLegendMarker_OnSenderSignalIndex((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, const char* signal ```
int32_t q_barlegendmarker_receivers(void* self, const char* signal) {
    return QBarLegendMarker_Receivers((QBarLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, const char* signal ```
int32_t q_barlegendmarker_qbase_receivers(void* self, const char* signal) {
    return QBarLegendMarker_QBaseReceivers((QBarLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, int32_t (*slot)(QBarLegendMarker*, const char*) ```
void q_barlegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBarLegendMarker_OnReceivers((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBarLegendMarker* self, QMetaMethod* signal ```
bool q_barlegendmarker_is_signal_connected(void* self, void* signal) {
    return QBarLegendMarker_IsSignalConnected((QBarLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBarLegendMarker* self, QMetaMethod* signal ```
bool q_barlegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QBarLegendMarker_QBaseIsSignalConnected((QBarLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBarLegendMarker* self, bool (*slot)(QBarLegendMarker*, QMetaMethod*) ```
void q_barlegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBarLegendMarker_OnIsSignalConnected((QBarLegendMarker*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBarLegendMarker* self ```
void q_barlegendmarker_delete(void* self) {
    QBarLegendMarker_Delete((QBarLegendMarker*)(self));
}