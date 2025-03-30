#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqboxset.hpp"
#include "../libqbrush.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqboxplotseries.hpp"
#include "libqboxplotseries.h"

/// https://doc.qt.io/qt-6/qboxplotseries.html

/// q_boxplotseries_new constructs a new QBoxPlotSeries object.
///
///
QBoxPlotSeries* q_boxplotseries_new() {
    return QBoxPlotSeries_new();
}

/// q_boxplotseries_new2 constructs a new QBoxPlotSeries object.
///
/// ``` QObject* parent ```
QBoxPlotSeries* q_boxplotseries_new2(void* parent) {
    return QBoxPlotSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBoxPlotSeries* self ```
QMetaObject* q_boxplotseries_meta_object(void* self) {
    return QBoxPlotSeries_MetaObject((QBoxPlotSeries*)self);
}

/// ``` QBoxPlotSeries* self, const char* param1 ```
void* q_boxplotseries_metacast(void* self, const char* param1) {
    return QBoxPlotSeries_Metacast((QBoxPlotSeries*)self, param1);
}

/// ``` QBoxPlotSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxPlotSeries_Metacall((QBoxPlotSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QBoxPlotSeries* self, int32_t (*slot)(QBoxPlotSeries*, enum QMetaObject__Call, int, void*) ```
void q_boxplotseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QBoxPlotSeries_OnMetacall((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxPlotSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxplotseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QBoxPlotSeries_QBaseMetacall((QBoxPlotSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_boxplotseries_tr(const char* s) {
    libqt_string _str = QBoxPlotSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#append)
///
/// ``` QBoxPlotSeries* self, QBoxSet* box ```
bool q_boxplotseries_append(void* self, void* box) {
    return QBoxPlotSeries_Append((QBoxPlotSeries*)self, (QBoxSet*)box);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#remove)
///
/// ``` QBoxPlotSeries* self, QBoxSet* box ```
bool q_boxplotseries_remove(void* self, void* box) {
    return QBoxPlotSeries_Remove((QBoxPlotSeries*)self, (QBoxSet*)box);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#take)
///
/// ``` QBoxPlotSeries* self, QBoxSet* box ```
bool q_boxplotseries_take(void* self, void* box) {
    return QBoxPlotSeries_Take((QBoxPlotSeries*)self, (QBoxSet*)box);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#append)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxes[] ```
bool q_boxplotseries_append_with_boxes(void* self, void* boxes[]) {
    QBoxSet** boxes_arr = (QBoxSet**)boxes;
    size_t boxes_len = 0;
    while (boxes_arr[boxes_len] != NULL) {
        boxes_len++;
    }
    libqt_list boxes_list = {
        .len = boxes_len,
        .data = {(QBoxSet*)boxes},
    };
    return QBoxPlotSeries_AppendWithBoxes((QBoxPlotSeries*)self, boxes_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#insert)
///
/// ``` QBoxPlotSeries* self, int index, QBoxSet* box ```
bool q_boxplotseries_insert(void* self, int index, void* box) {
    return QBoxPlotSeries_Insert((QBoxPlotSeries*)self, index, (QBoxSet*)box);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#count)
///
/// ``` QBoxPlotSeries* self ```
int32_t q_boxplotseries_count(void* self) {
    return QBoxPlotSeries_Count((QBoxPlotSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#boxSets)
///
/// ``` QBoxPlotSeries* self ```
libqt_list /* of QBoxSet* */ q_boxplotseries_box_sets(void* self) {
    libqt_list _arr = QBoxPlotSeries_BoxSets((QBoxPlotSeries*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#clear)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_clear(void* self) {
    QBoxPlotSeries_Clear((QBoxPlotSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#type)
///
/// ``` QBoxPlotSeries* self ```
int64_t q_boxplotseries_type(void* self) {
    return QBoxPlotSeries_Type((QBoxPlotSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QBoxPlotSeries* self, int64_t (*slot)() ```
void q_boxplotseries_on_type(void* self, int64_t (*slot)()) {
    QBoxPlotSeries_OnType((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QBoxPlotSeries* self ```
int64_t q_boxplotseries_qbase_type(void* self) {
    return QBoxPlotSeries_QBaseType((QBoxPlotSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#setBoxOutlineVisible)
///
/// ``` QBoxPlotSeries* self, bool visible ```
void q_boxplotseries_set_box_outline_visible(void* self, bool visible) {
    QBoxPlotSeries_SetBoxOutlineVisible((QBoxPlotSeries*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#boxOutlineVisible)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_box_outline_visible(void* self) {
    return QBoxPlotSeries_BoxOutlineVisible((QBoxPlotSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#setBoxWidth)
///
/// ``` QBoxPlotSeries* self, double width ```
void q_boxplotseries_set_box_width(void* self, double width) {
    QBoxPlotSeries_SetBoxWidth((QBoxPlotSeries*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#boxWidth)
///
/// ``` QBoxPlotSeries* self ```
double q_boxplotseries_box_width(void* self) {
    return QBoxPlotSeries_BoxWidth((QBoxPlotSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#setBrush)
///
/// ``` QBoxPlotSeries* self, QBrush* brush ```
void q_boxplotseries_set_brush(void* self, void* brush) {
    QBoxPlotSeries_SetBrush((QBoxPlotSeries*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#brush)
///
/// ``` QBoxPlotSeries* self ```
QBrush* q_boxplotseries_brush(void* self) {
    return QBoxPlotSeries_Brush((QBoxPlotSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#setPen)
///
/// ``` QBoxPlotSeries* self, QPen* pen ```
void q_boxplotseries_set_pen(void* self, void* pen) {
    QBoxPlotSeries_SetPen((QBoxPlotSeries*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#pen)
///
/// ``` QBoxPlotSeries* self ```
QPen* q_boxplotseries_pen(void* self) {
    return QBoxPlotSeries_Pen((QBoxPlotSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#clicked)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_clicked(void* self, void* boxset) {
    QBoxPlotSeries_Clicked((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_Connect_Clicked((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#hovered)
///
/// ``` QBoxPlotSeries* self, bool status, QBoxSet* boxset ```
void q_boxplotseries_hovered(void* self, bool status, void* boxset) {
    QBoxPlotSeries_Hovered((QBoxPlotSeries*)self, status, (QBoxSet*)boxset);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, bool, QBoxSet*) ```
void q_boxplotseries_on_hovered(void* self, void (*slot)(void*, bool, void*)) {
    QBoxPlotSeries_Connect_Hovered((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#pressed)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_pressed(void* self, void* boxset) {
    QBoxPlotSeries_Pressed((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_Connect_Pressed((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#released)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_released(void* self, void* boxset) {
    QBoxPlotSeries_Released((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_released(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_Connect_Released((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#doubleClicked)
///
/// ``` QBoxPlotSeries* self, QBoxSet* boxset ```
void q_boxplotseries_double_clicked(void* self, void* boxset) {
    QBoxPlotSeries_DoubleClicked((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*) ```
void q_boxplotseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_Connect_DoubleClicked((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#countChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_count_changed(void* self) {
    QBoxPlotSeries_CountChanged((QBoxPlotSeries*)self);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_count_changed(void* self, void (*slot)(void*)) {
    QBoxPlotSeries_Connect_CountChanged((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#penChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_pen_changed(void* self) {
    QBoxPlotSeries_PenChanged((QBoxPlotSeries*)self);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_pen_changed(void* self, void (*slot)(void*)) {
    QBoxPlotSeries_Connect_PenChanged((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#brushChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_brush_changed(void* self) {
    QBoxPlotSeries_BrushChanged((QBoxPlotSeries*)self);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_brush_changed(void* self, void (*slot)(void*)) {
    QBoxPlotSeries_Connect_BrushChanged((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#boxOutlineVisibilityChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_box_outline_visibility_changed(void* self) {
    QBoxPlotSeries_BoxOutlineVisibilityChanged((QBoxPlotSeries*)self);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_box_outline_visibility_changed(void* self, void (*slot)(void*)) {
    QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#boxWidthChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_box_width_changed(void* self) {
    QBoxPlotSeries_BoxWidthChanged((QBoxPlotSeries*)self);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*) ```
void q_boxplotseries_on_box_width_changed(void* self, void (*slot)(void*)) {
    QBoxPlotSeries_Connect_BoxWidthChanged((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#boxsetsAdded)
///
/// ``` QBoxPlotSeries* self, QBoxSet* sets[] ```
void q_boxplotseries_boxsets_added(void* self, void* sets[]) {
    QBoxSet** sets_arr = (QBoxSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBoxSet*)sets},
    };
    QBoxPlotSeries_BoxsetsAdded((QBoxPlotSeries*)self, sets_list);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*[]) ```
void q_boxplotseries_on_boxsets_added(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_Connect_BoxsetsAdded((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qboxplotseries.html#boxsetsRemoved)
///
/// ``` QBoxPlotSeries* self, QBoxSet* sets[] ```
void q_boxplotseries_boxsets_removed(void* self, void* sets[]) {
    QBoxSet** sets_arr = (QBoxSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBoxSet*)sets},
    };
    QBoxPlotSeries_BoxsetsRemoved((QBoxPlotSeries*)self, sets_list);
}

/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QBoxSet*[]) ```
void q_boxplotseries_on_boxsets_removed(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_Connect_BoxsetsRemoved((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_boxplotseries_tr2(const char* s, const char* c) {
    libqt_string _str = QBoxPlotSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_boxplotseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QBoxPlotSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QBoxPlotSeries* self, const char* name ```
void q_boxplotseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QBoxPlotSeries* self ```
const char* q_boxplotseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QBoxPlotSeries* self ```
double q_boxplotseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QBoxPlotSeries* self, double opacity ```
void q_boxplotseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QBoxPlotSeries* self ```
QChart* q_boxplotseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QBoxPlotSeries* self, QAbstractAxis* axis ```
bool q_boxplotseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QBoxPlotSeries* self, QAbstractAxis* axis ```
bool q_boxplotseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QBoxPlotSeries* self ```
libqt_list /* of QAbstractAxis* */ q_boxplotseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QBoxPlotSeries* self, void (*slot)(QAbstractSeries*) ```
void q_boxplotseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QBoxPlotSeries* self, bool visible ```
void q_boxplotseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QBoxPlotSeries* self, bool enable ```
void q_boxplotseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBoxPlotSeries* self ```
const char* q_boxplotseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBoxPlotSeries* self, const char* name ```
void q_boxplotseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBoxPlotSeries* self ```
bool q_boxplotseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBoxPlotSeries* self, bool b ```
bool q_boxplotseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBoxPlotSeries* self ```
QThread* q_boxplotseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBoxPlotSeries* self, QThread* thread ```
void q_boxplotseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotSeries* self, int interval ```
int32_t q_boxplotseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBoxPlotSeries* self, int id ```
void q_boxplotseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBoxPlotSeries* self ```
libqt_list /* of QObject* */ q_boxplotseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBoxPlotSeries* self, QObject* parent ```
void q_boxplotseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBoxPlotSeries* self, QObject* filterObj ```
void q_boxplotseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBoxPlotSeries* self, QObject* obj ```
void q_boxplotseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_boxplotseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_boxplotseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_boxplotseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_boxplotseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBoxPlotSeries* self, const char* name, QVariant* value ```
bool q_boxplotseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBoxPlotSeries* self, const char* name ```
QVariant* q_boxplotseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBoxPlotSeries* self ```
const char** q_boxplotseries_dynamic_property_names(void* self) {
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
/// ``` QBoxPlotSeries* self ```
QBindingStorage* q_boxplotseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxPlotSeries* self ```
QBindingStorage* q_boxplotseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QBoxPlotSeries* self, void (*slot)(QObject*) ```
void q_boxplotseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBoxPlotSeries* self ```
QObject* q_boxplotseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBoxPlotSeries* self, const char* classname ```
bool q_boxplotseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxPlotSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_boxplotseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxPlotSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxplotseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxPlotSeries* self, QObject* param1 ```
void q_boxplotseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QBoxPlotSeries* self, void (*slot)(QObject*, QObject*) ```
void q_boxplotseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
bool q_boxplotseries_event(void* self, void* event) {
    return QBoxPlotSeries_Event((QBoxPlotSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
bool q_boxplotseries_qbase_event(void* self, void* event) {
    return QBoxPlotSeries_QBaseEvent((QBoxPlotSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, bool (*slot)(QBoxPlotSeries*, QEvent*) ```
void q_boxplotseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QBoxPlotSeries_OnEvent((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QObject* watched, QEvent* event ```
bool q_boxplotseries_event_filter(void* self, void* watched, void* event) {
    return QBoxPlotSeries_EventFilter((QBoxPlotSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QObject* watched, QEvent* event ```
bool q_boxplotseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QBoxPlotSeries_QBaseEventFilter((QBoxPlotSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, bool (*slot)(QBoxPlotSeries*, QObject*, QEvent*) ```
void q_boxplotseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QBoxPlotSeries_OnEventFilter((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QTimerEvent* event ```
void q_boxplotseries_timer_event(void* self, void* event) {
    QBoxPlotSeries_TimerEvent((QBoxPlotSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QTimerEvent* event ```
void q_boxplotseries_qbase_timer_event(void* self, void* event) {
    QBoxPlotSeries_QBaseTimerEvent((QBoxPlotSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QTimerEvent*) ```
void q_boxplotseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_OnTimerEvent((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QChildEvent* event ```
void q_boxplotseries_child_event(void* self, void* event) {
    QBoxPlotSeries_ChildEvent((QBoxPlotSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QChildEvent* event ```
void q_boxplotseries_qbase_child_event(void* self, void* event) {
    QBoxPlotSeries_QBaseChildEvent((QBoxPlotSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QChildEvent*) ```
void q_boxplotseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_OnChildEvent((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
void q_boxplotseries_custom_event(void* self, void* event) {
    QBoxPlotSeries_CustomEvent((QBoxPlotSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QEvent* event ```
void q_boxplotseries_qbase_custom_event(void* self, void* event) {
    QBoxPlotSeries_QBaseCustomEvent((QBoxPlotSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QEvent*) ```
void q_boxplotseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_OnCustomEvent((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_connect_notify(void* self, void* signal) {
    QBoxPlotSeries_ConnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_qbase_connect_notify(void* self, void* signal) {
    QBoxPlotSeries_QBaseConnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QMetaMethod*) ```
void q_boxplotseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_OnConnectNotify((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_disconnect_notify(void* self, void* signal) {
    QBoxPlotSeries_DisconnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
void q_boxplotseries_qbase_disconnect_notify(void* self, void* signal) {
    QBoxPlotSeries_QBaseDisconnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, void (*slot)(QBoxPlotSeries*, QMetaMethod*) ```
void q_boxplotseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QBoxPlotSeries_OnDisconnectNotify((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
QObject* q_boxplotseries_sender(void* self) {
    return QBoxPlotSeries_Sender((QBoxPlotSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
QObject* q_boxplotseries_qbase_sender(void* self) {
    return QBoxPlotSeries_QBaseSender((QBoxPlotSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QObject* (*slot)() ```
void q_boxplotseries_on_sender(void* self, QObject* (*slot)()) {
    QBoxPlotSeries_OnSender((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
int32_t q_boxplotseries_sender_signal_index(void* self) {
    return QBoxPlotSeries_SenderSignalIndex((QBoxPlotSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self ```
int32_t q_boxplotseries_qbase_sender_signal_index(void* self) {
    return QBoxPlotSeries_QBaseSenderSignalIndex((QBoxPlotSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, int32_t (*slot)() ```
void q_boxplotseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QBoxPlotSeries_OnSenderSignalIndex((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, const char* signal ```
int32_t q_boxplotseries_receivers(void* self, const char* signal) {
    return QBoxPlotSeries_Receivers((QBoxPlotSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, const char* signal ```
int32_t q_boxplotseries_qbase_receivers(void* self, const char* signal) {
    return QBoxPlotSeries_QBaseReceivers((QBoxPlotSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, int32_t (*slot)(QBoxPlotSeries*, const char*) ```
void q_boxplotseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QBoxPlotSeries_OnReceivers((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
bool q_boxplotseries_is_signal_connected(void* self, void* signal) {
    return QBoxPlotSeries_IsSignalConnected((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, QMetaMethod* signal ```
bool q_boxplotseries_qbase_is_signal_connected(void* self, void* signal) {
    return QBoxPlotSeries_QBaseIsSignalConnected((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxPlotSeries* self, bool (*slot)(QBoxPlotSeries*, QMetaMethod*) ```
void q_boxplotseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QBoxPlotSeries_OnIsSignalConnected((QBoxPlotSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QBoxPlotSeries* self ```
void q_boxplotseries_delete(void* self) {
    QBoxPlotSeries_Delete((QBoxPlotSeries*)(self));
}