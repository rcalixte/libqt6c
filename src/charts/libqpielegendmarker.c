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
#include "libqpieseries.hpp"
#include "libqpieslice.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqpielegendmarker.hpp"
#include "libqpielegendmarker.h"

/// https://doc.qt.io/qt-6/qpielegendmarker.html

/// q_pielegendmarker_new constructs a new QPieLegendMarker object.
///
/// ``` QPieSeries* series, QPieSlice* slice, QLegend* legend ```
QPieLegendMarker* q_pielegendmarker_new(void* series, void* slice, void* legend) {
    return QPieLegendMarker_new((QPieSeries*)series, (QPieSlice*)slice, (QLegend*)legend);
}

/// q_pielegendmarker_new2 constructs a new QPieLegendMarker object.
///
/// ``` QPieSeries* series, QPieSlice* slice, QLegend* legend, QObject* parent ```
QPieLegendMarker* q_pielegendmarker_new2(void* series, void* slice, void* legend, void* parent) {
    return QPieLegendMarker_new2((QPieSeries*)series, (QPieSlice*)slice, (QLegend*)legend, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPieLegendMarker* self ```
QMetaObject* q_pielegendmarker_meta_object(void* self) {
    return QPieLegendMarker_MetaObject((QPieLegendMarker*)self);
}

/// ``` QPieLegendMarker* self, const char* param1 ```
void* q_pielegendmarker_metacast(void* self, const char* param1) {
    return QPieLegendMarker_Metacast((QPieLegendMarker*)self, param1);
}

/// ``` QPieLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pielegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieLegendMarker_Metacall((QPieLegendMarker*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPieLegendMarker* self, int32_t (*slot)(QPieLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_pielegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPieLegendMarker_OnMetacall((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPieLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pielegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieLegendMarker_QBaseMetacall((QPieLegendMarker*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pielegendmarker_tr(const char* s) {
    libqt_string _str = QPieLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker.html#type)
///
/// ``` QPieLegendMarker* self ```
int64_t q_pielegendmarker_type(void* self) {
    return QPieLegendMarker_Type((QPieLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPieLegendMarker* self, int64_t (*slot)() ```
void q_pielegendmarker_on_type(void* self, int64_t (*slot)()) {
    QPieLegendMarker_OnType((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPieLegendMarker* self ```
int64_t q_pielegendmarker_qbase_type(void* self) {
    return QPieLegendMarker_QBaseType((QPieLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker.html#series)
///
/// ``` QPieLegendMarker* self ```
QPieSeries* q_pielegendmarker_series(void* self) {
    return QPieLegendMarker_Series((QPieLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPieLegendMarker* self, QPieSeries* (*slot)() ```
void q_pielegendmarker_on_series(void* self, QPieSeries* (*slot)()) {
    QPieLegendMarker_OnSeries((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPieLegendMarker* self ```
QPieSeries* q_pielegendmarker_qbase_series(void* self) {
    return QPieLegendMarker_QBaseSeries((QPieLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpielegendmarker.html#slice)
///
/// ``` QPieLegendMarker* self ```
QPieSlice* q_pielegendmarker_slice(void* self) {
    return QPieLegendMarker_Slice((QPieLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pielegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QPieLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pielegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPieLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QPieLegendMarker* self ```
const char* q_pielegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QPieLegendMarker* self, const char* label ```
void q_pielegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QPieLegendMarker* self ```
QBrush* q_pielegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QPieLegendMarker* self, QBrush* brush ```
void q_pielegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QPieLegendMarker* self ```
QFont* q_pielegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QPieLegendMarker* self, QFont* font ```
void q_pielegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QPieLegendMarker* self ```
QPen* q_pielegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QPieLegendMarker* self, QPen* pen ```
void q_pielegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QPieLegendMarker* self ```
QBrush* q_pielegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QPieLegendMarker* self, QBrush* brush ```
void q_pielegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QPieLegendMarker* self, bool visible ```
void q_pielegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QPieLegendMarker* self ```
int64_t q_pielegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QPieLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_pielegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QPieLegendMarker* self, bool status ```
void q_pielegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_pielegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QPieLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_pielegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPieLegendMarker* self ```
const char* q_pielegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPieLegendMarker* self, const char* name ```
void q_pielegendmarker_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPieLegendMarker* self ```
bool q_pielegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPieLegendMarker* self, bool b ```
bool q_pielegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPieLegendMarker* self ```
QThread* q_pielegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPieLegendMarker* self, QThread* thread ```
void q_pielegendmarker_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieLegendMarker* self, int interval ```
int32_t q_pielegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPieLegendMarker* self, int id ```
void q_pielegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPieLegendMarker* self ```
libqt_list /* of QObject* */ q_pielegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPieLegendMarker* self, QObject* parent ```
void q_pielegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPieLegendMarker* self, QObject* filterObj ```
void q_pielegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPieLegendMarker* self, QObject* obj ```
void q_pielegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pielegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pielegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pielegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pielegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPieLegendMarker* self, const char* name, QVariant* value ```
bool q_pielegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPieLegendMarker* self, const char* name ```
QVariant* q_pielegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPieLegendMarker* self ```
const char** q_pielegendmarker_dynamic_property_names(void* self) {
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
/// ``` QPieLegendMarker* self ```
QBindingStorage* q_pielegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieLegendMarker* self ```
QBindingStorage* q_pielegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPieLegendMarker* self, void (*slot)(QObject*) ```
void q_pielegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPieLegendMarker* self ```
QObject* q_pielegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPieLegendMarker* self, const char* classname ```
bool q_pielegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pielegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pielegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pielegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieLegendMarker* self, QObject* param1 ```
void q_pielegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPieLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_pielegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
bool q_pielegendmarker_event(void* self, void* event) {
    return QPieLegendMarker_Event((QPieLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
bool q_pielegendmarker_qbase_event(void* self, void* event) {
    return QPieLegendMarker_QBaseEvent((QPieLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, bool (*slot)(QPieLegendMarker*, QEvent*) ```
void q_pielegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QPieLegendMarker_OnEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QObject* watched, QEvent* event ```
bool q_pielegendmarker_event_filter(void* self, void* watched, void* event) {
    return QPieLegendMarker_EventFilter((QPieLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QObject* watched, QEvent* event ```
bool q_pielegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QPieLegendMarker_QBaseEventFilter((QPieLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, bool (*slot)(QPieLegendMarker*, QObject*, QEvent*) ```
void q_pielegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPieLegendMarker_OnEventFilter((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QTimerEvent* event ```
void q_pielegendmarker_timer_event(void* self, void* event) {
    QPieLegendMarker_TimerEvent((QPieLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QTimerEvent* event ```
void q_pielegendmarker_qbase_timer_event(void* self, void* event) {
    QPieLegendMarker_QBaseTimerEvent((QPieLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QTimerEvent*) ```
void q_pielegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnTimerEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QChildEvent* event ```
void q_pielegendmarker_child_event(void* self, void* event) {
    QPieLegendMarker_ChildEvent((QPieLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QChildEvent* event ```
void q_pielegendmarker_qbase_child_event(void* self, void* event) {
    QPieLegendMarker_QBaseChildEvent((QPieLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QChildEvent*) ```
void q_pielegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnChildEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
void q_pielegendmarker_custom_event(void* self, void* event) {
    QPieLegendMarker_CustomEvent((QPieLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QEvent* event ```
void q_pielegendmarker_qbase_custom_event(void* self, void* event) {
    QPieLegendMarker_QBaseCustomEvent((QPieLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QEvent*) ```
void q_pielegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnCustomEvent((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_connect_notify(void* self, void* signal) {
    QPieLegendMarker_ConnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_qbase_connect_notify(void* self, void* signal) {
    QPieLegendMarker_QBaseConnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QMetaMethod*) ```
void q_pielegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnConnectNotify((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_disconnect_notify(void* self, void* signal) {
    QPieLegendMarker_DisconnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
void q_pielegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QPieLegendMarker_QBaseDisconnectNotify((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, void (*slot)(QPieLegendMarker*, QMetaMethod*) ```
void q_pielegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPieLegendMarker_OnDisconnectNotify((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self ```
QObject* q_pielegendmarker_sender(void* self) {
    return QPieLegendMarker_Sender((QPieLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self ```
QObject* q_pielegendmarker_qbase_sender(void* self) {
    return QPieLegendMarker_QBaseSender((QPieLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QObject* (*slot)() ```
void q_pielegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QPieLegendMarker_OnSender((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self ```
int32_t q_pielegendmarker_sender_signal_index(void* self) {
    return QPieLegendMarker_SenderSignalIndex((QPieLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self ```
int32_t q_pielegendmarker_qbase_sender_signal_index(void* self) {
    return QPieLegendMarker_QBaseSenderSignalIndex((QPieLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, int32_t (*slot)() ```
void q_pielegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPieLegendMarker_OnSenderSignalIndex((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, const char* signal ```
int32_t q_pielegendmarker_receivers(void* self, const char* signal) {
    return QPieLegendMarker_Receivers((QPieLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, const char* signal ```
int32_t q_pielegendmarker_qbase_receivers(void* self, const char* signal) {
    return QPieLegendMarker_QBaseReceivers((QPieLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, int32_t (*slot)(QPieLegendMarker*, const char*) ```
void q_pielegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPieLegendMarker_OnReceivers((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
bool q_pielegendmarker_is_signal_connected(void* self, void* signal) {
    return QPieLegendMarker_IsSignalConnected((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieLegendMarker* self, QMetaMethod* signal ```
bool q_pielegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QPieLegendMarker_QBaseIsSignalConnected((QPieLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieLegendMarker* self, bool (*slot)(QPieLegendMarker*, QMetaMethod*) ```
void q_pielegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPieLegendMarker_OnIsSignalConnected((QPieLegendMarker*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPieLegendMarker* self ```
void q_pielegendmarker_delete(void* self) {
    QPieLegendMarker_Delete((QPieLegendMarker*)(self));
}