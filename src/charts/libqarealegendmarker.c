#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "libqareaseries.hpp"
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
#include "libqarealegendmarker.hpp"
#include "libqarealegendmarker.h"

/// https://doc.qt.io/qt-6/qarealegendmarker.html

/// q_arealegendmarker_new constructs a new QAreaLegendMarker object.
///
/// ``` QAreaSeries* series, QLegend* legend ```
QAreaLegendMarker* q_arealegendmarker_new(void* series, void* legend) {
    return QAreaLegendMarker_new((QAreaSeries*)series, (QLegend*)legend);
}

/// q_arealegendmarker_new2 constructs a new QAreaLegendMarker object.
///
/// ``` QAreaSeries* series, QLegend* legend, QObject* parent ```
QAreaLegendMarker* q_arealegendmarker_new2(void* series, void* legend, void* parent) {
    return QAreaLegendMarker_new2((QAreaSeries*)series, (QLegend*)legend, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAreaLegendMarker* self ```
QMetaObject* q_arealegendmarker_meta_object(void* self) {
    return QAreaLegendMarker_MetaObject((QAreaLegendMarker*)self);
}

/// ``` QAreaLegendMarker* self, const char* param1 ```
void* q_arealegendmarker_metacast(void* self, const char* param1) {
    return QAreaLegendMarker_Metacast((QAreaLegendMarker*)self, param1);
}

/// ``` QAreaLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_arealegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAreaLegendMarker_Metacall((QAreaLegendMarker*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAreaLegendMarker* self, int32_t (*slot)(QAreaLegendMarker*, enum QMetaObject__Call, int, void*) ```
void q_arealegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAreaLegendMarker_OnMetacall((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAreaLegendMarker* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_arealegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAreaLegendMarker_QBaseMetacall((QAreaLegendMarker*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_arealegendmarker_tr(const char* s) {
    libqt_string _str = QAreaLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker.html#type)
///
/// ``` QAreaLegendMarker* self ```
int64_t q_arealegendmarker_type(void* self) {
    return QAreaLegendMarker_Type((QAreaLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAreaLegendMarker* self, int64_t (*slot)() ```
void q_arealegendmarker_on_type(void* self, int64_t (*slot)()) {
    QAreaLegendMarker_OnType((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAreaLegendMarker* self ```
int64_t q_arealegendmarker_qbase_type(void* self) {
    return QAreaLegendMarker_QBaseType((QAreaLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qarealegendmarker.html#series)
///
/// ``` QAreaLegendMarker* self ```
QAreaSeries* q_arealegendmarker_series(void* self) {
    return QAreaLegendMarker_Series((QAreaLegendMarker*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAreaLegendMarker* self, QAreaSeries* (*slot)() ```
void q_arealegendmarker_on_series(void* self, QAreaSeries* (*slot)()) {
    QAreaLegendMarker_OnSeries((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAreaLegendMarker* self ```
QAreaSeries* q_arealegendmarker_qbase_series(void* self) {
    return QAreaLegendMarker_QBaseSeries((QAreaLegendMarker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_arealegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QAreaLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_arealegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAreaLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#label)
///
/// ``` QAreaLegendMarker* self ```
const char* q_arealegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabel)
///
/// ``` QAreaLegendMarker* self, const char* label ```
void q_arealegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrush)
///
/// ``` QAreaLegendMarker* self ```
QBrush* q_arealegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setLabelBrush)
///
/// ``` QAreaLegendMarker* self, QBrush* brush ```
void q_arealegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#font)
///
/// ``` QAreaLegendMarker* self ```
QFont* q_arealegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setFont)
///
/// ``` QAreaLegendMarker* self, QFont* font ```
void q_arealegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#pen)
///
/// ``` QAreaLegendMarker* self ```
QPen* q_arealegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setPen)
///
/// ``` QAreaLegendMarker* self, QPen* pen ```
void q_arealegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brush)
///
/// ``` QAreaLegendMarker* self ```
QBrush* q_arealegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setBrush)
///
/// ``` QAreaLegendMarker* self, QBrush* brush ```
void q_arealegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#isVisible)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setVisible)
///
/// ``` QAreaLegendMarker* self, bool visible ```
void q_arealegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shape)
///
/// ``` QAreaLegendMarker* self ```
int64_t q_arealegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#setShape)
///
/// ``` QAreaLegendMarker* self, enum QLegend__MarkerShape shape ```
void q_arealegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#clicked)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#hovered)
///
/// ``` QAreaLegendMarker* self, bool status ```
void q_arealegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*, bool) ```
void q_arealegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#labelBrushChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#fontChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#penChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#brushChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#visibleChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QLegendMarker
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlegendmarker.html#shapeChanged)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

/// Inherited from QLegendMarker
///
/// ``` QAreaLegendMarker* self, void (*slot)(QLegendMarker*) ```
void q_arealegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAreaLegendMarker* self ```
const char* q_arealegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAreaLegendMarker* self, const char* name ```
void q_arealegendmarker_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAreaLegendMarker* self ```
bool q_arealegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAreaLegendMarker* self, bool b ```
bool q_arealegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAreaLegendMarker* self ```
QThread* q_arealegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAreaLegendMarker* self, QThread* thread ```
void q_arealegendmarker_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaLegendMarker* self, int interval ```
int32_t q_arealegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAreaLegendMarker* self, int id ```
void q_arealegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAreaLegendMarker* self ```
libqt_list /* of QObject* */ q_arealegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAreaLegendMarker* self, QObject* parent ```
void q_arealegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAreaLegendMarker* self, QObject* filterObj ```
void q_arealegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAreaLegendMarker* self, QObject* obj ```
void q_arealegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_arealegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaLegendMarker* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_arealegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_arealegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_arealegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAreaLegendMarker* self, const char* name, QVariant* value ```
bool q_arealegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAreaLegendMarker* self, const char* name ```
QVariant* q_arealegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAreaLegendMarker* self ```
const char** q_arealegendmarker_dynamic_property_names(void* self) {
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
/// ``` QAreaLegendMarker* self ```
QBindingStorage* q_arealegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAreaLegendMarker* self ```
QBindingStorage* q_arealegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAreaLegendMarker* self, void (*slot)(QObject*) ```
void q_arealegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAreaLegendMarker* self ```
QObject* q_arealegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAreaLegendMarker* self, const char* classname ```
bool q_arealegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaLegendMarker* self, int interval, enum Qt__TimerType timerType ```
int32_t q_arealegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_arealegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaLegendMarker* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_arealegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaLegendMarker* self, QObject* param1 ```
void q_arealegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAreaLegendMarker* self, void (*slot)(QObject*, QObject*) ```
void q_arealegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
bool q_arealegendmarker_event(void* self, void* event) {
    return QAreaLegendMarker_Event((QAreaLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
bool q_arealegendmarker_qbase_event(void* self, void* event) {
    return QAreaLegendMarker_QBaseEvent((QAreaLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, bool (*slot)(QAreaLegendMarker*, QEvent*) ```
void q_arealegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QAreaLegendMarker_OnEvent((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QObject* watched, QEvent* event ```
bool q_arealegendmarker_event_filter(void* self, void* watched, void* event) {
    return QAreaLegendMarker_EventFilter((QAreaLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QObject* watched, QEvent* event ```
bool q_arealegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QAreaLegendMarker_QBaseEventFilter((QAreaLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, bool (*slot)(QAreaLegendMarker*, QObject*, QEvent*) ```
void q_arealegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAreaLegendMarker_OnEventFilter((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QTimerEvent* event ```
void q_arealegendmarker_timer_event(void* self, void* event) {
    QAreaLegendMarker_TimerEvent((QAreaLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QTimerEvent* event ```
void q_arealegendmarker_qbase_timer_event(void* self, void* event) {
    QAreaLegendMarker_QBaseTimerEvent((QAreaLegendMarker*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QTimerEvent*) ```
void q_arealegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAreaLegendMarker_OnTimerEvent((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QChildEvent* event ```
void q_arealegendmarker_child_event(void* self, void* event) {
    QAreaLegendMarker_ChildEvent((QAreaLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QChildEvent* event ```
void q_arealegendmarker_qbase_child_event(void* self, void* event) {
    QAreaLegendMarker_QBaseChildEvent((QAreaLegendMarker*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QChildEvent*) ```
void q_arealegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAreaLegendMarker_OnChildEvent((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
void q_arealegendmarker_custom_event(void* self, void* event) {
    QAreaLegendMarker_CustomEvent((QAreaLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QEvent* event ```
void q_arealegendmarker_qbase_custom_event(void* self, void* event) {
    QAreaLegendMarker_QBaseCustomEvent((QAreaLegendMarker*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QEvent*) ```
void q_arealegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAreaLegendMarker_OnCustomEvent((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_connect_notify(void* self, void* signal) {
    QAreaLegendMarker_ConnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_qbase_connect_notify(void* self, void* signal) {
    QAreaLegendMarker_QBaseConnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QMetaMethod*) ```
void q_arealegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAreaLegendMarker_OnConnectNotify((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_disconnect_notify(void* self, void* signal) {
    QAreaLegendMarker_DisconnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
void q_arealegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QAreaLegendMarker_QBaseDisconnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, void (*slot)(QAreaLegendMarker*, QMetaMethod*) ```
void q_arealegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAreaLegendMarker_OnDisconnectNotify((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
QObject* q_arealegendmarker_sender(void* self) {
    return QAreaLegendMarker_Sender((QAreaLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
QObject* q_arealegendmarker_qbase_sender(void* self) {
    return QAreaLegendMarker_QBaseSender((QAreaLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QObject* (*slot)() ```
void q_arealegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QAreaLegendMarker_OnSender((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
int32_t q_arealegendmarker_sender_signal_index(void* self) {
    return QAreaLegendMarker_SenderSignalIndex((QAreaLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self ```
int32_t q_arealegendmarker_qbase_sender_signal_index(void* self) {
    return QAreaLegendMarker_QBaseSenderSignalIndex((QAreaLegendMarker*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, int32_t (*slot)() ```
void q_arealegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAreaLegendMarker_OnSenderSignalIndex((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, const char* signal ```
int32_t q_arealegendmarker_receivers(void* self, const char* signal) {
    return QAreaLegendMarker_Receivers((QAreaLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, const char* signal ```
int32_t q_arealegendmarker_qbase_receivers(void* self, const char* signal) {
    return QAreaLegendMarker_QBaseReceivers((QAreaLegendMarker*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, int32_t (*slot)(QAreaLegendMarker*, const char*) ```
void q_arealegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAreaLegendMarker_OnReceivers((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
bool q_arealegendmarker_is_signal_connected(void* self, void* signal) {
    return QAreaLegendMarker_IsSignalConnected((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, QMetaMethod* signal ```
bool q_arealegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QAreaLegendMarker_QBaseIsSignalConnected((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaLegendMarker* self, bool (*slot)(QAreaLegendMarker*, QMetaMethod*) ```
void q_arealegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAreaLegendMarker_OnIsSignalConnected((QAreaLegendMarker*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAreaLegendMarker* self ```
void q_arealegendmarker_delete(void* self) {
    QAreaLegendMarker_Delete((QAreaLegendMarker*)(self));
}