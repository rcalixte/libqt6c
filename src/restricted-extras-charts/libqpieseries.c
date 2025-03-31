#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "libqpieslice.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqpieseries.hpp"
#include "libqpieseries.h"

/// https://doc.qt.io/qt-6/qpieseries.html

/// q_pieseries_new constructs a new QPieSeries object.
///
///
QPieSeries* q_pieseries_new() {
    return QPieSeries_new();
}

/// q_pieseries_new2 constructs a new QPieSeries object.
///
/// ``` QObject* parent ```
QPieSeries* q_pieseries_new2(void* parent) {
    return QPieSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPieSeries* self ```
QMetaObject* q_pieseries_meta_object(void* self) {
    return QPieSeries_MetaObject((QPieSeries*)self);
}

/// ``` QPieSeries* self, const char* param1 ```
void* q_pieseries_metacast(void* self, const char* param1) {
    return QPieSeries_Metacast((QPieSeries*)self, param1);
}

/// ``` QPieSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pieseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieSeries_Metacall((QPieSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPieSeries* self, int32_t (*slot)(QPieSeries*, enum QMetaObject__Call, int, void*) ```
void q_pieseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPieSeries_OnMetacall((QPieSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPieSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pieseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieSeries_QBaseMetacall((QPieSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pieseries_tr(const char* s) {
    libqt_string _str = QPieSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#type)
///
/// ``` QPieSeries* self ```
int64_t q_pieseries_type(void* self) {
    return QPieSeries_Type((QPieSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPieSeries* self, int64_t (*slot)() ```
void q_pieseries_on_type(void* self, int64_t (*slot)()) {
    QPieSeries_OnType((QPieSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPieSeries* self ```
int64_t q_pieseries_qbase_type(void* self) {
    return QPieSeries_QBaseType((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#append)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
bool q_pieseries_append(void* self, void* slice) {
    return QPieSeries_Append((QPieSeries*)self, (QPieSlice*)slice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#append)
///
/// ``` QPieSeries* self, QPieSlice* slices[] ```
bool q_pieseries_append_with_slices(void* self, void* slices[]) {
    QPieSlice** slices_arr = (QPieSlice**)slices;
    size_t slices_len = 0;
    while (slices_arr[slices_len] != NULL) {
        slices_len++;
    }
    libqt_list slices_list = {
        .len = slices_len,
        .data = {(QPieSlice*)slices},
    };
    return QPieSeries_AppendWithSlices((QPieSeries*)self, slices_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#operator<<)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
QPieSeries* q_pieseries_operator_shift_left(void* self, void* slice) {
    return QPieSeries_OperatorShiftLeft((QPieSeries*)self, (QPieSlice*)slice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#append)
///
/// ``` QPieSeries* self, const char* label, double value ```
QPieSlice* q_pieseries_append2(void* self, const char* label, double value) {
    return QPieSeries_Append2((QPieSeries*)self, qstring(label), value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#insert)
///
/// ``` QPieSeries* self, int index, QPieSlice* slice ```
bool q_pieseries_insert(void* self, int index, void* slice) {
    return QPieSeries_Insert((QPieSeries*)self, index, (QPieSlice*)slice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#remove)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
bool q_pieseries_remove(void* self, void* slice) {
    return QPieSeries_Remove((QPieSeries*)self, (QPieSlice*)slice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#take)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
bool q_pieseries_take(void* self, void* slice) {
    return QPieSeries_Take((QPieSeries*)self, (QPieSlice*)slice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#clear)
///
/// ``` QPieSeries* self ```
void q_pieseries_clear(void* self) {
    QPieSeries_Clear((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#slices)
///
/// ``` QPieSeries* self ```
libqt_list /* of QPieSlice* */ q_pieseries_slices(void* self) {
    libqt_list _arr = QPieSeries_Slices((QPieSeries*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#count)
///
/// ``` QPieSeries* self ```
int32_t q_pieseries_count(void* self) {
    return QPieSeries_Count((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#isEmpty)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_empty(void* self) {
    return QPieSeries_IsEmpty((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#sum)
///
/// ``` QPieSeries* self ```
double q_pieseries_sum(void* self) {
    return QPieSeries_Sum((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setHoleSize)
///
/// ``` QPieSeries* self, double holeSize ```
void q_pieseries_set_hole_size(void* self, double holeSize) {
    QPieSeries_SetHoleSize((QPieSeries*)self, holeSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#holeSize)
///
/// ``` QPieSeries* self ```
double q_pieseries_hole_size(void* self) {
    return QPieSeries_HoleSize((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setHorizontalPosition)
///
/// ``` QPieSeries* self, double relativePosition ```
void q_pieseries_set_horizontal_position(void* self, double relativePosition) {
    QPieSeries_SetHorizontalPosition((QPieSeries*)self, relativePosition);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#horizontalPosition)
///
/// ``` QPieSeries* self ```
double q_pieseries_horizontal_position(void* self) {
    return QPieSeries_HorizontalPosition((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setVerticalPosition)
///
/// ``` QPieSeries* self, double relativePosition ```
void q_pieseries_set_vertical_position(void* self, double relativePosition) {
    QPieSeries_SetVerticalPosition((QPieSeries*)self, relativePosition);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#verticalPosition)
///
/// ``` QPieSeries* self ```
double q_pieseries_vertical_position(void* self) {
    return QPieSeries_VerticalPosition((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setPieSize)
///
/// ``` QPieSeries* self, double relativeSize ```
void q_pieseries_set_pie_size(void* self, double relativeSize) {
    QPieSeries_SetPieSize((QPieSeries*)self, relativeSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#pieSize)
///
/// ``` QPieSeries* self ```
double q_pieseries_pie_size(void* self) {
    return QPieSeries_PieSize((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setPieStartAngle)
///
/// ``` QPieSeries* self, double startAngle ```
void q_pieseries_set_pie_start_angle(void* self, double startAngle) {
    QPieSeries_SetPieStartAngle((QPieSeries*)self, startAngle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#pieStartAngle)
///
/// ``` QPieSeries* self ```
double q_pieseries_pie_start_angle(void* self) {
    return QPieSeries_PieStartAngle((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setPieEndAngle)
///
/// ``` QPieSeries* self, double endAngle ```
void q_pieseries_set_pie_end_angle(void* self, double endAngle) {
    QPieSeries_SetPieEndAngle((QPieSeries*)self, endAngle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#pieEndAngle)
///
/// ``` QPieSeries* self ```
double q_pieseries_pie_end_angle(void* self) {
    return QPieSeries_PieEndAngle((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setLabelsVisible)
///
/// ``` QPieSeries* self ```
void q_pieseries_set_labels_visible(void* self) {
    QPieSeries_SetLabelsVisible((QPieSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setLabelsPosition)
///
/// ``` QPieSeries* self, enum QPieSlice__LabelPosition position ```
void q_pieseries_set_labels_position(void* self, int64_t position) {
    QPieSeries_SetLabelsPosition((QPieSeries*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#added)
///
/// ``` QPieSeries* self, QPieSlice* slices[] ```
void q_pieseries_added(void* self, void* slices[]) {
    QPieSlice** slices_arr = (QPieSlice**)slices;
    size_t slices_len = 0;
    while (slices_arr[slices_len] != NULL) {
        slices_len++;
    }
    libqt_list slices_list = {
        .len = slices_len,
        .data = {(QPieSlice*)slices},
    };
    QPieSeries_Added((QPieSeries*)self, slices_list);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*[]) ```
void q_pieseries_on_added(void* self, void (*slot)(void*, void*)) {
    QPieSeries_Connect_Added((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#removed)
///
/// ``` QPieSeries* self, QPieSlice* slices[] ```
void q_pieseries_removed(void* self, void* slices[]) {
    QPieSlice** slices_arr = (QPieSlice**)slices;
    size_t slices_len = 0;
    while (slices_arr[slices_len] != NULL) {
        slices_len++;
    }
    libqt_list slices_list = {
        .len = slices_len,
        .data = {(QPieSlice*)slices},
    };
    QPieSeries_Removed((QPieSeries*)self, slices_list);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*[]) ```
void q_pieseries_on_removed(void* self, void (*slot)(void*, void*)) {
    QPieSeries_Connect_Removed((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#clicked)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_clicked(void* self, void* slice) {
    QPieSeries_Clicked((QPieSeries*)self, (QPieSlice*)slice);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QPieSeries_Connect_Clicked((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#hovered)
///
/// ``` QPieSeries* self, QPieSlice* slice, bool state ```
void q_pieseries_hovered(void* self, void* slice, bool state) {
    QPieSeries_Hovered((QPieSeries*)self, (QPieSlice*)slice, state);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*, bool) ```
void q_pieseries_on_hovered(void* self, void (*slot)(void*, void*, bool)) {
    QPieSeries_Connect_Hovered((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#pressed)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_pressed(void* self, void* slice) {
    QPieSeries_Pressed((QPieSeries*)self, (QPieSlice*)slice);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QPieSeries_Connect_Pressed((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#released)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_released(void* self, void* slice) {
    QPieSeries_Released((QPieSeries*)self, (QPieSlice*)slice);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_released(void* self, void (*slot)(void*, void*)) {
    QPieSeries_Connect_Released((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#doubleClicked)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_double_clicked(void* self, void* slice) {
    QPieSeries_DoubleClicked((QPieSeries*)self, (QPieSlice*)slice);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QPieSeries_Connect_DoubleClicked((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#countChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_count_changed(void* self) {
    QPieSeries_CountChanged((QPieSeries*)self);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*) ```
void q_pieseries_on_count_changed(void* self, void (*slot)(void*)) {
    QPieSeries_Connect_CountChanged((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#sumChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_sum_changed(void* self) {
    QPieSeries_SumChanged((QPieSeries*)self);
}

/// ``` QPieSeries* self, void (*slot)(QPieSeries*) ```
void q_pieseries_on_sum_changed(void* self, void (*slot)(void*)) {
    QPieSeries_Connect_SumChanged((QPieSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pieseries_tr2(const char* s, const char* c) {
    libqt_string _str = QPieSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pieseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPieSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries.html#setLabelsVisible)
///
/// ``` QPieSeries* self, bool visible ```
void q_pieseries_set_labels_visible1(void* self, bool visible) {
    QPieSeries_SetLabelsVisible1((QPieSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QPieSeries* self, const char* name ```
void q_pieseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QPieSeries* self ```
const char* q_pieseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPieSeries* self ```
void q_pieseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QPieSeries* self ```
double q_pieseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QPieSeries* self, double opacity ```
void q_pieseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPieSeries* self ```
void q_pieseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QPieSeries* self ```
bool q_pieseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QPieSeries* self ```
QChart* q_pieseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QPieSeries* self, QAbstractAxis* axis ```
bool q_pieseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QPieSeries* self, QAbstractAxis* axis ```
bool q_pieseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QPieSeries* self ```
libqt_list /* of QAbstractAxis* */ q_pieseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QPieSeries* self ```
void q_pieseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QPieSeries* self ```
void q_pieseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPieSeries* self, bool visible ```
void q_pieseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPieSeries* self, bool enable ```
void q_pieseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPieSeries* self ```
const char* q_pieseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPieSeries* self, const char* name ```
void q_pieseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPieSeries* self ```
bool q_pieseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPieSeries* self, bool b ```
bool q_pieseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPieSeries* self ```
QThread* q_pieseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPieSeries* self, QThread* thread ```
void q_pieseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieSeries* self, int interval ```
int32_t q_pieseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPieSeries* self, int id ```
void q_pieseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPieSeries* self ```
libqt_list /* of QObject* */ q_pieseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPieSeries* self, QObject* parent ```
void q_pieseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPieSeries* self, QObject* filterObj ```
void q_pieseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPieSeries* self, QObject* obj ```
void q_pieseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pieseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pieseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pieseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pieseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPieSeries* self ```
void q_pieseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPieSeries* self ```
void q_pieseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPieSeries* self, const char* name, QVariant* value ```
bool q_pieseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPieSeries* self, const char* name ```
QVariant* q_pieseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPieSeries* self ```
const char** q_pieseries_dynamic_property_names(void* self) {
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
/// ``` QPieSeries* self ```
QBindingStorage* q_pieseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieSeries* self ```
QBindingStorage* q_pieseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSeries* self ```
void q_pieseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPieSeries* self, void (*slot)(QObject*) ```
void q_pieseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPieSeries* self ```
QObject* q_pieseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPieSeries* self, const char* classname ```
bool q_pieseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPieSeries* self ```
void q_pieseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pieseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pieseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pieseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSeries* self, QObject* param1 ```
void q_pieseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPieSeries* self, void (*slot)(QObject*, QObject*) ```
void q_pieseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
bool q_pieseries_event(void* self, void* event) {
    return QPieSeries_Event((QPieSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
bool q_pieseries_qbase_event(void* self, void* event) {
    return QPieSeries_QBaseEvent((QPieSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, bool (*slot)(QPieSeries*, QEvent*) ```
void q_pieseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QPieSeries_OnEvent((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QObject* watched, QEvent* event ```
bool q_pieseries_event_filter(void* self, void* watched, void* event) {
    return QPieSeries_EventFilter((QPieSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QObject* watched, QEvent* event ```
bool q_pieseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QPieSeries_QBaseEventFilter((QPieSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, bool (*slot)(QPieSeries*, QObject*, QEvent*) ```
void q_pieseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPieSeries_OnEventFilter((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QTimerEvent* event ```
void q_pieseries_timer_event(void* self, void* event) {
    QPieSeries_TimerEvent((QPieSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QTimerEvent* event ```
void q_pieseries_qbase_timer_event(void* self, void* event) {
    QPieSeries_QBaseTimerEvent((QPieSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QTimerEvent*) ```
void q_pieseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPieSeries_OnTimerEvent((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QChildEvent* event ```
void q_pieseries_child_event(void* self, void* event) {
    QPieSeries_ChildEvent((QPieSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QChildEvent* event ```
void q_pieseries_qbase_child_event(void* self, void* event) {
    QPieSeries_QBaseChildEvent((QPieSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QChildEvent*) ```
void q_pieseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPieSeries_OnChildEvent((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
void q_pieseries_custom_event(void* self, void* event) {
    QPieSeries_CustomEvent((QPieSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
void q_pieseries_qbase_custom_event(void* self, void* event) {
    QPieSeries_QBaseCustomEvent((QPieSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QEvent*) ```
void q_pieseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPieSeries_OnCustomEvent((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_connect_notify(void* self, void* signal) {
    QPieSeries_ConnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_qbase_connect_notify(void* self, void* signal) {
    QPieSeries_QBaseConnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QMetaMethod*) ```
void q_pieseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPieSeries_OnConnectNotify((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_disconnect_notify(void* self, void* signal) {
    QPieSeries_DisconnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_qbase_disconnect_notify(void* self, void* signal) {
    QPieSeries_QBaseDisconnectNotify((QPieSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QMetaMethod*) ```
void q_pieseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPieSeries_OnDisconnectNotify((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self ```
QObject* q_pieseries_sender(void* self) {
    return QPieSeries_Sender((QPieSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self ```
QObject* q_pieseries_qbase_sender(void* self) {
    return QPieSeries_QBaseSender((QPieSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, QObject* (*slot)() ```
void q_pieseries_on_sender(void* self, QObject* (*slot)()) {
    QPieSeries_OnSender((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self ```
int32_t q_pieseries_sender_signal_index(void* self) {
    return QPieSeries_SenderSignalIndex((QPieSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self ```
int32_t q_pieseries_qbase_sender_signal_index(void* self) {
    return QPieSeries_QBaseSenderSignalIndex((QPieSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, int32_t (*slot)() ```
void q_pieseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPieSeries_OnSenderSignalIndex((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, const char* signal ```
int32_t q_pieseries_receivers(void* self, const char* signal) {
    return QPieSeries_Receivers((QPieSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, const char* signal ```
int32_t q_pieseries_qbase_receivers(void* self, const char* signal) {
    return QPieSeries_QBaseReceivers((QPieSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, int32_t (*slot)(QPieSeries*, const char*) ```
void q_pieseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPieSeries_OnReceivers((QPieSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
bool q_pieseries_is_signal_connected(void* self, void* signal) {
    return QPieSeries_IsSignalConnected((QPieSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
bool q_pieseries_qbase_is_signal_connected(void* self, void* signal) {
    return QPieSeries_QBaseIsSignalConnected((QPieSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, bool (*slot)(QPieSeries*, QMetaMethod*) ```
void q_pieseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPieSeries_OnIsSignalConnected((QPieSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPieSeries* self ```
void q_pieseries_delete(void* self) {
    QPieSeries_Delete((QPieSeries*)(self));
}